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

#include <tencentcloud/gaap/v20180529/model/DeviceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

DeviceInfo::DeviceInfo() :
    m_vendorHasBeenSet(false),
    m_oSHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_phoneNumHasBeenSet(false),
    m_wirelessHasBeenSet(false)
{
}

CoreInternalOutcome DeviceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vendor") && !value["Vendor"].IsNull())
    {
        if (!value["Vendor"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Vendor` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vendor = value["Vendor"].GetInt64();
        m_vendorHasBeenSet = true;
    }

    if (value.HasMember("OS") && !value["OS"].IsNull())
    {
        if (!value["OS"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.OS` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_oS = value["OS"].GetInt64();
        m_oSHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("PhoneNum") && !value["PhoneNum"].IsNull())
    {
        if (!value["PhoneNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.PhoneNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNum = string(value["PhoneNum"].GetString());
        m_phoneNumHasBeenSet = true;
    }

    if (value.HasMember("Wireless") && !value["Wireless"].IsNull())
    {
        if (!value["Wireless"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceInfo.Wireless` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_wireless = value["Wireless"].GetInt64();
        m_wirelessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vendorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vendor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vendor, allocator);
    }

    if (m_oSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oS, allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNum.c_str(), allocator).Move(), allocator);
    }

    if (m_wirelessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wireless";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wireless, allocator);
    }

}


int64_t DeviceInfo::GetVendor() const
{
    return m_vendor;
}

void DeviceInfo::SetVendor(const int64_t& _vendor)
{
    m_vendor = _vendor;
    m_vendorHasBeenSet = true;
}

bool DeviceInfo::VendorHasBeenSet() const
{
    return m_vendorHasBeenSet;
}

int64_t DeviceInfo::GetOS() const
{
    return m_oS;
}

void DeviceInfo::SetOS(const int64_t& _oS)
{
    m_oS = _oS;
    m_oSHasBeenSet = true;
}

bool DeviceInfo::OSHasBeenSet() const
{
    return m_oSHasBeenSet;
}

string DeviceInfo::GetDeviceId() const
{
    return m_deviceId;
}

void DeviceInfo::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool DeviceInfo::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string DeviceInfo::GetPhoneNum() const
{
    return m_phoneNum;
}

void DeviceInfo::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool DeviceInfo::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

int64_t DeviceInfo::GetWireless() const
{
    return m_wireless;
}

void DeviceInfo::SetWireless(const int64_t& _wireless)
{
    m_wireless = _wireless;
    m_wirelessHasBeenSet = true;
}

bool DeviceInfo::WirelessHasBeenSet() const
{
    return m_wirelessHasBeenSet;
}

