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

#include <tencentcloud/teo/v20220106/model/ModifyDDoSPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

ModifyDDoSPolicyRequest::ModifyDDoSPolicyRequest() :
    m_policyIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_ddosRuleHasBeenSet(false)
{
}

string ModifyDDoSPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_ddosRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DdosRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ddosRule.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyDDoSPolicyRequest::GetPolicyId() const
{
    return m_policyId;
}

void ModifyDDoSPolicyRequest::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ModifyDDoSPolicyRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string ModifyDDoSPolicyRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyDDoSPolicyRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyDDoSPolicyRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

DdosRule ModifyDDoSPolicyRequest::GetDdosRule() const
{
    return m_ddosRule;
}

void ModifyDDoSPolicyRequest::SetDdosRule(const DdosRule& _ddosRule)
{
    m_ddosRule = _ddosRule;
    m_ddosRuleHasBeenSet = true;
}

bool ModifyDDoSPolicyRequest::DdosRuleHasBeenSet() const
{
    return m_ddosRuleHasBeenSet;
}


