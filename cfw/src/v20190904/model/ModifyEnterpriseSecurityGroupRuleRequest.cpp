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

#include <tencentcloud/cfw/v20190904/model/ModifyEnterpriseSecurityGroupRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyEnterpriseSecurityGroupRuleRequest::ModifyEnterpriseSecurityGroupRuleRequest() :
    m_ruleUuidHasBeenSet(false),
    m_modifyTypeHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

string ModifyEnterpriseSecurityGroupRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleUuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleUuid, allocator);
    }

    if (m_modifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_modifyType, allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_data.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyEnterpriseSecurityGroupRuleRequest::GetRuleUuid() const
{
    return m_ruleUuid;
}

void ModifyEnterpriseSecurityGroupRuleRequest::SetRuleUuid(const uint64_t& _ruleUuid)
{
    m_ruleUuid = _ruleUuid;
    m_ruleUuidHasBeenSet = true;
}

bool ModifyEnterpriseSecurityGroupRuleRequest::RuleUuidHasBeenSet() const
{
    return m_ruleUuidHasBeenSet;
}

uint64_t ModifyEnterpriseSecurityGroupRuleRequest::GetModifyType() const
{
    return m_modifyType;
}

void ModifyEnterpriseSecurityGroupRuleRequest::SetModifyType(const uint64_t& _modifyType)
{
    m_modifyType = _modifyType;
    m_modifyTypeHasBeenSet = true;
}

bool ModifyEnterpriseSecurityGroupRuleRequest::ModifyTypeHasBeenSet() const
{
    return m_modifyTypeHasBeenSet;
}

SecurityGroupRule ModifyEnterpriseSecurityGroupRuleRequest::GetData() const
{
    return m_data;
}

void ModifyEnterpriseSecurityGroupRuleRequest::SetData(const SecurityGroupRule& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool ModifyEnterpriseSecurityGroupRuleRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

uint64_t ModifyEnterpriseSecurityGroupRuleRequest::GetEnable() const
{
    return m_enable;
}

void ModifyEnterpriseSecurityGroupRuleRequest::SetEnable(const uint64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyEnterpriseSecurityGroupRuleRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}


