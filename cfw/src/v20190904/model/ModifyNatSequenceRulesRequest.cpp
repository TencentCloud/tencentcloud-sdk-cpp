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

#include <tencentcloud/cfw/v20190904/model/ModifyNatSequenceRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

ModifyNatSequenceRulesRequest::ModifyNatSequenceRulesRequest() :
    m_ruleChangeItemsHasBeenSet(false),
    m_directionHasBeenSet(false)
{
}

string ModifyNatSequenceRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleChangeItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleChangeItems";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleChangeItems.begin(); itr != m_ruleChangeItems.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
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


vector<RuleChangeItem> ModifyNatSequenceRulesRequest::GetRuleChangeItems() const
{
    return m_ruleChangeItems;
}

void ModifyNatSequenceRulesRequest::SetRuleChangeItems(const vector<RuleChangeItem>& _ruleChangeItems)
{
    m_ruleChangeItems = _ruleChangeItems;
    m_ruleChangeItemsHasBeenSet = true;
}

bool ModifyNatSequenceRulesRequest::RuleChangeItemsHasBeenSet() const
{
    return m_ruleChangeItemsHasBeenSet;
}

uint64_t ModifyNatSequenceRulesRequest::GetDirection() const
{
    return m_direction;
}

void ModifyNatSequenceRulesRequest::SetDirection(const uint64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool ModifyNatSequenceRulesRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}


