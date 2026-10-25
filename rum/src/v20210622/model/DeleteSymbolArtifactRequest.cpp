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

#include <tencentcloud/rum/v20210622/model/DeleteSymbolArtifactRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DeleteSymbolArtifactRequest::DeleteSymbolArtifactRequest() :
    m_kindHasBeenSet(false),
    m_artifactIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_oSHasBeenSet(false),
    m_oSVersionHasBeenSet(false)
{
}

string DeleteSymbolArtifactRequest::ToJsonString() const
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

    if (m_artifactIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArtifactId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_artifactId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteSymbolArtifactRequest::GetKind() const
{
    return m_kind;
}

void DeleteSymbolArtifactRequest::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool DeleteSymbolArtifactRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string DeleteSymbolArtifactRequest::GetArtifactId() const
{
    return m_artifactId;
}

void DeleteSymbolArtifactRequest::SetArtifactId(const string& _artifactId)
{
    m_artifactId = _artifactId;
    m_artifactIdHasBeenSet = true;
}

bool DeleteSymbolArtifactRequest::ArtifactIdHasBeenSet() const
{
    return m_artifactIdHasBeenSet;
}

string DeleteSymbolArtifactRequest::GetAppId() const
{
    return m_appId;
}

void DeleteSymbolArtifactRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DeleteSymbolArtifactRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DeleteSymbolArtifactRequest::GetProjectId() const
{
    return m_projectId;
}

void DeleteSymbolArtifactRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DeleteSymbolArtifactRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DeleteSymbolArtifactRequest::GetAppVersion() const
{
    return m_appVersion;
}

void DeleteSymbolArtifactRequest::SetAppVersion(const string& _appVersion)
{
    m_appVersion = _appVersion;
    m_appVersionHasBeenSet = true;
}

bool DeleteSymbolArtifactRequest::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string DeleteSymbolArtifactRequest::GetPlatform() const
{
    return m_platform;
}

void DeleteSymbolArtifactRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool DeleteSymbolArtifactRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DeleteSymbolArtifactRequest::GetOS() const
{
    return m_oS;
}

void DeleteSymbolArtifactRequest::SetOS(const string& _oS)
{
    m_oS = _oS;
    m_oSHasBeenSet = true;
}

bool DeleteSymbolArtifactRequest::OSHasBeenSet() const
{
    return m_oSHasBeenSet;
}

string DeleteSymbolArtifactRequest::GetOSVersion() const
{
    return m_oSVersion;
}

void DeleteSymbolArtifactRequest::SetOSVersion(const string& _oSVersion)
{
    m_oSVersion = _oSVersion;
    m_oSVersionHasBeenSet = true;
}

bool DeleteSymbolArtifactRequest::OSVersionHasBeenSet() const
{
    return m_oSVersionHasBeenSet;
}


