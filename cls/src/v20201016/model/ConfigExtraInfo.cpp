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

#include <tencentcloud/cls/v20201016/model/ConfigExtraInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ConfigExtraInfo::ConfigExtraInfo() :
    m_configExtraIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_hostFileHasBeenSet(false),
    m_containerFileHasBeenSet(false),
    m_containerStdoutHasBeenSet(false),
    m_logFormatHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_extractRuleHasBeenSet(false),
    m_excludePathsHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_userDefineRuleHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_configFlagHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_collectInfosHasBeenSet(false),
    m_advancedConfigHasBeenSet(false)
{
}

CoreInternalOutcome ConfigExtraInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigExtraId") && !value["ConfigExtraId"].IsNull())
    {
        if (!value["ConfigExtraId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.ConfigExtraId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configExtraId = string(value["ConfigExtraId"].GetString());
        m_configExtraIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("HostFile") && !value["HostFile"].IsNull())
    {
        if (!value["HostFile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.HostFile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostFile.Deserialize(value["HostFile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostFileHasBeenSet = true;
    }

    if (value.HasMember("ContainerFile") && !value["ContainerFile"].IsNull())
    {
        if (!value["ContainerFile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.ContainerFile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_containerFile.Deserialize(value["ContainerFile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_containerFileHasBeenSet = true;
    }

    if (value.HasMember("ContainerStdout") && !value["ContainerStdout"].IsNull())
    {
        if (!value["ContainerStdout"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.ContainerStdout` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_containerStdout.Deserialize(value["ContainerStdout"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_containerStdoutHasBeenSet = true;
    }

    if (value.HasMember("LogFormat") && !value["LogFormat"].IsNull())
    {
        if (!value["LogFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.LogFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logFormat = string(value["LogFormat"].GetString());
        m_logFormatHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("ExtractRule") && !value["ExtractRule"].IsNull())
    {
        if (!value["ExtractRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.ExtractRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extractRule.Deserialize(value["ExtractRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extractRuleHasBeenSet = true;
    }

    if (value.HasMember("ExcludePaths") && !value["ExcludePaths"].IsNull())
    {
        if (!value["ExcludePaths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.ExcludePaths` is not array type"));

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

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UserDefineRule") && !value["UserDefineRule"].IsNull())
    {
        if (!value["UserDefineRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.UserDefineRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDefineRule = string(value["UserDefineRule"].GetString());
        m_userDefineRuleHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigFlag") && !value["ConfigFlag"].IsNull())
    {
        if (!value["ConfigFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.ConfigFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configFlag = string(value["ConfigFlag"].GetString());
        m_configFlagHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("LogsetName") && !value["LogsetName"].IsNull())
    {
        if (!value["LogsetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.LogsetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetName = string(value["LogsetName"].GetString());
        m_logsetNameHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("CollectInfos") && !value["CollectInfos"].IsNull())
    {
        if (!value["CollectInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.CollectInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["CollectInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CollectInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_collectInfos.push_back(item);
        }
        m_collectInfosHasBeenSet = true;
    }

    if (value.HasMember("AdvancedConfig") && !value["AdvancedConfig"].IsNull())
    {
        if (!value["AdvancedConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigExtraInfo.AdvancedConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_advancedConfig = string(value["AdvancedConfig"].GetString());
        m_advancedConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigExtraInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configExtraIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigExtraId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configExtraId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_hostFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostFile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_containerFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_containerFile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_containerStdoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerStdout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_containerStdout.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_logFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logFormat.c_str(), allocator).Move(), allocator);
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

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userDefineRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDefineRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDefineRule.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_configFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_collectInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CollectInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_collectInfos.begin(); itr != m_collectInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_advancedConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_advancedConfig.c_str(), allocator).Move(), allocator);
    }

}


string ConfigExtraInfo::GetConfigExtraId() const
{
    return m_configExtraId;
}

void ConfigExtraInfo::SetConfigExtraId(const string& _configExtraId)
{
    m_configExtraId = _configExtraId;
    m_configExtraIdHasBeenSet = true;
}

bool ConfigExtraInfo::ConfigExtraIdHasBeenSet() const
{
    return m_configExtraIdHasBeenSet;
}

string ConfigExtraInfo::GetName() const
{
    return m_name;
}

void ConfigExtraInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConfigExtraInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ConfigExtraInfo::GetTopicId() const
{
    return m_topicId;
}

void ConfigExtraInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ConfigExtraInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ConfigExtraInfo::GetType() const
{
    return m_type;
}

void ConfigExtraInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ConfigExtraInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

HostFileInfo ConfigExtraInfo::GetHostFile() const
{
    return m_hostFile;
}

void ConfigExtraInfo::SetHostFile(const HostFileInfo& _hostFile)
{
    m_hostFile = _hostFile;
    m_hostFileHasBeenSet = true;
}

bool ConfigExtraInfo::HostFileHasBeenSet() const
{
    return m_hostFileHasBeenSet;
}

ContainerFileInfo ConfigExtraInfo::GetContainerFile() const
{
    return m_containerFile;
}

void ConfigExtraInfo::SetContainerFile(const ContainerFileInfo& _containerFile)
{
    m_containerFile = _containerFile;
    m_containerFileHasBeenSet = true;
}

bool ConfigExtraInfo::ContainerFileHasBeenSet() const
{
    return m_containerFileHasBeenSet;
}

ContainerStdoutInfo ConfigExtraInfo::GetContainerStdout() const
{
    return m_containerStdout;
}

void ConfigExtraInfo::SetContainerStdout(const ContainerStdoutInfo& _containerStdout)
{
    m_containerStdout = _containerStdout;
    m_containerStdoutHasBeenSet = true;
}

bool ConfigExtraInfo::ContainerStdoutHasBeenSet() const
{
    return m_containerStdoutHasBeenSet;
}

string ConfigExtraInfo::GetLogFormat() const
{
    return m_logFormat;
}

void ConfigExtraInfo::SetLogFormat(const string& _logFormat)
{
    m_logFormat = _logFormat;
    m_logFormatHasBeenSet = true;
}

bool ConfigExtraInfo::LogFormatHasBeenSet() const
{
    return m_logFormatHasBeenSet;
}

string ConfigExtraInfo::GetLogType() const
{
    return m_logType;
}

void ConfigExtraInfo::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool ConfigExtraInfo::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

ExtractRuleInfo ConfigExtraInfo::GetExtractRule() const
{
    return m_extractRule;
}

void ConfigExtraInfo::SetExtractRule(const ExtractRuleInfo& _extractRule)
{
    m_extractRule = _extractRule;
    m_extractRuleHasBeenSet = true;
}

bool ConfigExtraInfo::ExtractRuleHasBeenSet() const
{
    return m_extractRuleHasBeenSet;
}

vector<ExcludePathInfo> ConfigExtraInfo::GetExcludePaths() const
{
    return m_excludePaths;
}

void ConfigExtraInfo::SetExcludePaths(const vector<ExcludePathInfo>& _excludePaths)
{
    m_excludePaths = _excludePaths;
    m_excludePathsHasBeenSet = true;
}

bool ConfigExtraInfo::ExcludePathsHasBeenSet() const
{
    return m_excludePathsHasBeenSet;
}

string ConfigExtraInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ConfigExtraInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ConfigExtraInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ConfigExtraInfo::GetCreateTime() const
{
    return m_createTime;
}

void ConfigExtraInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ConfigExtraInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ConfigExtraInfo::GetUserDefineRule() const
{
    return m_userDefineRule;
}

void ConfigExtraInfo::SetUserDefineRule(const string& _userDefineRule)
{
    m_userDefineRule = _userDefineRule;
    m_userDefineRuleHasBeenSet = true;
}

bool ConfigExtraInfo::UserDefineRuleHasBeenSet() const
{
    return m_userDefineRuleHasBeenSet;
}

string ConfigExtraInfo::GetGroupId() const
{
    return m_groupId;
}

void ConfigExtraInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ConfigExtraInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ConfigExtraInfo::GetConfigFlag() const
{
    return m_configFlag;
}

void ConfigExtraInfo::SetConfigFlag(const string& _configFlag)
{
    m_configFlag = _configFlag;
    m_configFlagHasBeenSet = true;
}

bool ConfigExtraInfo::ConfigFlagHasBeenSet() const
{
    return m_configFlagHasBeenSet;
}

string ConfigExtraInfo::GetLogsetId() const
{
    return m_logsetId;
}

void ConfigExtraInfo::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool ConfigExtraInfo::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string ConfigExtraInfo::GetLogsetName() const
{
    return m_logsetName;
}

void ConfigExtraInfo::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool ConfigExtraInfo::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

string ConfigExtraInfo::GetTopicName() const
{
    return m_topicName;
}

void ConfigExtraInfo::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ConfigExtraInfo::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

vector<CollectInfo> ConfigExtraInfo::GetCollectInfos() const
{
    return m_collectInfos;
}

void ConfigExtraInfo::SetCollectInfos(const vector<CollectInfo>& _collectInfos)
{
    m_collectInfos = _collectInfos;
    m_collectInfosHasBeenSet = true;
}

bool ConfigExtraInfo::CollectInfosHasBeenSet() const
{
    return m_collectInfosHasBeenSet;
}

string ConfigExtraInfo::GetAdvancedConfig() const
{
    return m_advancedConfig;
}

void ConfigExtraInfo::SetAdvancedConfig(const string& _advancedConfig)
{
    m_advancedConfig = _advancedConfig;
    m_advancedConfigHasBeenSet = true;
}

bool ConfigExtraInfo::AdvancedConfigHasBeenSet() const
{
    return m_advancedConfigHasBeenSet;
}

