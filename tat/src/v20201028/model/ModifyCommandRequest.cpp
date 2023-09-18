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

#include <tencentcloud/tat/v20201028/model/ModifyCommandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

ModifyCommandRequest::ModifyCommandRequest() :
    m_commandIdHasBeenSet(false),
    m_commandNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_commandTypeHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_defaultParametersHasBeenSet(false),
    m_defaultParameterConfsHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_outputCOSBucketUrlHasBeenSet(false),
    m_outputCOSKeyPrefixHasBeenSet(false)
{
}

string ModifyCommandRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_commandIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commandId.c_str(), allocator).Move(), allocator);
    }

    if (m_commandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commandName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_commandTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commandType.c_str(), allocator).Move(), allocator);
    }

    if (m_workingDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkingDirectory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workingDirectory.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_defaultParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_defaultParameters.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultParameterConfsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultParameterConfs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_defaultParameterConfs.begin(); itr != m_defaultParameterConfs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_outputCOSBucketUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputCOSBucketUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outputCOSBucketUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_outputCOSKeyPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputCOSKeyPrefix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outputCOSKeyPrefix.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCommandRequest::GetCommandId() const
{
    return m_commandId;
}

void ModifyCommandRequest::SetCommandId(const string& _commandId)
{
    m_commandId = _commandId;
    m_commandIdHasBeenSet = true;
}

bool ModifyCommandRequest::CommandIdHasBeenSet() const
{
    return m_commandIdHasBeenSet;
}

string ModifyCommandRequest::GetCommandName() const
{
    return m_commandName;
}

void ModifyCommandRequest::SetCommandName(const string& _commandName)
{
    m_commandName = _commandName;
    m_commandNameHasBeenSet = true;
}

bool ModifyCommandRequest::CommandNameHasBeenSet() const
{
    return m_commandNameHasBeenSet;
}

string ModifyCommandRequest::GetDescription() const
{
    return m_description;
}

void ModifyCommandRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyCommandRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyCommandRequest::GetContent() const
{
    return m_content;
}

void ModifyCommandRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ModifyCommandRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ModifyCommandRequest::GetCommandType() const
{
    return m_commandType;
}

void ModifyCommandRequest::SetCommandType(const string& _commandType)
{
    m_commandType = _commandType;
    m_commandTypeHasBeenSet = true;
}

bool ModifyCommandRequest::CommandTypeHasBeenSet() const
{
    return m_commandTypeHasBeenSet;
}

string ModifyCommandRequest::GetWorkingDirectory() const
{
    return m_workingDirectory;
}

void ModifyCommandRequest::SetWorkingDirectory(const string& _workingDirectory)
{
    m_workingDirectory = _workingDirectory;
    m_workingDirectoryHasBeenSet = true;
}

bool ModifyCommandRequest::WorkingDirectoryHasBeenSet() const
{
    return m_workingDirectoryHasBeenSet;
}

uint64_t ModifyCommandRequest::GetTimeout() const
{
    return m_timeout;
}

void ModifyCommandRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ModifyCommandRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string ModifyCommandRequest::GetDefaultParameters() const
{
    return m_defaultParameters;
}

void ModifyCommandRequest::SetDefaultParameters(const string& _defaultParameters)
{
    m_defaultParameters = _defaultParameters;
    m_defaultParametersHasBeenSet = true;
}

bool ModifyCommandRequest::DefaultParametersHasBeenSet() const
{
    return m_defaultParametersHasBeenSet;
}

vector<DefaultParameterConf> ModifyCommandRequest::GetDefaultParameterConfs() const
{
    return m_defaultParameterConfs;
}

void ModifyCommandRequest::SetDefaultParameterConfs(const vector<DefaultParameterConf>& _defaultParameterConfs)
{
    m_defaultParameterConfs = _defaultParameterConfs;
    m_defaultParameterConfsHasBeenSet = true;
}

bool ModifyCommandRequest::DefaultParameterConfsHasBeenSet() const
{
    return m_defaultParameterConfsHasBeenSet;
}

string ModifyCommandRequest::GetUsername() const
{
    return m_username;
}

void ModifyCommandRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ModifyCommandRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string ModifyCommandRequest::GetOutputCOSBucketUrl() const
{
    return m_outputCOSBucketUrl;
}

void ModifyCommandRequest::SetOutputCOSBucketUrl(const string& _outputCOSBucketUrl)
{
    m_outputCOSBucketUrl = _outputCOSBucketUrl;
    m_outputCOSBucketUrlHasBeenSet = true;
}

bool ModifyCommandRequest::OutputCOSBucketUrlHasBeenSet() const
{
    return m_outputCOSBucketUrlHasBeenSet;
}

string ModifyCommandRequest::GetOutputCOSKeyPrefix() const
{
    return m_outputCOSKeyPrefix;
}

void ModifyCommandRequest::SetOutputCOSKeyPrefix(const string& _outputCOSKeyPrefix)
{
    m_outputCOSKeyPrefix = _outputCOSKeyPrefix;
    m_outputCOSKeyPrefixHasBeenSet = true;
}

bool ModifyCommandRequest::OutputCOSKeyPrefixHasBeenSet() const
{
    return m_outputCOSKeyPrefixHasBeenSet;
}


