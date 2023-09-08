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

#include <tencentcloud/cfw/v20190904/model/RemoveAclRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

RemoveAclRuleRequest::RemoveAclRuleRequest() :
    m_ruleUuidHasBeenSet(false),
    m_directionHasBeenSet(false)
{
}

string RemoveAclRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleUuid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleUuid.begin(); itr != m_ruleUuid.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_direction, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> RemoveAclRuleRequest::GetRuleUuid() const
{
    return m_ruleUuid;
}

void RemoveAclRuleRequest::SetRuleUuid(const vector<int64_t>& _ruleUuid)
{
    m_ruleUuid = _ruleUuid;
    m_ruleUuidHasBeenSet = true;
}

bool RemoveAclRuleRequest::RuleUuidHasBeenSet() const
{
    return m_ruleUuidHasBeenSet;
}

uint64_t RemoveAclRuleRequest::GetDirection() const
{
    return m_direction;
}

void RemoveAclRuleRequest::SetDirection(const uint64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool RemoveAclRuleRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}


