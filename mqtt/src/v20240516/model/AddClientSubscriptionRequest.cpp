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

#include <tencentcloud/mqtt/v20240516/model/AddClientSubscriptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

AddClientSubscriptionRequest::AddClientSubscriptionRequest() :
    m_instanceIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_topicFilterHasBeenSet(false),
    m_qosHasBeenSet(false)
{
}

string AddClientSubscriptionRequest::ToJsonString() const
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

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicFilterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicFilter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicFilter.c_str(), allocator).Move(), allocator);
    }

    if (m_qosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qos.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddClientSubscriptionRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AddClientSubscriptionRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AddClientSubscriptionRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AddClientSubscriptionRequest::GetClientId() const
{
    return m_clientId;
}

void AddClientSubscriptionRequest::SetClientId(const string& _clientId)
{
    m_clientId = _clientId;
    m_clientIdHasBeenSet = true;
}

bool AddClientSubscriptionRequest::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

string AddClientSubscriptionRequest::GetTopicFilter() const
{
    return m_topicFilter;
}

void AddClientSubscriptionRequest::SetTopicFilter(const string& _topicFilter)
{
    m_topicFilter = _topicFilter;
    m_topicFilterHasBeenSet = true;
}

bool AddClientSubscriptionRequest::TopicFilterHasBeenSet() const
{
    return m_topicFilterHasBeenSet;
}

string AddClientSubscriptionRequest::GetQos() const
{
    return m_qos;
}

void AddClientSubscriptionRequest::SetQos(const string& _qos)
{
    m_qos = _qos;
    m_qosHasBeenSet = true;
}

bool AddClientSubscriptionRequest::QosHasBeenSet() const
{
    return m_qosHasBeenSet;
}


