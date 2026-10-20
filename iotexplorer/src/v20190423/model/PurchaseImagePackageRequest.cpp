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

#include <tencentcloud/iotexplorer/v20190423/model/PurchaseImagePackageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

PurchaseImagePackageRequest::PurchaseImagePackageRequest() :
    m_retentionDaysHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_validityPeriodHasBeenSet(false),
    m_imageCapacityHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_packageQueueHasBeenSet(false),
    m_overrideHasBeenSet(false),
    m_orderIdHasBeenSet(false)
{
}

string PurchaseImagePackageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_retentionDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionDays";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retentionDays, allocator);
    }

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

    if (m_validityPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidityPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_validityPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCapacity";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageCapacity.c_str(), allocator).Move(), allocator);
    }

    if (m_goodsNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GoodsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_goodsNum, allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channelId, allocator);
    }

    if (m_packageQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageQueue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_overrideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Override";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_override, allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t PurchaseImagePackageRequest::GetRetentionDays() const
{
    return m_retentionDays;
}

void PurchaseImagePackageRequest::SetRetentionDays(const uint64_t& _retentionDays)
{
    m_retentionDays = _retentionDays;
    m_retentionDaysHasBeenSet = true;
}

bool PurchaseImagePackageRequest::RetentionDaysHasBeenSet() const
{
    return m_retentionDaysHasBeenSet;
}

string PurchaseImagePackageRequest::GetProductId() const
{
    return m_productId;
}

void PurchaseImagePackageRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool PurchaseImagePackageRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string PurchaseImagePackageRequest::GetDeviceName() const
{
    return m_deviceName;
}

void PurchaseImagePackageRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool PurchaseImagePackageRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string PurchaseImagePackageRequest::GetValidityPeriod() const
{
    return m_validityPeriod;
}

void PurchaseImagePackageRequest::SetValidityPeriod(const string& _validityPeriod)
{
    m_validityPeriod = _validityPeriod;
    m_validityPeriodHasBeenSet = true;
}

bool PurchaseImagePackageRequest::ValidityPeriodHasBeenSet() const
{
    return m_validityPeriodHasBeenSet;
}

string PurchaseImagePackageRequest::GetImageCapacity() const
{
    return m_imageCapacity;
}

void PurchaseImagePackageRequest::SetImageCapacity(const string& _imageCapacity)
{
    m_imageCapacity = _imageCapacity;
    m_imageCapacityHasBeenSet = true;
}

bool PurchaseImagePackageRequest::ImageCapacityHasBeenSet() const
{
    return m_imageCapacityHasBeenSet;
}

uint64_t PurchaseImagePackageRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void PurchaseImagePackageRequest::SetGoodsNum(const uint64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool PurchaseImagePackageRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

uint64_t PurchaseImagePackageRequest::GetChannelId() const
{
    return m_channelId;
}

void PurchaseImagePackageRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool PurchaseImagePackageRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string PurchaseImagePackageRequest::GetPackageQueue() const
{
    return m_packageQueue;
}

void PurchaseImagePackageRequest::SetPackageQueue(const string& _packageQueue)
{
    m_packageQueue = _packageQueue;
    m_packageQueueHasBeenSet = true;
}

bool PurchaseImagePackageRequest::PackageQueueHasBeenSet() const
{
    return m_packageQueueHasBeenSet;
}

uint64_t PurchaseImagePackageRequest::GetOverride() const
{
    return m_override;
}

void PurchaseImagePackageRequest::SetOverride(const uint64_t& _override)
{
    m_override = _override;
    m_overrideHasBeenSet = true;
}

bool PurchaseImagePackageRequest::OverrideHasBeenSet() const
{
    return m_overrideHasBeenSet;
}

string PurchaseImagePackageRequest::GetOrderId() const
{
    return m_orderId;
}

void PurchaseImagePackageRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool PurchaseImagePackageRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}


