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

#include <tencentcloud/ssa/v20180608/model/QueryFilterV3.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

QueryFilterV3::QueryFilterV3() :
    m_filterHasBeenSet(false),
    m_hasSubHasBeenSet(false),
    m_subFiltersHasBeenSet(false),
    m_logicHasBeenSet(false)
{
}

CoreInternalOutcome QueryFilterV3::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Filter") && !value["Filter"].IsNull())
    {
        if (!value["Filter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `QueryFilterV3.Filter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_filter.Deserialize(value["Filter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_filterHasBeenSet = true;
    }

    if (value.HasMember("HasSub") && !value["HasSub"].IsNull())
    {
        if (!value["HasSub"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QueryFilterV3.HasSub` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasSub = value["HasSub"].GetBool();
        m_hasSubHasBeenSet = true;
    }

    if (value.HasMember("SubFilters") && !value["SubFilters"].IsNull())
    {
        if (!value["SubFilters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryFilterV3.SubFilters` is not array type"));

        const rapidjson::Value &tmpValue = value["SubFilters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QueryFilter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subFilters.push_back(item);
        }
        m_subFiltersHasBeenSet = true;
    }

    if (value.HasMember("Logic") && !value["Logic"].IsNull())
    {
        if (!value["Logic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryFilterV3.Logic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logic = value["Logic"].GetUint64();
        m_logicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryFilterV3::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hasSubHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasSub";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasSub, allocator);
    }

    if (m_subFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubFilters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subFilters.begin(); itr != m_subFilters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_logicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logic, allocator);
    }

}


QueryFilter QueryFilterV3::GetFilter() const
{
    return m_filter;
}

void QueryFilterV3::SetFilter(const QueryFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool QueryFilterV3::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

bool QueryFilterV3::GetHasSub() const
{
    return m_hasSub;
}

void QueryFilterV3::SetHasSub(const bool& _hasSub)
{
    m_hasSub = _hasSub;
    m_hasSubHasBeenSet = true;
}

bool QueryFilterV3::HasSubHasBeenSet() const
{
    return m_hasSubHasBeenSet;
}

vector<QueryFilter> QueryFilterV3::GetSubFilters() const
{
    return m_subFilters;
}

void QueryFilterV3::SetSubFilters(const vector<QueryFilter>& _subFilters)
{
    m_subFilters = _subFilters;
    m_subFiltersHasBeenSet = true;
}

bool QueryFilterV3::SubFiltersHasBeenSet() const
{
    return m_subFiltersHasBeenSet;
}

uint64_t QueryFilterV3::GetLogic() const
{
    return m_logic;
}

void QueryFilterV3::SetLogic(const uint64_t& _logic)
{
    m_logic = _logic;
    m_logicHasBeenSet = true;
}

bool QueryFilterV3::LogicHasBeenSet() const
{
    return m_logicHasBeenSet;
}

