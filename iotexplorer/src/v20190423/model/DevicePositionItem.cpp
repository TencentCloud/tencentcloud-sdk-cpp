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

#include <tencentcloud/iotexplorer/v20190423/model/DevicePositionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DevicePositionItem::DevicePositionItem() :
    m_deviceNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_longitudeHasBeenSet(false),
    m_latitudeHasBeenSet(false)
{
}

CoreInternalOutcome DevicePositionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionItem.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionItem.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Longitude") && !value["Longitude"].IsNull())
    {
        if (!value["Longitude"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionItem.Longitude` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_longitude = value["Longitude"].GetDouble();
        m_longitudeHasBeenSet = true;
    }

    if (value.HasMember("Latitude") && !value["Latitude"].IsNull())
    {
        if (!value["Latitude"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DevicePositionItem.Latitude` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_latitude = value["Latitude"].GetDouble();
        m_latitudeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DevicePositionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_longitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Longitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_longitude, allocator);
    }

    if (m_latitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latitude, allocator);
    }

}


string DevicePositionItem::GetDeviceName() const
{
    return m_deviceName;
}

void DevicePositionItem::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DevicePositionItem::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

int64_t DevicePositionItem::GetCreateTime() const
{
    return m_createTime;
}

void DevicePositionItem::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DevicePositionItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

double DevicePositionItem::GetLongitude() const
{
    return m_longitude;
}

void DevicePositionItem::SetLongitude(const double& _longitude)
{
    m_longitude = _longitude;
    m_longitudeHasBeenSet = true;
}

bool DevicePositionItem::LongitudeHasBeenSet() const
{
    return m_longitudeHasBeenSet;
}

double DevicePositionItem::GetLatitude() const
{
    return m_latitude;
}

void DevicePositionItem::SetLatitude(const double& _latitude)
{
    m_latitude = _latitude;
    m_latitudeHasBeenSet = true;
}

bool DevicePositionItem::LatitudeHasBeenSet() const
{
    return m_latitudeHasBeenSet;
}

