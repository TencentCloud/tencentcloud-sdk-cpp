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

#include <tencentcloud/yunjing/v20180228/model/WeeklyReportNonlocalLoginPlace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

WeeklyReportNonlocalLoginPlace::WeeklyReportNonlocalLoginPlace() :
    m_machineIpHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_loginTimeHasBeenSet(false)
{
}

CoreInternalOutcome WeeklyReportNonlocalLoginPlace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportNonlocalLoginPlace.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportNonlocalLoginPlace.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportNonlocalLoginPlace.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportNonlocalLoginPlace.Country` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_country = value["Country"].GetUint64();
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportNonlocalLoginPlace.Province` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_province = value["Province"].GetUint64();
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportNonlocalLoginPlace.City` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_city = value["City"].GetUint64();
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("LoginTime") && !value["LoginTime"].IsNull())
    {
        if (!value["LoginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeeklyReportNonlocalLoginPlace.LoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginTime = string(value["LoginTime"].GetString());
        m_loginTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeeklyReportNonlocalLoginPlace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_country, allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_province, allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_city, allocator);
    }

    if (m_loginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginTime.c_str(), allocator).Move(), allocator);
    }

}


string WeeklyReportNonlocalLoginPlace::GetMachineIp() const
{
    return m_machineIp;
}

void WeeklyReportNonlocalLoginPlace::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool WeeklyReportNonlocalLoginPlace::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string WeeklyReportNonlocalLoginPlace::GetUsername() const
{
    return m_username;
}

void WeeklyReportNonlocalLoginPlace::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool WeeklyReportNonlocalLoginPlace::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string WeeklyReportNonlocalLoginPlace::GetSrcIp() const
{
    return m_srcIp;
}

void WeeklyReportNonlocalLoginPlace::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool WeeklyReportNonlocalLoginPlace::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

uint64_t WeeklyReportNonlocalLoginPlace::GetCountry() const
{
    return m_country;
}

void WeeklyReportNonlocalLoginPlace::SetCountry(const uint64_t& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool WeeklyReportNonlocalLoginPlace::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

uint64_t WeeklyReportNonlocalLoginPlace::GetProvince() const
{
    return m_province;
}

void WeeklyReportNonlocalLoginPlace::SetProvince(const uint64_t& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool WeeklyReportNonlocalLoginPlace::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

uint64_t WeeklyReportNonlocalLoginPlace::GetCity() const
{
    return m_city;
}

void WeeklyReportNonlocalLoginPlace::SetCity(const uint64_t& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool WeeklyReportNonlocalLoginPlace::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string WeeklyReportNonlocalLoginPlace::GetLoginTime() const
{
    return m_loginTime;
}

void WeeklyReportNonlocalLoginPlace::SetLoginTime(const string& _loginTime)
{
    m_loginTime = _loginTime;
    m_loginTimeHasBeenSet = true;
}

bool WeeklyReportNonlocalLoginPlace::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

