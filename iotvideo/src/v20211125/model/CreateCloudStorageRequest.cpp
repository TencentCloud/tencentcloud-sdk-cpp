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

#include <tencentcloud/iotvideo/v20211125/model/CreateCloudStorageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

CreateCloudStorageRequest::CreateCloudStorageRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_overrideHasBeenSet(false),
    m_packageQueueHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_storageRegionHasBeenSet(false)
{
}

string CreateCloudStorageRequest::ToJsonString() const
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

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_overrideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Override";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_override, allocator);
    }

    if (m_packageQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageQueue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudStorageRequest::GetProductId() const
{
    return m_productId;
}

void CreateCloudStorageRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateCloudStorageRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateCloudStorageRequest::GetDeviceName() const
{
    return m_deviceName;
}

void CreateCloudStorageRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CreateCloudStorageRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string CreateCloudStorageRequest::GetPackageId() const
{
    return m_packageId;
}

void CreateCloudStorageRequest::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool CreateCloudStorageRequest::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

uint64_t CreateCloudStorageRequest::GetOverride() const
{
    return m_override;
}

void CreateCloudStorageRequest::SetOverride(const uint64_t& _override)
{
    m_override = _override;
    m_overrideHasBeenSet = true;
}

bool CreateCloudStorageRequest::OverrideHasBeenSet() const
{
    return m_overrideHasBeenSet;
}

string CreateCloudStorageRequest::GetPackageQueue() const
{
    return m_packageQueue;
}

void CreateCloudStorageRequest::SetPackageQueue(const string& _packageQueue)
{
    m_packageQueue = _packageQueue;
    m_packageQueueHasBeenSet = true;
}

bool CreateCloudStorageRequest::PackageQueueHasBeenSet() const
{
    return m_packageQueueHasBeenSet;
}

string CreateCloudStorageRequest::GetOrderId() const
{
    return m_orderId;
}

void CreateCloudStorageRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool CreateCloudStorageRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

uint64_t CreateCloudStorageRequest::GetChannelId() const
{
    return m_channelId;
}

void CreateCloudStorageRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool CreateCloudStorageRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string CreateCloudStorageRequest::GetStorageRegion() const
{
    return m_storageRegion;
}

void CreateCloudStorageRequest::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool CreateCloudStorageRequest::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}


