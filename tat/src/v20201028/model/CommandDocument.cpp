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

#include <tencentcloud/tat/v20201028/model/CommandDocument.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

CommandDocument::CommandDocument() :
    m_contentHasBeenSet(false),
    m_commandTypeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_outputCOSBucketUrlHasBeenSet(false),
    m_outputCOSKeyPrefixHasBeenSet(false)
{
}

CoreInternalOutcome CommandDocument::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDocument.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("CommandType") && !value["CommandType"].IsNull())
    {
        if (!value["CommandType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDocument.CommandType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandType = string(value["CommandType"].GetString());
        m_commandTypeHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDocument.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("WorkingDirectory") && !value["WorkingDirectory"].IsNull())
    {
        if (!value["WorkingDirectory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDocument.WorkingDirectory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workingDirectory = string(value["WorkingDirectory"].GetString());
        m_workingDirectoryHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDocument.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("OutputCOSBucketUrl") && !value["OutputCOSBucketUrl"].IsNull())
    {
        if (!value["OutputCOSBucketUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDocument.OutputCOSBucketUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputCOSBucketUrl = string(value["OutputCOSBucketUrl"].GetString());
        m_outputCOSBucketUrlHasBeenSet = true;
    }

    if (value.HasMember("OutputCOSKeyPrefix") && !value["OutputCOSKeyPrefix"].IsNull())
    {
        if (!value["OutputCOSKeyPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDocument.OutputCOSKeyPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputCOSKeyPrefix = string(value["OutputCOSKeyPrefix"].GetString());
        m_outputCOSKeyPrefixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommandDocument::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_commandTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commandType.c_str(), allocator).Move(), allocator);
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

    if (m_outputCOSBucketUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputCOSBucketUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputCOSBucketUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_outputCOSKeyPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputCOSKeyPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputCOSKeyPrefix.c_str(), allocator).Move(), allocator);
    }

}


string CommandDocument::GetContent() const
{
    return m_content;
}

void CommandDocument::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CommandDocument::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string CommandDocument::GetCommandType() const
{
    return m_commandType;
}

void CommandDocument::SetCommandType(const string& _commandType)
{
    m_commandType = _commandType;
    m_commandTypeHasBeenSet = true;
}

bool CommandDocument::CommandTypeHasBeenSet() const
{
    return m_commandTypeHasBeenSet;
}

uint64_t CommandDocument::GetTimeout() const
{
    return m_timeout;
}

void CommandDocument::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CommandDocument::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string CommandDocument::GetWorkingDirectory() const
{
    return m_workingDirectory;
}

void CommandDocument::SetWorkingDirectory(const string& _workingDirectory)
{
    m_workingDirectory = _workingDirectory;
    m_workingDirectoryHasBeenSet = true;
}

bool CommandDocument::WorkingDirectoryHasBeenSet() const
{
    return m_workingDirectoryHasBeenSet;
}

string CommandDocument::GetUsername() const
{
    return m_username;
}

void CommandDocument::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool CommandDocument::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string CommandDocument::GetOutputCOSBucketUrl() const
{
    return m_outputCOSBucketUrl;
}

void CommandDocument::SetOutputCOSBucketUrl(const string& _outputCOSBucketUrl)
{
    m_outputCOSBucketUrl = _outputCOSBucketUrl;
    m_outputCOSBucketUrlHasBeenSet = true;
}

bool CommandDocument::OutputCOSBucketUrlHasBeenSet() const
{
    return m_outputCOSBucketUrlHasBeenSet;
}

string CommandDocument::GetOutputCOSKeyPrefix() const
{
    return m_outputCOSKeyPrefix;
}

void CommandDocument::SetOutputCOSKeyPrefix(const string& _outputCOSKeyPrefix)
{
    m_outputCOSKeyPrefix = _outputCOSKeyPrefix;
    m_outputCOSKeyPrefixHasBeenSet = true;
}

bool CommandDocument::OutputCOSKeyPrefixHasBeenSet() const
{
    return m_outputCOSKeyPrefixHasBeenSet;
}

