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

#include <tencentcloud/dts/v20211206/model/DescribeMigrationJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DescribeMigrationJobsRequest::DescribeMigrationJobsRequest() :
    m_jobIdHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_srcInstanceIdHasBeenSet(false),
    m_srcRegionHasBeenSet(false),
    m_srcDatabaseTypeHasBeenSet(false),
    m_srcAccessTypeHasBeenSet(false),
    m_dstInstanceIdHasBeenSet(false),
    m_dstRegionHasBeenSet(false),
    m_dstDatabaseTypeHasBeenSet(false),
    m_dstAccessTypeHasBeenSet(false),
    m_runModeHasBeenSet(false),
    m_orderSeqHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_tagFiltersHasBeenSet(false)
{
}

string DescribeMigrationJobsRequest::ToJsonString() const
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

    if (m_jobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobName.c_str(), allocator).Move(), allocator);
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

    if (m_srcInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_srcDatabaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_srcDatabaseType.begin(); itr != m_srcDatabaseType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_srcAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcAccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_srcAccessType.begin(); itr != m_srcAccessType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dstInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dstRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_dstDatabaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstDatabaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dstDatabaseType.begin(); itr != m_dstDatabaseType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dstAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstAccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dstAccessType.begin(); itr != m_dstAccessType.end(); ++itr)
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

    if (m_orderSeqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderSeq";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderSeq.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMigrationJobsRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeMigrationJobsRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeMigrationJobsRequest::GetJobName() const
{
    return m_jobName;
}

void DescribeMigrationJobsRequest::SetJobName(const string& _jobName)
{
    m_jobName = _jobName;
    m_jobNameHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::JobNameHasBeenSet() const
{
    return m_jobNameHasBeenSet;
}

vector<string> DescribeMigrationJobsRequest::GetStatus() const
{
    return m_status;
}

void DescribeMigrationJobsRequest::SetStatus(const vector<string>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeMigrationJobsRequest::GetSrcInstanceId() const
{
    return m_srcInstanceId;
}

void DescribeMigrationJobsRequest::SetSrcInstanceId(const string& _srcInstanceId)
{
    m_srcInstanceId = _srcInstanceId;
    m_srcInstanceIdHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::SrcInstanceIdHasBeenSet() const
{
    return m_srcInstanceIdHasBeenSet;
}

string DescribeMigrationJobsRequest::GetSrcRegion() const
{
    return m_srcRegion;
}

void DescribeMigrationJobsRequest::SetSrcRegion(const string& _srcRegion)
{
    m_srcRegion = _srcRegion;
    m_srcRegionHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::SrcRegionHasBeenSet() const
{
    return m_srcRegionHasBeenSet;
}

vector<string> DescribeMigrationJobsRequest::GetSrcDatabaseType() const
{
    return m_srcDatabaseType;
}

void DescribeMigrationJobsRequest::SetSrcDatabaseType(const vector<string>& _srcDatabaseType)
{
    m_srcDatabaseType = _srcDatabaseType;
    m_srcDatabaseTypeHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::SrcDatabaseTypeHasBeenSet() const
{
    return m_srcDatabaseTypeHasBeenSet;
}

vector<string> DescribeMigrationJobsRequest::GetSrcAccessType() const
{
    return m_srcAccessType;
}

void DescribeMigrationJobsRequest::SetSrcAccessType(const vector<string>& _srcAccessType)
{
    m_srcAccessType = _srcAccessType;
    m_srcAccessTypeHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::SrcAccessTypeHasBeenSet() const
{
    return m_srcAccessTypeHasBeenSet;
}

string DescribeMigrationJobsRequest::GetDstInstanceId() const
{
    return m_dstInstanceId;
}

void DescribeMigrationJobsRequest::SetDstInstanceId(const string& _dstInstanceId)
{
    m_dstInstanceId = _dstInstanceId;
    m_dstInstanceIdHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::DstInstanceIdHasBeenSet() const
{
    return m_dstInstanceIdHasBeenSet;
}

string DescribeMigrationJobsRequest::GetDstRegion() const
{
    return m_dstRegion;
}

void DescribeMigrationJobsRequest::SetDstRegion(const string& _dstRegion)
{
    m_dstRegion = _dstRegion;
    m_dstRegionHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::DstRegionHasBeenSet() const
{
    return m_dstRegionHasBeenSet;
}

vector<string> DescribeMigrationJobsRequest::GetDstDatabaseType() const
{
    return m_dstDatabaseType;
}

void DescribeMigrationJobsRequest::SetDstDatabaseType(const vector<string>& _dstDatabaseType)
{
    m_dstDatabaseType = _dstDatabaseType;
    m_dstDatabaseTypeHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::DstDatabaseTypeHasBeenSet() const
{
    return m_dstDatabaseTypeHasBeenSet;
}

vector<string> DescribeMigrationJobsRequest::GetDstAccessType() const
{
    return m_dstAccessType;
}

void DescribeMigrationJobsRequest::SetDstAccessType(const vector<string>& _dstAccessType)
{
    m_dstAccessType = _dstAccessType;
    m_dstAccessTypeHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::DstAccessTypeHasBeenSet() const
{
    return m_dstAccessTypeHasBeenSet;
}

string DescribeMigrationJobsRequest::GetRunMode() const
{
    return m_runMode;
}

void DescribeMigrationJobsRequest::SetRunMode(const string& _runMode)
{
    m_runMode = _runMode;
    m_runModeHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::RunModeHasBeenSet() const
{
    return m_runModeHasBeenSet;
}

string DescribeMigrationJobsRequest::GetOrderSeq() const
{
    return m_orderSeq;
}

void DescribeMigrationJobsRequest::SetOrderSeq(const string& _orderSeq)
{
    m_orderSeq = _orderSeq;
    m_orderSeqHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::OrderSeqHasBeenSet() const
{
    return m_orderSeqHasBeenSet;
}

uint64_t DescribeMigrationJobsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMigrationJobsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeMigrationJobsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeMigrationJobsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<TagFilter> DescribeMigrationJobsRequest::GetTagFilters() const
{
    return m_tagFilters;
}

void DescribeMigrationJobsRequest::SetTagFilters(const vector<TagFilter>& _tagFilters)
{
    m_tagFilters = _tagFilters;
    m_tagFiltersHasBeenSet = true;
}

bool DescribeMigrationJobsRequest::TagFiltersHasBeenSet() const
{
    return m_tagFiltersHasBeenSet;
}


