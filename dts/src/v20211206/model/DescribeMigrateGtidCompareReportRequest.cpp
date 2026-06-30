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

#include <tencentcloud/dts/v20211206/model/DescribeMigrateGtidCompareReportRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DescribeMigrateGtidCompareReportRequest::DescribeMigrateGtidCompareReportRequest() :
    m_jobIdHasBeenSet(false),
    m_compareTaskIdHasBeenSet(false),
    m_needDiffDetailHasBeenSet(false)
{
}

string DescribeMigrateGtidCompareReportRequest::ToJsonString() const
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

    if (m_needDiffDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedDiffDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needDiffDetail, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMigrateGtidCompareReportRequest::GetJobId() const
{
    return m_jobId;
}

void DescribeMigrateGtidCompareReportRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool DescribeMigrateGtidCompareReportRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

string DescribeMigrateGtidCompareReportRequest::GetCompareTaskId() const
{
    return m_compareTaskId;
}

void DescribeMigrateGtidCompareReportRequest::SetCompareTaskId(const string& _compareTaskId)
{
    m_compareTaskId = _compareTaskId;
    m_compareTaskIdHasBeenSet = true;
}

bool DescribeMigrateGtidCompareReportRequest::CompareTaskIdHasBeenSet() const
{
    return m_compareTaskIdHasBeenSet;
}

bool DescribeMigrateGtidCompareReportRequest::GetNeedDiffDetail() const
{
    return m_needDiffDetail;
}

void DescribeMigrateGtidCompareReportRequest::SetNeedDiffDetail(const bool& _needDiffDetail)
{
    m_needDiffDetail = _needDiffDetail;
    m_needDiffDetailHasBeenSet = true;
}

bool DescribeMigrateGtidCompareReportRequest::NeedDiffDetailHasBeenSet() const
{
    return m_needDiffDetailHasBeenSet;
}


