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

#include <tencentcloud/ims/v20200713/model/Device.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ims::V20200713::Model;
using namespace std;

Device::Device() :
    m_ipHasBeenSet(false),
    m_macHasBeenSet(false),
    m_tokenIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_iMEIHasBeenSet(false),
    m_iDFAHasBeenSet(false),
    m_iDFVHasBeenSet(false),
    m_ipTypeHasBeenSet(false)
{
}

CoreInternalOutcome Device::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Mac") && !value["Mac"].IsNull())
    {
        if (!value["Mac"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.Mac` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mac = string(value["Mac"].GetString());
        m_macHasBeenSet = true;
    }

    if (value.HasMember("TokenId") && !value["TokenId"].IsNull())
    {
        if (!value["TokenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.TokenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenId = string(value["TokenId"].GetString());
        m_tokenIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceId") && !value["DeviceId"].IsNull())
    {
        if (!value["DeviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.DeviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceId = string(value["DeviceId"].GetString());
        m_deviceIdHasBeenSet = true;
    }

    if (value.HasMember("IMEI") && !value["IMEI"].IsNull())
    {
        if (!value["IMEI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.IMEI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iMEI = string(value["IMEI"].GetString());
        m_iMEIHasBeenSet = true;
    }

    if (value.HasMember("IDFA") && !value["IDFA"].IsNull())
    {
        if (!value["IDFA"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.IDFA` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDFA = string(value["IDFA"].GetString());
        m_iDFAHasBeenSet = true;
    }

    if (value.HasMember("IDFV") && !value["IDFV"].IsNull())
    {
        if (!value["IDFV"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device.IDFV` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iDFV = string(value["IDFV"].GetString());
        m_iDFVHasBeenSet = true;
    }

    if (value.HasMember("IpType") && !value["IpType"].IsNull())
    {
        if (!value["IpType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Device.IpType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ipType = value["IpType"].GetUint64();
        m_ipTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Device::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_macHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mac";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mac.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_iMEIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IMEI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iMEI.c_str(), allocator).Move(), allocator);
    }

    if (m_iDFAHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDFA";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDFA.c_str(), allocator).Move(), allocator);
    }

    if (m_iDFVHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IDFV";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iDFV.c_str(), allocator).Move(), allocator);
    }

    if (m_ipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipType, allocator);
    }

}


string Device::GetIp() const
{
    return m_ip;
}

void Device::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool Device::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string Device::GetMac() const
{
    return m_mac;
}

void Device::SetMac(const string& _mac)
{
    m_mac = _mac;
    m_macHasBeenSet = true;
}

bool Device::MacHasBeenSet() const
{
    return m_macHasBeenSet;
}

string Device::GetTokenId() const
{
    return m_tokenId;
}

void Device::SetTokenId(const string& _tokenId)
{
    m_tokenId = _tokenId;
    m_tokenIdHasBeenSet = true;
}

bool Device::TokenIdHasBeenSet() const
{
    return m_tokenIdHasBeenSet;
}

string Device::GetDeviceId() const
{
    return m_deviceId;
}

void Device::SetDeviceId(const string& _deviceId)
{
    m_deviceId = _deviceId;
    m_deviceIdHasBeenSet = true;
}

bool Device::DeviceIdHasBeenSet() const
{
    return m_deviceIdHasBeenSet;
}

string Device::GetIMEI() const
{
    return m_iMEI;
}

void Device::SetIMEI(const string& _iMEI)
{
    m_iMEI = _iMEI;
    m_iMEIHasBeenSet = true;
}

bool Device::IMEIHasBeenSet() const
{
    return m_iMEIHasBeenSet;
}

string Device::GetIDFA() const
{
    return m_iDFA;
}

void Device::SetIDFA(const string& _iDFA)
{
    m_iDFA = _iDFA;
    m_iDFAHasBeenSet = true;
}

bool Device::IDFAHasBeenSet() const
{
    return m_iDFAHasBeenSet;
}

string Device::GetIDFV() const
{
    return m_iDFV;
}

void Device::SetIDFV(const string& _iDFV)
{
    m_iDFV = _iDFV;
    m_iDFVHasBeenSet = true;
}

bool Device::IDFVHasBeenSet() const
{
    return m_iDFVHasBeenSet;
}

uint64_t Device::GetIpType() const
{
    return m_ipType;
}

void Device::SetIpType(const uint64_t& _ipType)
{
    m_ipType = _ipType;
    m_ipTypeHasBeenSet = true;
}

bool Device::IpTypeHasBeenSet() const
{
    return m_ipTypeHasBeenSet;
}

