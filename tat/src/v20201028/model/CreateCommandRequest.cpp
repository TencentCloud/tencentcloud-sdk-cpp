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

#include <tencentcloud/tat/v20201028/model/CreateCommandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tat::V20201028::Model;
using namespace std;

CreateCommandRequest::CreateCommandRequest() :
    m_commandNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_commandTypeHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_enableParameterHasBeenSet(false),
    m_defaultParametersHasBeenSet(false),
    m_defaultParameterConfsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_outputCOSBucketUrlHasBeenSet(false),
    m_outputCOSKeyPrefixHasBeenSet(false)
{
}

string CreateCommandRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_commandNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_commandName.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
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


string CreateCommandRequest::GetCommandName() const
{
    return m_commandName;
}

void CreateCommandRequest::SetCommandName(const string& _commandName)
{
    m_commandName = _commandName;
    m_commandNameHasBeenSet = true;
}

bool CreateCommandRequest::CommandNameHasBeenSet() const
{
    return m_commandNameHasBeenSet;
}

string CreateCommandRequest::GetContent() const
{
    return m_content;
}

void CreateCommandRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CreateCommandRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string CreateCommandRequest::GetDescription() const
{
    return m_description;
}

void CreateCommandRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateCommandRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateCommandRequest::GetCommandType() const
{
    return m_commandType;
}

void CreateCommandRequest::SetCommandType(const string& _commandType)
{
    m_commandType = _commandType;
    m_commandTypeHasBeenSet = true;
}

bool CreateCommandRequest::CommandTypeHasBeenSet() const
{
    return m_commandTypeHasBeenSet;
}

string CreateCommandRequest::GetWorkingDirectory() const
{
    return m_workingDirectory;
}

void CreateCommandRequest::SetWorkingDirectory(const string& _workingDirectory)
{
    m_workingDirectory = _workingDirectory;
    m_workingDirectoryHasBeenSet = true;
}

bool CreateCommandRequest::WorkingDirectoryHasBeenSet() const
{
    return m_workingDirectoryHasBeenSet;
}

uint64_t CreateCommandRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateCommandRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateCommandRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

bool CreateCommandRequest::GetEnableParameter() const
{
    return m_enableParameter;
}

void CreateCommandRequest::SetEnableParameter(const bool& _enableParameter)
{
    m_enableParameter = _enableParameter;
    m_enableParameterHasBeenSet = true;
}

bool CreateCommandRequest::EnableParameterHasBeenSet() const
{
    return m_enableParameterHasBeenSet;
}

string CreateCommandRequest::GetDefaultParameters() const
{
    return m_defaultParameters;
}

void CreateCommandRequest::SetDefaultParameters(const string& _defaultParameters)
{
    m_defaultParameters = _defaultParameters;
    m_defaultParametersHasBeenSet = true;
}

bool CreateCommandRequest::DefaultParametersHasBeenSet() const
{
    return m_defaultParametersHasBeenSet;
}

vector<DefaultParameterConf> CreateCommandRequest::GetDefaultParameterConfs() const
{
    return m_defaultParameterConfs;
}

void CreateCommandRequest::SetDefaultParameterConfs(const vector<DefaultParameterConf>& _defaultParameterConfs)
{
    m_defaultParameterConfs = _defaultParameterConfs;
    m_defaultParameterConfsHasBeenSet = true;
}

bool CreateCommandRequest::DefaultParameterConfsHasBeenSet() const
{
    return m_defaultParameterConfsHasBeenSet;
}

vector<Tag> CreateCommandRequest::GetTags() const
{
    return m_tags;
}

void CreateCommandRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateCommandRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateCommandRequest::GetUsername() const
{
    return m_username;
}

void CreateCommandRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool CreateCommandRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string CreateCommandRequest::GetOutputCOSBucketUrl() const
{
    return m_outputCOSBucketUrl;
}

void CreateCommandRequest::SetOutputCOSBucketUrl(const string& _outputCOSBucketUrl)
{
    m_outputCOSBucketUrl = _outputCOSBucketUrl;
    m_outputCOSBucketUrlHasBeenSet = true;
}

bool CreateCommandRequest::OutputCOSBucketUrlHasBeenSet() const
{
    return m_outputCOSBucketUrlHasBeenSet;
}

string CreateCommandRequest::GetOutputCOSKeyPrefix() const
{
    return m_outputCOSKeyPrefix;
}

void CreateCommandRequest::SetOutputCOSKeyPrefix(const string& _outputCOSKeyPrefix)
{
    m_outputCOSKeyPrefix = _outputCOSKeyPrefix;
    m_outputCOSKeyPrefixHasBeenSet = true;
}

bool CreateCommandRequest::OutputCOSKeyPrefixHasBeenSet() const
{
    return m_outputCOSKeyPrefixHasBeenSet;
}


