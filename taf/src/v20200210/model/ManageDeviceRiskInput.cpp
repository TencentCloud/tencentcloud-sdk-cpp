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

#include <tencentcloud/taf/v20200210/model/ManageDeviceRiskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace std;

ManageDeviceRiskInput::ManageDeviceRiskInput() :
    m_osTypeHasBeenSet(false),
    m_deviceTypeHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_clientIpHasBeenSet(false)
{
}

CoreInternalOutcome ManageDeviceRiskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManageDeviceRiskInput.OsType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_osType = value["OsType"].GetInt64();
        m_osTypeHasBeenSet = true;
    }

    if (value.HasMember("DeviceType") && !value["DeviceType"].IsNull())
    {
        if (!value["DeviceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ManageDeviceRiskInput.DeviceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deviceType = value["DeviceType"].GetInt64();
        m_deviceTypeHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManageDeviceRiskInput.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ManageDeviceRiskInput.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ManageDeviceRiskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osType, allocator);
    }

    if (m_deviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deviceType, allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

}


int64_t ManageDeviceRiskInput::GetOsType() const
{
    return m_osType;
}

void ManageDeviceRiskInput::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool ManageDeviceRiskInput::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

int64_t ManageDeviceRiskInput::GetDeviceType() const
{
    return m_deviceType;
}

void ManageDeviceRiskInput::SetDeviceType(const int64_t& _deviceType)
{
    m_deviceType = _deviceType;
    m_deviceTypeHasBeenSet = true;
}

bool ManageDeviceRiskInput::DeviceTypeHasBeenSet() const
{
    return m_deviceTypeHasBeenSet;
}

string ManageDeviceRiskInput::GetDeviceId() const
{
    return m_deviceId;
}

void ManageDeviceRiskInput::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool ManageDeviceRiskInput::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string ManageDeviceRiskInput::GetClientIp() const
{
    return m_clientIp;
}

void ManageDeviceRiskInput::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool ManageDeviceRiskInput::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

