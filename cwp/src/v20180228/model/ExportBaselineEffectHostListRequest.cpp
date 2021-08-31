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

#include <tencentcloud/cwp/v20180228/model/ExportBaselineEffectHostListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ExportBaselineEffectHostListRequest::ExportBaselineEffectHostListRequest() :
    m_baselineIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_strategyIdHasBeenSet(false),
    m_uuidListHasBeenSet(false),
    m_baselineNameHasBeenSet(false)
{
}

string ExportBaselineEffectHostListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_baselineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_baselineId, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_strategyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrategyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_strategyId, allocator);
    }

    if (m_uuidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UuidList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uuidList.begin(); itr != m_uuidList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_baselineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_baselineName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ExportBaselineEffectHostListRequest::GetBaselineId() const
{
    return m_baselineId;
}

void ExportBaselineEffectHostListRequest::SetBaselineId(const uint64_t& _baselineId)
{
    m_baselineId = _baselineId;
    m_baselineIdHasBeenSet = true;
}

bool ExportBaselineEffectHostListRequest::BaselineIdHasBeenSet() const
{
    return m_baselineIdHasBeenSet;
}

vector<Filters> ExportBaselineEffectHostListRequest::GetFilters() const
{
    return m_filters;
}

void ExportBaselineEffectHostListRequest::SetFilters(const vector<Filters>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool ExportBaselineEffectHostListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t ExportBaselineEffectHostListRequest::GetStrategyId() const
{
    return m_strategyId;
}

void ExportBaselineEffectHostListRequest::SetStrategyId(const uint64_t& _strategyId)
{
    m_strategyId = _strategyId;
    m_strategyIdHasBeenSet = true;
}

bool ExportBaselineEffectHostListRequest::StrategyIdHasBeenSet() const
{
    return m_strategyIdHasBeenSet;
}

vector<string> ExportBaselineEffectHostListRequest::GetUuidList() const
{
    return m_uuidList;
}

void ExportBaselineEffectHostListRequest::SetUuidList(const vector<string>& _uuidList)
{
    m_uuidList = _uuidList;
    m_uuidListHasBeenSet = true;
}

bool ExportBaselineEffectHostListRequest::UuidListHasBeenSet() const
{
    return m_uuidListHasBeenSet;
}

string ExportBaselineEffectHostListRequest::GetBaselineName() const
{
    return m_baselineName;
}

void ExportBaselineEffectHostListRequest::SetBaselineName(const string& _baselineName)
{
    m_baselineName = _baselineName;
    m_baselineNameHasBeenSet = true;
}

bool ExportBaselineEffectHostListRequest::BaselineNameHasBeenSet() const
{
    return m_baselineNameHasBeenSet;
}


