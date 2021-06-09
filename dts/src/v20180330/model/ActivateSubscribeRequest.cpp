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

#include <tencentcloud/dts/v20180330/model/ActivateSubscribeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20180330::Model;
using namespace std;

ActivateSubscribeRequest::ActivateSubscribeRequest() :
    m_subscribeIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_subscribeObjectTypeHasBeenSet(false),
    m_objectsHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_vportHasBeenSet(false)
{
}

string ActivateSubscribeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subscribeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscribeId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeObjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeObjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subscribeObjectType, allocator);
    }

    if (m_objectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Objects";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objects.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vport, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ActivateSubscribeRequest::GetSubscribeId() const
{
    return m_subscribeId;
}

void ActivateSubscribeRequest::SetSubscribeId(const string& _subscribeId)
{
    m_subscribeId = _subscribeId;
    m_subscribeIdHasBeenSet = true;
}

bool ActivateSubscribeRequest::SubscribeIdHasBeenSet() const
{
    return m_subscribeIdHasBeenSet;
}

string ActivateSubscribeRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ActivateSubscribeRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ActivateSubscribeRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t ActivateSubscribeRequest::GetSubscribeObjectType() const
{
    return m_subscribeObjectType;
}

void ActivateSubscribeRequest::SetSubscribeObjectType(const int64_t& _subscribeObjectType)
{
    m_subscribeObjectType = _subscribeObjectType;
    m_subscribeObjectTypeHasBeenSet = true;
}

bool ActivateSubscribeRequest::SubscribeObjectTypeHasBeenSet() const
{
    return m_subscribeObjectTypeHasBeenSet;
}

SubscribeObject ActivateSubscribeRequest::GetObjects() const
{
    return m_objects;
}

void ActivateSubscribeRequest::SetObjects(const SubscribeObject& _objects)
{
    m_objects = _objects;
    m_objectsHasBeenSet = true;
}

bool ActivateSubscribeRequest::ObjectsHasBeenSet() const
{
    return m_objectsHasBeenSet;
}

string ActivateSubscribeRequest::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void ActivateSubscribeRequest::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool ActivateSubscribeRequest::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

int64_t ActivateSubscribeRequest::GetVport() const
{
    return m_vport;
}

void ActivateSubscribeRequest::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool ActivateSubscribeRequest::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}


