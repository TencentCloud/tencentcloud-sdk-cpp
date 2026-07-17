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

#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceRRPCSyncRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CallDeviceRRPCSyncRequest::CallDeviceRRPCSyncRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_replyTopicHasBeenSet(false)
{
}

string CallDeviceRRPCSyncRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encoding.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_replyTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplyTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_replyTopic.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CallDeviceRRPCSyncRequest::GetProductId() const
{
    return m_productId;
}

void CallDeviceRRPCSyncRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CallDeviceRRPCSyncRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CallDeviceRRPCSyncRequest::GetDeviceName() const
{
    return m_deviceName;
}

void CallDeviceRRPCSyncRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CallDeviceRRPCSyncRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CallDeviceRRPCSyncRequest::GetPayload() const
{
    return m_payload;
}

void CallDeviceRRPCSyncRequest::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool CallDeviceRRPCSyncRequest::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

string CallDeviceRRPCSyncRequest::GetEncoding() const
{
    return m_encoding;
}

void CallDeviceRRPCSyncRequest::SetEncoding(const string& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool CallDeviceRRPCSyncRequest::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}

string CallDeviceRRPCSyncRequest::GetTopic() const
{
    return m_topic;
}

void CallDeviceRRPCSyncRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool CallDeviceRRPCSyncRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string CallDeviceRRPCSyncRequest::GetReplyTopic() const
{
    return m_replyTopic;
}

void CallDeviceRRPCSyncRequest::SetReplyTopic(const string& _replyTopic)
{
    m_replyTopic = _replyTopic;
    m_replyTopicHasBeenSet = true;
}

bool CallDeviceRRPCSyncRequest::ReplyTopicHasBeenSet() const
{
    return m_replyTopicHasBeenSet;
}


