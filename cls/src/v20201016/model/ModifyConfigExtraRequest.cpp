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

#include <tencentcloud/cls/v20201016/model/ModifyConfigExtraRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyConfigExtraRequest::ModifyConfigExtraRequest() :
    m_configExtraIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_hostFileHasBeenSet(false),
    m_containerFileHasBeenSet(false),
    m_containerStdoutHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_logFormatHasBeenSet(false),
    m_extractRuleHasBeenSet(false),
    m_excludePathsHasBeenSet(false),
    m_userDefineRuleHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_configFlagHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_advancedConfigHasBeenSet(false)
{
}

string ModifyConfigExtraRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_configExtraIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigExtraId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configExtraId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostFile.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_containerFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerFile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_containerFile.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_containerStdoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerStdout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_containerStdout.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_logFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_extractRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtractRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extractRule.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_excludePathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludePaths";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_excludePaths.begin(); itr != m_excludePaths.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_userDefineRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefineRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userDefineRule.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_configFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_advancedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_advancedConfig.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyConfigExtraRequest::GetConfigExtraId() const
{
    return m_configExtraId;
}

void ModifyConfigExtraRequest::SetConfigExtraId(const string& _configExtraId)
{
    m_configExtraId = _configExtraId;
    m_configExtraIdHasBeenSet = true;
}

bool ModifyConfigExtraRequest::ConfigExtraIdHasBeenSet() const
{
    return m_configExtraIdHasBeenSet;
}

string ModifyConfigExtraRequest::GetName() const
{
    return m_name;
}

void ModifyConfigExtraRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyConfigExtraRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyConfigExtraRequest::GetTopicId() const
{
    return m_topicId;
}

void ModifyConfigExtraRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ModifyConfigExtraRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

HostFileInfo ModifyConfigExtraRequest::GetHostFile() const
{
    return m_hostFile;
}

void ModifyConfigExtraRequest::SetHostFile(const HostFileInfo& _hostFile)
{
    m_hostFile = _hostFile;
    m_hostFileHasBeenSet = true;
}

bool ModifyConfigExtraRequest::HostFileHasBeenSet() const
{
    return m_hostFileHasBeenSet;
}

ContainerFileInfo ModifyConfigExtraRequest::GetContainerFile() const
{
    return m_containerFile;
}

void ModifyConfigExtraRequest::SetContainerFile(const ContainerFileInfo& _containerFile)
{
    m_containerFile = _containerFile;
    m_containerFileHasBeenSet = true;
}

bool ModifyConfigExtraRequest::ContainerFileHasBeenSet() const
{
    return m_containerFileHasBeenSet;
}

ContainerStdoutInfo ModifyConfigExtraRequest::GetContainerStdout() const
{
    return m_containerStdout;
}

void ModifyConfigExtraRequest::SetContainerStdout(const ContainerStdoutInfo& _containerStdout)
{
    m_containerStdout = _containerStdout;
    m_containerStdoutHasBeenSet = true;
}

bool ModifyConfigExtraRequest::ContainerStdoutHasBeenSet() const
{
    return m_containerStdoutHasBeenSet;
}

string ModifyConfigExtraRequest::GetLogType() const
{
    return m_logType;
}

void ModifyConfigExtraRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool ModifyConfigExtraRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string ModifyConfigExtraRequest::GetLogFormat() const
{
    return m_logFormat;
}

void ModifyConfigExtraRequest::SetLogFormat(const string& _logFormat)
{
    m_logFormat = _logFormat;
    m_logFormatHasBeenSet = true;
}

bool ModifyConfigExtraRequest::LogFormatHasBeenSet() const
{
    return m_logFormatHasBeenSet;
}

ExtractRuleInfo ModifyConfigExtraRequest::GetExtractRule() const
{
    return m_extractRule;
}

void ModifyConfigExtraRequest::SetExtractRule(const ExtractRuleInfo& _extractRule)
{
    m_extractRule = _extractRule;
    m_extractRuleHasBeenSet = true;
}

bool ModifyConfigExtraRequest::ExtractRuleHasBeenSet() const
{
    return m_extractRuleHasBeenSet;
}

vector<ExcludePathInfo> ModifyConfigExtraRequest::GetExcludePaths() const
{
    return m_excludePaths;
}

void ModifyConfigExtraRequest::SetExcludePaths(const vector<ExcludePathInfo>& _excludePaths)
{
    m_excludePaths = _excludePaths;
    m_excludePathsHasBeenSet = true;
}

bool ModifyConfigExtraRequest::ExcludePathsHasBeenSet() const
{
    return m_excludePathsHasBeenSet;
}

string ModifyConfigExtraRequest::GetUserDefineRule() const
{
    return m_userDefineRule;
}

void ModifyConfigExtraRequest::SetUserDefineRule(const string& _userDefineRule)
{
    m_userDefineRule = _userDefineRule;
    m_userDefineRuleHasBeenSet = true;
}

bool ModifyConfigExtraRequest::UserDefineRuleHasBeenSet() const
{
    return m_userDefineRuleHasBeenSet;
}

string ModifyConfigExtraRequest::GetType() const
{
    return m_type;
}

void ModifyConfigExtraRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyConfigExtraRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyConfigExtraRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyConfigExtraRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyConfigExtraRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ModifyConfigExtraRequest::GetConfigFlag() const
{
    return m_configFlag;
}

void ModifyConfigExtraRequest::SetConfigFlag(const string& _configFlag)
{
    m_configFlag = _configFlag;
    m_configFlagHasBeenSet = true;
}

bool ModifyConfigExtraRequest::ConfigFlagHasBeenSet() const
{
    return m_configFlagHasBeenSet;
}

string ModifyConfigExtraRequest::GetLogsetId() const
{
    return m_logsetId;
}

void ModifyConfigExtraRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool ModifyConfigExtraRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string ModifyConfigExtraRequest::GetLogsetName() const
{
    return m_logsetName;
}

void ModifyConfigExtraRequest::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool ModifyConfigExtraRequest::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

string ModifyConfigExtraRequest::GetTopicName() const
{
    return m_topicName;
}

void ModifyConfigExtraRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ModifyConfigExtraRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string ModifyConfigExtraRequest::GetAdvancedConfig() const
{
    return m_advancedConfig;
}

void ModifyConfigExtraRequest::SetAdvancedConfig(const string& _advancedConfig)
{
    m_advancedConfig = _advancedConfig;
    m_advancedConfigHasBeenSet = true;
}

bool ModifyConfigExtraRequest::AdvancedConfigHasBeenSet() const
{
    return m_advancedConfigHasBeenSet;
}


