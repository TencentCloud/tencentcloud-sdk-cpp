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

#include <tencentcloud/cwp/v20180228/model/ScanTaskDetails.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ScanTaskDetails::ScanTaskDetails() :
    m_hostIpHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_osNameHasBeenSet(false),
    m_riskNumHasBeenSet(false),
    m_scanBeginTimeHasBeenSet(false),
    m_scanEndTimeHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_failTypeHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome ScanTaskDetails::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }

    if (value.HasMember("RiskNum") && !value["RiskNum"].IsNull())
    {
        if (!value["RiskNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.RiskNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskNum = value["RiskNum"].GetUint64();
        m_riskNumHasBeenSet = true;
    }

    if (value.HasMember("ScanBeginTime") && !value["ScanBeginTime"].IsNull())
    {
        if (!value["ScanBeginTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.ScanBeginTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanBeginTime = string(value["ScanBeginTime"].GetString());
        m_scanBeginTimeHasBeenSet = true;
    }

    if (value.HasMember("ScanEndTime") && !value["ScanEndTime"].IsNull())
    {
        if (!value["ScanEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.ScanEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanEndTime = string(value["ScanEndTime"].GetString());
        m_scanEndTimeHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("FailType") && !value["FailType"].IsNull())
    {
        if (!value["FailType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.FailType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failType = value["FailType"].GetUint64();
        m_failTypeHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ScanTaskDetails.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScanTaskDetails::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_osName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskNum, allocator);
    }

    if (m_scanBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanBeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_scanEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_failTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failType, allocator);
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ScanTaskDetails::GetHostIp() const
{
    return m_hostIp;
}

void ScanTaskDetails::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool ScanTaskDetails::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string ScanTaskDetails::GetHostName() const
{
    return m_hostName;
}

void ScanTaskDetails::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool ScanTaskDetails::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string ScanTaskDetails::GetOsName() const
{
    return m_osName;
}

void ScanTaskDetails::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool ScanTaskDetails::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

uint64_t ScanTaskDetails::GetRiskNum() const
{
    return m_riskNum;
}

void ScanTaskDetails::SetRiskNum(const uint64_t& _riskNum)
{
    m_riskNum = _riskNum;
    m_riskNumHasBeenSet = true;
}

bool ScanTaskDetails::RiskNumHasBeenSet() const
{
    return m_riskNumHasBeenSet;
}

string ScanTaskDetails::GetScanBeginTime() const
{
    return m_scanBeginTime;
}

void ScanTaskDetails::SetScanBeginTime(const string& _scanBeginTime)
{
    m_scanBeginTime = _scanBeginTime;
    m_scanBeginTimeHasBeenSet = true;
}

bool ScanTaskDetails::ScanBeginTimeHasBeenSet() const
{
    return m_scanBeginTimeHasBeenSet;
}

string ScanTaskDetails::GetScanEndTime() const
{
    return m_scanEndTime;
}

void ScanTaskDetails::SetScanEndTime(const string& _scanEndTime)
{
    m_scanEndTime = _scanEndTime;
    m_scanEndTimeHasBeenSet = true;
}

bool ScanTaskDetails::ScanEndTimeHasBeenSet() const
{
    return m_scanEndTimeHasBeenSet;
}

string ScanTaskDetails::GetUuid() const
{
    return m_uuid;
}

void ScanTaskDetails::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool ScanTaskDetails::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string ScanTaskDetails::GetQuuid() const
{
    return m_quuid;
}

void ScanTaskDetails::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool ScanTaskDetails::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string ScanTaskDetails::GetStatus() const
{
    return m_status;
}

void ScanTaskDetails::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ScanTaskDetails::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ScanTaskDetails::GetDescription() const
{
    return m_description;
}

void ScanTaskDetails::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ScanTaskDetails::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t ScanTaskDetails::GetId() const
{
    return m_id;
}

void ScanTaskDetails::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ScanTaskDetails::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ScanTaskDetails::GetFailType() const
{
    return m_failType;
}

void ScanTaskDetails::SetFailType(const uint64_t& _failType)
{
    m_failType = _failType;
    m_failTypeHasBeenSet = true;
}

bool ScanTaskDetails::FailTypeHasBeenSet() const
{
    return m_failTypeHasBeenSet;
}

string ScanTaskDetails::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void ScanTaskDetails::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool ScanTaskDetails::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

MachineExtraInfo ScanTaskDetails::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void ScanTaskDetails::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool ScanTaskDetails::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

