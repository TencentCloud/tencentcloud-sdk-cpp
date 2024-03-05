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

#include <tencentcloud/tdmq/v20200217/model/DescribeMsgResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeMsgResponse::DescribeMsgResponse() :
    m_propertiesHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_produceTimeHasBeenSet(false),
    m_msgIdHasBeenSet(false),
    m_producerNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMsgResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Properties") && !rsp["Properties"].IsNull())
    {
        if (!rsp["Properties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Properties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_properties = string(rsp["Properties"].GetString());
        m_propertiesHasBeenSet = true;
    }

    if (rsp.HasMember("Body") && !rsp["Body"].IsNull())
    {
        if (!rsp["Body"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Body` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_body = string(rsp["Body"].GetString());
        m_bodyHasBeenSet = true;
    }

    if (rsp.HasMember("BatchId") && !rsp["BatchId"].IsNull())
    {
        if (!rsp["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(rsp["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (rsp.HasMember("ProduceTime") && !rsp["ProduceTime"].IsNull())
    {
        if (!rsp["ProduceTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProduceTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_produceTime = string(rsp["ProduceTime"].GetString());
        m_produceTimeHasBeenSet = true;
    }

    if (rsp.HasMember("MsgId") && !rsp["MsgId"].IsNull())
    {
        if (!rsp["MsgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MsgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgId = string(rsp["MsgId"].GetString());
        m_msgIdHasBeenSet = true;
    }

    if (rsp.HasMember("ProducerName") && !rsp["ProducerName"].IsNull())
    {
        if (!rsp["ProducerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProducerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producerName = string(rsp["ProducerName"].GetString());
        m_producerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMsgResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_body.c_str(), allocator).Move(), allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_produceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProduceTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_produceTime.c_str(), allocator).Move(), allocator);
    }

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_producerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_producerName.c_str(), allocator).Move(), allocator);
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


string DescribeMsgResponse::GetProperties() const
{
    return m_properties;
}

bool DescribeMsgResponse::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string DescribeMsgResponse::GetBody() const
{
    return m_body;
}

bool DescribeMsgResponse::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

string DescribeMsgResponse::GetBatchId() const
{
    return m_batchId;
}

bool DescribeMsgResponse::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string DescribeMsgResponse::GetProduceTime() const
{
    return m_produceTime;
}

bool DescribeMsgResponse::ProduceTimeHasBeenSet() const
{
    return m_produceTimeHasBeenSet;
}

string DescribeMsgResponse::GetMsgId() const
{
    return m_msgId;
}

bool DescribeMsgResponse::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string DescribeMsgResponse::GetProducerName() const
{
    return m_producerName;
}

bool DescribeMsgResponse::ProducerNameHasBeenSet() const
{
    return m_producerNameHasBeenSet;
}


