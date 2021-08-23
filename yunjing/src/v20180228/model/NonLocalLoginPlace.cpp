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

#include <tencentcloud/yunjing/v20180228/model/NonLocalLoginPlace.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

NonLocalLoginPlace::NonLocalLoginPlace() :
    m_idHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_loginTimeHasBeenSet(false),
    m_uuidHasBeenSet(false)
{
}

CoreInternalOutcome NonLocalLoginPlace::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NonLocalLoginPlace.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonLocalLoginPlace.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonLocalLoginPlace.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonLocalLoginPlace.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NonLocalLoginPlace.City` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_city = value["City"].GetUint64();
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NonLocalLoginPlace.Country` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_country = value["Country"].GetUint64();
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NonLocalLoginPlace.Province` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_province = value["Province"].GetUint64();
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonLocalLoginPlace.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonLocalLoginPlace.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("LoginTime") && !value["LoginTime"].IsNull())
    {
        if (!value["LoginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonLocalLoginPlace.LoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginTime = string(value["LoginTime"].GetString());
        m_loginTimeHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NonLocalLoginPlace.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NonLocalLoginPlace::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_city, allocator);
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

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_loginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

}


uint64_t NonLocalLoginPlace::GetId() const
{
    return m_id;
}

void NonLocalLoginPlace::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NonLocalLoginPlace::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string NonLocalLoginPlace::GetMachineIp() const
{
    return m_machineIp;
}

void NonLocalLoginPlace::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool NonLocalLoginPlace::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string NonLocalLoginPlace::GetStatus() const
{
    return m_status;
}

void NonLocalLoginPlace::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NonLocalLoginPlace::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NonLocalLoginPlace::GetUserName() const
{
    return m_userName;
}

void NonLocalLoginPlace::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool NonLocalLoginPlace::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

uint64_t NonLocalLoginPlace::GetCity() const
{
    return m_city;
}

void NonLocalLoginPlace::SetCity(const uint64_t& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool NonLocalLoginPlace::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

uint64_t NonLocalLoginPlace::GetCountry() const
{
    return m_country;
}

void NonLocalLoginPlace::SetCountry(const uint64_t& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool NonLocalLoginPlace::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

uint64_t NonLocalLoginPlace::GetProvince() const
{
    return m_province;
}

void NonLocalLoginPlace::SetProvince(const uint64_t& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool NonLocalLoginPlace::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string NonLocalLoginPlace::GetSrcIp() const
{
    return m_srcIp;
}

void NonLocalLoginPlace::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool NonLocalLoginPlace::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string NonLocalLoginPlace::GetMachineName() const
{
    return m_machineName;
}

void NonLocalLoginPlace::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool NonLocalLoginPlace::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string NonLocalLoginPlace::GetLoginTime() const
{
    return m_loginTime;
}

void NonLocalLoginPlace::SetLoginTime(const string& _loginTime)
{
    m_loginTime = _loginTime;
    m_loginTimeHasBeenSet = true;
}

bool NonLocalLoginPlace::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

string NonLocalLoginPlace::GetUuid() const
{
    return m_uuid;
}

void NonLocalLoginPlace::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool NonLocalLoginPlace::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

