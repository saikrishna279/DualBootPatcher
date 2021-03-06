// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_PATHCOPY_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_PATHCOPY_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

#include "file_chmod_generated.h"
#include "file_close_generated.h"
#include "file_open_generated.h"
#include "file_read_generated.h"
#include "file_seek_generated.h"
#include "file_selinux_get_label_generated.h"
#include "file_selinux_set_label_generated.h"
#include "file_stat_generated.h"
#include "file_write_generated.h"
#include "path_chmod_generated.h"

namespace mbtool {
namespace daemon {
namespace v3 {
struct FileChmodRequest;
struct FileChmodResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileCloseRequest;
struct FileCloseResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileOpenRequest;
struct FileOpenResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileReadRequest;
struct FileReadResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileSeekRequest;
struct FileSeekResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct StructStat;
struct FileStatRequest;
struct FileStatResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileWriteRequest;
struct FileWriteResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileSELinuxGetLabelRequest;
struct FileSELinuxGetLabelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct FileSELinuxSetLabelRequest;
struct FileSELinuxSetLabelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct PathChmodRequest;
struct PathChmodResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

namespace mbtool {
namespace daemon {
namespace v3 {

struct PathCopyRequest;
struct PathCopyResponse;

struct PathCopyRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *source() const { return GetPointer<const flatbuffers::String *>(4); }
  const flatbuffers::String *target() const { return GetPointer<const flatbuffers::String *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* source */) &&
           verifier.Verify(source()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* target */) &&
           verifier.Verify(target()) &&
           verifier.EndTable();
  }
};

struct PathCopyRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_source(flatbuffers::Offset<flatbuffers::String> source) { fbb_.AddOffset(4, source); }
  void add_target(flatbuffers::Offset<flatbuffers::String> target) { fbb_.AddOffset(6, target); }
  PathCopyRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PathCopyRequestBuilder &operator=(const PathCopyRequestBuilder &);
  flatbuffers::Offset<PathCopyRequest> Finish() {
    auto o = flatbuffers::Offset<PathCopyRequest>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<PathCopyRequest> CreatePathCopyRequest(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> source = 0,
   flatbuffers::Offset<flatbuffers::String> target = 0) {
  PathCopyRequestBuilder builder_(_fbb);
  builder_.add_target(target);
  builder_.add_source(source);
  return builder_.Finish();
}

struct PathCopyResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  uint8_t success() const { return GetField<uint8_t>(4, 0); }
  const flatbuffers::String *error_msg() const { return GetPointer<const flatbuffers::String *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, 4 /* success */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* error_msg */) &&
           verifier.Verify(error_msg()) &&
           verifier.EndTable();
  }
};

struct PathCopyResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(uint8_t success) { fbb_.AddElement<uint8_t>(4, success, 0); }
  void add_error_msg(flatbuffers::Offset<flatbuffers::String> error_msg) { fbb_.AddOffset(6, error_msg); }
  PathCopyResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PathCopyResponseBuilder &operator=(const PathCopyResponseBuilder &);
  flatbuffers::Offset<PathCopyResponse> Finish() {
    auto o = flatbuffers::Offset<PathCopyResponse>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<PathCopyResponse> CreatePathCopyResponse(flatbuffers::FlatBufferBuilder &_fbb,
   uint8_t success = 0,
   flatbuffers::Offset<flatbuffers::String> error_msg = 0) {
  PathCopyResponseBuilder builder_(_fbb);
  builder_.add_error_msg(error_msg);
  builder_.add_success(success);
  return builder_.Finish();
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_PATHCOPY_MBTOOL_DAEMON_V3_H_
