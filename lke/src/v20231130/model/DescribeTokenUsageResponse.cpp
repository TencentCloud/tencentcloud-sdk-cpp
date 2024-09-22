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

#include <tencentcloud/lke/v20231130/model/DescribeTokenUsageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeTokenUsageResponse::DescribeTokenUsageResponse() :
    m_totalTokenUsageHasBeenSet(false),
    m_inputTokenUsageHasBeenSet(false),
    m_outputTokenUsageHasBeenSet(false),
    m_apiCallStatsHasBeenSet(false),
    m_searchUsageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTokenUsageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalTokenUsage") && !rsp["TotalTokenUsage"].IsNull())
    {
        if (!rsp["TotalTokenUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalTokenUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokenUsage = rsp["TotalTokenUsage"].GetDouble();
        m_totalTokenUsageHasBeenSet = true;
    }

    if (rsp.HasMember("InputTokenUsage") && !rsp["InputTokenUsage"].IsNull())
    {
        if (!rsp["InputTokenUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InputTokenUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokenUsage = rsp["InputTokenUsage"].GetDouble();
        m_inputTokenUsageHasBeenSet = true;
    }

    if (rsp.HasMember("OutputTokenUsage") && !rsp["OutputTokenUsage"].IsNull())
    {
        if (!rsp["OutputTokenUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OutputTokenUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokenUsage = rsp["OutputTokenUsage"].GetDouble();
        m_outputTokenUsageHasBeenSet = true;
    }

    if (rsp.HasMember("ApiCallStats") && !rsp["ApiCallStats"].IsNull())
    {
        if (!rsp["ApiCallStats"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiCallStats` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_apiCallStats = rsp["ApiCallStats"].GetUint64();
        m_apiCallStatsHasBeenSet = true;
    }

    if (rsp.HasMember("SearchUsage") && !rsp["SearchUsage"].IsNull())
    {
        if (!rsp["SearchUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SearchUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_searchUsage = rsp["SearchUsage"].GetDouble();
        m_searchUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTokenUsageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalTokenUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokenUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokenUsage, allocator);
    }

    if (m_inputTokenUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTokenUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputTokenUsage, allocator);
    }

    if (m_outputTokenUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputTokenUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputTokenUsage, allocator);
    }

    if (m_apiCallStatsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiCallStats";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiCallStats, allocator);
    }

    if (m_searchUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_searchUsage, allocator);
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


double DescribeTokenUsageResponse::GetTotalTokenUsage() const
{
    return m_totalTokenUsage;
}

bool DescribeTokenUsageResponse::TotalTokenUsageHasBeenSet() const
{
    return m_totalTokenUsageHasBeenSet;
}

double DescribeTokenUsageResponse::GetInputTokenUsage() const
{
    return m_inputTokenUsage;
}

bool DescribeTokenUsageResponse::InputTokenUsageHasBeenSet() const
{
    return m_inputTokenUsageHasBeenSet;
}

double DescribeTokenUsageResponse::GetOutputTokenUsage() const
{
    return m_outputTokenUsage;
}

bool DescribeTokenUsageResponse::OutputTokenUsageHasBeenSet() const
{
    return m_outputTokenUsageHasBeenSet;
}

uint64_t DescribeTokenUsageResponse::GetApiCallStats() const
{
    return m_apiCallStats;
}

bool DescribeTokenUsageResponse::ApiCallStatsHasBeenSet() const
{
    return m_apiCallStatsHasBeenSet;
}

double DescribeTokenUsageResponse::GetSearchUsage() const
{
    return m_searchUsage;
}

bool DescribeTokenUsageResponse::SearchUsageHasBeenSet() const
{
    return m_searchUsageHasBeenSet;
}


