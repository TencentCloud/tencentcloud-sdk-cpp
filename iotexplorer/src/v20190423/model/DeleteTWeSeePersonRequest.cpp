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

#include <tencentcloud/iotexplorer/v20190423/model/DeleteTWeSeePersonRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DeleteTWeSeePersonRequest::DeleteTWeSeePersonRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_deleteFacesHasBeenSet(false)
{
}

string DeleteTWeSeePersonRequest::ToJsonString() const
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

    if (m_deleteFacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteFaces";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteFaces, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteTWeSeePersonRequest::GetProductId() const
{
    return m_productId;
}

void DeleteTWeSeePersonRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DeleteTWeSeePersonRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DeleteTWeSeePersonRequest::GetDeviceName() const
{
    return m_deviceName;
}

void DeleteTWeSeePersonRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DeleteTWeSeePersonRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string DeleteTWeSeePersonRequest::GetPersonId() const
{
    return m_personId;
}

void DeleteTWeSeePersonRequest::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool DeleteTWeSeePersonRequest::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

uint64_t DeleteTWeSeePersonRequest::GetChannelId() const
{
    return m_channelId;
}

void DeleteTWeSeePersonRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DeleteTWeSeePersonRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

bool DeleteTWeSeePersonRequest::GetDeleteFaces() const
{
    return m_deleteFaces;
}

void DeleteTWeSeePersonRequest::SetDeleteFaces(const bool& _deleteFaces)
{
    m_deleteFaces = _deleteFaces;
    m_deleteFacesHasBeenSet = true;
}

bool DeleteTWeSeePersonRequest::DeleteFacesHasBeenSet() const
{
    return m_deleteFacesHasBeenSet;
}


