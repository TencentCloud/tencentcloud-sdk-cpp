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

#include <tencentcloud/dlc/v20210125/model/QueryDashboardOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

QueryDashboardOverviewResponse::QueryDashboardOverviewResponse() :
    m_totalRequestsPerSecondHasBeenSet(false),
    m_averageP99LatencyMsHasBeenSet(false),
    m_errorRateHasBeenSet(false)
{
}

CoreInternalOutcome QueryDashboardOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalRequestsPerSecond") && !rsp["TotalRequestsPerSecond"].IsNull())
    {
        if (!rsp["TotalRequestsPerSecond"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalRequestsPerSecond` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalRequestsPerSecond = rsp["TotalRequestsPerSecond"].GetDouble();
        m_totalRequestsPerSecondHasBeenSet = true;
    }

    if (rsp.HasMember("AverageP99LatencyMs") && !rsp["AverageP99LatencyMs"].IsNull())
    {
        if (!rsp["AverageP99LatencyMs"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AverageP99LatencyMs` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_averageP99LatencyMs = rsp["AverageP99LatencyMs"].GetDouble();
        m_averageP99LatencyMsHasBeenSet = true;
    }

    if (rsp.HasMember("ErrorRate") && !rsp["ErrorRate"].IsNull())
    {
        if (!rsp["ErrorRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_errorRate = rsp["ErrorRate"].GetDouble();
        m_errorRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryDashboardOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalRequestsPerSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRequestsPerSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRequestsPerSecond, allocator);
    }

    if (m_averageP99LatencyMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageP99LatencyMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageP99LatencyMs, allocator);
    }

    if (m_errorRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorRate, allocator);
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


double QueryDashboardOverviewResponse::GetTotalRequestsPerSecond() const
{
    return m_totalRequestsPerSecond;
}

bool QueryDashboardOverviewResponse::TotalRequestsPerSecondHasBeenSet() const
{
    return m_totalRequestsPerSecondHasBeenSet;
}

double QueryDashboardOverviewResponse::GetAverageP99LatencyMs() const
{
    return m_averageP99LatencyMs;
}

bool QueryDashboardOverviewResponse::AverageP99LatencyMsHasBeenSet() const
{
    return m_averageP99LatencyMsHasBeenSet;
}

double QueryDashboardOverviewResponse::GetErrorRate() const
{
    return m_errorRate;
}

bool QueryDashboardOverviewResponse::ErrorRateHasBeenSet() const
{
    return m_errorRateHasBeenSet;
}


