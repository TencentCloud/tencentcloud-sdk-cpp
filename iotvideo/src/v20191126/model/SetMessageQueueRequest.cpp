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

#include <tencentcloud/iotvideo/v20191126/model/SetMessageQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

SetMessageQueueRequest::SetMessageQueueRequest() :
    m_productIdHasBeenSet(false),
    m_msgQueueTypeHasBeenSet(false),
    m_msgTypeHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_instanceHasBeenSet(false),
    m_msgRegionHasBeenSet(false)
{
}

string SetMessageQueueRequest::ToJsonString() const
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

    if (m_msgQueueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgQueueType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_msgQueueType, allocator);
    }

    if (m_msgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgType.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instance.c_str(), allocator).Move(), allocator);
    }

    if (m_msgRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetMessageQueueRequest::GetProductId() const
{
    return m_productId;
}

void SetMessageQueueRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool SetMessageQueueRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

uint64_t SetMessageQueueRequest::GetMsgQueueType() const
{
    return m_msgQueueType;
}

void SetMessageQueueRequest::SetMsgQueueType(const uint64_t& _msgQueueType)
{
    m_msgQueueType = _msgQueueType;
    m_msgQueueTypeHasBeenSet = true;
}

bool SetMessageQueueRequest::MsgQueueTypeHasBeenSet() const
{
    return m_msgQueueTypeHasBeenSet;
}

string SetMessageQueueRequest::GetMsgType() const
{
    return m_msgType;
}

void SetMessageQueueRequest::SetMsgType(const string& _msgType)
{
    m_msgType = _msgType;
    m_msgTypeHasBeenSet = true;
}

bool SetMessageQueueRequest::MsgTypeHasBeenSet() const
{
    return m_msgTypeHasBeenSet;
}

string SetMessageQueueRequest::GetTopic() const
{
    return m_topic;
}

void SetMessageQueueRequest::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool SetMessageQueueRequest::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string SetMessageQueueRequest::GetInstance() const
{
    return m_instance;
}

void SetMessageQueueRequest::SetInstance(const string& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool SetMessageQueueRequest::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string SetMessageQueueRequest::GetMsgRegion() const
{
    return m_msgRegion;
}

void SetMessageQueueRequest::SetMsgRegion(const string& _msgRegion)
{
    m_msgRegion = _msgRegion;
    m_msgRegionHasBeenSet = true;
}

bool SetMessageQueueRequest::MsgRegionHasBeenSet() const
{
    return m_msgRegionHasBeenSet;
}


