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

#include <tencentcloud/lighthouse/v20200324/model/Command.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

Command::Command() :
    m_contentHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_usernameHasBeenSet(false)
{
}

CoreInternalOutcome Command::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Command.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Command.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("WorkingDirectory") && !value["WorkingDirectory"].IsNull())
    {
        if (!value["WorkingDirectory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Command.WorkingDirectory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workingDirectory = string(value["WorkingDirectory"].GetString());
        m_workingDirectoryHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Command.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Command::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_workingDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkingDirectory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workingDirectory.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

}


string Command::GetContent() const
{
    return m_content;
}

void Command::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool Command::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t Command::GetTimeout() const
{
    return m_timeout;
}

void Command::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool Command::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string Command::GetWorkingDirectory() const
{
    return m_workingDirectory;
}

void Command::SetWorkingDirectory(const string& _workingDirectory)
{
    m_workingDirectory = _workingDirectory;
    m_workingDirectoryHasBeenSet = true;
}

bool Command::WorkingDirectoryHasBeenSet() const
{
    return m_workingDirectoryHasBeenSet;
}

string Command::GetUsername() const
{
    return m_username;
}

void Command::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool Command::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

