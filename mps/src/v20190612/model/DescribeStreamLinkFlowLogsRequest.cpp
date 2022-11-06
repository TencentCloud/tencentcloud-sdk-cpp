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

#include <tencentcloud/mps/v20190612/model/DescribeStreamLinkFlowLogsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeStreamLinkFlowLogsRequest::DescribeStreamLinkFlowLogsRequest() :
    m_flowIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_pipelineHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_sortTypeHasBeenSet(false),
    m_pageNumHasBeenSet(false)
{
}

string DescribeStreamLinkFlowLogsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_type.begin(); itr != m_type.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pipelineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pipeline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_pipeline.begin(); itr != m_pipeline.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_sortTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SortType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sortType.c_str(), allocator).Move(), allocator);
    }

    if (m_pageNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStreamLinkFlowLogsRequest::GetFlowId() const
{
    return m_flowId;
}

void DescribeStreamLinkFlowLogsRequest::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool DescribeStreamLinkFlowLogsRequest::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string DescribeStreamLinkFlowLogsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeStreamLinkFlowLogsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeStreamLinkFlowLogsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeStreamLinkFlowLogsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeStreamLinkFlowLogsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeStreamLinkFlowLogsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeStreamLinkFlowLogsRequest::GetType() const
{
    return m_type;
}

void DescribeStreamLinkFlowLogsRequest::SetType(const vector<string>& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeStreamLinkFlowLogsRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> DescribeStreamLinkFlowLogsRequest::GetPipeline() const
{
    return m_pipeline;
}

void DescribeStreamLinkFlowLogsRequest::SetPipeline(const vector<string>& _pipeline)
{
    m_pipeline = _pipeline;
    m_pipelineHasBeenSet = true;
}

bool DescribeStreamLinkFlowLogsRequest::PipelineHasBeenSet() const
{
    return m_pipelineHasBeenSet;
}

int64_t DescribeStreamLinkFlowLogsRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeStreamLinkFlowLogsRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeStreamLinkFlowLogsRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeStreamLinkFlowLogsRequest::GetSortType() const
{
    return m_sortType;
}

void DescribeStreamLinkFlowLogsRequest::SetSortType(const string& _sortType)
{
    m_sortType = _sortType;
    m_sortTypeHasBeenSet = true;
}

bool DescribeStreamLinkFlowLogsRequest::SortTypeHasBeenSet() const
{
    return m_sortTypeHasBeenSet;
}

int64_t DescribeStreamLinkFlowLogsRequest::GetPageNum() const
{
    return m_pageNum;
}

void DescribeStreamLinkFlowLogsRequest::SetPageNum(const int64_t& _pageNum)
{
    m_pageNum = _pageNum;
    m_pageNumHasBeenSet = true;
}

bool DescribeStreamLinkFlowLogsRequest::PageNumHasBeenSet() const
{
    return m_pageNumHasBeenSet;
}


