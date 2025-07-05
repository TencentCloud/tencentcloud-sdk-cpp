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

#include <tencentcloud/hasim/v20210716/model/ModifyRuleStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

ModifyRuleStatusRequest::ModifyRuleStatusRequest() :
    m_ruleIDHasBeenSet(false),
    m_isActiveHasBeenSet(false)
{
}

string ModifyRuleStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_isActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isActive, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyRuleStatusRequest::GetRuleID() const
{
    return m_ruleID;
}

void ModifyRuleStatusRequest::SetRuleID(const uint64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool ModifyRuleStatusRequest::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

bool ModifyRuleStatusRequest::GetIsActive() const
{
    return m_isActive;
}

void ModifyRuleStatusRequest::SetIsActive(const bool& _isActive)
{
    m_isActive = _isActive;
    m_isActiveHasBeenSet = true;
}

bool ModifyRuleStatusRequest::IsActiveHasBeenSet() const
{
    return m_isActiveHasBeenSet;
}


