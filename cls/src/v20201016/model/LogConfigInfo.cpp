/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cls/v20201016/model/LogConfigInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

LogConfigInfo::LogConfigInfo() :
    m_topicIdHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_extractRuleHasBeenSet(false),
    m_logFormatHasBeenSet(false),
    m_excludePathsHasBeenSet(false),
    m_userDefineRuleHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_groupIdsHasBeenSet(false)
{
}

CoreInternalOutcome LogConfigInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigInfo.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigInfo.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("ExtractRule") && !value["ExtractRule"].IsNull())
    {
        if (!value["ExtractRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigInfo.ExtractRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extractRule.Deserialize(value["ExtractRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extractRuleHasBeenSet = true;
    }

    if (value.HasMember("LogFormat") && !value["LogFormat"].IsNull())
    {
        if (!value["LogFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigInfo.LogFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logFormat = string(value["LogFormat"].GetString());
        m_logFormatHasBeenSet = true;
    }

    if (value.HasMember("ExcludePaths") && !value["ExcludePaths"].IsNull())
    {
        if (!value["ExcludePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogConfigInfo.ExcludePaths` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludePaths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExcludePathInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_excludePaths.push_back(item);
        }
        m_excludePathsHasBeenSet = true;
    }

    if (value.HasMember("UserDefineRule") && !value["UserDefineRule"].IsNull())
    {
        if (!value["UserDefineRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigInfo.UserDefineRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDefineRule = string(value["UserDefineRule"].GetString());
        m_userDefineRuleHasBeenSet = true;
    }

    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogConfigInfo.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("GroupIds") && !value["GroupIds"].IsNull())
    {
        if (!value["GroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LogConfigInfo.GroupIds` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupIds.push_back((*itr).GetString());
        }
        m_groupIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogConfigInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_extractRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extractRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_excludePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludePaths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_excludePaths.begin(); itr != m_excludePaths.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_userDefineRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefineRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDefineRule.c_str(), allocator).Move(), allocator);
    }

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string LogConfigInfo::GetTopicId() const
{
    return m_topicId;
}

void LogConfigInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool LogConfigInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string LogConfigInfo::GetLogsetId() const
{
    return m_logsetId;
}

void LogConfigInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool LogConfigInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string LogConfigInfo::GetPath() const
{
    return m_path;
}

void LogConfigInfo::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool LogConfigInfo::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string LogConfigInfo::GetLogType() const
{
    return m_logType;
}

void LogConfigInfo::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool LogConfigInfo::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

ExtractRuleInfo LogConfigInfo::GetExtractRule() const
{
    return m_extractRule;
}

void LogConfigInfo::SetExtractRule(const ExtractRuleInfo& _extractRule)
{
    m_extractRule = _extractRule;
    m_extractRuleHasBeenSet = true;
}

bool LogConfigInfo::ExtractRuleHasBeenSet() const
{
    return m_extractRuleHasBeenSet;
}

string LogConfigInfo::GetLogFormat() const
{
    return m_logFormat;
}

void LogConfigInfo::SetLogFormat(const string& _logFormat)
{
    m_logFormat = _logFormat;
    m_logFormatHasBeenSet = true;
}

bool LogConfigInfo::LogFormatHasBeenSet() const
{
    return m_logFormatHasBeenSet;
}

vector<ExcludePathInfo> LogConfigInfo::GetExcludePaths() const
{
    return m_excludePaths;
}

void LogConfigInfo::SetExcludePaths(const vector<ExcludePathInfo>& _excludePaths)
{
    m_excludePaths = _excludePaths;
    m_excludePathsHasBeenSet = true;
}

bool LogConfigInfo::ExcludePathsHasBeenSet() const
{
    return m_excludePathsHasBeenSet;
}

string LogConfigInfo::GetUserDefineRule() const
{
    return m_userDefineRule;
}

void LogConfigInfo::SetUserDefineRule(const string& _userDefineRule)
{
    m_userDefineRule = _userDefineRule;
    m_userDefineRuleHasBeenSet = true;
}

bool LogConfigInfo::UserDefineRuleHasBeenSet() const
{
    return m_userDefineRuleHasBeenSet;
}

string LogConfigInfo::GetConfigId() const
{
    return m_configId;
}

void LogConfigInfo::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool LogConfigInfo::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

vector<string> LogConfigInfo::GetGroupIds() const
{
    return m_groupIds;
}

void LogConfigInfo::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool LogConfigInfo::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

