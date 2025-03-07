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

#include <tencentcloud/mqtt/v20240516/model/PublishMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

PublishMessageRequest::PublishMessageRequest() :
    m_instanceIdHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_targetTopicHasBeenSet(false),
    m_targetClientIdHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_qosHasBeenSet(false),
    m_retainHasBeenSet(false)
{
}

string PublishMessageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_targetClientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetClientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetClientId.c_str(), allocator).Move(), allocator);
    }

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encoding.c_str(), allocator).Move(), allocator);
    }

    if (m_qosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_qos, allocator);
    }

    if (m_retainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Retain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retain, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PublishMessageRequest::GetInstanceId() const
{
    return m_instanceId;
}

void PublishMessageRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PublishMessageRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PublishMessageRequest::GetPayload() const
{
    return m_payload;
}

void PublishMessageRequest::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool PublishMessageRequest::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

string PublishMessageRequest::GetTargetTopic() const
{
    return m_targetTopic;
}

void PublishMessageRequest::SetTargetTopic(const string& _targetTopic)
{
    m_targetTopic = _targetTopic;
    m_targetTopicHasBeenSet = true;
}

bool PublishMessageRequest::TargetTopicHasBeenSet() const
{
    return m_targetTopicHasBeenSet;
}

string PublishMessageRequest::GetTargetClientId() const
{
    return m_targetClientId;
}

void PublishMessageRequest::SetTargetClientId(const string& _targetClientId)
{
    m_targetClientId = _targetClientId;
    m_targetClientIdHasBeenSet = true;
}

bool PublishMessageRequest::TargetClientIdHasBeenSet() const
{
    return m_targetClientIdHasBeenSet;
}

string PublishMessageRequest::GetEncoding() const
{
    return m_encoding;
}

void PublishMessageRequest::SetEncoding(const string& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool PublishMessageRequest::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}

int64_t PublishMessageRequest::GetQos() const
{
    return m_qos;
}

void PublishMessageRequest::SetQos(const int64_t& _qos)
{
    m_qos = _qos;
    m_qosHasBeenSet = true;
}

bool PublishMessageRequest::QosHasBeenSet() const
{
    return m_qosHasBeenSet;
}

bool PublishMessageRequest::GetRetain() const
{
    return m_retain;
}

void PublishMessageRequest::SetRetain(const bool& _retain)
{
    m_retain = _retain;
    m_retainHasBeenSet = true;
}

bool PublishMessageRequest::RetainHasBeenSet() const
{
    return m_retainHasBeenSet;
}


