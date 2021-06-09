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

#include <tencentcloud/cme/v20191029/model/SearchMaterialRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

SearchMaterialRequest::SearchMaterialRequest() :
    m_platformHasBeenSet(false),
    m_searchScopesHasBeenSet(false),
    m_materialTypesHasBeenSet(false),
    m_textHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_durationRangeHasBeenSet(false),
    m_createTimeRangeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_operatorHasBeenSet(false)
{
}

string SearchMaterialRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_searchScopesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchScopes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_searchScopes.begin(); itr != m_searchScopes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_materialTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_materialTypes.begin(); itr != m_materialTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_durationRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DurationRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_durationRange.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_createTimeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_createTimeRange.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sort.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchMaterialRequest::GetPlatform() const
{
    return m_platform;
}

void SearchMaterialRequest::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool SearchMaterialRequest::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

vector<SearchScope> SearchMaterialRequest::GetSearchScopes() const
{
    return m_searchScopes;
}

void SearchMaterialRequest::SetSearchScopes(const vector<SearchScope>& _searchScopes)
{
    m_searchScopes = _searchScopes;
    m_searchScopesHasBeenSet = true;
}

bool SearchMaterialRequest::SearchScopesHasBeenSet() const
{
    return m_searchScopesHasBeenSet;
}

vector<string> SearchMaterialRequest::GetMaterialTypes() const
{
    return m_materialTypes;
}

void SearchMaterialRequest::SetMaterialTypes(const vector<string>& _materialTypes)
{
    m_materialTypes = _materialTypes;
    m_materialTypesHasBeenSet = true;
}

bool SearchMaterialRequest::MaterialTypesHasBeenSet() const
{
    return m_materialTypesHasBeenSet;
}

string SearchMaterialRequest::GetText() const
{
    return m_text;
}

void SearchMaterialRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SearchMaterialRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string SearchMaterialRequest::GetResolution() const
{
    return m_resolution;
}

void SearchMaterialRequest::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool SearchMaterialRequest::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

IntegerRange SearchMaterialRequest::GetDurationRange() const
{
    return m_durationRange;
}

void SearchMaterialRequest::SetDurationRange(const IntegerRange& _durationRange)
{
    m_durationRange = _durationRange;
    m_durationRangeHasBeenSet = true;
}

bool SearchMaterialRequest::DurationRangeHasBeenSet() const
{
    return m_durationRangeHasBeenSet;
}

TimeRange SearchMaterialRequest::GetCreateTimeRange() const
{
    return m_createTimeRange;
}

void SearchMaterialRequest::SetCreateTimeRange(const TimeRange& _createTimeRange)
{
    m_createTimeRange = _createTimeRange;
    m_createTimeRangeHasBeenSet = true;
}

bool SearchMaterialRequest::CreateTimeRangeHasBeenSet() const
{
    return m_createTimeRangeHasBeenSet;
}

vector<string> SearchMaterialRequest::GetTags() const
{
    return m_tags;
}

void SearchMaterialRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SearchMaterialRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

SortBy SearchMaterialRequest::GetSort() const
{
    return m_sort;
}

void SearchMaterialRequest::SetSort(const SortBy& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool SearchMaterialRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

int64_t SearchMaterialRequest::GetOffset() const
{
    return m_offset;
}

void SearchMaterialRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchMaterialRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t SearchMaterialRequest::GetLimit() const
{
    return m_limit;
}

void SearchMaterialRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchMaterialRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string SearchMaterialRequest::GetOperator() const
{
    return m_operator;
}

void SearchMaterialRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool SearchMaterialRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}


