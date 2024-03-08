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

#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQMsgResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeRocketMQMsgResponse::DescribeRocketMQMsgResponse() :
    m_bodyHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_produceTimeHasBeenSet(false),
    m_msgIdHasBeenSet(false),
    m_producerAddrHasBeenSet(false),
    m_messageTracksHasBeenSet(false),
    m_showTopicNameHasBeenSet(false),
    m_messageTracksCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRocketMQMsgResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Body") && !rsp["Body"].IsNull())
    {
        if (!rsp["Body"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Body` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_body = string(rsp["Body"].GetString());
        m_bodyHasBeenSet = true;
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

    if (rsp.HasMember("ProducerAddr") && !rsp["ProducerAddr"].IsNull())
    {
        if (!rsp["ProducerAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProducerAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_producerAddr = string(rsp["ProducerAddr"].GetString());
        m_producerAddrHasBeenSet = true;
    }

    if (rsp.HasMember("MessageTracks") && !rsp["MessageTracks"].IsNull())
    {
        if (!rsp["MessageTracks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MessageTracks` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MessageTracks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RocketMQMessageTrack item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_messageTracks.push_back(item);
        }
        m_messageTracksHasBeenSet = true;
    }

    if (rsp.HasMember("ShowTopicName") && !rsp["ShowTopicName"].IsNull())
    {
        if (!rsp["ShowTopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShowTopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_showTopicName = string(rsp["ShowTopicName"].GetString());
        m_showTopicNameHasBeenSet = true;
    }

    if (rsp.HasMember("MessageTracksCount") && !rsp["MessageTracksCount"].IsNull())
    {
        if (!rsp["MessageTracksCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MessageTracksCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageTracksCount = rsp["MessageTracksCount"].GetInt64();
        m_messageTracksCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRocketMQMsgResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_body.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
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

    if (m_producerAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProducerAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_producerAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_messageTracksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageTracks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_messageTracks.begin(); itr != m_messageTracks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_showTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShowTopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_showTopicName.c_str(), allocator).Move(), allocator);
    }

    if (m_messageTracksCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageTracksCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageTracksCount, allocator);
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


string DescribeRocketMQMsgResponse::GetBody() const
{
    return m_body;
}

bool DescribeRocketMQMsgResponse::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

string DescribeRocketMQMsgResponse::GetProperties() const
{
    return m_properties;
}

bool DescribeRocketMQMsgResponse::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string DescribeRocketMQMsgResponse::GetProduceTime() const
{
    return m_produceTime;
}

bool DescribeRocketMQMsgResponse::ProduceTimeHasBeenSet() const
{
    return m_produceTimeHasBeenSet;
}

string DescribeRocketMQMsgResponse::GetMsgId() const
{
    return m_msgId;
}

bool DescribeRocketMQMsgResponse::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string DescribeRocketMQMsgResponse::GetProducerAddr() const
{
    return m_producerAddr;
}

bool DescribeRocketMQMsgResponse::ProducerAddrHasBeenSet() const
{
    return m_producerAddrHasBeenSet;
}

vector<RocketMQMessageTrack> DescribeRocketMQMsgResponse::GetMessageTracks() const
{
    return m_messageTracks;
}

bool DescribeRocketMQMsgResponse::MessageTracksHasBeenSet() const
{
    return m_messageTracksHasBeenSet;
}

string DescribeRocketMQMsgResponse::GetShowTopicName() const
{
    return m_showTopicName;
}

bool DescribeRocketMQMsgResponse::ShowTopicNameHasBeenSet() const
{
    return m_showTopicNameHasBeenSet;
}

int64_t DescribeRocketMQMsgResponse::GetMessageTracksCount() const
{
    return m_messageTracksCount;
}

bool DescribeRocketMQMsgResponse::MessageTracksCountHasBeenSet() const
{
    return m_messageTracksCountHasBeenSet;
}


