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

#include <tencentcloud/tdmq/v20200217/model/DescribeMsgTraceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeMsgTraceResponse::DescribeMsgTraceResponse() :
    m_producerLogHasBeenSet(false),
    m_serverLogHasBeenSet(false),
    m_consumerLogsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMsgTraceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ProducerLog") && !rsp["ProducerLog"].IsNull())
    {
        if (!rsp["ProducerLog"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProducerLog` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_producerLog.Deserialize(rsp["ProducerLog"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_producerLogHasBeenSet = true;
    }

    if (rsp.HasMember("ServerLog") && !rsp["ServerLog"].IsNull())
    {
        if (!rsp["ServerLog"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServerLog` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_serverLog.Deserialize(rsp["ServerLog"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_serverLogHasBeenSet = true;
    }

    if (rsp.HasMember("ConsumerLogs") && !rsp["ConsumerLogs"].IsNull())
    {
        if (!rsp["ConsumerLogs"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerLogs` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_consumerLogs.Deserialize(rsp["ConsumerLogs"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_consumerLogsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMsgTraceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_producerLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_producerLog.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_serverLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serverLog.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_consumerLogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerLogs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_consumerLogs.ToJsonObject(value[key.c_str()], allocator);
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


ProducerLog DescribeMsgTraceResponse::GetProducerLog() const
{
    return m_producerLog;
}

bool DescribeMsgTraceResponse::ProducerLogHasBeenSet() const
{
    return m_producerLogHasBeenSet;
}

ServerLog DescribeMsgTraceResponse::GetServerLog() const
{
    return m_serverLog;
}

bool DescribeMsgTraceResponse::ServerLogHasBeenSet() const
{
    return m_serverLogHasBeenSet;
}

ConsumerLogs DescribeMsgTraceResponse::GetConsumerLogs() const
{
    return m_consumerLogs;
}

bool DescribeMsgTraceResponse::ConsumerLogsHasBeenSet() const
{
    return m_consumerLogsHasBeenSet;
}


