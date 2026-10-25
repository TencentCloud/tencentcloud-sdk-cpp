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

#include <tencentcloud/rum/v20210622/model/DescribeSymbolArtifactsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeSymbolArtifactsRequest::DescribeSymbolArtifactsRequest() :
    m_kindHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_releaseHasBeenSet(false),
    m_distHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_oSHasBeenSet(false),
    m_oSVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_cursorHasBeenSet(false)
{
}

string DescribeSymbolArtifactsRequest::ToJsonString() const
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

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_cursorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cursor";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cursor.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSymbolArtifactsRequest::GetKind() const
{
    return m_kind;
}

void DescribeSymbolArtifactsRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DescribeSymbolArtifactsRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string DescribeSymbolArtifactsRequest::GetAppId() const
{
    return m_appId;
}

void DescribeSymbolArtifactsRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DescribeSymbolArtifactsRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DescribeSymbolArtifactsRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeSymbolArtifactsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeSymbolArtifactsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeSymbolArtifactsRequest::GetRelease() const
{
    return m_release;
}

void DescribeSymbolArtifactsRequest::SetRelease(const string& _release)
{
    m_release = _release;
    m_releaseHasBeenSet = true;
}

bool DescribeSymbolArtifactsRequest::ReleaseHasBeenSet() const
{
    return m_releaseHasBeenSet;
}

string DescribeSymbolArtifactsRequest::GetDist() const
{
    return m_dist;
}

void DescribeSymbolArtifactsRequest::SetDist(const string& _dist)
{
    m_dist = _dist;
    m_distHasBeenSet = true;
}

bool DescribeSymbolArtifactsRequest::DistHasBeenSet() const
{
    return m_distHasBeenSet;
}

string DescribeSymbolArtifactsRequest::GetFileType() const
{
    return m_fileType;
}

void DescribeSymbolArtifactsRequest::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool DescribeSymbolArtifactsRequest::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string DescribeSymbolArtifactsRequest::GetAppVersion() const
{
    return m_appVersion;
}

void DescribeSymbolArtifactsRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool DescribeSymbolArtifactsRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string DescribeSymbolArtifactsRequest::GetPlatform() const
{
    return m_platform;
}

void DescribeSymbolArtifactsRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DescribeSymbolArtifactsRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeSymbolArtifactsRequest::GetOS() const
{
    return m_oS;
}

void DescribeSymbolArtifactsRequest::SetOS(const string& _oS)
{
    m_oS = _oS;
    m_oSHasBeenSet = true;
}

bool DescribeSymbolArtifactsRequest::OSHasBeenSet() const
{
    return m_oSHasBeenSet;
}

string DescribeSymbolArtifactsRequest::GetOSVersion() const
{
    return m_oSVersion;
}

void DescribeSymbolArtifactsRequest::SetOSVersion(const string& _oSVersion)
{
    m_oSVersion = _oSVersion;
    m_oSVersionHasBeenSet = true;
}

bool DescribeSymbolArtifactsRequest::OSVersionHasBeenSet() const
{
    return m_oSVersionHasBeenSet;
}

string DescribeSymbolArtifactsRequest::GetStatus() const
{
    return m_status;
}

void DescribeSymbolArtifactsRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeSymbolArtifactsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeSymbolArtifactsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSymbolArtifactsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSymbolArtifactsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeSymbolArtifactsRequest::GetCursor() const
{
    return m_cursor;
}

void DescribeSymbolArtifactsRequest::SetCursor(const string& _cursor)
{
    m_cursor = _cursor;
    m_cursorHasBeenSet = true;
}

bool DescribeSymbolArtifactsRequest::CursorHasBeenSet() const
{
    return m_cursorHasBeenSet;
}


