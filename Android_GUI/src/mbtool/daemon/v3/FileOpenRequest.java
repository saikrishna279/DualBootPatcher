// automatically generated, do not modify

package mbtool.daemon.v3;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class FileOpenRequest extends Table {
  public static FileOpenRequest getRootAsFileOpenRequest(ByteBuffer _bb) { return getRootAsFileOpenRequest(_bb, new FileOpenRequest()); }
  public static FileOpenRequest getRootAsFileOpenRequest(ByteBuffer _bb, FileOpenRequest obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__init(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public FileOpenRequest __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; return this; }

  public String path() { int o = __offset(4); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer pathAsByteBuffer() { return __vector_as_bytebuffer(4, 1); }
  public short flags(int j) { int o = __offset(6); return o != 0 ? bb.getShort(__vector(o) + j * 2) : 0; }
  public int flagsLength() { int o = __offset(6); return o != 0 ? __vector_len(o) : 0; }
  public ByteBuffer flagsAsByteBuffer() { return __vector_as_bytebuffer(6, 2); }
  public long perms() { int o = __offset(8); return o != 0 ? (long)bb.getInt(o + bb_pos) & 0xFFFFFFFFL : 0; }

  public static int createFileOpenRequest(FlatBufferBuilder builder,
      int path,
      int flags,
      long perms) {
    builder.startObject(3);
    FileOpenRequest.addPerms(builder, perms);
    FileOpenRequest.addFlags(builder, flags);
    FileOpenRequest.addPath(builder, path);
    return FileOpenRequest.endFileOpenRequest(builder);
  }

  public static void startFileOpenRequest(FlatBufferBuilder builder) { builder.startObject(3); }
  public static void addPath(FlatBufferBuilder builder, int pathOffset) { builder.addOffset(0, pathOffset, 0); }
  public static void addFlags(FlatBufferBuilder builder, int flagsOffset) { builder.addOffset(1, flagsOffset, 0); }
  public static int createFlagsVector(FlatBufferBuilder builder, short[] data) { builder.startVector(2, data.length, 2); for (int i = data.length - 1; i >= 0; i--) builder.addShort(data[i]); return builder.endVector(); }
  public static void startFlagsVector(FlatBufferBuilder builder, int numElems) { builder.startVector(2, numElems, 2); }
  public static void addPerms(FlatBufferBuilder builder, long perms) { builder.addInt(2, (int)(perms & 0xFFFFFFFFL), 0); }
  public static int endFileOpenRequest(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
};

