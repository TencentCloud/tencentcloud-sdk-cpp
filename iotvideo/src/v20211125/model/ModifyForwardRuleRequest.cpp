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

#include <tencentcloud/iotvideo/v20211125/model/ModifyForwardRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

ModifyForwardRuleRequest::ModifyForwardRuleRequest() :
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

string ModifyForwardRuleRequest::ToJsonString() const
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


string ModifyForwardRuleRequest::GetProductID() const
{
    return m_productID;
}

void ModifyForwardRuleRequest::SetProductID(const string& _productID)
{
    m_productID = _productID;
    m_productIDHasBeenSet = true;
}

bool ModifyForwardRuleRequest::ProductIDHasBeenSet() const
{
    return m_productIDHasBeenSet;
}

uint64_t ModifyForwardRuleRequest::GetMsgType() const
{
    return m_msgType;
}

void ModifyForwardRuleRequest::SetMsgType(const uint64_t& _msgType)
{
    m_msgType = _msgType;
    m_msgTypeHasBeenSet = true;
}

bool ModifyForwardRuleRequest::MsgTypeHasBeenSet() const
{
    return m_msgTypeHasBeenSet;
}

string ModifyForwardRuleRequest::GetSkey() const
{
    return m_skey;
}

void ModifyForwardRuleRequest::SetSkey(const string& _skey)
{
    m_skey = _skey;
    m_skeyHasBeenSet = true;
}

bool ModifyForwardRuleRequest::SkeyHasBeenSet() const
{
    return m_skeyHasBeenSet;
}

string ModifyForwardRuleRequest::GetQueueRegion() const
{
    return m_queueRegion;
}

void ModifyForwardRuleRequest::SetQueueRegion(const string& _queueRegion)
{
    m_queueRegion = _queueRegion;
    m_queueRegionHasBeenSet = true;
}

bool ModifyForwardRuleRequest::QueueRegionHasBeenSet() const
{
    return m_queueRegionHasBeenSet;
}

uint64_t ModifyForwardRuleRequest::GetQueueType() const
{
    return m_queueType;
}

void ModifyForwardRuleRequest::SetQueueType(const uint64_t& _queueType)
{
    m_queueType = _queueType;
    m_queueTypeHasBeenSet = true;
}

bool ModifyForwardRuleRequest::QueueTypeHasBeenSet() const
{
    return m_queueTypeHasBeenSet;
}

string ModifyForwardRuleRequest::GetConsecretid() const
{
    return m_consecretid;
}

void ModifyForwardRuleRequest::SetConsecretid(const string& _consecretid)
{
    m_consecretid = _consecretid;
    m_consecretidHasBeenSet = true;
}

bool ModifyForwardRuleRequest::ConsecretidHasBeenSet() const
{
    return m_consecretidHasBeenSet;
}

string ModifyForwardRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyForwardRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyForwardRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyForwardRuleRequest::GetInstanceName() const
{
    return m_instanceName;
}

void ModifyForwardRuleRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ModifyForwardRuleRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ModifyForwardRuleRequest::GetQueueID() const
{
    return m_queueID;
}

void ModifyForwardRuleRequest::SetQueueID(const string& _queueID)
{
    m_queueID = _queueID;
    m_queueIDHasBeenSet = true;
}

bool ModifyForwardRuleRequest::QueueIDHasBeenSet() const
{
    return m_queueIDHasBeenSet;
}

string ModifyForwardRuleRequest::GetQueueName() const
{
    return m_queueName;
}

void ModifyForwardRuleRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool ModifyForwardRuleRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}


