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

#include <tencentcloud/iss/v20230517/model/DescribeDeviceChannelData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeDeviceChannelData::DescribeDeviceChannelData() :
    m_deviceIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_channelCodeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_pTZTypeHasBeenSet(false),
    m_manufacturerHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDeviceChannelData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceChannelData.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceChannelData.ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(value["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ChannelCode") && !value["ChannelCode"].IsNull())
    {
        if (!value["ChannelCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceChannelData.ChannelCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelCode = string(value["ChannelCode"].GetString());
        m_channelCodeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceChannelData.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceChannelData.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PTZType") && !value["PTZType"].IsNull())
    {
        if (!value["PTZType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceChannelData.PTZType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pTZType = value["PTZType"].GetInt64();
        m_pTZTypeHasBeenSet = true;
    }

    if (value.HasMember("Manufacturer") && !value["Manufacturer"].IsNull())
    {
        if (!value["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceChannelData.Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(value["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceChannelData.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceChannelData.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDeviceChannelData.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeDeviceChannelData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelCode.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_pTZTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PTZType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pTZType, allocator);
    }

    if (m_manufacturerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Manufacturer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manufacturer.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


string DescribeDeviceChannelData::GetDeviceId() const
{
    return m_deviceId;
}

void DescribeDeviceChannelData::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DescribeDeviceChannelData::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string DescribeDeviceChannelData::GetChannelId() const
{
    return m_channelId;
}

void DescribeDeviceChannelData::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool DescribeDeviceChannelData::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string DescribeDeviceChannelData::GetChannelCode() const
{
    return m_channelCode;
}

void DescribeDeviceChannelData::SetChannelCode(const string& _channelCode)
{
    m_channelCode = _channelCode;
    m_channelCodeHasBeenSet = true;
}

bool DescribeDeviceChannelData::ChannelCodeHasBeenSet() const
{
    return m_channelCodeHasBeenSet;
}

string DescribeDeviceChannelData::GetName() const
{
    return m_name;
}

void DescribeDeviceChannelData::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDeviceChannelData::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeDeviceChannelData::GetStatus() const
{
    return m_status;
}

void DescribeDeviceChannelData::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDeviceChannelData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeDeviceChannelData::GetPTZType() const
{
    return m_pTZType;
}

void DescribeDeviceChannelData::SetPTZType(const int64_t& _pTZType)
{
    m_pTZType = _pTZType;
    m_pTZTypeHasBeenSet = true;
}

bool DescribeDeviceChannelData::PTZTypeHasBeenSet() const
{
    return m_pTZTypeHasBeenSet;
}

string DescribeDeviceChannelData::GetManufacturer() const
{
    return m_manufacturer;
}

void DescribeDeviceChannelData::SetManufacturer(const string& _manufacturer)
{
    m_manufacturer = _manufacturer;
    m_manufacturerHasBeenSet = true;
}

bool DescribeDeviceChannelData::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

string DescribeDeviceChannelData::GetResolution() const
{
    return m_resolution;
}

void DescribeDeviceChannelData::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool DescribeDeviceChannelData::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

int64_t DescribeDeviceChannelData::GetState() const
{
    return m_state;
}

void DescribeDeviceChannelData::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DescribeDeviceChannelData::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DescribeDeviceChannelData::GetRegion() const
{
    return m_region;
}

void DescribeDeviceChannelData::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DescribeDeviceChannelData::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

