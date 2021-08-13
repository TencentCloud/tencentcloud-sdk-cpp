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

#include <tencentcloud/cfw/v20190904/model/ModifySecurityGroupItemRuleStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifySecurityGroupItemRuleStatusRequest::ModifySecurityGroupItemRuleStatusRequest() :
    m_directionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ruleSequenceHasBeenSet(false)
{
}

string ModifySecurityGroupItemRuleStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_direction, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_ruleSequenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleSequence";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ruleSequence, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifySecurityGroupItemRuleStatusRequest::GetDirection() const
{
    return m_direction;
}

void ModifySecurityGroupItemRuleStatusRequest::SetDirection(const uint64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool ModifySecurityGroupItemRuleStatusRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

uint64_t ModifySecurityGroupItemRuleStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifySecurityGroupItemRuleStatusRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifySecurityGroupItemRuleStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t ModifySecurityGroupItemRuleStatusRequest::GetRuleSequence() const
{
    return m_ruleSequence;
}

void ModifySecurityGroupItemRuleStatusRequest::SetRuleSequence(const uint64_t& _ruleSequence)
{
    m_ruleSequence = _ruleSequence;
    m_ruleSequenceHasBeenSet = true;
}

bool ModifySecurityGroupItemRuleStatusRequest::RuleSequenceHasBeenSet() const
{
    return m_ruleSequenceHasBeenSet;
}


