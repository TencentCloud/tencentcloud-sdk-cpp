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

#include <tencentcloud/tdmq/v20200217/model/DescribeAMQPCreateQuotaResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeAMQPCreateQuotaResponse::DescribeAMQPCreateQuotaResponse() :
    m_maxClusterNumHasBeenSet(false),
    m_usedClusterNumHasBeenSet(false),
    m_exchangeCapacityHasBeenSet(false),
    m_queueCapacityHasBeenSet(false),
    m_maxTpsPerVHostHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAMQPCreateQuotaResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MaxClusterNum") && !rsp["MaxClusterNum"].IsNull())
    {
        if (!rsp["MaxClusterNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxClusterNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxClusterNum = rsp["MaxClusterNum"].GetUint64();
        m_maxClusterNumHasBeenSet = true;
    }

    if (rsp.HasMember("UsedClusterNum") && !rsp["UsedClusterNum"].IsNull())
    {
        if (!rsp["UsedClusterNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedClusterNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedClusterNum = rsp["UsedClusterNum"].GetUint64();
        m_usedClusterNumHasBeenSet = true;
    }

    if (rsp.HasMember("ExchangeCapacity") && !rsp["ExchangeCapacity"].IsNull())
    {
        if (!rsp["ExchangeCapacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExchangeCapacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_exchangeCapacity = rsp["ExchangeCapacity"].GetUint64();
        m_exchangeCapacityHasBeenSet = true;
    }

    if (rsp.HasMember("QueueCapacity") && !rsp["QueueCapacity"].IsNull())
    {
        if (!rsp["QueueCapacity"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueCapacity` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_queueCapacity = rsp["QueueCapacity"].GetUint64();
        m_queueCapacityHasBeenSet = true;
    }

    if (rsp.HasMember("MaxTpsPerVHost") && !rsp["MaxTpsPerVHost"].IsNull())
    {
        if (!rsp["MaxTpsPerVHost"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxTpsPerVHost` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTpsPerVHost = rsp["MaxTpsPerVHost"].GetUint64();
        m_maxTpsPerVHostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAMQPCreateQuotaResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_maxClusterNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxClusterNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxClusterNum, allocator);
    }

    if (m_usedClusterNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedClusterNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedClusterNum, allocator);
    }

    if (m_exchangeCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExchangeCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exchangeCapacity, allocator);
    }

    if (m_queueCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueCapacity, allocator);
    }

    if (m_maxTpsPerVHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTpsPerVHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTpsPerVHost, allocator);
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


uint64_t DescribeAMQPCreateQuotaResponse::GetMaxClusterNum() const
{
    return m_maxClusterNum;
}

bool DescribeAMQPCreateQuotaResponse::MaxClusterNumHasBeenSet() const
{
    return m_maxClusterNumHasBeenSet;
}

uint64_t DescribeAMQPCreateQuotaResponse::GetUsedClusterNum() const
{
    return m_usedClusterNum;
}

bool DescribeAMQPCreateQuotaResponse::UsedClusterNumHasBeenSet() const
{
    return m_usedClusterNumHasBeenSet;
}

uint64_t DescribeAMQPCreateQuotaResponse::GetExchangeCapacity() const
{
    return m_exchangeCapacity;
}

bool DescribeAMQPCreateQuotaResponse::ExchangeCapacityHasBeenSet() const
{
    return m_exchangeCapacityHasBeenSet;
}

uint64_t DescribeAMQPCreateQuotaResponse::GetQueueCapacity() const
{
    return m_queueCapacity;
}

bool DescribeAMQPCreateQuotaResponse::QueueCapacityHasBeenSet() const
{
    return m_queueCapacityHasBeenSet;
}

uint64_t DescribeAMQPCreateQuotaResponse::GetMaxTpsPerVHost() const
{
    return m_maxTpsPerVHost;
}

bool DescribeAMQPCreateQuotaResponse::MaxTpsPerVHostHasBeenSet() const
{
    return m_maxTpsPerVHostHasBeenSet;
}


