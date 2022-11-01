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

#include <tencentcloud/tem/v20210701/model/CreateLogConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

CreateLogConfigRequest::CreateLogConfigRequest() :
    m_environmentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_beginningRegexHasBeenSet(false),
    m_logPathHasBeenSet(false),
    m_filePatternHasBeenSet(false),
    m_extractRuleHasBeenSet(false)
{
}

string CreateLogConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_beginningRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginningRegex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginningRegex.c_str(), allocator).Move(), allocator);
    }

    if (m_logPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logPath.c_str(), allocator).Move(), allocator);
    }

    if (m_filePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filePattern.c_str(), allocator).Move(), allocator);
    }

    if (m_extractRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extractRule.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLogConfigRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void CreateLogConfigRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool CreateLogConfigRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string CreateLogConfigRequest::GetName() const
{
    return m_name;
}

void CreateLogConfigRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateLogConfigRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateLogConfigRequest::GetInputType() const
{
    return m_inputType;
}

void CreateLogConfigRequest::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool CreateLogConfigRequest::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string CreateLogConfigRequest::GetApplicationId() const
{
    return m_applicationId;
}

void CreateLogConfigRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool CreateLogConfigRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string CreateLogConfigRequest::GetLogsetId() const
{
    return m_logsetId;
}

void CreateLogConfigRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool CreateLogConfigRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string CreateLogConfigRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateLogConfigRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateLogConfigRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CreateLogConfigRequest::GetLogType() const
{
    return m_logType;
}

void CreateLogConfigRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool CreateLogConfigRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string CreateLogConfigRequest::GetBeginningRegex() const
{
    return m_beginningRegex;
}

void CreateLogConfigRequest::SetBeginningRegex(const string& _beginningRegex)
{
    m_beginningRegex = _beginningRegex;
    m_beginningRegexHasBeenSet = true;
}

bool CreateLogConfigRequest::BeginningRegexHasBeenSet() const
{
    return m_beginningRegexHasBeenSet;
}

string CreateLogConfigRequest::GetLogPath() const
{
    return m_logPath;
}

void CreateLogConfigRequest::SetLogPath(const string& _logPath)
{
    m_logPath = _logPath;
    m_logPathHasBeenSet = true;
}

bool CreateLogConfigRequest::LogPathHasBeenSet() const
{
    return m_logPathHasBeenSet;
}

string CreateLogConfigRequest::GetFilePattern() const
{
    return m_filePattern;
}

void CreateLogConfigRequest::SetFilePattern(const string& _filePattern)
{
    m_filePattern = _filePattern;
    m_filePatternHasBeenSet = true;
}

bool CreateLogConfigRequest::FilePatternHasBeenSet() const
{
    return m_filePatternHasBeenSet;
}

LogConfigExtractRule CreateLogConfigRequest::GetExtractRule() const
{
    return m_extractRule;
}

void CreateLogConfigRequest::SetExtractRule(const LogConfigExtractRule& _extractRule)
{
    m_extractRule = _extractRule;
    m_extractRuleHasBeenSet = true;
}

bool CreateLogConfigRequest::ExtractRuleHasBeenSet() const
{
    return m_extractRuleHasBeenSet;
}


