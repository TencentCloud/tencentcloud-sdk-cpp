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

#include <tencentcloud/cwp/v20180228/model/NetAttackEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

NetAttackEventInfo::NetAttackEventInfo() :
    m_statusHasBeenSet(false),
    m_srcIPHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_vulIdHasBeenSet(false),
    m_cVEIdHasBeenSet(false),
    m_attackLevelHasBeenSet(false),
    m_vulDefenceStatusHasBeenSet(false),
    m_vulSupportDefenseHasBeenSet(false),
    m_svcPsHasBeenSet(false),
    m_netPayloadHasBeenSet(false),
    m_abnormalActionHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_idHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_countHasBeenSet(false),
    m_payVersionHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_mergeTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_hostOpTypeHasBeenSet(false),
    m_hostOpProcessTreeHasBeenSet(false)
{
}

CoreInternalOutcome NetAttackEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SrcIP") && !value["SrcIP"].IsNull())
    {
        if (!value["SrcIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.SrcIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIP = string(value["SrcIP"].GetString());
        m_srcIPHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("CVEId") && !value["CVEId"].IsNull())
    {
        if (!value["CVEId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.CVEId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEId = string(value["CVEId"].GetString());
        m_cVEIdHasBeenSet = true;
    }

    if (value.HasMember("AttackLevel") && !value["AttackLevel"].IsNull())
    {
        if (!value["AttackLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.AttackLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_attackLevel = value["AttackLevel"].GetUint64();
        m_attackLevelHasBeenSet = true;
    }

    if (value.HasMember("VulDefenceStatus") && !value["VulDefenceStatus"].IsNull())
    {
        if (!value["VulDefenceStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.VulDefenceStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulDefenceStatus = value["VulDefenceStatus"].GetUint64();
        m_vulDefenceStatusHasBeenSet = true;
    }

    if (value.HasMember("VulSupportDefense") && !value["VulSupportDefense"].IsNull())
    {
        if (!value["VulSupportDefense"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.VulSupportDefense` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulSupportDefense = value["VulSupportDefense"].GetUint64();
        m_vulSupportDefenseHasBeenSet = true;
    }

    if (value.HasMember("SvcPs") && !value["SvcPs"].IsNull())
    {
        if (!value["SvcPs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.SvcPs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_svcPs = string(value["SvcPs"].GetString());
        m_svcPsHasBeenSet = true;
    }

    if (value.HasMember("NetPayload") && !value["NetPayload"].IsNull())
    {
        if (!value["NetPayload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.NetPayload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netPayload = string(value["NetPayload"].GetString());
        m_netPayloadHasBeenSet = true;
    }

    if (value.HasMember("AbnormalAction") && !value["AbnormalAction"].IsNull())
    {
        if (!value["AbnormalAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.AbnormalAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_abnormalAction = string(value["AbnormalAction"].GetString());
        m_abnormalActionHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.DstPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = value["DstPort"].GetUint64();
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("PayVersion") && !value["PayVersion"].IsNull())
    {
        if (!value["PayVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.PayVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payVersion = value["PayVersion"].GetUint64();
        m_payVersionHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("MergeTime") && !value["MergeTime"].IsNull())
    {
        if (!value["MergeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.MergeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mergeTime = string(value["MergeTime"].GetString());
        m_mergeTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("HostOpType") && !value["HostOpType"].IsNull())
    {
        if (!value["HostOpType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.HostOpType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostOpType = value["HostOpType"].GetUint64();
        m_hostOpTypeHasBeenSet = true;
    }

    if (value.HasMember("HostOpProcessTree") && !value["HostOpProcessTree"].IsNull())
    {
        if (!value["HostOpProcessTree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEventInfo.HostOpProcessTree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostOpProcessTree = string(value["HostOpProcessTree"].GetString());
        m_hostOpProcessTreeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetAttackEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_srcIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIP.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_cVEIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEId.c_str(), allocator).Move(), allocator);
    }

    if (m_attackLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackLevel, allocator);
    }

    if (m_vulDefenceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulDefenceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulDefenceStatus, allocator);
    }

    if (m_vulSupportDefenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulSupportDefense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulSupportDefense, allocator);
    }

    if (m_svcPsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SvcPs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_svcPs.c_str(), allocator).Move(), allocator);
    }

    if (m_netPayloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetPayload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netPayload.c_str(), allocator).Move(), allocator);
    }

    if (m_abnormalActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AbnormalAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_abnormalAction.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstPort, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_payVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payVersion, allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_mergeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mergeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_hostOpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostOpType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostOpType, allocator);
    }

    if (m_hostOpProcessTreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostOpProcessTree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostOpProcessTree.c_str(), allocator).Move(), allocator);
    }

}


uint64_t NetAttackEventInfo::GetStatus() const
{
    return m_status;
}

void NetAttackEventInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NetAttackEventInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string NetAttackEventInfo::GetSrcIP() const
{
    return m_srcIP;
}

void NetAttackEventInfo::SetSrcIP(const string& _srcIP)
{
    m_srcIP = _srcIP;
    m_srcIPHasBeenSet = true;
}

bool NetAttackEventInfo::SrcIPHasBeenSet() const
{
    return m_srcIPHasBeenSet;
}

string NetAttackEventInfo::GetLocation() const
{
    return m_location;
}

void NetAttackEventInfo::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool NetAttackEventInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string NetAttackEventInfo::GetVulName() const
{
    return m_vulName;
}

void NetAttackEventInfo::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool NetAttackEventInfo::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

uint64_t NetAttackEventInfo::GetVulId() const
{
    return m_vulId;
}

void NetAttackEventInfo::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool NetAttackEventInfo::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string NetAttackEventInfo::GetCVEId() const
{
    return m_cVEId;
}

void NetAttackEventInfo::SetCVEId(const string& _cVEId)
{
    m_cVEId = _cVEId;
    m_cVEIdHasBeenSet = true;
}

bool NetAttackEventInfo::CVEIdHasBeenSet() const
{
    return m_cVEIdHasBeenSet;
}

uint64_t NetAttackEventInfo::GetAttackLevel() const
{
    return m_attackLevel;
}

void NetAttackEventInfo::SetAttackLevel(const uint64_t& _attackLevel)
{
    m_attackLevel = _attackLevel;
    m_attackLevelHasBeenSet = true;
}

bool NetAttackEventInfo::AttackLevelHasBeenSet() const
{
    return m_attackLevelHasBeenSet;
}

uint64_t NetAttackEventInfo::GetVulDefenceStatus() const
{
    return m_vulDefenceStatus;
}

void NetAttackEventInfo::SetVulDefenceStatus(const uint64_t& _vulDefenceStatus)
{
    m_vulDefenceStatus = _vulDefenceStatus;
    m_vulDefenceStatusHasBeenSet = true;
}

bool NetAttackEventInfo::VulDefenceStatusHasBeenSet() const
{
    return m_vulDefenceStatusHasBeenSet;
}

uint64_t NetAttackEventInfo::GetVulSupportDefense() const
{
    return m_vulSupportDefense;
}

void NetAttackEventInfo::SetVulSupportDefense(const uint64_t& _vulSupportDefense)
{
    m_vulSupportDefense = _vulSupportDefense;
    m_vulSupportDefenseHasBeenSet = true;
}

bool NetAttackEventInfo::VulSupportDefenseHasBeenSet() const
{
    return m_vulSupportDefenseHasBeenSet;
}

string NetAttackEventInfo::GetSvcPs() const
{
    return m_svcPs;
}

void NetAttackEventInfo::SetSvcPs(const string& _svcPs)
{
    m_svcPs = _svcPs;
    m_svcPsHasBeenSet = true;
}

bool NetAttackEventInfo::SvcPsHasBeenSet() const
{
    return m_svcPsHasBeenSet;
}

string NetAttackEventInfo::GetNetPayload() const
{
    return m_netPayload;
}

void NetAttackEventInfo::SetNetPayload(const string& _netPayload)
{
    m_netPayload = _netPayload;
    m_netPayloadHasBeenSet = true;
}

bool NetAttackEventInfo::NetPayloadHasBeenSet() const
{
    return m_netPayloadHasBeenSet;
}

string NetAttackEventInfo::GetAbnormalAction() const
{
    return m_abnormalAction;
}

void NetAttackEventInfo::SetAbnormalAction(const string& _abnormalAction)
{
    m_abnormalAction = _abnormalAction;
    m_abnormalActionHasBeenSet = true;
}

bool NetAttackEventInfo::AbnormalActionHasBeenSet() const
{
    return m_abnormalActionHasBeenSet;
}

string NetAttackEventInfo::GetUuid() const
{
    return m_uuid;
}

void NetAttackEventInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool NetAttackEventInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

uint64_t NetAttackEventInfo::GetId() const
{
    return m_id;
}

void NetAttackEventInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NetAttackEventInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

MachineExtraInfo NetAttackEventInfo::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void NetAttackEventInfo::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool NetAttackEventInfo::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

uint64_t NetAttackEventInfo::GetDstPort() const
{
    return m_dstPort;
}

void NetAttackEventInfo::SetDstPort(const uint64_t& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool NetAttackEventInfo::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

uint64_t NetAttackEventInfo::GetCount() const
{
    return m_count;
}

void NetAttackEventInfo::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool NetAttackEventInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

uint64_t NetAttackEventInfo::GetPayVersion() const
{
    return m_payVersion;
}

void NetAttackEventInfo::SetPayVersion(const uint64_t& _payVersion)
{
    m_payVersion = _payVersion;
    m_payVersionHasBeenSet = true;
}

bool NetAttackEventInfo::PayVersionHasBeenSet() const
{
    return m_payVersionHasBeenSet;
}

string NetAttackEventInfo::GetQuuid() const
{
    return m_quuid;
}

void NetAttackEventInfo::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool NetAttackEventInfo::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string NetAttackEventInfo::GetMergeTime() const
{
    return m_mergeTime;
}

void NetAttackEventInfo::SetMergeTime(const string& _mergeTime)
{
    m_mergeTime = _mergeTime;
    m_mergeTimeHasBeenSet = true;
}

bool NetAttackEventInfo::MergeTimeHasBeenSet() const
{
    return m_mergeTimeHasBeenSet;
}

uint64_t NetAttackEventInfo::GetType() const
{
    return m_type;
}

void NetAttackEventInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NetAttackEventInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t NetAttackEventInfo::GetHostOpType() const
{
    return m_hostOpType;
}

void NetAttackEventInfo::SetHostOpType(const uint64_t& _hostOpType)
{
    m_hostOpType = _hostOpType;
    m_hostOpTypeHasBeenSet = true;
}

bool NetAttackEventInfo::HostOpTypeHasBeenSet() const
{
    return m_hostOpTypeHasBeenSet;
}

string NetAttackEventInfo::GetHostOpProcessTree() const
{
    return m_hostOpProcessTree;
}

void NetAttackEventInfo::SetHostOpProcessTree(const string& _hostOpProcessTree)
{
    m_hostOpProcessTree = _hostOpProcessTree;
    m_hostOpProcessTreeHasBeenSet = true;
}

bool NetAttackEventInfo::HostOpProcessTreeHasBeenSet() const
{
    return m_hostOpProcessTreeHasBeenSet;
}

