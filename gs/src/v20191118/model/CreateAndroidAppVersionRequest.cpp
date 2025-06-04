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

#include <tencentcloud/gs/v20191118/model/CreateAndroidAppVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

CreateAndroidAppVersionRequest::CreateAndroidAppVersionRequest() :
    m_androidAppIdHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_uninstallCommandHasBeenSet(false),
    m_cleanupModeHasBeenSet(false)
{
}

string CreateAndroidAppVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_androidAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_uninstallCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UninstallCommand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uninstallCommand.c_str(), allocator).Move(), allocator);
    }

    if (m_cleanupModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CleanupMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cleanupMode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAndroidAppVersionRequest::GetAndroidAppId() const
{
    return m_androidAppId;
}

void CreateAndroidAppVersionRequest::SetAndroidAppId(const string& _androidAppId)
{
    m_androidAppId = _androidAppId;
    m_androidAppIdHasBeenSet = true;
}

bool CreateAndroidAppVersionRequest::AndroidAppIdHasBeenSet() const
{
    return m_androidAppIdHasBeenSet;
}

string CreateAndroidAppVersionRequest::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void CreateAndroidAppVersionRequest::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool CreateAndroidAppVersionRequest::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string CreateAndroidAppVersionRequest::GetCommand() const
{
    return m_command;
}

void CreateAndroidAppVersionRequest::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool CreateAndroidAppVersionRequest::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string CreateAndroidAppVersionRequest::GetUninstallCommand() const
{
    return m_uninstallCommand;
}

void CreateAndroidAppVersionRequest::SetUninstallCommand(const string& _uninstallCommand)
{
    m_uninstallCommand = _uninstallCommand;
    m_uninstallCommandHasBeenSet = true;
}

bool CreateAndroidAppVersionRequest::UninstallCommandHasBeenSet() const
{
    return m_uninstallCommandHasBeenSet;
}

string CreateAndroidAppVersionRequest::GetCleanupMode() const
{
    return m_cleanupMode;
}

void CreateAndroidAppVersionRequest::SetCleanupMode(const string& _cleanupMode)
{
    m_cleanupMode = _cleanupMode;
    m_cleanupModeHasBeenSet = true;
}

bool CreateAndroidAppVersionRequest::CleanupModeHasBeenSet() const
{
    return m_cleanupModeHasBeenSet;
}


