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

#include <tencentcloud/cls/v20201016/model/FilterStatistics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

FilterStatistics::FilterStatistics() :
    m_originalCountHasBeenSet(false),
    m_filteredCountHasBeenSet(false),
    m_filteredResultHasBeenSet(false)
{
}

CoreInternalOutcome FilterStatistics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginalCount") && !value["OriginalCount"].IsNull())
    {
        if (!value["OriginalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FilterStatistics.OriginalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_originalCount = value["OriginalCount"].GetUint64();
        m_originalCountHasBeenSet = true;
    }

    if (value.HasMember("FilteredCount") && !value["FilteredCount"].IsNull())
    {
        if (!value["FilteredCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FilterStatistics.FilteredCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_filteredCount = value["FilteredCount"].GetUint64();
        m_filteredCountHasBeenSet = true;
    }

    if (value.HasMember("FilteredResult") && !value["FilteredResult"].IsNull())
    {
        if (!value["FilteredResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FilterStatistics.FilteredResult` is not array type"));

        const rapidjson::Value &tmpValue = value["FilteredResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_filteredResult.push_back((*itr).GetString());
        }
        m_filteredResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FilterStatistics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originalCount, allocator);
    }

    if (m_filteredCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilteredCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filteredCount, allocator);
    }

    if (m_filteredResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilteredResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filteredResult.begin(); itr != m_filteredResult.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t FilterStatistics::GetOriginalCount() const
{
    return m_originalCount;
}

void FilterStatistics::SetOriginalCount(const uint64_t& _originalCount)
{
    m_originalCount = _originalCount;
    m_originalCountHasBeenSet = true;
}

bool FilterStatistics::OriginalCountHasBeenSet() const
{
    return m_originalCountHasBeenSet;
}

uint64_t FilterStatistics::GetFilteredCount() const
{
    return m_filteredCount;
}

void FilterStatistics::SetFilteredCount(const uint64_t& _filteredCount)
{
    m_filteredCount = _filteredCount;
    m_filteredCountHasBeenSet = true;
}

bool FilterStatistics::FilteredCountHasBeenSet() const
{
    return m_filteredCountHasBeenSet;
}

vector<string> FilterStatistics::GetFilteredResult() const
{
    return m_filteredResult;
}

void FilterStatistics::SetFilteredResult(const vector<string>& _filteredResult)
{
    m_filteredResult = _filteredResult;
    m_filteredResultHasBeenSet = true;
}

bool FilterStatistics::FilteredResultHasBeenSet() const
{
    return m_filteredResultHasBeenSet;
}

