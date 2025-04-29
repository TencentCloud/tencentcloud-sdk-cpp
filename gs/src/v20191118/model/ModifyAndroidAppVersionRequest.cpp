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

#include <tencentcloud/gs/v20191118/model/ModifyAndroidAppVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

ModifyAndroidAppVersionRequest::ModifyAndroidAppVersionRequest() :
    m_androidAppIdHasBeenSet(false),
    m_androidAppVersionHasBeenSet(false),
    m_androidAppVersionNameHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_uninstallCommandHasBeenSet(false)
{
}

string ModifyAndroidAppVersionRequest::ToJsonString() const
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

    if (m_androidAppVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidAppVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_androidAppVersionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppVersionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_androidAppVersionName.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAndroidAppVersionRequest::GetAndroidAppId() const
{
    return m_androidAppId;
}

void ModifyAndroidAppVersionRequest::SetAndroidAppId(const string& _androidAppId)
{
    m_androidAppId = _androidAppId;
    m_androidAppIdHasBeenSet = true;
}

bool ModifyAndroidAppVersionRequest::AndroidAppIdHasBeenSet() const
{
    return m_androidAppIdHasBeenSet;
}

string ModifyAndroidAppVersionRequest::GetAndroidAppVersion() const
{
    return m_androidAppVersion;
}

void ModifyAndroidAppVersionRequest::SetAndroidAppVersion(const string& _androidAppVersion)
{
    m_androidAppVersion = _androidAppVersion;
    m_androidAppVersionHasBeenSet = true;
}

bool ModifyAndroidAppVersionRequest::AndroidAppVersionHasBeenSet() const
{
    return m_androidAppVersionHasBeenSet;
}

string ModifyAndroidAppVersionRequest::GetAndroidAppVersionName() const
{
    return m_androidAppVersionName;
}

void ModifyAndroidAppVersionRequest::SetAndroidAppVersionName(const string& _androidAppVersionName)
{
    m_androidAppVersionName = _androidAppVersionName;
    m_androidAppVersionNameHasBeenSet = true;
}

bool ModifyAndroidAppVersionRequest::AndroidAppVersionNameHasBeenSet() const
{
    return m_androidAppVersionNameHasBeenSet;
}

string ModifyAndroidAppVersionRequest::GetCommand() const
{
    return m_command;
}

void ModifyAndroidAppVersionRequest::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool ModifyAndroidAppVersionRequest::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string ModifyAndroidAppVersionRequest::GetUninstallCommand() const
{
    return m_uninstallCommand;
}

void ModifyAndroidAppVersionRequest::SetUninstallCommand(const string& _uninstallCommand)
{
    m_uninstallCommand = _uninstallCommand;
    m_uninstallCommandHasBeenSet = true;
}

bool ModifyAndroidAppVersionRequest::UninstallCommandHasBeenSet() const
{
    return m_uninstallCommandHasBeenSet;
}


