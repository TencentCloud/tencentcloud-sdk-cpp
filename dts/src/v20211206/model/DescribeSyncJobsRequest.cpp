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

#include <tencentcloud/dts/v20211206/model/DescribeSyncJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DescribeSyncJobsRequest::DescribeSyncJobsRequest() :
    m_jobIdHasBeenSet(false),
    m_jobIdsHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_orderSeqHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_jobTypeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_tagFiltersHasBeenSet(false),
    m_srcInfoPatternHasBeenSet(false),
    m_dstInfoPatternHasBeenSet(false)
{
}

string DescribeSyncJobsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_jobIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_jobIds.begin(); itr != m_jobIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_orderSeqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderSeq";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderSeq.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_runModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runMode.c_str(), allocator).Move(), allocator);
    }

    if (m_jobTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobType.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payMode.c_str(), allocator).Move(), allocator);
    }

    if (m_tagFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagFilters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagFilters.begin(); itr != m_tagFilters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_srcInfoPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInfoPattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcInfoPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_dstInfoPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInfoPattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstInfoPattern.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSyncJobsRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeSyncJobsRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeSyncJobsRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

vector<string> DescribeSyncJobsRequest::GetJobIds() const
{
    return m_jobIds;
}

void DescribeSyncJobsRequest::SetJobIds(const vector<string>& _jobIds)
{
    m_jobIds = _jobIds;
    m_jobIdsHasBeenSet = true;
}

bool DescribeSyncJobsRequest::JobIdsHasBeenSet() const
{
    return m_jobIdsHasBeenSet;
}

string DescribeSyncJobsRequest::GetJobName() const
{
    return m_jobName;
}

void DescribeSyncJobsRequest::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool DescribeSyncJobsRequest::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

string DescribeSyncJobsRequest::GetOrder() const
{
    return m_order;
}

void DescribeSyncJobsRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeSyncJobsRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string DescribeSyncJobsRequest::GetOrderSeq() const
{
    return m_orderSeq;
}

void DescribeSyncJobsRequest::SetOrderSeq(const string& _orderSeq)
{
    m_orderSeq = _orderSeq;
    m_orderSeqHasBeenSet = true;
}

bool DescribeSyncJobsRequest::OrderSeqHasBeenSet() const
{
    return m_orderSeqHasBeenSet;
}

uint64_t DescribeSyncJobsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeSyncJobsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeSyncJobsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeSyncJobsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeSyncJobsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeSyncJobsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeSyncJobsRequest::GetStatus() const
{
    return m_status;
}

void DescribeSyncJobsRequest::SetStatus(const vector<string>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeSyncJobsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeSyncJobsRequest::GetRunMode() const
{
    return m_runMode;
}

void DescribeSyncJobsRequest::SetRunMode(const string& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool DescribeSyncJobsRequest::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

string DescribeSyncJobsRequest::GetJobType() const
{
    return m_jobType;
}

void DescribeSyncJobsRequest::SetJobType(const string& _jobType)
{
    m_jobType = _jobType;
    m_jobTypeHasBeenSet = true;
}

bool DescribeSyncJobsRequest::JobTypeHasBeenSet() const
{
    return m_jobTypeHasBeenSet;
}

string DescribeSyncJobsRequest::GetPayMode() const
{
    return m_payMode;
}

void DescribeSyncJobsRequest::SetPayMode(const string& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool DescribeSyncJobsRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

vector<TagFilter> DescribeSyncJobsRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void DescribeSyncJobsRequest::SetTagFilters(const vector<TagFilter>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool DescribeSyncJobsRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}

string DescribeSyncJobsRequest::GetSrcInfoPattern() const
{
    return m_srcInfoPattern;
}

void DescribeSyncJobsRequest::SetSrcInfoPattern(const string& _srcInfoPattern)
{
    m_srcInfoPattern = _srcInfoPattern;
    m_srcInfoPatternHasBeenSet = true;
}

bool DescribeSyncJobsRequest::SrcInfoPatternHasBeenSet() const
{
    return m_srcInfoPatternHasBeenSet;
}

string DescribeSyncJobsRequest::GetDstInfoPattern() const
{
    return m_dstInfoPattern;
}

void DescribeSyncJobsRequest::SetDstInfoPattern(const string& _dstInfoPattern)
{
    m_dstInfoPattern = _dstInfoPattern;
    m_dstInfoPatternHasBeenSet = true;
}

bool DescribeSyncJobsRequest::DstInfoPatternHasBeenSet() const
{
    return m_dstInfoPatternHasBeenSet;
}


