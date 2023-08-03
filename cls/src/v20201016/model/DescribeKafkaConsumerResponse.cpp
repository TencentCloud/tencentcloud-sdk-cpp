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

#include <tencentcloud/cls/v20201016/model/DescribeKafkaConsumerResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeKafkaConsumerResponse::DescribeKafkaConsumerResponse() :
    m_statusHasBeenSet(false),
    m_topicIDHasBeenSet(false),
    m_compressionHasBeenSet(false),
    m_consumerContentHasBeenSet(false)
{
}

CoreInternalOutcome DescribeKafkaConsumerResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("TopicID") && !rsp["TopicID"].IsNull())
    {
        if (!rsp["TopicID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicID = string(rsp["TopicID"].GetString());
        m_topicIDHasBeenSet = true;
    }

    if (rsp.HasMember("Compression") && !rsp["Compression"].IsNull())
    {
        if (!rsp["Compression"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Compression` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_compression = rsp["Compression"].GetInt64();
        m_compressionHasBeenSet = true;
    }

    if (rsp.HasMember("ConsumerContent") && !rsp["ConsumerContent"].IsNull())
    {
        if (!rsp["ConsumerContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_consumerContent.Deserialize(rsp["ConsumerContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_consumerContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeKafkaConsumerResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_topicIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicID.c_str(), allocator).Move(), allocator);
    }

    if (m_compressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_compression, allocator);
    }

    if (m_consumerContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_consumerContent.ToJsonObject(value[key.c_str()], allocator);
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


bool DescribeKafkaConsumerResponse::GetStatus() const
{
    return m_status;
}

bool DescribeKafkaConsumerResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeKafkaConsumerResponse::GetTopicID() const
{
    return m_topicID;
}

bool DescribeKafkaConsumerResponse::TopicIDHasBeenSet() const
{
    return m_topicIDHasBeenSet;
}

int64_t DescribeKafkaConsumerResponse::GetCompression() const
{
    return m_compression;
}

bool DescribeKafkaConsumerResponse::CompressionHasBeenSet() const
{
    return m_compressionHasBeenSet;
}

KafkaConsumerContent DescribeKafkaConsumerResponse::GetConsumerContent() const
{
    return m_consumerContent;
}

bool DescribeKafkaConsumerResponse::ConsumerContentHasBeenSet() const
{
    return m_consumerContentHasBeenSet;
}


