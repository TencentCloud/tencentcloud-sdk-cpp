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

#include <tencentcloud/iotvideo/v20211125/model/ModifyPushChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

ModifyPushChannelRequest::ModifyPushChannelRequest() :
    m_productIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_forwardAddressHasBeenSet(false),
    m_forwardKeyHasBeenSet(false),
    m_cKafkaRegionHasBeenSet(false),
    m_cKafkaInstanceHasBeenSet(false),
    m_cKafkaTopicHasBeenSet(false)
{
}

string ModifyPushChannelRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardKey.c_str(), allocator).Move(), allocator);
    }

    if (m_cKafkaRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CKafkaRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cKafkaRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_cKafkaInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CKafkaInstance";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cKafkaInstance.c_str(), allocator).Move(), allocator);
    }

    if (m_cKafkaTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CKafkaTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cKafkaTopic.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPushChannelRequest::GetProductId() const
{
    return m_productId;
}

void ModifyPushChannelRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyPushChannelRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyPushChannelRequest::GetType() const
{
    return m_type;
}

void ModifyPushChannelRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyPushChannelRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyPushChannelRequest::GetForwardAddress() const
{
    return m_forwardAddress;
}

void ModifyPushChannelRequest::SetForwardAddress(const string& _forwardAddress)
{
    m_forwardAddress = _forwardAddress;
    m_forwardAddressHasBeenSet = true;
}

bool ModifyPushChannelRequest::ForwardAddressHasBeenSet() const
{
    return m_forwardAddressHasBeenSet;
}

string ModifyPushChannelRequest::GetForwardKey() const
{
    return m_forwardKey;
}

void ModifyPushChannelRequest::SetForwardKey(const string& _forwardKey)
{
    m_forwardKey = _forwardKey;
    m_forwardKeyHasBeenSet = true;
}

bool ModifyPushChannelRequest::ForwardKeyHasBeenSet() const
{
    return m_forwardKeyHasBeenSet;
}

string ModifyPushChannelRequest::GetCKafkaRegion() const
{
    return m_cKafkaRegion;
}

void ModifyPushChannelRequest::SetCKafkaRegion(const string& _cKafkaRegion)
{
    m_cKafkaRegion = _cKafkaRegion;
    m_cKafkaRegionHasBeenSet = true;
}

bool ModifyPushChannelRequest::CKafkaRegionHasBeenSet() const
{
    return m_cKafkaRegionHasBeenSet;
}

string ModifyPushChannelRequest::GetCKafkaInstance() const
{
    return m_cKafkaInstance;
}

void ModifyPushChannelRequest::SetCKafkaInstance(const string& _cKafkaInstance)
{
    m_cKafkaInstance = _cKafkaInstance;
    m_cKafkaInstanceHasBeenSet = true;
}

bool ModifyPushChannelRequest::CKafkaInstanceHasBeenSet() const
{
    return m_cKafkaInstanceHasBeenSet;
}

string ModifyPushChannelRequest::GetCKafkaTopic() const
{
    return m_cKafkaTopic;
}

void ModifyPushChannelRequest::SetCKafkaTopic(const string& _cKafkaTopic)
{
    m_cKafkaTopic = _cKafkaTopic;
    m_cKafkaTopicHasBeenSet = true;
}

bool ModifyPushChannelRequest::CKafkaTopicHasBeenSet() const
{
    return m_cKafkaTopicHasBeenSet;
}


