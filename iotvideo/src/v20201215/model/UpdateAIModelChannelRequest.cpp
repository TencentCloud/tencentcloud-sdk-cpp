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

#include <tencentcloud/iotvideo/v20201215/model/UpdateAIModelChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

UpdateAIModelChannelRequest::UpdateAIModelChannelRequest() :
    m_modelIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_forwardAddressHasBeenSet(false),
    m_forwardKeyHasBeenSet(false),
    m_cKafkaRegionHasBeenSet(false),
    m_cKafkaInstanceHasBeenSet(false),
    m_cKafkaTopicHasBeenSet(false)
{
}

string UpdateAIModelChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelId.c_str(), allocator).Move(), allocator);
    }

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


string UpdateAIModelChannelRequest::GetModelId() const
{
    return m_modelId;
}

void UpdateAIModelChannelRequest::SetModelId(const string& _modelId)
{
    m_modelId = _modelId;
    m_modelIdHasBeenSet = true;
}

bool UpdateAIModelChannelRequest::ModelIdHasBeenSet() const
{
    return m_modelIdHasBeenSet;
}

string UpdateAIModelChannelRequest::GetProductId() const
{
    return m_productId;
}

void UpdateAIModelChannelRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool UpdateAIModelChannelRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string UpdateAIModelChannelRequest::GetType() const
{
    return m_type;
}

void UpdateAIModelChannelRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UpdateAIModelChannelRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string UpdateAIModelChannelRequest::GetForwardAddress() const
{
    return m_forwardAddress;
}

void UpdateAIModelChannelRequest::SetForwardAddress(const string& _forwardAddress)
{
    m_forwardAddress = _forwardAddress;
    m_forwardAddressHasBeenSet = true;
}

bool UpdateAIModelChannelRequest::ForwardAddressHasBeenSet() const
{
    return m_forwardAddressHasBeenSet;
}

string UpdateAIModelChannelRequest::GetForwardKey() const
{
    return m_forwardKey;
}

void UpdateAIModelChannelRequest::SetForwardKey(const string& _forwardKey)
{
    m_forwardKey = _forwardKey;
    m_forwardKeyHasBeenSet = true;
}

bool UpdateAIModelChannelRequest::ForwardKeyHasBeenSet() const
{
    return m_forwardKeyHasBeenSet;
}

string UpdateAIModelChannelRequest::GetCKafkaRegion() const
{
    return m_cKafkaRegion;
}

void UpdateAIModelChannelRequest::SetCKafkaRegion(const string& _cKafkaRegion)
{
    m_cKafkaRegion = _cKafkaRegion;
    m_cKafkaRegionHasBeenSet = true;
}

bool UpdateAIModelChannelRequest::CKafkaRegionHasBeenSet() const
{
    return m_cKafkaRegionHasBeenSet;
}

string UpdateAIModelChannelRequest::GetCKafkaInstance() const
{
    return m_cKafkaInstance;
}

void UpdateAIModelChannelRequest::SetCKafkaInstance(const string& _cKafkaInstance)
{
    m_cKafkaInstance = _cKafkaInstance;
    m_cKafkaInstanceHasBeenSet = true;
}

bool UpdateAIModelChannelRequest::CKafkaInstanceHasBeenSet() const
{
    return m_cKafkaInstanceHasBeenSet;
}

string UpdateAIModelChannelRequest::GetCKafkaTopic() const
{
    return m_cKafkaTopic;
}

void UpdateAIModelChannelRequest::SetCKafkaTopic(const string& _cKafkaTopic)
{
    m_cKafkaTopic = _cKafkaTopic;
    m_cKafkaTopicHasBeenSet = true;
}

bool UpdateAIModelChannelRequest::CKafkaTopicHasBeenSet() const
{
    return m_cKafkaTopicHasBeenSet;
}


