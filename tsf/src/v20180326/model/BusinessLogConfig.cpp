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

#include <tencentcloud/tsf/v20180326/model/BusinessLogConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

BusinessLogConfig::BusinessLogConfig() :
    m_configIdHasBeenSet(false),
    m_configNameHasBeenSet(false),
    m_configPathHasBeenSet(false),
    m_configDescHasBeenSet(false),
    m_configTagsHasBeenSet(false),
    m_configPipelineHasBeenSet(false),
    m_configCreateTimeHasBeenSet(false),
    m_configUpdateTimeHasBeenSet(false),
    m_configSchemaHasBeenSet(false),
    m_configAssociatedGroupsHasBeenSet(false),
    m_configAssociatedGroupListHasBeenSet(false),
    m_filebeatConfigEnableHasBeenSet(false),
    m_filebeatCloseTimeoutHasBeenSet(false)
{
}

CoreInternalOutcome BusinessLogConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigId") && !value["ConfigId"].IsNull())
    {
        if (!value["ConfigId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfig.ConfigId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configId = string(value["ConfigId"].GetString());
        m_configIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigName") && !value["ConfigName"].IsNull())
    {
        if (!value["ConfigName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfig.ConfigName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configName = string(value["ConfigName"].GetString());
        m_configNameHasBeenSet = true;
    }

    if (value.HasMember("ConfigPath") && !value["ConfigPath"].IsNull())
    {
        if (!value["ConfigPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfig.ConfigPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configPath = string(value["ConfigPath"].GetString());
        m_configPathHasBeenSet = true;
    }

    if (value.HasMember("ConfigDesc") && !value["ConfigDesc"].IsNull())
    {
        if (!value["ConfigDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfig.ConfigDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configDesc = string(value["ConfigDesc"].GetString());
        m_configDescHasBeenSet = true;
    }

    if (value.HasMember("ConfigTags") && !value["ConfigTags"].IsNull())
    {
        if (!value["ConfigTags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfig.ConfigTags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configTags = string(value["ConfigTags"].GetString());
        m_configTagsHasBeenSet = true;
    }

    if (value.HasMember("ConfigPipeline") && !value["ConfigPipeline"].IsNull())
    {
        if (!value["ConfigPipeline"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfig.ConfigPipeline` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configPipeline = string(value["ConfigPipeline"].GetString());
        m_configPipelineHasBeenSet = true;
    }

    if (value.HasMember("ConfigCreateTime") && !value["ConfigCreateTime"].IsNull())
    {
        if (!value["ConfigCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfig.ConfigCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configCreateTime = string(value["ConfigCreateTime"].GetString());
        m_configCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("ConfigUpdateTime") && !value["ConfigUpdateTime"].IsNull())
    {
        if (!value["ConfigUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfig.ConfigUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configUpdateTime = string(value["ConfigUpdateTime"].GetString());
        m_configUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("ConfigSchema") && !value["ConfigSchema"].IsNull())
    {
        if (!value["ConfigSchema"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfig.ConfigSchema` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_configSchema.Deserialize(value["ConfigSchema"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configSchemaHasBeenSet = true;
    }

    if (value.HasMember("ConfigAssociatedGroups") && !value["ConfigAssociatedGroups"].IsNull())
    {
        if (!value["ConfigAssociatedGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfig.ConfigAssociatedGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigAssociatedGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BusinesLogConfigAssociatedGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configAssociatedGroups.push_back(item);
        }
        m_configAssociatedGroupsHasBeenSet = true;
    }

    if (value.HasMember("ConfigAssociatedGroupList") && !value["ConfigAssociatedGroupList"].IsNull())
    {
        if (!value["ConfigAssociatedGroupList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfig.ConfigAssociatedGroupList` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigAssociatedGroupList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BusinessLogConfigAssociatedGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configAssociatedGroupList.push_back(item);
        }
        m_configAssociatedGroupListHasBeenSet = true;
    }

    if (value.HasMember("FilebeatConfigEnable") && !value["FilebeatConfigEnable"].IsNull())
    {
        if (!value["FilebeatConfigEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfig.FilebeatConfigEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_filebeatConfigEnable = value["FilebeatConfigEnable"].GetBool();
        m_filebeatConfigEnableHasBeenSet = true;
    }

    if (value.HasMember("FilebeatCloseTimeout") && !value["FilebeatCloseTimeout"].IsNull())
    {
        if (!value["FilebeatCloseTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfig.FilebeatCloseTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_filebeatCloseTimeout = value["FilebeatCloseTimeout"].GetInt64();
        m_filebeatCloseTimeoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BusinessLogConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configId.c_str(), allocator).Move(), allocator);
    }

    if (m_configNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configName.c_str(), allocator).Move(), allocator);
    }

    if (m_configPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configPath.c_str(), allocator).Move(), allocator);
    }

    if (m_configDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_configTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configTags.c_str(), allocator).Move(), allocator);
    }

    if (m_configPipelineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigPipeline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configPipeline.c_str(), allocator).Move(), allocator);
    }

    if (m_configCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_configUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_configSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_configSchema.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_configAssociatedGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigAssociatedGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configAssociatedGroups.begin(); itr != m_configAssociatedGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_configAssociatedGroupListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigAssociatedGroupList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configAssociatedGroupList.begin(); itr != m_configAssociatedGroupList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_filebeatConfigEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilebeatConfigEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filebeatConfigEnable, allocator);
    }

    if (m_filebeatCloseTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilebeatCloseTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filebeatCloseTimeout, allocator);
    }

}


string BusinessLogConfig::GetConfigId() const
{
    return m_configId;
}

void BusinessLogConfig::SetConfigId(const string& _configId)
{
    m_configId = _configId;
    m_configIdHasBeenSet = true;
}

bool BusinessLogConfig::ConfigIdHasBeenSet() const
{
    return m_configIdHasBeenSet;
}

string BusinessLogConfig::GetConfigName() const
{
    return m_configName;
}

void BusinessLogConfig::SetConfigName(const string& _configName)
{
    m_configName = _configName;
    m_configNameHasBeenSet = true;
}

bool BusinessLogConfig::ConfigNameHasBeenSet() const
{
    return m_configNameHasBeenSet;
}

string BusinessLogConfig::GetConfigPath() const
{
    return m_configPath;
}

void BusinessLogConfig::SetConfigPath(const string& _configPath)
{
    m_configPath = _configPath;
    m_configPathHasBeenSet = true;
}

bool BusinessLogConfig::ConfigPathHasBeenSet() const
{
    return m_configPathHasBeenSet;
}

string BusinessLogConfig::GetConfigDesc() const
{
    return m_configDesc;
}

void BusinessLogConfig::SetConfigDesc(const string& _configDesc)
{
    m_configDesc = _configDesc;
    m_configDescHasBeenSet = true;
}

bool BusinessLogConfig::ConfigDescHasBeenSet() const
{
    return m_configDescHasBeenSet;
}

string BusinessLogConfig::GetConfigTags() const
{
    return m_configTags;
}

void BusinessLogConfig::SetConfigTags(const string& _configTags)
{
    m_configTags = _configTags;
    m_configTagsHasBeenSet = true;
}

bool BusinessLogConfig::ConfigTagsHasBeenSet() const
{
    return m_configTagsHasBeenSet;
}

string BusinessLogConfig::GetConfigPipeline() const
{
    return m_configPipeline;
}

void BusinessLogConfig::SetConfigPipeline(const string& _configPipeline)
{
    m_configPipeline = _configPipeline;
    m_configPipelineHasBeenSet = true;
}

bool BusinessLogConfig::ConfigPipelineHasBeenSet() const
{
    return m_configPipelineHasBeenSet;
}

string BusinessLogConfig::GetConfigCreateTime() const
{
    return m_configCreateTime;
}

void BusinessLogConfig::SetConfigCreateTime(const string& _configCreateTime)
{
    m_configCreateTime = _configCreateTime;
    m_configCreateTimeHasBeenSet = true;
}

bool BusinessLogConfig::ConfigCreateTimeHasBeenSet() const
{
    return m_configCreateTimeHasBeenSet;
}

string BusinessLogConfig::GetConfigUpdateTime() const
{
    return m_configUpdateTime;
}

void BusinessLogConfig::SetConfigUpdateTime(const string& _configUpdateTime)
{
    m_configUpdateTime = _configUpdateTime;
    m_configUpdateTimeHasBeenSet = true;
}

bool BusinessLogConfig::ConfigUpdateTimeHasBeenSet() const
{
    return m_configUpdateTimeHasBeenSet;
}

BusinessLogConfigSchema BusinessLogConfig::GetConfigSchema() const
{
    return m_configSchema;
}

void BusinessLogConfig::SetConfigSchema(const BusinessLogConfigSchema& _configSchema)
{
    m_configSchema = _configSchema;
    m_configSchemaHasBeenSet = true;
}

bool BusinessLogConfig::ConfigSchemaHasBeenSet() const
{
    return m_configSchemaHasBeenSet;
}

vector<BusinesLogConfigAssociatedGroup> BusinessLogConfig::GetConfigAssociatedGroups() const
{
    return m_configAssociatedGroups;
}

void BusinessLogConfig::SetConfigAssociatedGroups(const vector<BusinesLogConfigAssociatedGroup>& _configAssociatedGroups)
{
    m_configAssociatedGroups = _configAssociatedGroups;
    m_configAssociatedGroupsHasBeenSet = true;
}

bool BusinessLogConfig::ConfigAssociatedGroupsHasBeenSet() const
{
    return m_configAssociatedGroupsHasBeenSet;
}

vector<BusinessLogConfigAssociatedGroup> BusinessLogConfig::GetConfigAssociatedGroupList() const
{
    return m_configAssociatedGroupList;
}

void BusinessLogConfig::SetConfigAssociatedGroupList(const vector<BusinessLogConfigAssociatedGroup>& _configAssociatedGroupList)
{
    m_configAssociatedGroupList = _configAssociatedGroupList;
    m_configAssociatedGroupListHasBeenSet = true;
}

bool BusinessLogConfig::ConfigAssociatedGroupListHasBeenSet() const
{
    return m_configAssociatedGroupListHasBeenSet;
}

bool BusinessLogConfig::GetFilebeatConfigEnable() const
{
    return m_filebeatConfigEnable;
}

void BusinessLogConfig::SetFilebeatConfigEnable(const bool& _filebeatConfigEnable)
{
    m_filebeatConfigEnable = _filebeatConfigEnable;
    m_filebeatConfigEnableHasBeenSet = true;
}

bool BusinessLogConfig::FilebeatConfigEnableHasBeenSet() const
{
    return m_filebeatConfigEnableHasBeenSet;
}

int64_t BusinessLogConfig::GetFilebeatCloseTimeout() const
{
    return m_filebeatCloseTimeout;
}

void BusinessLogConfig::SetFilebeatCloseTimeout(const int64_t& _filebeatCloseTimeout)
{
    m_filebeatCloseTimeout = _filebeatCloseTimeout;
    m_filebeatCloseTimeoutHasBeenSet = true;
}

bool BusinessLogConfig::FilebeatCloseTimeoutHasBeenSet() const
{
    return m_filebeatCloseTimeoutHasBeenSet;
}

