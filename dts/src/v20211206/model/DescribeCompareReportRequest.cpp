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

#include <tencentcloud/dts/v20211206/model/DescribeCompareReportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DescribeCompareReportRequest::DescribeCompareReportRequest() :
    m_jobIdHasBeenSet(false),
    m_compareTaskIdHasBeenSet(false),
    m_differenceLimitHasBeenSet(false),
    m_differenceOffsetHasBeenSet(false),
    m_differenceDBHasBeenSet(false),
    m_differenceTableHasBeenSet(false),
    m_skippedLimitHasBeenSet(false),
    m_skippedOffsetHasBeenSet(false),
    m_skippedDBHasBeenSet(false),
    m_skippedTableHasBeenSet(false)
{
}

string DescribeCompareReportRequest::ToJsonString() const
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

    if (m_compareTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compareTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_differenceLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferenceLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_differenceLimit, allocator);
    }

    if (m_differenceOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferenceOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_differenceOffset, allocator);
    }

    if (m_differenceDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferenceDB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_differenceDB.c_str(), allocator).Move(), allocator);
    }

    if (m_differenceTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DifferenceTable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_differenceTable.c_str(), allocator).Move(), allocator);
    }

    if (m_skippedLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkippedLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skippedLimit, allocator);
    }

    if (m_skippedOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkippedOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skippedOffset, allocator);
    }

    if (m_skippedDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkippedDB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skippedDB.c_str(), allocator).Move(), allocator);
    }

    if (m_skippedTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkippedTable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skippedTable.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCompareReportRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeCompareReportRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeCompareReportRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeCompareReportRequest::GetCompareTaskId() const
{
    return m_compareTaskId;
}

void DescribeCompareReportRequest::SetCompareTaskId(const string& _compareTaskId)
{
    m_compareTaskId = _compareTaskId;
    m_compareTaskIdHasBeenSet = true;
}

bool DescribeCompareReportRequest::CompareTaskIdHasBeenSet() const
{
    return m_compareTaskIdHasBeenSet;
}

uint64_t DescribeCompareReportRequest::GetDifferenceLimit() const
{
    return m_differenceLimit;
}

void DescribeCompareReportRequest::SetDifferenceLimit(const uint64_t& _differenceLimit)
{
    m_differenceLimit = _differenceLimit;
    m_differenceLimitHasBeenSet = true;
}

bool DescribeCompareReportRequest::DifferenceLimitHasBeenSet() const
{
    return m_differenceLimitHasBeenSet;
}

uint64_t DescribeCompareReportRequest::GetDifferenceOffset() const
{
    return m_differenceOffset;
}

void DescribeCompareReportRequest::SetDifferenceOffset(const uint64_t& _differenceOffset)
{
    m_differenceOffset = _differenceOffset;
    m_differenceOffsetHasBeenSet = true;
}

bool DescribeCompareReportRequest::DifferenceOffsetHasBeenSet() const
{
    return m_differenceOffsetHasBeenSet;
}

string DescribeCompareReportRequest::GetDifferenceDB() const
{
    return m_differenceDB;
}

void DescribeCompareReportRequest::SetDifferenceDB(const string& _differenceDB)
{
    m_differenceDB = _differenceDB;
    m_differenceDBHasBeenSet = true;
}

bool DescribeCompareReportRequest::DifferenceDBHasBeenSet() const
{
    return m_differenceDBHasBeenSet;
}

string DescribeCompareReportRequest::GetDifferenceTable() const
{
    return m_differenceTable;
}

void DescribeCompareReportRequest::SetDifferenceTable(const string& _differenceTable)
{
    m_differenceTable = _differenceTable;
    m_differenceTableHasBeenSet = true;
}

bool DescribeCompareReportRequest::DifferenceTableHasBeenSet() const
{
    return m_differenceTableHasBeenSet;
}

uint64_t DescribeCompareReportRequest::GetSkippedLimit() const
{
    return m_skippedLimit;
}

void DescribeCompareReportRequest::SetSkippedLimit(const uint64_t& _skippedLimit)
{
    m_skippedLimit = _skippedLimit;
    m_skippedLimitHasBeenSet = true;
}

bool DescribeCompareReportRequest::SkippedLimitHasBeenSet() const
{
    return m_skippedLimitHasBeenSet;
}

uint64_t DescribeCompareReportRequest::GetSkippedOffset() const
{
    return m_skippedOffset;
}

void DescribeCompareReportRequest::SetSkippedOffset(const uint64_t& _skippedOffset)
{
    m_skippedOffset = _skippedOffset;
    m_skippedOffsetHasBeenSet = true;
}

bool DescribeCompareReportRequest::SkippedOffsetHasBeenSet() const
{
    return m_skippedOffsetHasBeenSet;
}

string DescribeCompareReportRequest::GetSkippedDB() const
{
    return m_skippedDB;
}

void DescribeCompareReportRequest::SetSkippedDB(const string& _skippedDB)
{
    m_skippedDB = _skippedDB;
    m_skippedDBHasBeenSet = true;
}

bool DescribeCompareReportRequest::SkippedDBHasBeenSet() const
{
    return m_skippedDBHasBeenSet;
}

string DescribeCompareReportRequest::GetSkippedTable() const
{
    return m_skippedTable;
}

void DescribeCompareReportRequest::SetSkippedTable(const string& _skippedTable)
{
    m_skippedTable = _skippedTable;
    m_skippedTableHasBeenSet = true;
}

bool DescribeCompareReportRequest::SkippedTableHasBeenSet() const
{
    return m_skippedTableHasBeenSet;
}


