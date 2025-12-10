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

#include <tencentcloud/vod/v20180717/model/SearchMediaBySemanticsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SearchMediaBySemanticsRequest::SearchMediaBySemanticsRequest() :
    m_subAppIdHasBeenSet(false),
    m_textHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_categoriesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_taskTypesHasBeenSet(false)
{
}

string SearchMediaBySemanticsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_categoriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Categories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categories.begin(); itr != m_categories.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_taskTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskTypes.begin(); itr != m_taskTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SearchMediaBySemanticsRequest::GetSubAppId() const
{
    return m_subAppId;
}

void SearchMediaBySemanticsRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool SearchMediaBySemanticsRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string SearchMediaBySemanticsRequest::GetText() const
{
    return m_text;
}

void SearchMediaBySemanticsRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SearchMediaBySemanticsRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

uint64_t SearchMediaBySemanticsRequest::GetLimit() const
{
    return m_limit;
}

void SearchMediaBySemanticsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchMediaBySemanticsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> SearchMediaBySemanticsRequest::GetCategories() const
{
    return m_categories;
}

void SearchMediaBySemanticsRequest::SetCategories(const vector<string>& _categories)
{
    m_categories = _categories;
    m_categoriesHasBeenSet = true;
}

bool SearchMediaBySemanticsRequest::CategoriesHasBeenSet() const
{
    return m_categoriesHasBeenSet;
}

vector<string> SearchMediaBySemanticsRequest::GetTags() const
{
    return m_tags;
}

void SearchMediaBySemanticsRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SearchMediaBySemanticsRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<string> SearchMediaBySemanticsRequest::GetTaskTypes() const
{
    return m_taskTypes;
}

void SearchMediaBySemanticsRequest::SetTaskTypes(const vector<string>& _taskTypes)
{
    m_taskTypes = _taskTypes;
    m_taskTypesHasBeenSet = true;
}

bool SearchMediaBySemanticsRequest::TaskTypesHasBeenSet() const
{
    return m_taskTypesHasBeenSet;
}


