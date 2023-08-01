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

#include <tencentcloud/oceanus/v20190422/model/NodeConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

NodeConfig::NodeConfig() :
    m_idHasBeenSet(false),
    m_parallelismHasBeenSet(false),
    m_slotSharingGroupHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_stateTTLHasBeenSet(false)
{
}

CoreInternalOutcome NodeConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeConfig.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Parallelism") && !value["Parallelism"].IsNull())
    {
        if (!value["Parallelism"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NodeConfig.Parallelism` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_parallelism = value["Parallelism"].GetInt64();
        m_parallelismHasBeenSet = true;
    }

    if (value.HasMember("SlotSharingGroup") && !value["SlotSharingGroup"].IsNull())
    {
        if (!value["SlotSharingGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeConfig.SlotSharingGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_slotSharingGroup = string(value["SlotSharingGroup"].GetString());
        m_slotSharingGroupHasBeenSet = true;
    }

    if (value.HasMember("Configuration") && !value["Configuration"].IsNull())
    {
        if (!value["Configuration"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NodeConfig.Configuration` is not array type"));

        const rapidjson::Value &tmpValue = value["Configuration"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Property item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configuration.push_back(item);
        }
        m_configurationHasBeenSet = true;
    }

    if (value.HasMember("StateTTL") && !value["StateTTL"].IsNull())
    {
        if (!value["StateTTL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeConfig.StateTTL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stateTTL = string(value["StateTTL"].GetString());
        m_stateTTLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_parallelismHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parallelism";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_parallelism, allocator);
    }

    if (m_slotSharingGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlotSharingGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_slotSharingGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_configurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configuration.begin(); itr != m_configuration.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_stateTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StateTTL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stateTTL.c_str(), allocator).Move(), allocator);
    }

}


int64_t NodeConfig::GetId() const
{
    return m_id;
}

void NodeConfig::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NodeConfig::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t NodeConfig::GetParallelism() const
{
    return m_parallelism;
}

void NodeConfig::SetParallelism(const int64_t& _parallelism)
{
    m_parallelism = _parallelism;
    m_parallelismHasBeenSet = true;
}

bool NodeConfig::ParallelismHasBeenSet() const
{
    return m_parallelismHasBeenSet;
}

string NodeConfig::GetSlotSharingGroup() const
{
    return m_slotSharingGroup;
}

void NodeConfig::SetSlotSharingGroup(const string& _slotSharingGroup)
{
    m_slotSharingGroup = _slotSharingGroup;
    m_slotSharingGroupHasBeenSet = true;
}

bool NodeConfig::SlotSharingGroupHasBeenSet() const
{
    return m_slotSharingGroupHasBeenSet;
}

vector<Property> NodeConfig::GetConfiguration() const
{
    return m_configuration;
}

void NodeConfig::SetConfiguration(const vector<Property>& _configuration)
{
    m_configuration = _configuration;
    m_configurationHasBeenSet = true;
}

bool NodeConfig::ConfigurationHasBeenSet() const
{
    return m_configurationHasBeenSet;
}

string NodeConfig::GetStateTTL() const
{
    return m_stateTTL;
}

void NodeConfig::SetStateTTL(const string& _stateTTL)
{
    m_stateTTL = _stateTTL;
    m_stateTTLHasBeenSet = true;
}

bool NodeConfig::StateTTLHasBeenSet() const
{
    return m_stateTTLHasBeenSet;
}

