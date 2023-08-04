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

#include <tencentcloud/iss/v20230517/model/DescribeDeviceChannelResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeDeviceChannelResponse::DescribeDeviceChannelResponse() :
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

CoreInternalOutcome DescribeDeviceChannelResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("DeviceId") && !rsp["DeviceId"].IsNull())
    {
        if (!rsp["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(rsp["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelId") && !rsp["ChannelId"].IsNull())
    {
        if (!rsp["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(rsp["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelCode") && !rsp["ChannelCode"].IsNull())
    {
        if (!rsp["ChannelCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelCode = string(rsp["ChannelCode"].GetString());
        m_channelCodeHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("PTZType") && !rsp["PTZType"].IsNull())
    {
        if (!rsp["PTZType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PTZType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pTZType = rsp["PTZType"].GetInt64();
        m_pTZTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Manufacturer") && !rsp["Manufacturer"].IsNull())
    {
        if (!rsp["Manufacturer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Manufacturer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manufacturer = string(rsp["Manufacturer"].GetString());
        m_manufacturerHasBeenSet = true;
    }

    if (rsp.HasMember("Resolution") && !rsp["Resolution"].IsNull())
    {
        if (!rsp["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(rsp["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }

    if (rsp.HasMember("State") && !rsp["State"].IsNull())
    {
        if (!rsp["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = rsp["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDeviceChannelResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeDeviceChannelResponse::GetDeviceId() const
{
    return m_deviceId;
}

bool DescribeDeviceChannelResponse::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string DescribeDeviceChannelResponse::GetChannelId() const
{
    return m_channelId;
}

bool DescribeDeviceChannelResponse::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string DescribeDeviceChannelResponse::GetChannelCode() const
{
    return m_channelCode;
}

bool DescribeDeviceChannelResponse::ChannelCodeHasBeenSet() const
{
    return m_channelCodeHasBeenSet;
}

string DescribeDeviceChannelResponse::GetName() const
{
    return m_name;
}

bool DescribeDeviceChannelResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribeDeviceChannelResponse::GetStatus() const
{
    return m_status;
}

bool DescribeDeviceChannelResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeDeviceChannelResponse::GetPTZType() const
{
    return m_pTZType;
}

bool DescribeDeviceChannelResponse::PTZTypeHasBeenSet() const
{
    return m_pTZTypeHasBeenSet;
}

string DescribeDeviceChannelResponse::GetManufacturer() const
{
    return m_manufacturer;
}

bool DescribeDeviceChannelResponse::ManufacturerHasBeenSet() const
{
    return m_manufacturerHasBeenSet;
}

string DescribeDeviceChannelResponse::GetResolution() const
{
    return m_resolution;
}

bool DescribeDeviceChannelResponse::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

int64_t DescribeDeviceChannelResponse::GetState() const
{
    return m_state;
}

bool DescribeDeviceChannelResponse::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DescribeDeviceChannelResponse::GetRegion() const
{
    return m_region;
}

bool DescribeDeviceChannelResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}


