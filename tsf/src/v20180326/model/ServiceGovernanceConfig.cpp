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

#include <tencentcloud/tsf/v20180326/model/ServiceGovernanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ServiceGovernanceConfig::ServiceGovernanceConfig() :
    m_enableGovernanceHasBeenSet(false),
    m_governanceTypeHasBeenSet(false),
    m_exclusiveInstancesHasBeenSet(false)
{
}

CoreInternalOutcome ServiceGovernanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableGovernance") && !value["EnableGovernance"].IsNull())
    {
        if (!value["EnableGovernance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGovernanceConfig.EnableGovernance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableGovernance = value["EnableGovernance"].GetBool();
        m_enableGovernanceHasBeenSet = true;
    }

    if (value.HasMember("GovernanceType") && !value["GovernanceType"].IsNull())
    {
        if (!value["GovernanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceGovernanceConfig.GovernanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_governanceType = string(value["GovernanceType"].GetString());
        m_governanceTypeHasBeenSet = true;
    }

    if (value.HasMember("ExclusiveInstances") && !value["ExclusiveInstances"].IsNull())
    {
        if (!value["ExclusiveInstances"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceGovernanceConfig.ExclusiveInstances` is not array type"));

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


    return CoreInternalOutcome(true);
}

void ServiceGovernanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableGovernanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableGovernance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableGovernance, allocator);
    }

    if (m_governanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GovernanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_governanceType.c_str(), allocator).Move(), allocator);
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

}


bool ServiceGovernanceConfig::GetEnableGovernance() const
{
    return m_enableGovernance;
}

void ServiceGovernanceConfig::SetEnableGovernance(const bool& _enableGovernance)
{
    m_enableGovernance = _enableGovernance;
    m_enableGovernanceHasBeenSet = true;
}

bool ServiceGovernanceConfig::EnableGovernanceHasBeenSet() const
{
    return m_enableGovernanceHasBeenSet;
}

string ServiceGovernanceConfig::GetGovernanceType() const
{
    return m_governanceType;
}

void ServiceGovernanceConfig::SetGovernanceType(const string& _governanceType)
{
    m_governanceType = _governanceType;
    m_governanceTypeHasBeenSet = true;
}

bool ServiceGovernanceConfig::GovernanceTypeHasBeenSet() const
{
    return m_governanceTypeHasBeenSet;
}

vector<ExclusiveInstance> ServiceGovernanceConfig::GetExclusiveInstances() const
{
    return m_exclusiveInstances;
}

void ServiceGovernanceConfig::SetExclusiveInstances(const vector<ExclusiveInstance>& _exclusiveInstances)
{
    m_exclusiveInstances = _exclusiveInstances;
    m_exclusiveInstancesHasBeenSet = true;
}

bool ServiceGovernanceConfig::ExclusiveInstancesHasBeenSet() const
{
    return m_exclusiveInstancesHasBeenSet;
}

