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

#include <tencentcloud/iotexplorer/v20190423/model/SeeTaskMetadata.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeTaskMetadata::SeeTaskMetadata() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_startTimeMsHasBeenSet(false),
    m_endTimeMsHasBeenSet(false),
    m_customIdHasBeenSet(false)
{
}

CoreInternalOutcome SeeTaskMetadata::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskMetadata.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskMetadata.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskMetadata.ChannelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = value["ChannelId"].GetUint64();
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("StartTimeMs") && !value["StartTimeMs"].IsNull())
    {
        if (!value["StartTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskMetadata.StartTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeMs = value["StartTimeMs"].GetInt64();
        m_startTimeMsHasBeenSet = true;
    }

    if (value.HasMember("EndTimeMs") && !value["EndTimeMs"].IsNull())
    {
        if (!value["EndTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskMetadata.EndTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeMs = value["EndTimeMs"].GetInt64();
        m_endTimeMsHasBeenSet = true;
    }

    if (value.HasMember("CustomId") && !value["CustomId"].IsNull())
    {
        if (!value["CustomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskMetadata.CustomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customId = string(value["CustomId"].GetString());
        m_customIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeTaskMetadata::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelId, allocator);
    }

    if (m_startTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeMs, allocator);
    }

    if (m_endTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeMs, allocator);
    }

    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }

}


string SeeTaskMetadata::GetProductId() const
{
    return m_productId;
}

void SeeTaskMetadata::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool SeeTaskMetadata::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string SeeTaskMetadata::GetDeviceName() const
{
    return m_deviceName;
}

void SeeTaskMetadata::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool SeeTaskMetadata::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

uint64_t SeeTaskMetadata::GetChannelId() const
{
    return m_channelId;
}

void SeeTaskMetadata::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool SeeTaskMetadata::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t SeeTaskMetadata::GetStartTimeMs() const
{
    return m_startTimeMs;
}

void SeeTaskMetadata::SetStartTimeMs(const int64_t& _startTimeMs)
{
    m_startTimeMs = _startTimeMs;
    m_startTimeMsHasBeenSet = true;
}

bool SeeTaskMetadata::StartTimeMsHasBeenSet() const
{
    return m_startTimeMsHasBeenSet;
}

int64_t SeeTaskMetadata::GetEndTimeMs() const
{
    return m_endTimeMs;
}

void SeeTaskMetadata::SetEndTimeMs(const int64_t& _endTimeMs)
{
    m_endTimeMs = _endTimeMs;
    m_endTimeMsHasBeenSet = true;
}

bool SeeTaskMetadata::EndTimeMsHasBeenSet() const
{
    return m_endTimeMsHasBeenSet;
}

string SeeTaskMetadata::GetCustomId() const
{
    return m_customId;
}

void SeeTaskMetadata::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool SeeTaskMetadata::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

