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

#include <tencentcloud/iotexplorer/v20190423/model/PurchaseVideoPackageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

PurchaseVideoPackageRequest::PurchaseVideoPackageRequest() :
    m_retentionDaysHasBeenSet(false),
    m_recordingModeHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_validityPeriodHasBeenSet(false),
    m_goodsNumHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_packageQueueHasBeenSet(false),
    m_overrideHasBeenSet(false),
    m_orderIdHasBeenSet(false)
{
}

string PurchaseVideoPackageRequest::ToJsonString() const
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

    if (m_recordingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordingMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bitrate.c_str(), allocator).Move(), allocator);
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

    if (m_storageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageRegion.c_str(), allocator).Move(), allocator);
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


uint64_t PurchaseVideoPackageRequest::GetRetentionDays() const
{
    return m_retentionDays;
}

void PurchaseVideoPackageRequest::SetRetentionDays(const uint64_t& _retentionDays)
{
    m_retentionDays = _retentionDays;
    m_retentionDaysHasBeenSet = true;
}

bool PurchaseVideoPackageRequest::RetentionDaysHasBeenSet() const
{
    return m_retentionDaysHasBeenSet;
}

string PurchaseVideoPackageRequest::GetRecordingMode() const
{
    return m_recordingMode;
}

void PurchaseVideoPackageRequest::SetRecordingMode(const string& _recordingMode)
{
    m_recordingMode = _recordingMode;
    m_recordingModeHasBeenSet = true;
}

bool PurchaseVideoPackageRequest::RecordingModeHasBeenSet() const
{
    return m_recordingModeHasBeenSet;
}

string PurchaseVideoPackageRequest::GetBitrate() const
{
    return m_bitrate;
}

void PurchaseVideoPackageRequest::SetBitrate(const string& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool PurchaseVideoPackageRequest::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

string PurchaseVideoPackageRequest::GetProductId() const
{
    return m_productId;
}

void PurchaseVideoPackageRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool PurchaseVideoPackageRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string PurchaseVideoPackageRequest::GetDeviceName() const
{
    return m_deviceName;
}

void PurchaseVideoPackageRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool PurchaseVideoPackageRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string PurchaseVideoPackageRequest::GetValidityPeriod() const
{
    return m_validityPeriod;
}

void PurchaseVideoPackageRequest::SetValidityPeriod(const string& _validityPeriod)
{
    m_validityPeriod = _validityPeriod;
    m_validityPeriodHasBeenSet = true;
}

bool PurchaseVideoPackageRequest::ValidityPeriodHasBeenSet() const
{
    return m_validityPeriodHasBeenSet;
}

uint64_t PurchaseVideoPackageRequest::GetGoodsNum() const
{
    return m_goodsNum;
}

void PurchaseVideoPackageRequest::SetGoodsNum(const uint64_t& _goodsNum)
{
    m_goodsNum = _goodsNum;
    m_goodsNumHasBeenSet = true;
}

bool PurchaseVideoPackageRequest::GoodsNumHasBeenSet() const
{
    return m_goodsNumHasBeenSet;
}

uint64_t PurchaseVideoPackageRequest::GetChannelId() const
{
    return m_channelId;
}

void PurchaseVideoPackageRequest::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool PurchaseVideoPackageRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string PurchaseVideoPackageRequest::GetStorageRegion() const
{
    return m_storageRegion;
}

void PurchaseVideoPackageRequest::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool PurchaseVideoPackageRequest::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

string PurchaseVideoPackageRequest::GetPackageQueue() const
{
    return m_packageQueue;
}

void PurchaseVideoPackageRequest::SetPackageQueue(const string& _packageQueue)
{
    m_packageQueue = _packageQueue;
    m_packageQueueHasBeenSet = true;
}

bool PurchaseVideoPackageRequest::PackageQueueHasBeenSet() const
{
    return m_packageQueueHasBeenSet;
}

uint64_t PurchaseVideoPackageRequest::GetOverride() const
{
    return m_override;
}

void PurchaseVideoPackageRequest::SetOverride(const uint64_t& _override)
{
    m_override = _override;
    m_overrideHasBeenSet = true;
}

bool PurchaseVideoPackageRequest::OverrideHasBeenSet() const
{
    return m_overrideHasBeenSet;
}

string PurchaseVideoPackageRequest::GetOrderId() const
{
    return m_orderId;
}

void PurchaseVideoPackageRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool PurchaseVideoPackageRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}


