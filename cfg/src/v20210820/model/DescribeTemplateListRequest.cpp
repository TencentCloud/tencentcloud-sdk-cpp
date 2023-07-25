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

#include <tencentcloud/cfg/v20210820/model/DescribeTemplateListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

DescribeTemplateListRequest::DescribeTemplateListRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_isUsedHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateSourceHasBeenSet(false),
    m_templateIdListHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeTemplateListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUsed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isUsed, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_templateSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateSource, allocator);
    }

    if (m_templateIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_templateIdList.begin(); itr != m_templateIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeTemplateListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeTemplateListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeTemplateListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeTemplateListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeTemplateListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeTemplateListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeTemplateListRequest::GetTitle() const
{
    return m_title;
}

void DescribeTemplateListRequest::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool DescribeTemplateListRequest::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

vector<string> DescribeTemplateListRequest::GetTag() const
{
    return m_tag;
}

void DescribeTemplateListRequest::SetTag(const vector<string>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DescribeTemplateListRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

int64_t DescribeTemplateListRequest::GetIsUsed() const
{
    return m_isUsed;
}

void DescribeTemplateListRequest::SetIsUsed(const int64_t& _isUsed)
{
    m_isUsed = _isUsed;
    m_isUsedHasBeenSet = true;
}

bool DescribeTemplateListRequest::IsUsedHasBeenSet() const
{
    return m_isUsedHasBeenSet;
}

vector<TagWithDescribe> DescribeTemplateListRequest::GetTags() const
{
    return m_tags;
}

void DescribeTemplateListRequest::SetTags(const vector<TagWithDescribe>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeTemplateListRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t DescribeTemplateListRequest::GetTemplateSource() const
{
    return m_templateSource;
}

void DescribeTemplateListRequest::SetTemplateSource(const int64_t& _templateSource)
{
    m_templateSource = _templateSource;
    m_templateSourceHasBeenSet = true;
}

bool DescribeTemplateListRequest::TemplateSourceHasBeenSet() const
{
    return m_templateSourceHasBeenSet;
}

vector<int64_t> DescribeTemplateListRequest::GetTemplateIdList() const
{
    return m_templateIdList;
}

void DescribeTemplateListRequest::SetTemplateIdList(const vector<int64_t>& _templateIdList)
{
    m_templateIdList = _templateIdList;
    m_templateIdListHasBeenSet = true;
}

bool DescribeTemplateListRequest::TemplateIdListHasBeenSet() const
{
    return m_templateIdListHasBeenSet;
}

vector<ActionFilter> DescribeTemplateListRequest::GetFilters() const
{
    return m_filters;
}

void DescribeTemplateListRequest::SetFilters(const vector<ActionFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeTemplateListRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


