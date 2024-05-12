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

#include <tencentcloud/tke/v20220501/model/MachineSetScaling.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

MachineSetScaling::MachineSetScaling() :
    m_minReplicasHasBeenSet(false),
    m_maxReplicasHasBeenSet(false),
    m_createPolicyHasBeenSet(false)
{
}

CoreInternalOutcome MachineSetScaling::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinReplicas") && !value["MinReplicas"].IsNull())
    {
        if (!value["MinReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSetScaling.MinReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minReplicas = value["MinReplicas"].GetInt64();
        m_minReplicasHasBeenSet = true;
    }

    if (value.HasMember("MaxReplicas") && !value["MaxReplicas"].IsNull())
    {
        if (!value["MaxReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSetScaling.MaxReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplicas = value["MaxReplicas"].GetInt64();
        m_maxReplicasHasBeenSet = true;
    }

    if (value.HasMember("CreatePolicy") && !value["CreatePolicy"].IsNull())
    {
        if (!value["CreatePolicy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MachineSetScaling.CreatePolicy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createPolicy = string(value["CreatePolicy"].GetString());
        m_createPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MachineSetScaling::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minReplicas, allocator);
    }

    if (m_maxReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplicas, allocator);
    }

    if (m_createPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatePolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createPolicy.c_str(), allocator).Move(), allocator);
    }

}


int64_t MachineSetScaling::GetMinReplicas() const
{
    return m_minReplicas;
}

void MachineSetScaling::SetMinReplicas(const int64_t& _minReplicas)
{
    m_minReplicas = _minReplicas;
    m_minReplicasHasBeenSet = true;
}

bool MachineSetScaling::MinReplicasHasBeenSet() const
{
    return m_minReplicasHasBeenSet;
}

int64_t MachineSetScaling::GetMaxReplicas() const
{
    return m_maxReplicas;
}

void MachineSetScaling::SetMaxReplicas(const int64_t& _maxReplicas)
{
    m_maxReplicas = _maxReplicas;
    m_maxReplicasHasBeenSet = true;
}

bool MachineSetScaling::MaxReplicasHasBeenSet() const
{
    return m_maxReplicasHasBeenSet;
}

string MachineSetScaling::GetCreatePolicy() const
{
    return m_createPolicy;
}

void MachineSetScaling::SetCreatePolicy(const string& _createPolicy)
{
    m_createPolicy = _createPolicy;
    m_createPolicyHasBeenSet = true;
}

bool MachineSetScaling::CreatePolicyHasBeenSet() const
{
    return m_createPolicyHasBeenSet;
}

