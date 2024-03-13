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

#include <tencentcloud/cls/v20201016/model/CreateConfigExtraRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateConfigExtraRequest::CreateConfigExtraRequest() :
    m_nameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_configFlagHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_hostFileHasBeenSet(false),
    m_containerFileHasBeenSet(false),
    m_containerStdoutHasBeenSet(false),
    m_logFormatHasBeenSet(false),
    m_extractRuleHasBeenSet(false),
    m_excludePathsHasBeenSet(false),
    m_userDefineRuleHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_collectInfosHasBeenSet(false),
    m_advancedConfigHasBeenSet(false)
{
}

string CreateConfigExtraRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
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

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIds.begin(); itr != m_groupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_collectInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_collectInfos.begin(); itr != m_collectInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string CreateConfigExtraRequest::GetName() const
{
    return m_name;
}

void CreateConfigExtraRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateConfigExtraRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateConfigExtraRequest::GetTopicId() const
{
    return m_topicId;
}

void CreateConfigExtraRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CreateConfigExtraRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CreateConfigExtraRequest::GetType() const
{
    return m_type;
}

void CreateConfigExtraRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateConfigExtraRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateConfigExtraRequest::GetLogType() const
{
    return m_logType;
}

void CreateConfigExtraRequest::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool CreateConfigExtraRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string CreateConfigExtraRequest::GetConfigFlag() const
{
    return m_configFlag;
}

void CreateConfigExtraRequest::SetConfigFlag(const string& _configFlag)
{
    m_configFlag = _configFlag;
    m_configFlagHasBeenSet = true;
}

bool CreateConfigExtraRequest::ConfigFlagHasBeenSet() const
{
    return m_configFlagHasBeenSet;
}

string CreateConfigExtraRequest::GetLogsetId() const
{
    return m_logsetId;
}

void CreateConfigExtraRequest::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool CreateConfigExtraRequest::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string CreateConfigExtraRequest::GetLogsetName() const
{
    return m_logsetName;
}

void CreateConfigExtraRequest::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool CreateConfigExtraRequest::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

string CreateConfigExtraRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateConfigExtraRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateConfigExtraRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

HostFileInfo CreateConfigExtraRequest::GetHostFile() const
{
    return m_hostFile;
}

void CreateConfigExtraRequest::SetHostFile(const HostFileInfo& _hostFile)
{
    m_hostFile = _hostFile;
    m_hostFileHasBeenSet = true;
}

bool CreateConfigExtraRequest::HostFileHasBeenSet() const
{
    return m_hostFileHasBeenSet;
}

ContainerFileInfo CreateConfigExtraRequest::GetContainerFile() const
{
    return m_containerFile;
}

void CreateConfigExtraRequest::SetContainerFile(const ContainerFileInfo& _containerFile)
{
    m_containerFile = _containerFile;
    m_containerFileHasBeenSet = true;
}

bool CreateConfigExtraRequest::ContainerFileHasBeenSet() const
{
    return m_containerFileHasBeenSet;
}

ContainerStdoutInfo CreateConfigExtraRequest::GetContainerStdout() const
{
    return m_containerStdout;
}

void CreateConfigExtraRequest::SetContainerStdout(const ContainerStdoutInfo& _containerStdout)
{
    m_containerStdout = _containerStdout;
    m_containerStdoutHasBeenSet = true;
}

bool CreateConfigExtraRequest::ContainerStdoutHasBeenSet() const
{
    return m_containerStdoutHasBeenSet;
}

string CreateConfigExtraRequest::GetLogFormat() const
{
    return m_logFormat;
}

void CreateConfigExtraRequest::SetLogFormat(const string& _logFormat)
{
    m_logFormat = _logFormat;
    m_logFormatHasBeenSet = true;
}

bool CreateConfigExtraRequest::LogFormatHasBeenSet() const
{
    return m_logFormatHasBeenSet;
}

ExtractRuleInfo CreateConfigExtraRequest::GetExtractRule() const
{
    return m_extractRule;
}

void CreateConfigExtraRequest::SetExtractRule(const ExtractRuleInfo& _extractRule)
{
    m_extractRule = _extractRule;
    m_extractRuleHasBeenSet = true;
}

bool CreateConfigExtraRequest::ExtractRuleHasBeenSet() const
{
    return m_extractRuleHasBeenSet;
}

vector<ExcludePathInfo> CreateConfigExtraRequest::GetExcludePaths() const
{
    return m_excludePaths;
}

void CreateConfigExtraRequest::SetExcludePaths(const vector<ExcludePathInfo>& _excludePaths)
{
    m_excludePaths = _excludePaths;
    m_excludePathsHasBeenSet = true;
}

bool CreateConfigExtraRequest::ExcludePathsHasBeenSet() const
{
    return m_excludePathsHasBeenSet;
}

string CreateConfigExtraRequest::GetUserDefineRule() const
{
    return m_userDefineRule;
}

void CreateConfigExtraRequest::SetUserDefineRule(const string& _userDefineRule)
{
    m_userDefineRule = _userDefineRule;
    m_userDefineRuleHasBeenSet = true;
}

bool CreateConfigExtraRequest::UserDefineRuleHasBeenSet() const
{
    return m_userDefineRuleHasBeenSet;
}

string CreateConfigExtraRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateConfigExtraRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateConfigExtraRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<string> CreateConfigExtraRequest::GetGroupIds() const
{
    return m_groupIds;
}

void CreateConfigExtraRequest::SetGroupIds(const vector<string>& _groupIds)
{
    m_groupIds = _groupIds;
    m_groupIdsHasBeenSet = true;
}

bool CreateConfigExtraRequest::GroupIdsHasBeenSet() const
{
    return m_groupIdsHasBeenSet;
}

vector<CollectInfo> CreateConfigExtraRequest::GetCollectInfos() const
{
    return m_collectInfos;
}

void CreateConfigExtraRequest::SetCollectInfos(const vector<CollectInfo>& _collectInfos)
{
    m_collectInfos = _collectInfos;
    m_collectInfosHasBeenSet = true;
}

bool CreateConfigExtraRequest::CollectInfosHasBeenSet() const
{
    return m_collectInfosHasBeenSet;
}

string CreateConfigExtraRequest::GetAdvancedConfig() const
{
    return m_advancedConfig;
}

void CreateConfigExtraRequest::SetAdvancedConfig(const string& _advancedConfig)
{
    m_advancedConfig = _advancedConfig;
    m_advancedConfigHasBeenSet = true;
}

bool CreateConfigExtraRequest::AdvancedConfigHasBeenSet() const
{
    return m_advancedConfigHasBeenSet;
}


