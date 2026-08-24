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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeSeePersonRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyTWeSeePersonRequest::ModifyTWeSeePersonRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_isRememberedHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

string ModifyTWeSeePersonRequest::ToJsonString() const
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

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }

    if (m_isRememberedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRemembered";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRemembered, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTWeSeePersonRequest::GetProductId() const
{
    return m_productId;
}

void ModifyTWeSeePersonRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyTWeSeePersonRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyTWeSeePersonRequest::GetDeviceName() const
{
    return m_deviceName;
}

void ModifyTWeSeePersonRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool ModifyTWeSeePersonRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string ModifyTWeSeePersonRequest::GetPersonId() const
{
    return m_personId;
}

void ModifyTWeSeePersonRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool ModifyTWeSeePersonRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

uint64_t ModifyTWeSeePersonRequest::GetChannelId() const
{
    return m_channelId;
}

void ModifyTWeSeePersonRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool ModifyTWeSeePersonRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

bool ModifyTWeSeePersonRequest::GetIsRemembered() const
{
    return m_isRemembered;
}

void ModifyTWeSeePersonRequest::SetIsRemembered(const bool& _isRemembered)
{
    m_isRemembered = _isRemembered;
    m_isRememberedHasBeenSet = true;
}

bool ModifyTWeSeePersonRequest::IsRememberedHasBeenSet() const
{
    return m_isRememberedHasBeenSet;
}

string ModifyTWeSeePersonRequest::GetName() const
{
    return m_name;
}

void ModifyTWeSeePersonRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyTWeSeePersonRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}


