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

#include <tencentcloud/cdn/v20180606/model/IpStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

IpStatus::IpStatus() :
    m_ipHasBeenSet(false),
    m_districtHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ipv6HasBeenSet(false)
{
}

CoreInternalOutcome IpStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpStatus.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("District") && !value["District"].IsNull())
    {
        if (!value["District"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpStatus.District` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_district = string(value["District"].GetString());
        m_districtHasBeenSet = true;
    }

    if (value.HasMember("Isp") && !value["Isp"].IsNull())
    {
        if (!value["Isp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpStatus.Isp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isp = string(value["Isp"].GetString());
        m_ispHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpStatus.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Ipv6") && !value["Ipv6"].IsNull())
    {
        if (!value["Ipv6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpStatus.Ipv6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipv6 = string(value["Ipv6"].GetString());
        m_ipv6HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_districtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "District";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_district.c_str(), allocator).Move(), allocator);
    }

    if (m_ispHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Isp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isp.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ipv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipv6.c_str(), allocator).Move(), allocator);
    }

}


string IpStatus::GetIp() const
{
    return m_ip;
}

void IpStatus::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool IpStatus::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string IpStatus::GetDistrict() const
{
    return m_district;
}

void IpStatus::SetDistrict(const string& _district)
{
    m_district = _district;
    m_districtHasBeenSet = true;
}

bool IpStatus::DistrictHasBeenSet() const
{
    return m_districtHasBeenSet;
}

string IpStatus::GetIsp() const
{
    return m_isp;
}

void IpStatus::SetIsp(const string& _isp)
{
    m_isp = _isp;
    m_ispHasBeenSet = true;
}

bool IpStatus::IspHasBeenSet() const
{
    return m_ispHasBeenSet;
}

string IpStatus::GetCity() const
{
    return m_city;
}

void IpStatus::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool IpStatus::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string IpStatus::GetStatus() const
{
    return m_status;
}

void IpStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IpStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string IpStatus::GetIpv6() const
{
    return m_ipv6;
}

void IpStatus::SetIpv6(const string& _ipv6)
{
    m_ipv6 = _ipv6;
    m_ipv6HasBeenSet = true;
}

bool IpStatus::Ipv6HasBeenSet() const
{
    return m_ipv6HasBeenSet;
}

