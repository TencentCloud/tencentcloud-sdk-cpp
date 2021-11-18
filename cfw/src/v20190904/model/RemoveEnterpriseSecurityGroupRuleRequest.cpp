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

#include <tencentcloud/cfw/v20190904/model/RemoveEnterpriseSecurityGroupRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

RemoveEnterpriseSecurityGroupRuleRequest::RemoveEnterpriseSecurityGroupRuleRequest() :
    m_ruleUuidHasBeenSet(false),
    m_removeTypeHasBeenSet(false)
{
}

string RemoveEnterpriseSecurityGroupRuleRequest::ToJsonString() const
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

    if (m_removeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_removeType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t RemoveEnterpriseSecurityGroupRuleRequest::GetRuleUuid() const
{
    return m_ruleUuid;
}

void RemoveEnterpriseSecurityGroupRuleRequest::SetRuleUuid(const int64_t& _ruleUuid)
{
    m_ruleUuid = _ruleUuid;
    m_ruleUuidHasBeenSet = true;
}

bool RemoveEnterpriseSecurityGroupRuleRequest::RuleUuidHasBeenSet() const
{
    return m_ruleUuidHasBeenSet;
}

int64_t RemoveEnterpriseSecurityGroupRuleRequest::GetRemoveType() const
{
    return m_removeType;
}

void RemoveEnterpriseSecurityGroupRuleRequest::SetRemoveType(const int64_t& _removeType)
{
    m_removeType = _removeType;
    m_removeTypeHasBeenSet = true;
}

bool RemoveEnterpriseSecurityGroupRuleRequest::RemoveTypeHasBeenSet() const
{
    return m_removeTypeHasBeenSet;
}


