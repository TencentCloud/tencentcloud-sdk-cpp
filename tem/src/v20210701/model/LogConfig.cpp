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

#include <tencentcloud/tem/v20210701/model/LogConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

LogConfig::LogConfig() :
    m_nameHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_beginningRegexHasBeenSet(false),
    m_logPathHasBeenSet(false),
    m_filePatternHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_modifyDateHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_extractRuleHasBeenSet(false)
{
}

CoreInternalOutcome LogConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfig.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfig.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfig.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfig.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfig.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("BeginningRegex") && !value["BeginningRegex"].IsNull())
    {
        if (!value["BeginningRegex"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfig.BeginningRegex` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_beginningRegex = string(value["BeginningRegex"].GetString());
        m_beginningRegexHasBeenSet = true;
    }

    if (value.HasMember("LogPath") && !value["LogPath"].IsNull())
    {
        if (!value["LogPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfig.LogPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logPath = string(value["LogPath"].GetString());
        m_logPathHasBeenSet = true;
    }

    if (value.HasMember("FilePattern") && !value["FilePattern"].IsNull())
    {
        if (!value["FilePattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfig.FilePattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePattern = string(value["FilePattern"].GetString());
        m_filePatternHasBeenSet = true;
    }

    if (value.HasMember("CreateDate") && !value["CreateDate"].IsNull())
    {
        if (!value["CreateDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfig.CreateDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createDate = string(value["CreateDate"].GetString());
        m_createDateHasBeenSet = true;
    }

    if (value.HasMember("ModifyDate") && !value["ModifyDate"].IsNull())
    {
        if (!value["ModifyDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfig.ModifyDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyDate = string(value["ModifyDate"].GetString());
        m_modifyDateHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfig.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfig.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ExtractRule") && !value["ExtractRule"].IsNull())
    {
        if (!value["ExtractRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfig.ExtractRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extractRule.Deserialize(value["ExtractRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extractRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_beginningRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginningRegex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_beginningRegex.c_str(), allocator).Move(), allocator);
    }

    if (m_logPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logPath.c_str(), allocator).Move(), allocator);
    }

    if (m_filePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePattern.c_str(), allocator).Move(), allocator);
    }

    if (m_createDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createDate.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyDate.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_extractRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extractRule.ToJsonObject(value[key.c_str()], allocator);
    }

}


string LogConfig::GetName() const
{
    return m_name;
}

void LogConfig::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LogConfig::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LogConfig::GetInputType() const
{
    return m_inputType;
}

void LogConfig::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool LogConfig::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string LogConfig::GetLogsetId() const
{
    return m_logsetId;
}

void LogConfig::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool LogConfig::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string LogConfig::GetTopicId() const
{
    return m_topicId;
}

void LogConfig::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool LogConfig::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string LogConfig::GetLogType() const
{
    return m_logType;
}

void LogConfig::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool LogConfig::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string LogConfig::GetBeginningRegex() const
{
    return m_beginningRegex;
}

void LogConfig::SetBeginningRegex(const string& _beginningRegex)
{
    m_beginningRegex = _beginningRegex;
    m_beginningRegexHasBeenSet = true;
}

bool LogConfig::BeginningRegexHasBeenSet() const
{
    return m_beginningRegexHasBeenSet;
}

string LogConfig::GetLogPath() const
{
    return m_logPath;
}

void LogConfig::SetLogPath(const string& _logPath)
{
    m_logPath = _logPath;
    m_logPathHasBeenSet = true;
}

bool LogConfig::LogPathHasBeenSet() const
{
    return m_logPathHasBeenSet;
}

string LogConfig::GetFilePattern() const
{
    return m_filePattern;
}

void LogConfig::SetFilePattern(const string& _filePattern)
{
    m_filePattern = _filePattern;
    m_filePatternHasBeenSet = true;
}

bool LogConfig::FilePatternHasBeenSet() const
{
    return m_filePatternHasBeenSet;
}

string LogConfig::GetCreateDate() const
{
    return m_createDate;
}

void LogConfig::SetCreateDate(const string& _createDate)
{
    m_createDate = _createDate;
    m_createDateHasBeenSet = true;
}

bool LogConfig::CreateDateHasBeenSet() const
{
    return m_createDateHasBeenSet;
}

string LogConfig::GetModifyDate() const
{
    return m_modifyDate;
}

void LogConfig::SetModifyDate(const string& _modifyDate)
{
    m_modifyDate = _modifyDate;
    m_modifyDateHasBeenSet = true;
}

bool LogConfig::ModifyDateHasBeenSet() const
{
    return m_modifyDateHasBeenSet;
}

string LogConfig::GetApplicationId() const
{
    return m_applicationId;
}

void LogConfig::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool LogConfig::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string LogConfig::GetApplicationName() const
{
    return m_applicationName;
}

void LogConfig::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool LogConfig::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

LogConfigExtractRule LogConfig::GetExtractRule() const
{
    return m_extractRule;
}

void LogConfig::SetExtractRule(const LogConfigExtractRule& _extractRule)
{
    m_extractRule = _extractRule;
    m_extractRuleHasBeenSet = true;
}

bool LogConfig::ExtractRuleHasBeenSet() const
{
    return m_extractRuleHasBeenSet;
}

