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

#include <tencentcloud/csip/v20221121/model/CreateScanStatisticExportJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateScanStatisticExportJobRequest::CreateScanStatisticExportJobRequest() :
    m_memberIdHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_byHasBeenSet(false),
    m_taskLogIdHasBeenSet(false)
{
}

string CreateScanStatisticExportJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }

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

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_byHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "By";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_by.c_str(), allocator).Move(), allocator);
    }

    if (m_taskLogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskLogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskLogId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateScanStatisticExportJobRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateScanStatisticExportJobRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateScanStatisticExportJobRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

Filter CreateScanStatisticExportJobRequest::GetFilter() const
{
    return m_filter;
}

void CreateScanStatisticExportJobRequest::SetFilter(const Filter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool CreateScanStatisticExportJobRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

uint64_t CreateScanStatisticExportJobRequest::GetLimit() const
{
    return m_limit;
}

void CreateScanStatisticExportJobRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool CreateScanStatisticExportJobRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t CreateScanStatisticExportJobRequest::GetOffset() const
{
    return m_offset;
}

void CreateScanStatisticExportJobRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool CreateScanStatisticExportJobRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string CreateScanStatisticExportJobRequest::GetOrder() const
{
    return m_order;
}

void CreateScanStatisticExportJobRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool CreateScanStatisticExportJobRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string CreateScanStatisticExportJobRequest::GetBy() const
{
    return m_by;
}

void CreateScanStatisticExportJobRequest::SetBy(const string& _by)
{
    m_by = _by;
    m_byHasBeenSet = true;
}

bool CreateScanStatisticExportJobRequest::ByHasBeenSet() const
{
    return m_byHasBeenSet;
}

string CreateScanStatisticExportJobRequest::GetTaskLogId() const
{
    return m_taskLogId;
}

void CreateScanStatisticExportJobRequest::SetTaskLogId(const string& _taskLogId)
{
    m_taskLogId = _taskLogId;
    m_taskLogIdHasBeenSet = true;
}

bool CreateScanStatisticExportJobRequest::TaskLogIdHasBeenSet() const
{
    return m_taskLogIdHasBeenSet;
}


