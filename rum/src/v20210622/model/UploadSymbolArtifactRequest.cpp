/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/rum/v20210622/model/UploadSymbolArtifactRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

UploadSymbolArtifactRequest::UploadSymbolArtifactRequest() :
    m_kindHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_sha256HasBeenSet(false),
    m_cOSUrlHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_releaseHasBeenSet(false),
    m_distHasBeenSet(false),
    m_minifiedUrlHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_debugIdHasBeenSet(false),
    m_buildIdHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_oSHasBeenSet(false),
    m_oSVersionHasBeenSet(false),
    m_storePathHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_fileUrlHasBeenSet(false)
{
}

string UploadSymbolArtifactRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_sha256HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sha256";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sha256.c_str(), allocator).Move(), allocator);
    }

    if (m_cOSUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "COSUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cOSUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_releaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Release";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_release.c_str(), allocator).Move(), allocator);
    }

    if (m_distHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dist";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dist.c_str(), allocator).Move(), allocator);
    }

    if (m_minifiedUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinifiedUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_minifiedUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_debugIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DebugId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_debugId.c_str(), allocator).Move(), allocator);
    }

    if (m_buildIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_buildId.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_oSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oS.c_str(), allocator).Move(), allocator);
    }

    if (m_oSVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OSVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oSVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_storePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UploadSymbolArtifactRequest::GetKind() const
{
    return m_kind;
}

void UploadSymbolArtifactRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

int64_t UploadSymbolArtifactRequest::GetFileSize() const
{
    return m_fileSize;
}

void UploadSymbolArtifactRequest::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string UploadSymbolArtifactRequest::GetSha256() const
{
    return m_sha256;
}

void UploadSymbolArtifactRequest::SetSha256(const string& _sha256)
{
    m_sha256 = _sha256;
    m_sha256HasBeenSet = true;
}

bool UploadSymbolArtifactRequest::Sha256HasBeenSet() const
{
    return m_sha256HasBeenSet;
}

string UploadSymbolArtifactRequest::GetCOSUrl() const
{
    return m_cOSUrl;
}

void UploadSymbolArtifactRequest::SetCOSUrl(const string& _cOSUrl)
{
    m_cOSUrl = _cOSUrl;
    m_cOSUrlHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::COSUrlHasBeenSet() const
{
    return m_cOSUrlHasBeenSet;
}

string UploadSymbolArtifactRequest::GetAppId() const
{
    return m_appId;
}

void UploadSymbolArtifactRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string UploadSymbolArtifactRequest::GetProjectId() const
{
    return m_projectId;
}

void UploadSymbolArtifactRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string UploadSymbolArtifactRequest::GetRelease() const
{
    return m_release;
}

void UploadSymbolArtifactRequest::SetRelease(const string& _release)
{
    m_release = _release;
    m_releaseHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::ReleaseHasBeenSet() const
{
    return m_releaseHasBeenSet;
}

string UploadSymbolArtifactRequest::GetDist() const
{
    return m_dist;
}

void UploadSymbolArtifactRequest::SetDist(const string& _dist)
{
    m_dist = _dist;
    m_distHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::DistHasBeenSet() const
{
    return m_distHasBeenSet;
}

string UploadSymbolArtifactRequest::GetMinifiedUrl() const
{
    return m_minifiedUrl;
}

void UploadSymbolArtifactRequest::SetMinifiedUrl(const string& _minifiedUrl)
{
    m_minifiedUrl = _minifiedUrl;
    m_minifiedUrlHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::MinifiedUrlHasBeenSet() const
{
    return m_minifiedUrlHasBeenSet;
}

string UploadSymbolArtifactRequest::GetFileType() const
{
    return m_fileType;
}

void UploadSymbolArtifactRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string UploadSymbolArtifactRequest::GetDebugId() const
{
    return m_debugId;
}

void UploadSymbolArtifactRequest::SetDebugId(const string& _debugId)
{
    m_debugId = _debugId;
    m_debugIdHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::DebugIdHasBeenSet() const
{
    return m_debugIdHasBeenSet;
}

string UploadSymbolArtifactRequest::GetBuildId() const
{
    return m_buildId;
}

void UploadSymbolArtifactRequest::SetBuildId(const string& _buildId)
{
    m_buildId = _buildId;
    m_buildIdHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::BuildIdHasBeenSet() const
{
    return m_buildIdHasBeenSet;
}

string UploadSymbolArtifactRequest::GetAppVersion() const
{
    return m_appVersion;
}

void UploadSymbolArtifactRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string UploadSymbolArtifactRequest::GetPlatform() const
{
    return m_platform;
}

void UploadSymbolArtifactRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string UploadSymbolArtifactRequest::GetOS() const
{
    return m_oS;
}

void UploadSymbolArtifactRequest::SetOS(const string& _oS)
{
    m_oS = _oS;
    m_oSHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::OSHasBeenSet() const
{
    return m_oSHasBeenSet;
}

string UploadSymbolArtifactRequest::GetOSVersion() const
{
    return m_oSVersion;
}

void UploadSymbolArtifactRequest::SetOSVersion(const string& _oSVersion)
{
    m_oSVersion = _oSVersion;
    m_oSVersionHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::OSVersionHasBeenSet() const
{
    return m_oSVersionHasBeenSet;
}

string UploadSymbolArtifactRequest::GetStorePath() const
{
    return m_storePath;
}

void UploadSymbolArtifactRequest::SetStorePath(const string& _storePath)
{
    m_storePath = _storePath;
    m_storePathHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::StorePathHasBeenSet() const
{
    return m_storePathHasBeenSet;
}

string UploadSymbolArtifactRequest::GetFileName() const
{
    return m_fileName;
}

void UploadSymbolArtifactRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string UploadSymbolArtifactRequest::GetContentType() const
{
    return m_contentType;
}

void UploadSymbolArtifactRequest::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string UploadSymbolArtifactRequest::GetFileUrl() const
{
    return m_fileUrl;
}

void UploadSymbolArtifactRequest::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool UploadSymbolArtifactRequest::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}


