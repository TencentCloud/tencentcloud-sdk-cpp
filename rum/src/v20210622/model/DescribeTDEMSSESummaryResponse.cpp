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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMSSESummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMSSESummaryResponse::DescribeTDEMSSESummaryResponse() :
    m_conversationCountHasBeenSet(false),
    m_totalTokenCountHasBeenSet(false),
    m_tokenThroughputHasBeenSet(false),
    m_firstMessageDelayHasBeenSet(false),
    m_errorRateHasBeenSet(false),
    m_stallRateHasBeenSet(false),
    m_fluencyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTDEMSSESummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ConversationCount") && !rsp["ConversationCount"].IsNull())
    {
        if (!rsp["ConversationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_conversationCount = rsp["ConversationCount"].GetInt64();
        m_conversationCountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalTokenCount") && !rsp["TotalTokenCount"].IsNull())
    {
        if (!rsp["TotalTokenCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalTokenCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokenCount = rsp["TotalTokenCount"].GetInt64();
        m_totalTokenCountHasBeenSet = true;
    }

    if (rsp.HasMember("TokenThroughput") && !rsp["TokenThroughput"].IsNull())
    {
        if (!rsp["TokenThroughput"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TokenThroughput` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tokenThroughput = rsp["TokenThroughput"].GetDouble();
        m_tokenThroughputHasBeenSet = true;
    }

    if (rsp.HasMember("FirstMessageDelay") && !rsp["FirstMessageDelay"].IsNull())
    {
        if (!rsp["FirstMessageDelay"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FirstMessageDelay` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_firstMessageDelay = rsp["FirstMessageDelay"].GetDouble();
        m_firstMessageDelayHasBeenSet = true;
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

    if (rsp.HasMember("StallRate") && !rsp["StallRate"].IsNull())
    {
        if (!rsp["StallRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StallRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_stallRate = rsp["StallRate"].GetDouble();
        m_stallRateHasBeenSet = true;
    }

    if (rsp.HasMember("Fluency") && !rsp["Fluency"].IsNull())
    {
        if (!rsp["Fluency"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Fluency` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fluency = rsp["Fluency"].GetDouble();
        m_fluencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTDEMSSESummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_conversationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConversationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_conversationCount, allocator);
    }

    if (m_totalTokenCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokenCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokenCount, allocator);
    }

    if (m_tokenThroughputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenThroughput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenThroughput, allocator);
    }

    if (m_firstMessageDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstMessageDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_firstMessageDelay, allocator);
    }

    if (m_errorRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorRate, allocator);
    }

    if (m_stallRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StallRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stallRate, allocator);
    }

    if (m_fluencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fluency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fluency, allocator);
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


int64_t DescribeTDEMSSESummaryResponse::GetConversationCount() const
{
    return m_conversationCount;
}

bool DescribeTDEMSSESummaryResponse::ConversationCountHasBeenSet() const
{
    return m_conversationCountHasBeenSet;
}

int64_t DescribeTDEMSSESummaryResponse::GetTotalTokenCount() const
{
    return m_totalTokenCount;
}

bool DescribeTDEMSSESummaryResponse::TotalTokenCountHasBeenSet() const
{
    return m_totalTokenCountHasBeenSet;
}

double DescribeTDEMSSESummaryResponse::GetTokenThroughput() const
{
    return m_tokenThroughput;
}

bool DescribeTDEMSSESummaryResponse::TokenThroughputHasBeenSet() const
{
    return m_tokenThroughputHasBeenSet;
}

double DescribeTDEMSSESummaryResponse::GetFirstMessageDelay() const
{
    return m_firstMessageDelay;
}

bool DescribeTDEMSSESummaryResponse::FirstMessageDelayHasBeenSet() const
{
    return m_firstMessageDelayHasBeenSet;
}

double DescribeTDEMSSESummaryResponse::GetErrorRate() const
{
    return m_errorRate;
}

bool DescribeTDEMSSESummaryResponse::ErrorRateHasBeenSet() const
{
    return m_errorRateHasBeenSet;
}

double DescribeTDEMSSESummaryResponse::GetStallRate() const
{
    return m_stallRate;
}

bool DescribeTDEMSSESummaryResponse::StallRateHasBeenSet() const
{
    return m_stallRateHasBeenSet;
}

double DescribeTDEMSSESummaryResponse::GetFluency() const
{
    return m_fluency;
}

bool DescribeTDEMSSESummaryResponse::FluencyHasBeenSet() const
{
    return m_fluencyHasBeenSet;
}


