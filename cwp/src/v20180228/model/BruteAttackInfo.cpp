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

#include <tencentcloud/cwp/v20180228/model/BruteAttackInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BruteAttackInfo::BruteAttackInfo() :
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
    m_createTimeHasBeenSet(false),
    m_banStatusHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_isProVersionHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_dataStatusHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_dataFromHasBeenSet(false),
    m_attackStatusDescHasBeenSet(false),
    m_banExpiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome BruteAttackInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Country") && !value["Country"].IsNull())
    {
        if (!value["Country"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.Country` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_country = value["Country"].GetUint64();
        m_countryHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.City` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_city = value["City"].GetUint64();
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("Province") && !value["Province"].IsNull())
    {
        if (!value["Province"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.Province` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_province = value["Province"].GetUint64();
        m_provinceHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BanStatus") && !value["BanStatus"].IsNull())
    {
        if (!value["BanStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.BanStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_banStatus = value["BanStatus"].GetUint64();
        m_banStatusHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.EventType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetUint64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("IsProVersion") && !value["IsProVersion"].IsNull())
    {
        if (!value["IsProVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.IsProVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isProVersion = value["IsProVersion"].GetBool();
        m_isProVersionHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.Port` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_port = value["Port"].GetUint64();
        m_portHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("DataStatus") && !value["DataStatus"].IsNull())
    {
        if (!value["DataStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.DataStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dataStatus = value["DataStatus"].GetUint64();
        m_dataStatusHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.RiskLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = value["RiskLevel"].GetUint64();
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("DataFrom") && !value["DataFrom"].IsNull())
    {
        if (!value["DataFrom"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.DataFrom` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataFrom = value["DataFrom"].GetInt64();
        m_dataFromHasBeenSet = true;
    }

    if (value.HasMember("AttackStatusDesc") && !value["AttackStatusDesc"].IsNull())
    {
        if (!value["AttackStatusDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.AttackStatusDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackStatusDesc = string(value["AttackStatusDesc"].GetString());
        m_attackStatusDescHasBeenSet = true;
    }

    if (value.HasMember("BanExpiredTime") && !value["BanExpiredTime"].IsNull())
    {
        if (!value["BanExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAttackInfo.BanExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_banExpiredTime = string(value["BanExpiredTime"].GetString());
        m_banExpiredTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BruteAttackInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_banStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_banStatus, allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_isProVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsProVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isProVersion, allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_port, allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataStatus, allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskLevel, allocator);
    }

    if (m_dataFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataFrom, allocator);
    }

    if (m_attackStatusDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackStatusDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackStatusDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_banExpiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BanExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_banExpiredTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t BruteAttackInfo::GetId() const
{
    return m_id;
}

void BruteAttackInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool BruteAttackInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string BruteAttackInfo::GetUuid() const
{
    return m_uuid;
}

void BruteAttackInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool BruteAttackInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string BruteAttackInfo::GetMachineIp() const
{
    return m_machineIp;
}

void BruteAttackInfo::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool BruteAttackInfo::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string BruteAttackInfo::GetMachineName() const
{
    return m_machineName;
}

void BruteAttackInfo::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool BruteAttackInfo::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string BruteAttackInfo::GetUserName() const
{
    return m_userName;
}

void BruteAttackInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool BruteAttackInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string BruteAttackInfo::GetSrcIp() const
{
    return m_srcIp;
}

void BruteAttackInfo::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool BruteAttackInfo::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string BruteAttackInfo::GetStatus() const
{
    return m_status;
}

void BruteAttackInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BruteAttackInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t BruteAttackInfo::GetCountry() const
{
    return m_country;
}

void BruteAttackInfo::SetCountry(const uint64_t& _country)
{
    m_country = _country;
    m_countryHasBeenSet = true;
}

bool BruteAttackInfo::CountryHasBeenSet() const
{
    return m_countryHasBeenSet;
}

uint64_t BruteAttackInfo::GetCity() const
{
    return m_city;
}

void BruteAttackInfo::SetCity(const uint64_t& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool BruteAttackInfo::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

uint64_t BruteAttackInfo::GetProvince() const
{
    return m_province;
}

void BruteAttackInfo::SetProvince(const uint64_t& _province)
{
    m_province = _province;
    m_provinceHasBeenSet = true;
}

bool BruteAttackInfo::ProvinceHasBeenSet() const
{
    return m_provinceHasBeenSet;
}

string BruteAttackInfo::GetCreateTime() const
{
    return m_createTime;
}

void BruteAttackInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BruteAttackInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t BruteAttackInfo::GetBanStatus() const
{
    return m_banStatus;
}

void BruteAttackInfo::SetBanStatus(const uint64_t& _banStatus)
{
    m_banStatus = _banStatus;
    m_banStatusHasBeenSet = true;
}

bool BruteAttackInfo::BanStatusHasBeenSet() const
{
    return m_banStatusHasBeenSet;
}

uint64_t BruteAttackInfo::GetEventType() const
{
    return m_eventType;
}

void BruteAttackInfo::SetEventType(const uint64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool BruteAttackInfo::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

uint64_t BruteAttackInfo::GetCount() const
{
    return m_count;
}

void BruteAttackInfo::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool BruteAttackInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string BruteAttackInfo::GetQuuid() const
{
    return m_quuid;
}

void BruteAttackInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool BruteAttackInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

bool BruteAttackInfo::GetIsProVersion() const
{
    return m_isProVersion;
}

void BruteAttackInfo::SetIsProVersion(const bool& _isProVersion)
{
    m_isProVersion = _isProVersion;
    m_isProVersionHasBeenSet = true;
}

bool BruteAttackInfo::IsProVersionHasBeenSet() const
{
    return m_isProVersionHasBeenSet;
}

string BruteAttackInfo::GetProtocol() const
{
    return m_protocol;
}

void BruteAttackInfo::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool BruteAttackInfo::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

uint64_t BruteAttackInfo::GetPort() const
{
    return m_port;
}

void BruteAttackInfo::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool BruteAttackInfo::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string BruteAttackInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void BruteAttackInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool BruteAttackInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string BruteAttackInfo::GetInstanceId() const
{
    return m_instanceId;
}

void BruteAttackInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BruteAttackInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t BruteAttackInfo::GetDataStatus() const
{
    return m_dataStatus;
}

void BruteAttackInfo::SetDataStatus(const uint64_t& _dataStatus)
{
    m_dataStatus = _dataStatus;
    m_dataStatusHasBeenSet = true;
}

bool BruteAttackInfo::DataStatusHasBeenSet() const
{
    return m_dataStatusHasBeenSet;
}

MachineExtraInfo BruteAttackInfo::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void BruteAttackInfo::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool BruteAttackInfo::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

string BruteAttackInfo::GetLocation() const
{
    return m_location;
}

void BruteAttackInfo::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool BruteAttackInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

uint64_t BruteAttackInfo::GetRiskLevel() const
{
    return m_riskLevel;
}

void BruteAttackInfo::SetRiskLevel(const uint64_t& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool BruteAttackInfo::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

int64_t BruteAttackInfo::GetDataFrom() const
{
    return m_dataFrom;
}

void BruteAttackInfo::SetDataFrom(const int64_t& _dataFrom)
{
    m_dataFrom = _dataFrom;
    m_dataFromHasBeenSet = true;
}

bool BruteAttackInfo::DataFromHasBeenSet() const
{
    return m_dataFromHasBeenSet;
}

string BruteAttackInfo::GetAttackStatusDesc() const
{
    return m_attackStatusDesc;
}

void BruteAttackInfo::SetAttackStatusDesc(const string& _attackStatusDesc)
{
    m_attackStatusDesc = _attackStatusDesc;
    m_attackStatusDescHasBeenSet = true;
}

bool BruteAttackInfo::AttackStatusDescHasBeenSet() const
{
    return m_attackStatusDescHasBeenSet;
}

string BruteAttackInfo::GetBanExpiredTime() const
{
    return m_banExpiredTime;
}

void BruteAttackInfo::SetBanExpiredTime(const string& _banExpiredTime)
{
    m_banExpiredTime = _banExpiredTime;
    m_banExpiredTimeHasBeenSet = true;
}

bool BruteAttackInfo::BanExpiredTimeHasBeenSet() const
{
    return m_banExpiredTimeHasBeenSet;
}

