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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMDialOverviewResponse::DescribeTDEMDialOverviewResponse() :
    m_taskCountHasBeenSet(false),
    m_executionCountHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failCountHasBeenSet(false),
    m_avgDurationHasBeenSet(false),
    m_avgLossHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTDEMDialOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskCount") && !rsp["TaskCount"].IsNull())
    {
        if (!rsp["TaskCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskCount = rsp["TaskCount"].GetInt64();
        m_taskCountHasBeenSet = true;
    }

    if (rsp.HasMember("ExecutionCount") && !rsp["ExecutionCount"].IsNull())
    {
        if (!rsp["ExecutionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executionCount = rsp["ExecutionCount"].GetInt64();
        m_executionCountHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessCount") && !rsp["SuccessCount"].IsNull())
    {
        if (!rsp["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = rsp["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (rsp.HasMember("FailCount") && !rsp["FailCount"].IsNull())
    {
        if (!rsp["FailCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FailCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failCount = rsp["FailCount"].GetInt64();
        m_failCountHasBeenSet = true;
    }

    if (rsp.HasMember("AvgDuration") && !rsp["AvgDuration"].IsNull())
    {
        if (!rsp["AvgDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AvgDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgDuration = rsp["AvgDuration"].GetDouble();
        m_avgDurationHasBeenSet = true;
    }

    if (rsp.HasMember("AvgLoss") && !rsp["AvgLoss"].IsNull())
    {
        if (!rsp["AvgLoss"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AvgLoss` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgLoss = rsp["AvgLoss"].GetDouble();
        m_avgLossHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTDEMDialOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskCount, allocator);
    }

    if (m_executionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executionCount, allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failCount, allocator);
    }

    if (m_avgDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgDuration, allocator);
    }

    if (m_avgLossHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgLoss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgLoss, allocator);
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


int64_t DescribeTDEMDialOverviewResponse::GetTaskCount() const
{
    return m_taskCount;
}

bool DescribeTDEMDialOverviewResponse::TaskCountHasBeenSet() const
{
    return m_taskCountHasBeenSet;
}

int64_t DescribeTDEMDialOverviewResponse::GetExecutionCount() const
{
    return m_executionCount;
}

bool DescribeTDEMDialOverviewResponse::ExecutionCountHasBeenSet() const
{
    return m_executionCountHasBeenSet;
}

int64_t DescribeTDEMDialOverviewResponse::GetSuccessCount() const
{
    return m_successCount;
}

bool DescribeTDEMDialOverviewResponse::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t DescribeTDEMDialOverviewResponse::GetFailCount() const
{
    return m_failCount;
}

bool DescribeTDEMDialOverviewResponse::FailCountHasBeenSet() const
{
    return m_failCountHasBeenSet;
}

double DescribeTDEMDialOverviewResponse::GetAvgDuration() const
{
    return m_avgDuration;
}

bool DescribeTDEMDialOverviewResponse::AvgDurationHasBeenSet() const
{
    return m_avgDurationHasBeenSet;
}

double DescribeTDEMDialOverviewResponse::GetAvgLoss() const
{
    return m_avgLoss;
}

bool DescribeTDEMDialOverviewResponse::AvgLossHasBeenSet() const
{
    return m_avgLossHasBeenSet;
}


