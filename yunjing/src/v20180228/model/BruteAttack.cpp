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

#include <tencentcloud/yunjing/v20180228/model/BruteAttack.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

BruteAttack::BruteAttack() :
    m_idHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_countHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_isProVersionHasBeenSet(false),
    m_banStatusHasBeenSet(false),
    m_quuidHasBeenSet(false)
{
}

CoreInternalOutcome BruteAttack::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.City` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_city = value["City"].GetUint64();
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.Country` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_country = value["Country"].GetUint64();
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.Province` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_province = value["Province"].GetUint64();
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("IsProVersion") && !value["IsProVersion"].IsNull())
    {
        if (!value["IsProVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.IsProVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isProVersion = value["IsProVersion"].GetBool();
        m_isProVersionHasBeenSet = true;
    }

    if (value.HasMember("BanStatus") && !value["BanStatus"].IsNull())
    {
        if (!value["BanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.BanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_banStatus = string(value["BanStatus"].GetString());
        m_banStatusHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttack.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BruteAttack::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_isProVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProVersion, allocator);
    }

    if (m_banStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_banStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BruteAttack::GetId() const
{
    return m_id;
}

void BruteAttack::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BruteAttack::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BruteAttack::GetMachineIp() const
{
    return m_machineIp;
}

void BruteAttack::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool BruteAttack::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string BruteAttack::GetStatus() const
{
    return m_status;
}

void BruteAttack::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BruteAttack::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BruteAttack::GetUserName() const
{
    return m_userName;
}

void BruteAttack::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool BruteAttack::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

uint64_t BruteAttack::GetCity() const
{
    return m_city;
}

void BruteAttack::SetCity(const uint64_t& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool BruteAttack::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

uint64_t BruteAttack::GetCountry() const
{
    return m_country;
}

void BruteAttack::SetCountry(const uint64_t& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool BruteAttack::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

uint64_t BruteAttack::GetProvince() const
{
    return m_province;
}

void BruteAttack::SetProvince(const uint64_t& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool BruteAttack::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string BruteAttack::GetSrcIp() const
{
    return m_srcIp;
}

void BruteAttack::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool BruteAttack::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

uint64_t BruteAttack::GetCount() const
{
    return m_count;
}

void BruteAttack::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool BruteAttack::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string BruteAttack::GetCreateTime() const
{
    return m_createTime;
}

void BruteAttack::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BruteAttack::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BruteAttack::GetMachineName() const
{
    return m_machineName;
}

void BruteAttack::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool BruteAttack::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string BruteAttack::GetUuid() const
{
    return m_uuid;
}

void BruteAttack::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool BruteAttack::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

bool BruteAttack::GetIsProVersion() const
{
    return m_isProVersion;
}

void BruteAttack::SetIsProVersion(const bool& _isProVersion)
{
    m_isProVersion = _isProVersion;
    m_isProVersionHasBeenSet = true;
}

bool BruteAttack::IsProVersionHasBeenSet() const
{
    return m_isProVersionHasBeenSet;
}

string BruteAttack::GetBanStatus() const
{
    return m_banStatus;
}

void BruteAttack::SetBanStatus(const string& _banStatus)
{
    m_banStatus = _banStatus;
    m_banStatusHasBeenSet = true;
}

bool BruteAttack::BanStatusHasBeenSet() const
{
    return m_banStatusHasBeenSet;
}

string BruteAttack::GetQuuid() const
{
    return m_quuid;
}

void BruteAttack::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool BruteAttack::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

