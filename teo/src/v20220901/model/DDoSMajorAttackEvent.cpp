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

#include <tencentcloud/teo/v20220901/model/DDoSMajorAttackEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DDoSMajorAttackEvent::DDoSMajorAttackEvent() :
    m_policyIdHasBeenSet(false),
    m_attackMaxBandWidthHasBeenSet(false),
    m_attackTimeHasBeenSet(false)
{
}

CoreInternalOutcome DDoSMajorAttackEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSMajorAttackEvent.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("AttackMaxBandWidth") && !value["AttackMaxBandWidth"].IsNull())
    {
        if (!value["AttackMaxBandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSMajorAttackEvent.AttackMaxBandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackMaxBandWidth = value["AttackMaxBandWidth"].GetInt64();
        m_attackMaxBandWidthHasBeenSet = true;
    }

    if (value.HasMember("AttackTime") && !value["AttackTime"].IsNull())
    {
        if (!value["AttackTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSMajorAttackEvent.AttackTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackTime = value["AttackTime"].GetInt64();
        m_attackTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSMajorAttackEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_attackMaxBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackMaxBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackMaxBandWidth, allocator);
    }

    if (m_attackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackTime, allocator);
    }

}


int64_t DDoSMajorAttackEvent::GetPolicyId() const
{
    return m_policyId;
}

void DDoSMajorAttackEvent::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool DDoSMajorAttackEvent::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

int64_t DDoSMajorAttackEvent::GetAttackMaxBandWidth() const
{
    return m_attackMaxBandWidth;
}

void DDoSMajorAttackEvent::SetAttackMaxBandWidth(const int64_t& _attackMaxBandWidth)
{
    m_attackMaxBandWidth = _attackMaxBandWidth;
    m_attackMaxBandWidthHasBeenSet = true;
}

bool DDoSMajorAttackEvent::AttackMaxBandWidthHasBeenSet() const
{
    return m_attackMaxBandWidthHasBeenSet;
}

int64_t DDoSMajorAttackEvent::GetAttackTime() const
{
    return m_attackTime;
}

void DDoSMajorAttackEvent::SetAttackTime(const int64_t& _attackTime)
{
    m_attackTime = _attackTime;
    m_attackTimeHasBeenSet = true;
}

bool DDoSMajorAttackEvent::AttackTimeHasBeenSet() const
{
    return m_attackTimeHasBeenSet;
}

