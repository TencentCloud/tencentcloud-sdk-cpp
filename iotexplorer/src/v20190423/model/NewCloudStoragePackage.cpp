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

#include <tencentcloud/iotexplorer/v20190423/model/NewCloudStoragePackage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

NewCloudStoragePackage::NewCloudStoragePackage() :
    m_resourceIdHasBeenSet(false),
    m_mediaTypeHasBeenSet(false),
    m_retentionDaysHasBeenSet(false),
    m_recordingModeHasBeenSet(false),
    m_bitrateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_reportEnabledHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_bigDealIdHasBeenSet(false),
    m_validityPeriodHasBeenSet(false),
    m_imageCapacityHasBeenSet(false)
{
}

CoreInternalOutcome NewCloudStoragePackage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewCloudStoragePackage.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("MediaType") && !value["MediaType"].IsNull())
    {
        if (!value["MediaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewCloudStoragePackage.MediaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaType = string(value["MediaType"].GetString());
        m_mediaTypeHasBeenSet = true;
    }

    if (value.HasMember("RetentionDays") && !value["RetentionDays"].IsNull())
    {
        if (!value["RetentionDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewCloudStoragePackage.RetentionDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retentionDays = value["RetentionDays"].GetUint64();
        m_retentionDaysHasBeenSet = true;
    }

    if (value.HasMember("RecordingMode") && !value["RecordingMode"].IsNull())
    {
        if (!value["RecordingMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewCloudStoragePackage.RecordingMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordingMode = string(value["RecordingMode"].GetString());
        m_recordingModeHasBeenSet = true;
    }

    if (value.HasMember("Bitrate") && !value["Bitrate"].IsNull())
    {
        if (!value["Bitrate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewCloudStoragePackage.Bitrate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bitrate = string(value["Bitrate"].GetString());
        m_bitrateHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewCloudStoragePackage.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewCloudStoragePackage.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewCloudStoragePackage.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ReportEnabled") && !value["ReportEnabled"].IsNull())
    {
        if (!value["ReportEnabled"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NewCloudStoragePackage.ReportEnabled` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_reportEnabled = value["ReportEnabled"].GetUint64();
        m_reportEnabledHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewCloudStoragePackage.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("BigDealId") && !value["BigDealId"].IsNull())
    {
        if (!value["BigDealId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewCloudStoragePackage.BigDealId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bigDealId = string(value["BigDealId"].GetString());
        m_bigDealIdHasBeenSet = true;
    }

    if (value.HasMember("ValidityPeriod") && !value["ValidityPeriod"].IsNull())
    {
        if (!value["ValidityPeriod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewCloudStoragePackage.ValidityPeriod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_validityPeriod = string(value["ValidityPeriod"].GetString());
        m_validityPeriodHasBeenSet = true;
    }

    if (value.HasMember("ImageCapacity") && !value["ImageCapacity"].IsNull())
    {
        if (!value["ImageCapacity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NewCloudStoragePackage.ImageCapacity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageCapacity = string(value["ImageCapacity"].GetString());
        m_imageCapacityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NewCloudStoragePackage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mediaType.c_str(), allocator).Move(), allocator);
    }

    if (m_retentionDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retentionDays, allocator);
    }

    if (m_recordingModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordingMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordingMode.c_str(), allocator).Move(), allocator);
    }

    if (m_bitrateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bitrate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bitrate.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_reportEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportEnabled, allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_bigDealIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigDealId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bigDealId.c_str(), allocator).Move(), allocator);
    }

    if (m_validityPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidityPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_validityPeriod.c_str(), allocator).Move(), allocator);
    }

    if (m_imageCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageCapacity.c_str(), allocator).Move(), allocator);
    }

}


string NewCloudStoragePackage::GetResourceId() const
{
    return m_resourceId;
}

void NewCloudStoragePackage::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool NewCloudStoragePackage::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string NewCloudStoragePackage::GetMediaType() const
{
    return m_mediaType;
}

void NewCloudStoragePackage::SetMediaType(const string& _mediaType)
{
    m_mediaType = _mediaType;
    m_mediaTypeHasBeenSet = true;
}

bool NewCloudStoragePackage::MediaTypeHasBeenSet() const
{
    return m_mediaTypeHasBeenSet;
}

uint64_t NewCloudStoragePackage::GetRetentionDays() const
{
    return m_retentionDays;
}

void NewCloudStoragePackage::SetRetentionDays(const uint64_t& _retentionDays)
{
    m_retentionDays = _retentionDays;
    m_retentionDaysHasBeenSet = true;
}

bool NewCloudStoragePackage::RetentionDaysHasBeenSet() const
{
    return m_retentionDaysHasBeenSet;
}

string NewCloudStoragePackage::GetRecordingMode() const
{
    return m_recordingMode;
}

void NewCloudStoragePackage::SetRecordingMode(const string& _recordingMode)
{
    m_recordingMode = _recordingMode;
    m_recordingModeHasBeenSet = true;
}

bool NewCloudStoragePackage::RecordingModeHasBeenSet() const
{
    return m_recordingModeHasBeenSet;
}

string NewCloudStoragePackage::GetBitrate() const
{
    return m_bitrate;
}

void NewCloudStoragePackage::SetBitrate(const string& _bitrate)
{
    m_bitrate = _bitrate;
    m_bitrateHasBeenSet = true;
}

bool NewCloudStoragePackage::BitrateHasBeenSet() const
{
    return m_bitrateHasBeenSet;
}

uint64_t NewCloudStoragePackage::GetStartTime() const
{
    return m_startTime;
}

void NewCloudStoragePackage::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool NewCloudStoragePackage::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t NewCloudStoragePackage::GetExpireTime() const
{
    return m_expireTime;
}

void NewCloudStoragePackage::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool NewCloudStoragePackage::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string NewCloudStoragePackage::GetStatus() const
{
    return m_status;
}

void NewCloudStoragePackage::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NewCloudStoragePackage::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t NewCloudStoragePackage::GetReportEnabled() const
{
    return m_reportEnabled;
}

void NewCloudStoragePackage::SetReportEnabled(const uint64_t& _reportEnabled)
{
    m_reportEnabled = _reportEnabled;
    m_reportEnabledHasBeenSet = true;
}

bool NewCloudStoragePackage::ReportEnabledHasBeenSet() const
{
    return m_reportEnabledHasBeenSet;
}

string NewCloudStoragePackage::GetOrderId() const
{
    return m_orderId;
}

void NewCloudStoragePackage::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool NewCloudStoragePackage::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string NewCloudStoragePackage::GetBigDealId() const
{
    return m_bigDealId;
}

void NewCloudStoragePackage::SetBigDealId(const string& _bigDealId)
{
    m_bigDealId = _bigDealId;
    m_bigDealIdHasBeenSet = true;
}

bool NewCloudStoragePackage::BigDealIdHasBeenSet() const
{
    return m_bigDealIdHasBeenSet;
}

string NewCloudStoragePackage::GetValidityPeriod() const
{
    return m_validityPeriod;
}

void NewCloudStoragePackage::SetValidityPeriod(const string& _validityPeriod)
{
    m_validityPeriod = _validityPeriod;
    m_validityPeriodHasBeenSet = true;
}

bool NewCloudStoragePackage::ValidityPeriodHasBeenSet() const
{
    return m_validityPeriodHasBeenSet;
}

string NewCloudStoragePackage::GetImageCapacity() const
{
    return m_imageCapacity;
}

void NewCloudStoragePackage::SetImageCapacity(const string& _imageCapacity)
{
    m_imageCapacity = _imageCapacity;
    m_imageCapacityHasBeenSet = true;
}

bool NewCloudStoragePackage::ImageCapacityHasBeenSet() const
{
    return m_imageCapacityHasBeenSet;
}

