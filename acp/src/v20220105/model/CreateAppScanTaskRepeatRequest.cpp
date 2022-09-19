/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/acp/v20220105/model/CreateAppScanTaskRepeatRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Acp::V20220105::Model;
using namespace std;

CreateAppScanTaskRepeatRequest::CreateAppScanTaskRepeatRequest() :
    m_sourceHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_orgTaskIDHasBeenSet(false),
    m_appPackageHasBeenSet(false),
    m_fileIDHasBeenSet(false),
    m_appDownloadUrlHasBeenSet(false),
    m_privacyTextUrlHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_privacyTextNameHasBeenSet(false),
    m_appSha1HasBeenSet(false),
    m_privacyTextMD5HasBeenSet(false)
{
}

string CreateAppScanTaskRepeatRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_source, allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platform, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_orgTaskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgTaskID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orgTaskID.c_str(), allocator).Move(), allocator);
    }

    if (m_appPackageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPackage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appPackage.c_str(), allocator).Move(), allocator);
    }

    if (m_fileIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileID.c_str(), allocator).Move(), allocator);
    }

    if (m_appDownloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppDownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appDownloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_privacyTextUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivacyTextUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privacyTextUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_privacyTextNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivacyTextName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privacyTextName.c_str(), allocator).Move(), allocator);
    }

    if (m_appSha1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSha1";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appSha1.c_str(), allocator).Move(), allocator);
    }

    if (m_privacyTextMD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivacyTextMD5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privacyTextMD5.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateAppScanTaskRepeatRequest::GetSource() const
{
    return m_source;
}

void CreateAppScanTaskRepeatRequest::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t CreateAppScanTaskRepeatRequest::GetPlatform() const
{
    return m_platform;
}

void CreateAppScanTaskRepeatRequest::SetPlatform(const int64_t& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

int64_t CreateAppScanTaskRepeatRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateAppScanTaskRepeatRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string CreateAppScanTaskRepeatRequest::GetOrgTaskID() const
{
    return m_orgTaskID;
}

void CreateAppScanTaskRepeatRequest::SetOrgTaskID(const string& _orgTaskID)
{
    m_orgTaskID = _orgTaskID;
    m_orgTaskIDHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::OrgTaskIDHasBeenSet() const
{
    return m_orgTaskIDHasBeenSet;
}

string CreateAppScanTaskRepeatRequest::GetAppPackage() const
{
    return m_appPackage;
}

void CreateAppScanTaskRepeatRequest::SetAppPackage(const string& _appPackage)
{
    m_appPackage = _appPackage;
    m_appPackageHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::AppPackageHasBeenSet() const
{
    return m_appPackageHasBeenSet;
}

string CreateAppScanTaskRepeatRequest::GetFileID() const
{
    return m_fileID;
}

void CreateAppScanTaskRepeatRequest::SetFileID(const string& _fileID)
{
    m_fileID = _fileID;
    m_fileIDHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::FileIDHasBeenSet() const
{
    return m_fileIDHasBeenSet;
}

string CreateAppScanTaskRepeatRequest::GetAppDownloadUrl() const
{
    return m_appDownloadUrl;
}

void CreateAppScanTaskRepeatRequest::SetAppDownloadUrl(const string& _appDownloadUrl)
{
    m_appDownloadUrl = _appDownloadUrl;
    m_appDownloadUrlHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::AppDownloadUrlHasBeenSet() const
{
    return m_appDownloadUrlHasBeenSet;
}

string CreateAppScanTaskRepeatRequest::GetPrivacyTextUrl() const
{
    return m_privacyTextUrl;
}

void CreateAppScanTaskRepeatRequest::SetPrivacyTextUrl(const string& _privacyTextUrl)
{
    m_privacyTextUrl = _privacyTextUrl;
    m_privacyTextUrlHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::PrivacyTextUrlHasBeenSet() const
{
    return m_privacyTextUrlHasBeenSet;
}

string CreateAppScanTaskRepeatRequest::GetAppName() const
{
    return m_appName;
}

void CreateAppScanTaskRepeatRequest::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

string CreateAppScanTaskRepeatRequest::GetPrivacyTextName() const
{
    return m_privacyTextName;
}

void CreateAppScanTaskRepeatRequest::SetPrivacyTextName(const string& _privacyTextName)
{
    m_privacyTextName = _privacyTextName;
    m_privacyTextNameHasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::PrivacyTextNameHasBeenSet() const
{
    return m_privacyTextNameHasBeenSet;
}

string CreateAppScanTaskRepeatRequest::GetAppSha1() const
{
    return m_appSha1;
}

void CreateAppScanTaskRepeatRequest::SetAppSha1(const string& _appSha1)
{
    m_appSha1 = _appSha1;
    m_appSha1HasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::AppSha1HasBeenSet() const
{
    return m_appSha1HasBeenSet;
}

string CreateAppScanTaskRepeatRequest::GetPrivacyTextMD5() const
{
    return m_privacyTextMD5;
}

void CreateAppScanTaskRepeatRequest::SetPrivacyTextMD5(const string& _privacyTextMD5)
{
    m_privacyTextMD5 = _privacyTextMD5;
    m_privacyTextMD5HasBeenSet = true;
}

bool CreateAppScanTaskRepeatRequest::PrivacyTextMD5HasBeenSet() const
{
    return m_privacyTextMD5HasBeenSet;
}


