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

#include <tencentcloud/apm/v20210622/model/ModifyApmAssociationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ModifyApmAssociationRequest::ModifyApmAssociationRequest() :
    m_productNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_peerIdHasBeenSet(false),
    m_topicHasBeenSet(false)
{
}

string ModifyApmAssociationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_peerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peerId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyApmAssociationRequest::GetProductName() const
{
    return m_productName;
}

void ModifyApmAssociationRequest::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool ModifyApmAssociationRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

uint64_t ModifyApmAssociationRequest::GetStatus() const
{
    return m_status;
}

void ModifyApmAssociationRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyApmAssociationRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyApmAssociationRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyApmAssociationRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyApmAssociationRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyApmAssociationRequest::GetPeerId() const
{
    return m_peerId;
}

void ModifyApmAssociationRequest::SetPeerId(const string& _peerId)
{
    m_peerId = _peerId;
    m_peerIdHasBeenSet = true;
}

bool ModifyApmAssociationRequest::PeerIdHasBeenSet() const
{
    return m_peerIdHasBeenSet;
}

string ModifyApmAssociationRequest::GetTopic() const
{
    return m_topic;
}

void ModifyApmAssociationRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool ModifyApmAssociationRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}


