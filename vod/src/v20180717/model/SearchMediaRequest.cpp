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

#include <tencentcloud/vod/v20180717/model/SearchMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

SearchMediaRequest::SearchMediaRequest() :
    m_textHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_classIdsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_vidHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_categoriesHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string SearchMediaRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_textHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_classIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_classIds.begin(); itr != m_classIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetInt64(*itr), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_streamIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StreamId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_streamId.c_str(), allocator).Move(), allocator);
    }

    if (m_vidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Vid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_vid.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_sort.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_categoriesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Categories";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_categories.begin(); itr != m_categories.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchMediaRequest::GetText() const
{
    return m_text;
}

void SearchMediaRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SearchMediaRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<string> SearchMediaRequest::GetTags() const
{
    return m_tags;
}

void SearchMediaRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SearchMediaRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<int64_t> SearchMediaRequest::GetClassIds() const
{
    return m_classIds;
}

void SearchMediaRequest::SetClassIds(const vector<int64_t>& _classIds)
{
    m_classIds = _classIds;
    m_classIdsHasBeenSet = true;
}

bool SearchMediaRequest::ClassIdsHasBeenSet() const
{
    return m_classIdsHasBeenSet;
}

string SearchMediaRequest::GetStartTime() const
{
    return m_startTime;
}

void SearchMediaRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SearchMediaRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SearchMediaRequest::GetEndTime() const
{
    return m_endTime;
}

void SearchMediaRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SearchMediaRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string SearchMediaRequest::GetSourceType() const
{
    return m_sourceType;
}

void SearchMediaRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool SearchMediaRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string SearchMediaRequest::GetStreamId() const
{
    return m_streamId;
}

void SearchMediaRequest::SetStreamId(const string& _streamId)
{
    m_streamId = _streamId;
    m_streamIdHasBeenSet = true;
}

bool SearchMediaRequest::StreamIdHasBeenSet() const
{
    return m_streamIdHasBeenSet;
}

string SearchMediaRequest::GetVid() const
{
    return m_vid;
}

void SearchMediaRequest::SetVid(const string& _vid)
{
    m_vid = _vid;
    m_vidHasBeenSet = true;
}

bool SearchMediaRequest::VidHasBeenSet() const
{
    return m_vidHasBeenSet;
}

SortBy SearchMediaRequest::GetSort() const
{
    return m_sort;
}

void SearchMediaRequest::SetSort(const SortBy& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool SearchMediaRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

uint64_t SearchMediaRequest::GetOffset() const
{
    return m_offset;
}

void SearchMediaRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchMediaRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t SearchMediaRequest::GetLimit() const
{
    return m_limit;
}

void SearchMediaRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchMediaRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> SearchMediaRequest::GetCategories() const
{
    return m_categories;
}

void SearchMediaRequest::SetCategories(const vector<string>& _categories)
{
    m_categories = _categories;
    m_categoriesHasBeenSet = true;
}

bool SearchMediaRequest::CategoriesHasBeenSet() const
{
    return m_categoriesHasBeenSet;
}

uint64_t SearchMediaRequest::GetSubAppId() const
{
    return m_subAppId;
}

void SearchMediaRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool SearchMediaRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


