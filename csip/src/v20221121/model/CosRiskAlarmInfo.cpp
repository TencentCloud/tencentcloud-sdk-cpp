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

#include <tencentcloud/csip/v20221121/model/CosRiskAlarmInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosRiskAlarmInfo::CosRiskAlarmInfo() :
    m_policyTypeHasBeenSet(false),
    m_policyTypeNameHasBeenSet(false),
    m_policyCountHasBeenSet(false)
{
}

CoreInternalOutcome CosRiskAlarmInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskAlarmInfo.PolicyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = value["PolicyType"].GetInt64();
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyTypeName") && !value["PolicyTypeName"].IsNull())
    {
        if (!value["PolicyTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskAlarmInfo.PolicyTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyTypeName = string(value["PolicyTypeName"].GetString());
        m_policyTypeNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyCount") && !value["PolicyCount"].IsNull())
    {
        if (!value["PolicyCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskAlarmInfo.PolicyCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyCount = value["PolicyCount"].GetInt64();
        m_policyCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosRiskAlarmInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyType, allocator);
    }

    if (m_policyTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyCount, allocator);
    }

}


int64_t CosRiskAlarmInfo::GetPolicyType() const
{
    return m_policyType;
}

void CosRiskAlarmInfo::SetPolicyType(const int64_t& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool CosRiskAlarmInfo::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

string CosRiskAlarmInfo::GetPolicyTypeName() const
{
    return m_policyTypeName;
}

void CosRiskAlarmInfo::SetPolicyTypeName(const string& _policyTypeName)
{
    m_policyTypeName = _policyTypeName;
    m_policyTypeNameHasBeenSet = true;
}

bool CosRiskAlarmInfo::PolicyTypeNameHasBeenSet() const
{
    return m_policyTypeNameHasBeenSet;
}

int64_t CosRiskAlarmInfo::GetPolicyCount() const
{
    return m_policyCount;
}

void CosRiskAlarmInfo::SetPolicyCount(const int64_t& _policyCount)
{
    m_policyCount = _policyCount;
    m_policyCountHasBeenSet = true;
}

bool CosRiskAlarmInfo::PolicyCountHasBeenSet() const
{
    return m_policyCountHasBeenSet;
}

