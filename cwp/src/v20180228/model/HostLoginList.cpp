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

#include <tencentcloud/cwp/v20180228/model/HostLoginList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

HostLoginList::HostLoginList() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_loginTimeHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_isRiskAreaHasBeenSet(false),
    m_isRiskUserHasBeenSet(false),
    m_isRiskTimeHasBeenSet(false),
    m_isRiskSrcIpHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_descHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_portHasBeenSet(false)
{
}

CoreInternalOutcome HostLoginList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.Country` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_country = value["Country"].GetUint64();
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.City` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_city = value["City"].GetUint64();
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.Province` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_province = value["Province"].GetUint64();
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("LoginTime") && !value["LoginTime"].IsNull())
    {
        if (!value["LoginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.LoginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginTime = string(value["LoginTime"].GetString());
        m_loginTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("IsRiskArea") && !value["IsRiskArea"].IsNull())
    {
        if (!value["IsRiskArea"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.IsRiskArea` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isRiskArea = value["IsRiskArea"].GetUint64();
        m_isRiskAreaHasBeenSet = true;
    }

    if (value.HasMember("IsRiskUser") && !value["IsRiskUser"].IsNull())
    {
        if (!value["IsRiskUser"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.IsRiskUser` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isRiskUser = value["IsRiskUser"].GetUint64();
        m_isRiskUserHasBeenSet = true;
    }

    if (value.HasMember("IsRiskTime") && !value["IsRiskTime"].IsNull())
    {
        if (!value["IsRiskTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.IsRiskTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isRiskTime = value["IsRiskTime"].GetUint64();
        m_isRiskTimeHasBeenSet = true;
    }

    if (value.HasMember("IsRiskSrcIp") && !value["IsRiskSrcIp"].IsNull())
    {
        if (!value["IsRiskSrcIp"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.IsRiskSrcIp` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isRiskSrcIp = value["IsRiskSrcIp"].GetUint64();
        m_isRiskSrcIpHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.RiskLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetUint64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginList.Port` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetInt64();
        m_portHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostLoginList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_machineIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineName.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_countryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Country";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_country, allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_city, allocator);
    }

    if (m_provinceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Province";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_province, allocator);
    }

    if (m_loginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isRiskAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRiskArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRiskArea, allocator);
    }

    if (m_isRiskUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRiskUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRiskUser, allocator);
    }

    if (m_isRiskTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRiskTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRiskTime, allocator);
    }

    if (m_isRiskSrcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRiskSrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRiskSrcIp, allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

}


uint64_t HostLoginList::GetId() const
{
    return m_id;
}

void HostLoginList::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool HostLoginList::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string HostLoginList::GetUuid() const
{
    return m_uuid;
}

void HostLoginList::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool HostLoginList::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string HostLoginList::GetMachineIp() const
{
    return m_machineIp;
}

void HostLoginList::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool HostLoginList::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string HostLoginList::GetMachineName() const
{
    return m_machineName;
}

void HostLoginList::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool HostLoginList::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string HostLoginList::GetUserName() const
{
    return m_userName;
}

void HostLoginList::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool HostLoginList::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string HostLoginList::GetSrcIp() const
{
    return m_srcIp;
}

void HostLoginList::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool HostLoginList::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

uint64_t HostLoginList::GetStatus() const
{
    return m_status;
}

void HostLoginList::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool HostLoginList::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t HostLoginList::GetCountry() const
{
    return m_country;
}

void HostLoginList::SetCountry(const uint64_t& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool HostLoginList::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

uint64_t HostLoginList::GetCity() const
{
    return m_city;
}

void HostLoginList::SetCity(const uint64_t& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool HostLoginList::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

uint64_t HostLoginList::GetProvince() const
{
    return m_province;
}

void HostLoginList::SetProvince(const uint64_t& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool HostLoginList::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string HostLoginList::GetLoginTime() const
{
    return m_loginTime;
}

void HostLoginList::SetLoginTime(const string& _loginTime)
{
    m_loginTime = _loginTime;
    m_loginTimeHasBeenSet = true;
}

bool HostLoginList::LoginTimeHasBeenSet() const
{
    return m_loginTimeHasBeenSet;
}

string HostLoginList::GetModifyTime() const
{
    return m_modifyTime;
}

void HostLoginList::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool HostLoginList::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

uint64_t HostLoginList::GetIsRiskArea() const
{
    return m_isRiskArea;
}

void HostLoginList::SetIsRiskArea(const uint64_t& _isRiskArea)
{
    m_isRiskArea = _isRiskArea;
    m_isRiskAreaHasBeenSet = true;
}

bool HostLoginList::IsRiskAreaHasBeenSet() const
{
    return m_isRiskAreaHasBeenSet;
}

uint64_t HostLoginList::GetIsRiskUser() const
{
    return m_isRiskUser;
}

void HostLoginList::SetIsRiskUser(const uint64_t& _isRiskUser)
{
    m_isRiskUser = _isRiskUser;
    m_isRiskUserHasBeenSet = true;
}

bool HostLoginList::IsRiskUserHasBeenSet() const
{
    return m_isRiskUserHasBeenSet;
}

uint64_t HostLoginList::GetIsRiskTime() const
{
    return m_isRiskTime;
}

void HostLoginList::SetIsRiskTime(const uint64_t& _isRiskTime)
{
    m_isRiskTime = _isRiskTime;
    m_isRiskTimeHasBeenSet = true;
}

bool HostLoginList::IsRiskTimeHasBeenSet() const
{
    return m_isRiskTimeHasBeenSet;
}

uint64_t HostLoginList::GetIsRiskSrcIp() const
{
    return m_isRiskSrcIp;
}

void HostLoginList::SetIsRiskSrcIp(const uint64_t& _isRiskSrcIp)
{
    m_isRiskSrcIp = _isRiskSrcIp;
    m_isRiskSrcIpHasBeenSet = true;
}

bool HostLoginList::IsRiskSrcIpHasBeenSet() const
{
    return m_isRiskSrcIpHasBeenSet;
}

uint64_t HostLoginList::GetRiskLevel() const
{
    return m_riskLevel;
}

void HostLoginList::SetRiskLevel(const uint64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool HostLoginList::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string HostLoginList::GetLocation() const
{
    return m_location;
}

void HostLoginList::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool HostLoginList::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string HostLoginList::GetQuuid() const
{
    return m_quuid;
}

void HostLoginList::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool HostLoginList::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string HostLoginList::GetDesc() const
{
    return m_desc;
}

void HostLoginList::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool HostLoginList::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

MachineExtraInfo HostLoginList::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void HostLoginList::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool HostLoginList::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

int64_t HostLoginList::GetPort() const
{
    return m_port;
}

void HostLoginList::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool HostLoginList::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

