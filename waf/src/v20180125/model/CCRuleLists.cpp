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

#include <tencentcloud/waf/v20180125/model/CCRuleLists.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

CCRuleLists::CCRuleLists() :
    m_totalCountHasBeenSet(false),
    m_resHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_availableHasBeenSet(false)
{
}

CoreInternalOutcome CCRuleLists::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleLists.TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("Res") && !value["Res"].IsNull())
    {
        if (!value["Res"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CCRuleLists.Res` is not array type"));

        const rapidjson::Value &tmpValue = value["Res"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CCRuleItems item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_res.push_back(item);
        }
        m_resHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleLists.Limit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetInt64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CCRuleLists.Available` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetInt64();
        m_availableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCRuleLists::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_resHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Res";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_res.begin(); itr != m_res.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

}


uint64_t CCRuleLists::GetTotalCount() const
{
    return m_totalCount;
}

void CCRuleLists::SetTotalCount(const uint64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool CCRuleLists::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<CCRuleItems> CCRuleLists::GetRes() const
{
    return m_res;
}

void CCRuleLists::SetRes(const vector<CCRuleItems>& _res)
{
    m_res = _res;
    m_resHasBeenSet = true;
}

bool CCRuleLists::ResHasBeenSet() const
{
    return m_resHasBeenSet;
}

int64_t CCRuleLists::GetLimit() const
{
    return m_limit;
}

void CCRuleLists::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool CCRuleLists::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t CCRuleLists::GetAvailable() const
{
    return m_available;
}

void CCRuleLists::SetAvailable(const int64_t& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool CCRuleLists::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

