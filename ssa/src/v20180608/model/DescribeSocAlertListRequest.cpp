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

#include <tencentcloud/ssa/v20180608/model/DescribeSocAlertListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

DescribeSocAlertListRequest::DescribeSocAlertListRequest() :
    m_pageSizeHasBeenSet(false),
    m_pageIndexHasBeenSet(false),
    m_scenesHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_sorterHasBeenSet(false),
    m_exportFlagHasBeenSet(false)
{
}

string DescribeSocAlertListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_pageIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageIndex, allocator);
    }

    if (m_scenesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scenes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scenes, allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filter.begin(); itr != m_filter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sorterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sorter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sorter.begin(); itr != m_sorter.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_exportFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_exportFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeSocAlertListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeSocAlertListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeSocAlertListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

int64_t DescribeSocAlertListRequest::GetPageIndex() const
{
    return m_pageIndex;
}

void DescribeSocAlertListRequest::SetPageIndex(const int64_t& _pageIndex)
{
    m_pageIndex = _pageIndex;
    m_pageIndexHasBeenSet = true;
}

bool DescribeSocAlertListRequest::PageIndexHasBeenSet() const
{
    return m_pageIndexHasBeenSet;
}

int64_t DescribeSocAlertListRequest::GetScenes() const
{
    return m_scenes;
}

void DescribeSocAlertListRequest::SetScenes(const int64_t& _scenes)
{
    m_scenes = _scenes;
    m_scenesHasBeenSet = true;
}

bool DescribeSocAlertListRequest::ScenesHasBeenSet() const
{
    return m_scenesHasBeenSet;
}

vector<QueryFilter> DescribeSocAlertListRequest::GetFilter() const
{
    return m_filter;
}

void DescribeSocAlertListRequest::SetFilter(const vector<QueryFilter>& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool DescribeSocAlertListRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

vector<QuerySort> DescribeSocAlertListRequest::GetSorter() const
{
    return m_sorter;
}

void DescribeSocAlertListRequest::SetSorter(const vector<QuerySort>& _sorter)
{
    m_sorter = _sorter;
    m_sorterHasBeenSet = true;
}

bool DescribeSocAlertListRequest::SorterHasBeenSet() const
{
    return m_sorterHasBeenSet;
}

bool DescribeSocAlertListRequest::GetExportFlag() const
{
    return m_exportFlag;
}

void DescribeSocAlertListRequest::SetExportFlag(const bool& _exportFlag)
{
    m_exportFlag = _exportFlag;
    m_exportFlagHasBeenSet = true;
}

bool DescribeSocAlertListRequest::ExportFlagHasBeenSet() const
{
    return m_exportFlagHasBeenSet;
}


