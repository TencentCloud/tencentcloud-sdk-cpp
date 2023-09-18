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

#include <tencentcloud/tat/v20201028/model/RunCommandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

RunCommandRequest::RunCommandRequest() :
    m_contentHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_commandNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_commandTypeHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_saveCommandHasBeenSet(false),
    m_enableParameterHasBeenSet(false),
    m_defaultParametersHasBeenSet(false),
    m_defaultParameterConfsHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_outputCOSBucketUrlHasBeenSet(false),
    m_outputCOSKeyPrefixHasBeenSet(false)
{
}

string RunCommandRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_saveCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveCommand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_saveCommand, allocator);
    }

    if (m_enableParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableParameter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableParameter, allocator);
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

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parameters.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


string RunCommandRequest::GetContent() const
{
    return m_content;
}

void RunCommandRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool RunCommandRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<string> RunCommandRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void RunCommandRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool RunCommandRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string RunCommandRequest::GetCommandName() const
{
    return m_commandName;
}

void RunCommandRequest::SetCommandName(const string& _commandName)
{
    m_commandName = _commandName;
    m_commandNameHasBeenSet = true;
}

bool RunCommandRequest::CommandNameHasBeenSet() const
{
    return m_commandNameHasBeenSet;
}

string RunCommandRequest::GetDescription() const
{
    return m_description;
}

void RunCommandRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RunCommandRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RunCommandRequest::GetCommandType() const
{
    return m_commandType;
}

void RunCommandRequest::SetCommandType(const string& _commandType)
{
    m_commandType = _commandType;
    m_commandTypeHasBeenSet = true;
}

bool RunCommandRequest::CommandTypeHasBeenSet() const
{
    return m_commandTypeHasBeenSet;
}

string RunCommandRequest::GetWorkingDirectory() const
{
    return m_workingDirectory;
}

void RunCommandRequest::SetWorkingDirectory(const string& _workingDirectory)
{
    m_workingDirectory = _workingDirectory;
    m_workingDirectoryHasBeenSet = true;
}

bool RunCommandRequest::WorkingDirectoryHasBeenSet() const
{
    return m_workingDirectoryHasBeenSet;
}

uint64_t RunCommandRequest::GetTimeout() const
{
    return m_timeout;
}

void RunCommandRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool RunCommandRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

bool RunCommandRequest::GetSaveCommand() const
{
    return m_saveCommand;
}

void RunCommandRequest::SetSaveCommand(const bool& _saveCommand)
{
    m_saveCommand = _saveCommand;
    m_saveCommandHasBeenSet = true;
}

bool RunCommandRequest::SaveCommandHasBeenSet() const
{
    return m_saveCommandHasBeenSet;
}

bool RunCommandRequest::GetEnableParameter() const
{
    return m_enableParameter;
}

void RunCommandRequest::SetEnableParameter(const bool& _enableParameter)
{
    m_enableParameter = _enableParameter;
    m_enableParameterHasBeenSet = true;
}

bool RunCommandRequest::EnableParameterHasBeenSet() const
{
    return m_enableParameterHasBeenSet;
}

string RunCommandRequest::GetDefaultParameters() const
{
    return m_defaultParameters;
}

void RunCommandRequest::SetDefaultParameters(const string& _defaultParameters)
{
    m_defaultParameters = _defaultParameters;
    m_defaultParametersHasBeenSet = true;
}

bool RunCommandRequest::DefaultParametersHasBeenSet() const
{
    return m_defaultParametersHasBeenSet;
}

vector<DefaultParameterConf> RunCommandRequest::GetDefaultParameterConfs() const
{
    return m_defaultParameterConfs;
}

void RunCommandRequest::SetDefaultParameterConfs(const vector<DefaultParameterConf>& _defaultParameterConfs)
{
    m_defaultParameterConfs = _defaultParameterConfs;
    m_defaultParameterConfsHasBeenSet = true;
}

bool RunCommandRequest::DefaultParameterConfsHasBeenSet() const
{
    return m_defaultParameterConfsHasBeenSet;
}

string RunCommandRequest::GetParameters() const
{
    return m_parameters;
}

void RunCommandRequest::SetParameters(const string& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool RunCommandRequest::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

vector<Tag> RunCommandRequest::GetTags() const
{
    return m_tags;
}

void RunCommandRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RunCommandRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string RunCommandRequest::GetUsername() const
{
    return m_username;
}

void RunCommandRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool RunCommandRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string RunCommandRequest::GetOutputCOSBucketUrl() const
{
    return m_outputCOSBucketUrl;
}

void RunCommandRequest::SetOutputCOSBucketUrl(const string& _outputCOSBucketUrl)
{
    m_outputCOSBucketUrl = _outputCOSBucketUrl;
    m_outputCOSBucketUrlHasBeenSet = true;
}

bool RunCommandRequest::OutputCOSBucketUrlHasBeenSet() const
{
    return m_outputCOSBucketUrlHasBeenSet;
}

string RunCommandRequest::GetOutputCOSKeyPrefix() const
{
    return m_outputCOSKeyPrefix;
}

void RunCommandRequest::SetOutputCOSKeyPrefix(const string& _outputCOSKeyPrefix)
{
    m_outputCOSKeyPrefix = _outputCOSKeyPrefix;
    m_outputCOSKeyPrefixHasBeenSet = true;
}

bool RunCommandRequest::OutputCOSKeyPrefixHasBeenSet() const
{
    return m_outputCOSKeyPrefixHasBeenSet;
}


