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

#include <tencentcloud/thpc/v20230321/model/DescribeJobsOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

DescribeJobsOverviewResponse::DescribeJobsOverviewResponse() :
    m_jobTotalHasBeenSet(false),
    m_queuingJobTotalHasBeenSet(false),
    m_runningJobTotalHasBeenSet(false)
{
}

CoreInternalOutcome DescribeJobsOverviewResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("JobTotal") && !rsp["JobTotal"].IsNull())
    {
        if (!rsp["JobTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `JobTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_jobTotal = rsp["JobTotal"].GetUint64();
        m_jobTotalHasBeenSet = true;
    }

    if (rsp.HasMember("QueuingJobTotal") && !rsp["QueuingJobTotal"].IsNull())
    {
        if (!rsp["QueuingJobTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueuingJobTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_queuingJobTotal = rsp["QueuingJobTotal"].GetUint64();
        m_queuingJobTotalHasBeenSet = true;
    }

    if (rsp.HasMember("RunningJobTotal") && !rsp["RunningJobTotal"].IsNull())
    {
        if (!rsp["RunningJobTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RunningJobTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_runningJobTotal = rsp["RunningJobTotal"].GetUint64();
        m_runningJobTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeJobsOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_jobTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobTotal, allocator);
    }

    if (m_queuingJobTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueuingJobTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queuingJobTotal, allocator);
    }

    if (m_runningJobTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningJobTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningJobTotal, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeJobsOverviewResponse::GetJobTotal() const
{
    return m_jobTotal;
}

bool DescribeJobsOverviewResponse::JobTotalHasBeenSet() const
{
    return m_jobTotalHasBeenSet;
}

uint64_t DescribeJobsOverviewResponse::GetQueuingJobTotal() const
{
    return m_queuingJobTotal;
}

bool DescribeJobsOverviewResponse::QueuingJobTotalHasBeenSet() const
{
    return m_queuingJobTotalHasBeenSet;
}

uint64_t DescribeJobsOverviewResponse::GetRunningJobTotal() const
{
    return m_runningJobTotal;
}

bool DescribeJobsOverviewResponse::RunningJobTotalHasBeenSet() const
{
    return m_runningJobTotalHasBeenSet;
}


