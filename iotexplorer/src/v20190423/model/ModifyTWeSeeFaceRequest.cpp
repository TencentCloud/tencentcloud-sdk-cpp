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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeSeeFaceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyTWeSeeFaceRequest::ModifyTWeSeeFaceRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_faceIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_isPrototypeHasBeenSet(false)
{
}

string ModifyTWeSeeFaceRequest::ToJsonString() const
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

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_faceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_faceId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }

    if (m_isPrototypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPrototype";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPrototype, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTWeSeeFaceRequest::GetProductId() const
{
    return m_productId;
}

void ModifyTWeSeeFaceRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyTWeSeeFaceRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyTWeSeeFaceRequest::GetDeviceName() const
{
    return m_deviceName;
}

void ModifyTWeSeeFaceRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ModifyTWeSeeFaceRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ModifyTWeSeeFaceRequest::GetPersonId() const
{
    return m_personId;
}

void ModifyTWeSeeFaceRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool ModifyTWeSeeFaceRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string ModifyTWeSeeFaceRequest::GetFaceId() const
{
    return m_faceId;
}

void ModifyTWeSeeFaceRequest::SetFaceId(const string& _faceId)
{
    m_faceId = _faceId;
    m_faceIdHasBeenSet = true;
}

bool ModifyTWeSeeFaceRequest::FaceIdHasBeenSet() const
{
    return m_faceIdHasBeenSet;
}

uint64_t ModifyTWeSeeFaceRequest::GetChannelId() const
{
    return m_channelId;
}

void ModifyTWeSeeFaceRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ModifyTWeSeeFaceRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

bool ModifyTWeSeeFaceRequest::GetIsPrototype() const
{
    return m_isPrototype;
}

void ModifyTWeSeeFaceRequest::SetIsPrototype(const bool& _isPrototype)
{
    m_isPrototype = _isPrototype;
    m_isPrototypeHasBeenSet = true;
}

bool ModifyTWeSeeFaceRequest::IsPrototypeHasBeenSet() const
{
    return m_isPrototypeHasBeenSet;
}


