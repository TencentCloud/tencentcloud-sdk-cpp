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

#include <tencentcloud/rum/v20210622/model/DescribeSymbolArtifactUploadCredentialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeSymbolArtifactUploadCredentialRequest::DescribeSymbolArtifactUploadCredentialRequest() :
    m_kindHasBeenSet(false),
    m_fileNameHasBeenSet(false),
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
    m_contentTypeHasBeenSet(false)
{
}

string DescribeSymbolArtifactUploadCredentialRequest::ToJsonString() const
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

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
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

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSymbolArtifactUploadCredentialRequest::GetKind() const
{
    return m_kind;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetFileName() const
{
    return m_fileName;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetAppId() const
{
    return m_appId;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetRelease() const
{
    return m_release;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetRelease(const string& _release)
{
    m_release = _release;
    m_releaseHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::ReleaseHasBeenSet() const
{
    return m_releaseHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetDist() const
{
    return m_dist;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetDist(const string& _dist)
{
    m_dist = _dist;
    m_distHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::DistHasBeenSet() const
{
    return m_distHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetMinifiedUrl() const
{
    return m_minifiedUrl;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetMinifiedUrl(const string& _minifiedUrl)
{
    m_minifiedUrl = _minifiedUrl;
    m_minifiedUrlHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::MinifiedUrlHasBeenSet() const
{
    return m_minifiedUrlHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetFileType() const
{
    return m_fileType;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetDebugId() const
{
    return m_debugId;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetDebugId(const string& _debugId)
{
    m_debugId = _debugId;
    m_debugIdHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::DebugIdHasBeenSet() const
{
    return m_debugIdHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetBuildId() const
{
    return m_buildId;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetBuildId(const string& _buildId)
{
    m_buildId = _buildId;
    m_buildIdHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::BuildIdHasBeenSet() const
{
    return m_buildIdHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetAppVersion() const
{
    return m_appVersion;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetOS() const
{
    return m_oS;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetOS(const string& _oS)
{
    m_oS = _oS;
    m_oSHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::OSHasBeenSet() const
{
    return m_oSHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetOSVersion() const
{
    return m_oSVersion;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetOSVersion(const string& _oSVersion)
{
    m_oSVersion = _oSVersion;
    m_oSVersionHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::OSVersionHasBeenSet() const
{
    return m_oSVersionHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetStorePath() const
{
    return m_storePath;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetStorePath(const string& _storePath)
{
    m_storePath = _storePath;
    m_storePathHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::StorePathHasBeenSet() const
{
    return m_storePathHasBeenSet;
}

string DescribeSymbolArtifactUploadCredentialRequest::GetContentType() const
{
    return m_contentType;
}

void DescribeSymbolArtifactUploadCredentialRequest::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool DescribeSymbolArtifactUploadCredentialRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}


