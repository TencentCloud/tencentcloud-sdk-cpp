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

#include <tencentcloud/adp/v20260520/model/SearchFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SearchFilter::SearchFilter() :
    m_filterTypeHasBeenSet(false),
    m_filterValueListHasBeenSet(false),
    m_labelIdHasBeenSet(false),
    m_logicOpHasBeenSet(false),
    m_searchFilterListHasBeenSet(false)
{
}

CoreInternalOutcome SearchFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FilterType") && !value["FilterType"].IsNull())
    {
        if (!value["FilterType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFilter.FilterType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_filterType = value["FilterType"].GetInt64();
        m_filterTypeHasBeenSet = true;
    }

    if (value.HasMember("FilterValueList") && !value["FilterValueList"].IsNull())
    {
        if (!value["FilterValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchFilter.FilterValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["FilterValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_filterValueList.push_back((*itr).GetString());
        }
        m_filterValueListHasBeenSet = true;
    }

    if (value.HasMember("LabelId") && !value["LabelId"].IsNull())
    {
        if (!value["LabelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFilter.LabelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_labelId = string(value["LabelId"].GetString());
        m_labelIdHasBeenSet = true;
    }

    if (value.HasMember("LogicOp") && !value["LogicOp"].IsNull())
    {
        if (!value["LogicOp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchFilter.LogicOp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logicOp = value["LogicOp"].GetInt64();
        m_logicOpHasBeenSet = true;
    }

    if (value.HasMember("SearchFilterList") && !value["SearchFilterList"].IsNull())
    {
        if (!value["SearchFilterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SearchFilter.SearchFilterList` is not array type"));

        const rapidjson::Value &tmpValue = value["SearchFilterList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SearchFilter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_searchFilterList.push_back(item);
        }
        m_searchFilterListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterType, allocator);
    }

    if (m_filterValueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterValueList.begin(); itr != m_filterValueList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_labelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_labelId.c_str(), allocator).Move(), allocator);
    }

    if (m_logicOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogicOp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logicOp, allocator);
    }

    if (m_searchFilterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchFilterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_searchFilterList.begin(); itr != m_searchFilterList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t SearchFilter::GetFilterType() const
{
    return m_filterType;
}

void SearchFilter::SetFilterType(const int64_t& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool SearchFilter::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

vector<string> SearchFilter::GetFilterValueList() const
{
    return m_filterValueList;
}

void SearchFilter::SetFilterValueList(const vector<string>& _filterValueList)
{
    m_filterValueList = _filterValueList;
    m_filterValueListHasBeenSet = true;
}

bool SearchFilter::FilterValueListHasBeenSet() const
{
    return m_filterValueListHasBeenSet;
}

string SearchFilter::GetLabelId() const
{
    return m_labelId;
}

void SearchFilter::SetLabelId(const string& _labelId)
{
    m_labelId = _labelId;
    m_labelIdHasBeenSet = true;
}

bool SearchFilter::LabelIdHasBeenSet() const
{
    return m_labelIdHasBeenSet;
}

int64_t SearchFilter::GetLogicOp() const
{
    return m_logicOp;
}

void SearchFilter::SetLogicOp(const int64_t& _logicOp)
{
    m_logicOp = _logicOp;
    m_logicOpHasBeenSet = true;
}

bool SearchFilter::LogicOpHasBeenSet() const
{
    return m_logicOpHasBeenSet;
}

vector<SearchFilter> SearchFilter::GetSearchFilterList() const
{
    return m_searchFilterList;
}

void SearchFilter::SetSearchFilterList(const vector<SearchFilter>& _searchFilterList)
{
    m_searchFilterList = _searchFilterList;
    m_searchFilterListHasBeenSet = true;
}

bool SearchFilter::SearchFilterListHasBeenSet() const
{
    return m_searchFilterListHasBeenSet;
}

