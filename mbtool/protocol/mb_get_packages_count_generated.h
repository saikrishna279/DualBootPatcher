// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_MBGETPACKAGESCOUNT_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_MBGETPACKAGESCOUNT_MBTOOL_DAEMON_V3_H_

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
#include "mb_get_booted_rom_id_generated.h"
#include "mb_get_installed_roms_generated.h"
#include "mb_get_version_generated.h"
#include "mb_set_kernel_generated.h"
#include "mb_switch_rom_generated.h"
#include "mb_wipe_rom_generated.h"
#include "path_chmod_generated.h"
#include "path_copy_generated.h"
#include "path_get_directory_size_generated.h"
#include "path_selinux_get_label_generated.h"
#include "path_selinux_set_label_generated.h"

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
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct PathSELinuxGetLabelRequest;
struct PathSELinuxGetLabelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct PathSELinuxSetLabelRequest;
struct PathSELinuxSetLabelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct PathGetDirectorySizeRequest;
struct PathGetDirectorySizeResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbGetVersionRequest;
struct MbGetVersionResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbRom;
struct MbGetInstalledRomsRequest;
struct MbGetInstalledRomsResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbGetBootedRomIdRequest;
struct MbGetBootedRomIdResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbSwitchRomRequest;
struct MbSwitchRomResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbSetKernelRequest;
struct MbSetKernelResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v3 {
struct MbWipeRomRequest;
struct MbWipeRomResponse;
}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

namespace mbtool {
namespace daemon {
namespace v3 {

struct MbGetPackagesCountRequest;
struct MbGetPackagesCountResponse;

struct MbGetPackagesCountRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *rom_id() const { return GetPointer<const flatbuffers::String *>(4); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* rom_id */) &&
           verifier.Verify(rom_id()) &&
           verifier.EndTable();
  }
};

struct MbGetPackagesCountRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_rom_id(flatbuffers::Offset<flatbuffers::String> rom_id) { fbb_.AddOffset(4, rom_id); }
  MbGetPackagesCountRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  MbGetPackagesCountRequestBuilder &operator=(const MbGetPackagesCountRequestBuilder &);
  flatbuffers::Offset<MbGetPackagesCountRequest> Finish() {
    auto o = flatbuffers::Offset<MbGetPackagesCountRequest>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<MbGetPackagesCountRequest> CreateMbGetPackagesCountRequest(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> rom_id = 0) {
  MbGetPackagesCountRequestBuilder builder_(_fbb);
  builder_.add_rom_id(rom_id);
  return builder_.Finish();
}

struct MbGetPackagesCountResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  uint8_t success() const { return GetField<uint8_t>(4, 0); }
  uint32_t system_packages() const { return GetField<uint32_t>(6, 0); }
  uint32_t system_update_packages() const { return GetField<uint32_t>(8, 0); }
  uint32_t non_system_packages() const { return GetField<uint32_t>(10, 0); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, 4 /* success */) &&
           VerifyField<uint32_t>(verifier, 6 /* system_packages */) &&
           VerifyField<uint32_t>(verifier, 8 /* system_update_packages */) &&
           VerifyField<uint32_t>(verifier, 10 /* non_system_packages */) &&
           verifier.EndTable();
  }
};

struct MbGetPackagesCountResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(uint8_t success) { fbb_.AddElement<uint8_t>(4, success, 0); }
  void add_system_packages(uint32_t system_packages) { fbb_.AddElement<uint32_t>(6, system_packages, 0); }
  void add_system_update_packages(uint32_t system_update_packages) { fbb_.AddElement<uint32_t>(8, system_update_packages, 0); }
  void add_non_system_packages(uint32_t non_system_packages) { fbb_.AddElement<uint32_t>(10, non_system_packages, 0); }
  MbGetPackagesCountResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  MbGetPackagesCountResponseBuilder &operator=(const MbGetPackagesCountResponseBuilder &);
  flatbuffers::Offset<MbGetPackagesCountResponse> Finish() {
    auto o = flatbuffers::Offset<MbGetPackagesCountResponse>(fbb_.EndTable(start_, 4));
    return o;
  }
};

inline flatbuffers::Offset<MbGetPackagesCountResponse> CreateMbGetPackagesCountResponse(flatbuffers::FlatBufferBuilder &_fbb,
   uint8_t success = 0,
   uint32_t system_packages = 0,
   uint32_t system_update_packages = 0,
   uint32_t non_system_packages = 0) {
  MbGetPackagesCountResponseBuilder builder_(_fbb);
  builder_.add_non_system_packages(non_system_packages);
  builder_.add_system_update_packages(system_update_packages);
  builder_.add_system_packages(system_packages);
  builder_.add_success(success);
  return builder_.Finish();
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_MBGETPACKAGESCOUNT_MBTOOL_DAEMON_V3_H_
