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

#include <tencentcloud/mqtt/v20240516/model/DescribeMessageDetailsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

DescribeMessageDetailsResponse::DescribeMessageDetailsResponse() :
    m_bodyHasBeenSet(false),
    m_userPropertiesHasBeenSet(false),
    m_storeTimestampHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_qosHasBeenSet(false),
    m_originTopicHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMessageDetailsResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("UserProperties") && !rsp["UserProperties"].IsNull())
    {
        if (!rsp["UserProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserProperties` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UserProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserProperty item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userProperties.push_back(item);
        }
        m_userPropertiesHasBeenSet = true;
    }

    if (rsp.HasMember("StoreTimestamp") && !rsp["StoreTimestamp"].IsNull())
    {
        if (!rsp["StoreTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StoreTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storeTimestamp = rsp["StoreTimestamp"].GetInt64();
        m_storeTimestampHasBeenSet = true;
    }

    if (rsp.HasMember("MessageId") && !rsp["MessageId"].IsNull())
    {
        if (!rsp["MessageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MessageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_messageId = string(rsp["MessageId"].GetString());
        m_messageIdHasBeenSet = true;
    }

    if (rsp.HasMember("ClientId") && !rsp["ClientId"].IsNull())
    {
        if (!rsp["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(rsp["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (rsp.HasMember("Qos") && !rsp["Qos"].IsNull())
    {
        if (!rsp["Qos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Qos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qos = string(rsp["Qos"].GetString());
        m_qosHasBeenSet = true;
    }

    if (rsp.HasMember("OriginTopic") && !rsp["OriginTopic"].IsNull())
    {
        if (!rsp["OriginTopic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originTopic = string(rsp["OriginTopic"].GetString());
        m_originTopicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMessageDetailsResponse::ToJsonString() const
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

    if (m_userPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userProperties.begin(); itr != m_userProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_storeTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storeTimestamp, allocator);
    }

    if (m_messageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_messageId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_qosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qos.c_str(), allocator).Move(), allocator);
    }

    if (m_originTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originTopic.c_str(), allocator).Move(), allocator);
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


string DescribeMessageDetailsResponse::GetBody() const
{
    return m_body;
}

bool DescribeMessageDetailsResponse::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

vector<UserProperty> DescribeMessageDetailsResponse::GetUserProperties() const
{
    return m_userProperties;
}

bool DescribeMessageDetailsResponse::UserPropertiesHasBeenSet() const
{
    return m_userPropertiesHasBeenSet;
}

int64_t DescribeMessageDetailsResponse::GetStoreTimestamp() const
{
    return m_storeTimestamp;
}

bool DescribeMessageDetailsResponse::StoreTimestampHasBeenSet() const
{
    return m_storeTimestampHasBeenSet;
}

string DescribeMessageDetailsResponse::GetMessageId() const
{
    return m_messageId;
}

bool DescribeMessageDetailsResponse::MessageIdHasBeenSet() const
{
    return m_messageIdHasBeenSet;
}

string DescribeMessageDetailsResponse::GetClientId() const
{
    return m_clientId;
}

bool DescribeMessageDetailsResponse::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string DescribeMessageDetailsResponse::GetQos() const
{
    return m_qos;
}

bool DescribeMessageDetailsResponse::QosHasBeenSet() const
{
    return m_qosHasBeenSet;
}

string DescribeMessageDetailsResponse::GetOriginTopic() const
{
    return m_originTopic;
}

bool DescribeMessageDetailsResponse::OriginTopicHasBeenSet() const
{
    return m_originTopicHasBeenSet;
}


