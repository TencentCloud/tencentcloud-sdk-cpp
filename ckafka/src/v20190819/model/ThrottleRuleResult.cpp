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

#include <tencentcloud/ckafka/v20190819/model/ThrottleRuleResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ThrottleRuleResult::ThrottleRuleResult() :
    m_totalCountHasBeenSet(false),
    m_throttleRuleListHasBeenSet(false)
{
}

CoreInternalOutcome ThrottleRuleResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ThrottleRuleResult.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("ThrottleRuleList") && !value["ThrottleRuleList"].IsNull())
    {
        if (!value["ThrottleRuleList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ThrottleRuleResult.ThrottleRuleList` is not array type"));

        const rapidjson::Value &tmpValue = value["ThrottleRuleList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ThrottleRuleDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_throttleRuleList.push_back(item);
        }
        m_throttleRuleListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ThrottleRuleResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_throttleRuleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThrottleRuleList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_throttleRuleList.begin(); itr != m_throttleRuleList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t ThrottleRuleResult::GetTotalCount() const
{
    return m_totalCount;
}

void ThrottleRuleResult::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool ThrottleRuleResult::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<ThrottleRuleDetail> ThrottleRuleResult::GetThrottleRuleList() const
{
    return m_throttleRuleList;
}

void ThrottleRuleResult::SetThrottleRuleList(const vector<ThrottleRuleDetail>& _throttleRuleList)
{
    m_throttleRuleList = _throttleRuleList;
    m_throttleRuleListHasBeenSet = true;
}

bool ThrottleRuleResult::ThrottleRuleListHasBeenSet() const
{
    return m_throttleRuleListHasBeenSet;
}

