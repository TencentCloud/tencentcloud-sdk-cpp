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

#include <tencentcloud/pts/v20210728/model/DescribeCronJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

DescribeCronJobsRequest::DescribeCronJobsRequest() :
    m_projectIdsHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_cronJobIdsHasBeenSet(false),
    m_cronJobNameHasBeenSet(false),
    m_cronJobStatusHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_ascendHasBeenSet(false)
{
}

string DescribeCronJobsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_cronJobIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronJobIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cronJobIds.begin(); itr != m_cronJobIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cronJobNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronJobName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cronJobName.c_str(), allocator).Move(), allocator);
    }

    if (m_cronJobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronJobStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cronJobStatus.begin(); itr != m_cronJobStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_ascendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ascend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ascend, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeCronJobsRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeCronJobsRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeCronJobsRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

int64_t DescribeCronJobsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCronJobsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCronJobsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeCronJobsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCronJobsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCronJobsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeCronJobsRequest::GetCronJobIds() const
{
    return m_cronJobIds;
}

void DescribeCronJobsRequest::SetCronJobIds(const vector<string>& _cronJobIds)
{
    m_cronJobIds = _cronJobIds;
    m_cronJobIdsHasBeenSet = true;
}

bool DescribeCronJobsRequest::CronJobIdsHasBeenSet() const
{
    return m_cronJobIdsHasBeenSet;
}

string DescribeCronJobsRequest::GetCronJobName() const
{
    return m_cronJobName;
}

void DescribeCronJobsRequest::SetCronJobName(const string& _cronJobName)
{
    m_cronJobName = _cronJobName;
    m_cronJobNameHasBeenSet = true;
}

bool DescribeCronJobsRequest::CronJobNameHasBeenSet() const
{
    return m_cronJobNameHasBeenSet;
}

vector<int64_t> DescribeCronJobsRequest::GetCronJobStatus() const
{
    return m_cronJobStatus;
}

void DescribeCronJobsRequest::SetCronJobStatus(const vector<int64_t>& _cronJobStatus)
{
    m_cronJobStatus = _cronJobStatus;
    m_cronJobStatusHasBeenSet = true;
}

bool DescribeCronJobsRequest::CronJobStatusHasBeenSet() const
{
    return m_cronJobStatusHasBeenSet;
}

string DescribeCronJobsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeCronJobsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeCronJobsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

bool DescribeCronJobsRequest::GetAscend() const
{
    return m_ascend;
}

void DescribeCronJobsRequest::SetAscend(const bool& _ascend)
{
    m_ascend = _ascend;
    m_ascendHasBeenSet = true;
}

bool DescribeCronJobsRequest::AscendHasBeenSet() const
{
    return m_ascendHasBeenSet;
}


