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

#include <tencentcloud/tsf/v20180326/model/ContainerGroupServiceGovernanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ContainerGroupServiceGovernanceConfig::ContainerGroupServiceGovernanceConfig() :
    m_enableGovernanceHasBeenSet(false),
    m_serviceConfigListHasBeenSet(false),
    m_exclusiveInstancesHasBeenSet(false),
    m_governanceTypeHasBeenSet(false)
{
}

CoreInternalOutcome ContainerGroupServiceGovernanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableGovernance") && !value["EnableGovernance"].IsNull())
    {
        if (!value["EnableGovernance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupServiceGovernanceConfig.EnableGovernance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableGovernance = value["EnableGovernance"].GetBool();
        m_enableGovernanceHasBeenSet = true;
    }

    if (value.HasMember("ServiceConfigList") && !value["ServiceConfigList"].IsNull())
    {
        if (!value["ServiceConfigList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerGroupServiceGovernanceConfig.ServiceConfigList` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceConfigList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceConfigList.push_back(item);
        }
        m_serviceConfigListHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveInstances") && !value["ExclusiveInstances"].IsNull())
    {
        if (!value["ExclusiveInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContainerGroupServiceGovernanceConfig.ExclusiveInstances` is not array type"));

        const rapidjson::Value &tmpValue = value["ExclusiveInstances"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExclusiveInstance item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_exclusiveInstances.push_back(item);
        }
        m_exclusiveInstancesHasBeenSet = true;
    }

    if (value.HasMember("GovernanceType") && !value["GovernanceType"].IsNull())
    {
        if (!value["GovernanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerGroupServiceGovernanceConfig.GovernanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_governanceType = string(value["GovernanceType"].GetString());
        m_governanceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerGroupServiceGovernanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableGovernanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableGovernance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableGovernance, allocator);
    }

    if (m_serviceConfigListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceConfigList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceConfigList.begin(); itr != m_serviceConfigList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_exclusiveInstancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExclusiveInstances";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_exclusiveInstances.begin(); itr != m_exclusiveInstances.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_governanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GovernanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_governanceType.c_str(), allocator).Move(), allocator);
    }

}


bool ContainerGroupServiceGovernanceConfig::GetEnableGovernance() const
{
    return m_enableGovernance;
}

void ContainerGroupServiceGovernanceConfig::SetEnableGovernance(const bool& _enableGovernance)
{
    m_enableGovernance = _enableGovernance;
    m_enableGovernanceHasBeenSet = true;
}

bool ContainerGroupServiceGovernanceConfig::EnableGovernanceHasBeenSet() const
{
    return m_enableGovernanceHasBeenSet;
}

vector<ServiceConfig> ContainerGroupServiceGovernanceConfig::GetServiceConfigList() const
{
    return m_serviceConfigList;
}

void ContainerGroupServiceGovernanceConfig::SetServiceConfigList(const vector<ServiceConfig>& _serviceConfigList)
{
    m_serviceConfigList = _serviceConfigList;
    m_serviceConfigListHasBeenSet = true;
}

bool ContainerGroupServiceGovernanceConfig::ServiceConfigListHasBeenSet() const
{
    return m_serviceConfigListHasBeenSet;
}

vector<ExclusiveInstance> ContainerGroupServiceGovernanceConfig::GetExclusiveInstances() const
{
    return m_exclusiveInstances;
}

void ContainerGroupServiceGovernanceConfig::SetExclusiveInstances(const vector<ExclusiveInstance>& _exclusiveInstances)
{
    m_exclusiveInstances = _exclusiveInstances;
    m_exclusiveInstancesHasBeenSet = true;
}

bool ContainerGroupServiceGovernanceConfig::ExclusiveInstancesHasBeenSet() const
{
    return m_exclusiveInstancesHasBeenSet;
}

string ContainerGroupServiceGovernanceConfig::GetGovernanceType() const
{
    return m_governanceType;
}

void ContainerGroupServiceGovernanceConfig::SetGovernanceType(const string& _governanceType)
{
    m_governanceType = _governanceType;
    m_governanceTypeHasBeenSet = true;
}

bool ContainerGroupServiceGovernanceConfig::GovernanceTypeHasBeenSet() const
{
    return m_governanceTypeHasBeenSet;
}

