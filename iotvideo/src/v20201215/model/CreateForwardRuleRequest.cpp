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

#include <tencentcloud/iotvideo/v20201215/model/CreateForwardRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

CreateForwardRuleRequest::CreateForwardRuleRequest() :
    m_productIDHasBeenSet(false),
    m_msgTypeHasBeenSet(false),
    m_skeyHasBeenSet(false),
    m_queueRegionHasBeenSet(false),
    m_queueTypeHasBeenSet(false),
    m_consecretidHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_queueIDHasBeenSet(false),
    m_queueNameHasBeenSet(false)
{
}

string CreateForwardRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productID.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_msgType, allocator);
    }

    if (m_skeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Skey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_skey.c_str(), allocator).Move(), allocator);
    }

    if (m_queueRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_queueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queueType, allocator);
    }

    if (m_consecretidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Consecretid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_consecretid.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_queueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueID.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateForwardRuleRequest::GetProductID() const
{
    return m_productID;
}

void CreateForwardRuleRequest::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool CreateForwardRuleRequest::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

uint64_t CreateForwardRuleRequest::GetMsgType() const
{
    return m_msgType;
}

void CreateForwardRuleRequest::SetMsgType(const uint64_t& _msgType)
{
    m_msgType = _msgType;
    m_msgTypeHasBeenSet = true;
}

bool CreateForwardRuleRequest::MsgTypeHasBeenSet() const
{
    return m_msgTypeHasBeenSet;
}

string CreateForwardRuleRequest::GetSkey() const
{
    return m_skey;
}

void CreateForwardRuleRequest::SetSkey(const string& _skey)
{
    m_skey = _skey;
    m_skeyHasBeenSet = true;
}

bool CreateForwardRuleRequest::SkeyHasBeenSet() const
{
    return m_skeyHasBeenSet;
}

string CreateForwardRuleRequest::GetQueueRegion() const
{
    return m_queueRegion;
}

void CreateForwardRuleRequest::SetQueueRegion(const string& _queueRegion)
{
    m_queueRegion = _queueRegion;
    m_queueRegionHasBeenSet = true;
}

bool CreateForwardRuleRequest::QueueRegionHasBeenSet() const
{
    return m_queueRegionHasBeenSet;
}

uint64_t CreateForwardRuleRequest::GetQueueType() const
{
    return m_queueType;
}

void CreateForwardRuleRequest::SetQueueType(const uint64_t& _queueType)
{
    m_queueType = _queueType;
    m_queueTypeHasBeenSet = true;
}

bool CreateForwardRuleRequest::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

string CreateForwardRuleRequest::GetConsecretid() const
{
    return m_consecretid;
}

void CreateForwardRuleRequest::SetConsecretid(const string& _consecretid)
{
    m_consecretid = _consecretid;
    m_consecretidHasBeenSet = true;
}

bool CreateForwardRuleRequest::ConsecretidHasBeenSet() const
{
    return m_consecretidHasBeenSet;
}

string CreateForwardRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateForwardRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateForwardRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateForwardRuleRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateForwardRuleRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateForwardRuleRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreateForwardRuleRequest::GetQueueID() const
{
    return m_queueID;
}

void CreateForwardRuleRequest::SetQueueID(const string& _queueID)
{
    m_queueID = _queueID;
    m_queueIDHasBeenSet = true;
}

bool CreateForwardRuleRequest::QueueIDHasBeenSet() const
{
    return m_queueIDHasBeenSet;
}

string CreateForwardRuleRequest::GetQueueName() const
{
    return m_queueName;
}

void CreateForwardRuleRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool CreateForwardRuleRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}


