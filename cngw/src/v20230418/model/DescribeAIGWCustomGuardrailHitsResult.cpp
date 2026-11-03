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

#include <tencentcloud/cngw/v20230418/model/DescribeAIGWCustomGuardrailHitsResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

DescribeAIGWCustomGuardrailHitsResult::DescribeAIGWCustomGuardrailHitsResult() :
    m_totalCountHasBeenSet(false),
    m_hitsHasBeenSet(false),
    m_truncatedHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAIGWCustomGuardrailHitsResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAIGWCustomGuardrailHitsResult.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("Hits") && !value["Hits"].IsNull())
    {
        if (!value["Hits"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeAIGWCustomGuardrailHitsResult.Hits` is not array type"));

        const rapidjson::Value &tmpValue = value["Hits"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CustomGuardrailHit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hits.push_back(item);
        }
        m_hitsHasBeenSet = true;
    }

    if (value.HasMember("Truncated") && !value["Truncated"].IsNull())
    {
        if (!value["Truncated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAIGWCustomGuardrailHitsResult.Truncated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_truncated = value["Truncated"].GetBool();
        m_truncatedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAIGWCustomGuardrailHitsResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_hitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hits.begin(); itr != m_hits.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_truncatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Truncated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_truncated, allocator);
    }

}


int64_t DescribeAIGWCustomGuardrailHitsResult::GetTotalCount() const
{
    return m_totalCount;
}

void DescribeAIGWCustomGuardrailHitsResult::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailHitsResult::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<CustomGuardrailHit> DescribeAIGWCustomGuardrailHitsResult::GetHits() const
{
    return m_hits;
}

void DescribeAIGWCustomGuardrailHitsResult::SetHits(const vector<CustomGuardrailHit>& _hits)
{
    m_hits = _hits;
    m_hitsHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailHitsResult::HitsHasBeenSet() const
{
    return m_hitsHasBeenSet;
}

bool DescribeAIGWCustomGuardrailHitsResult::GetTruncated() const
{
    return m_truncated;
}

void DescribeAIGWCustomGuardrailHitsResult::SetTruncated(const bool& _truncated)
{
    m_truncated = _truncated;
    m_truncatedHasBeenSet = true;
}

bool DescribeAIGWCustomGuardrailHitsResult::TruncatedHasBeenSet() const
{
    return m_truncatedHasBeenSet;
}

