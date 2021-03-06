// automatically generated, do not modify

package mbtool.daemon.v3;

import java.nio.*;
import java.lang.*;
import java.util.*;
import com.google.flatbuffers.*;

@SuppressWarnings("unused")
public final class PathChmodRequest extends Table {
  public static PathChmodRequest getRootAsPathChmodRequest(ByteBuffer _bb) { return getRootAsPathChmodRequest(_bb, new PathChmodRequest()); }
  public static PathChmodRequest getRootAsPathChmodRequest(ByteBuffer _bb, PathChmodRequest obj) { _bb.order(ByteOrder.LITTLE_ENDIAN); return (obj.__init(_bb.getInt(_bb.position()) + _bb.position(), _bb)); }
  public PathChmodRequest __init(int _i, ByteBuffer _bb) { bb_pos = _i; bb = _bb; return this; }

  public String path() { int o = __offset(4); return o != 0 ? __string(o + bb_pos) : null; }
  public ByteBuffer pathAsByteBuffer() { return __vector_as_bytebuffer(4, 1); }
  public long mode() { int o = __offset(6); return o != 0 ? (long)bb.getInt(o + bb_pos) & 0xFFFFFFFFL : 0; }

  public static int createPathChmodRequest(FlatBufferBuilder builder,
      int path,
      long mode) {
    builder.startObject(2);
    PathChmodRequest.addMode(builder, mode);
    PathChmodRequest.addPath(builder, path);
    return PathChmodRequest.endPathChmodRequest(builder);
  }

  public static void startPathChmodRequest(FlatBufferBuilder builder) { builder.startObject(2); }
  public static void addPath(FlatBufferBuilder builder, int pathOffset) { builder.addOffset(0, pathOffset, 0); }
  public static void addMode(FlatBufferBuilder builder, long mode) { builder.addInt(1, (int)(mode & 0xFFFFFFFFL), 0); }
  public static int endPathChmodRequest(FlatBufferBuilder builder) {
    int o = builder.endObject();
    return o;
  }
};

