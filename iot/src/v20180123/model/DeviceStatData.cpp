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

#include <tencentcloud/iot/v20180123/model/DeviceStatData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iot::V20180123::Model;
using namespace std;

DeviceStatData::DeviceStatData() :
    m_datetimeHasBeenSet(false),
    m_deviceOnlineHasBeenSet(false),
    m_deviceActiveHasBeenSet(false),
    m_deviceTotalHasBeenSet(false)
{
}

CoreInternalOutcome DeviceStatData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Datetime") && !value["Datetime"].IsNull())
    {
        if (!value["Datetime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatData.Datetime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datetime = string(value["Datetime"].GetString());
        m_datetimeHasBeenSet = true;
    }

    if (value.HasMember("DeviceOnline") && !value["DeviceOnline"].IsNull())
    {
        if (!value["DeviceOnline"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatData.DeviceOnline` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceOnline = value["DeviceOnline"].GetUint64();
        m_deviceOnlineHasBeenSet = true;
    }

    if (value.HasMember("DeviceActive") && !value["DeviceActive"].IsNull())
    {
        if (!value["DeviceActive"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatData.DeviceActive` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceActive = value["DeviceActive"].GetUint64();
        m_deviceActiveHasBeenSet = true;
    }

    if (value.HasMember("DeviceTotal") && !value["DeviceTotal"].IsNull())
    {
        if (!value["DeviceTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceStatData.DeviceTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceTotal = value["DeviceTotal"].GetUint64();
        m_deviceTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceStatData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_datetimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Datetime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datetime.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceOnlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceOnline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceOnline, allocator);
    }

    if (m_deviceActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceActive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceActive, allocator);
    }

    if (m_deviceTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceTotal, allocator);
    }

}


string DeviceStatData::GetDatetime() const
{
    return m_datetime;
}

void DeviceStatData::SetDatetime(const string& _datetime)
{
    m_datetime = _datetime;
    m_datetimeHasBeenSet = true;
}

bool DeviceStatData::DatetimeHasBeenSet() const
{
    return m_datetimeHasBeenSet;
}

uint64_t DeviceStatData::GetDeviceOnline() const
{
    return m_deviceOnline;
}

void DeviceStatData::SetDeviceOnline(const uint64_t& _deviceOnline)
{
    m_deviceOnline = _deviceOnline;
    m_deviceOnlineHasBeenSet = true;
}

bool DeviceStatData::DeviceOnlineHasBeenSet() const
{
    return m_deviceOnlineHasBeenSet;
}

uint64_t DeviceStatData::GetDeviceActive() const
{
    return m_deviceActive;
}

void DeviceStatData::SetDeviceActive(const uint64_t& _deviceActive)
{
    m_deviceActive = _deviceActive;
    m_deviceActiveHasBeenSet = true;
}

bool DeviceStatData::DeviceActiveHasBeenSet() const
{
    return m_deviceActiveHasBeenSet;
}

uint64_t DeviceStatData::GetDeviceTotal() const
{
    return m_deviceTotal;
}

void DeviceStatData::SetDeviceTotal(const uint64_t& _deviceTotal)
{
    m_deviceTotal = _deviceTotal;
    m_deviceTotalHasBeenSet = true;
}

bool DeviceStatData::DeviceTotalHasBeenSet() const
{
    return m_deviceTotalHasBeenSet;
}

