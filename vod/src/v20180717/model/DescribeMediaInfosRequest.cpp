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

#include <tencentcloud/vod/v20180717/model/DescribeMediaInfosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

DescribeMediaInfosRequest::DescribeMediaInfosRequest() :
    m_fileIdsHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string DescribeMediaInfosRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_fileIds.begin(); itr != m_fileIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filtersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr)
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


vector<string> DescribeMediaInfosRequest::GetFileIds() const
{
    return m_fileIds;
}

void DescribeMediaInfosRequest::SetFileIds(const vector<string>& _fileIds)
{
    m_fileIds = _fileIds;
    m_fileIdsHasBeenSet = true;
}

bool DescribeMediaInfosRequest::FileIdsHasBeenSet() const
{
    return m_fileIdsHasBeenSet;
}

vector<string> DescribeMediaInfosRequest::GetFilters() const
{
    return m_filters;
}

void DescribeMediaInfosRequest::SetFilters(const vector<string>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeMediaInfosRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribeMediaInfosRequest::GetSubAppId() const
{
    return m_subAppId;
}

void DescribeMediaInfosRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool DescribeMediaInfosRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


