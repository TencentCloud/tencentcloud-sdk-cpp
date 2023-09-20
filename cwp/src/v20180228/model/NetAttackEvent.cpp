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

#include <tencentcloud/cwp/v20180228/model/NetAttackEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

NetAttackEvent::NetAttackEvent() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_dstPortHasBeenSet(false),
    m_srcIPHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_vulIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_mergeTimeHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vulSupportDefenseHasBeenSet(false),
    m_vulDefenceStatusHasBeenSet(false),
    m_payVersionHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_countHasBeenSet(false),
    m_newHasBeenSet(false)
{
}

CoreInternalOutcome NetAttackEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("DstPort") && !value["DstPort"].IsNull())
    {
        if (!value["DstPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.DstPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dstPort = value["DstPort"].GetUint64();
        m_dstPortHasBeenSet = true;
    }

    if (value.HasMember("SrcIP") && !value["SrcIP"].IsNull())
    {
        if (!value["SrcIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.SrcIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIP = string(value["SrcIP"].GetString());
        m_srcIPHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }

    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("MergeTime") && !value["MergeTime"].IsNull())
    {
        if (!value["MergeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.MergeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mergeTime = string(value["MergeTime"].GetString());
        m_mergeTimeHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("VulSupportDefense") && !value["VulSupportDefense"].IsNull())
    {
        if (!value["VulSupportDefense"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.VulSupportDefense` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulSupportDefense = value["VulSupportDefense"].GetUint64();
        m_vulSupportDefenseHasBeenSet = true;
    }

    if (value.HasMember("VulDefenceStatus") && !value["VulDefenceStatus"].IsNull())
    {
        if (!value["VulDefenceStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.VulDefenceStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulDefenceStatus = value["VulDefenceStatus"].GetUint64();
        m_vulDefenceStatusHasBeenSet = true;
    }

    if (value.HasMember("PayVersion") && !value["PayVersion"].IsNull())
    {
        if (!value["PayVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.PayVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payVersion = value["PayVersion"].GetUint64();
        m_payVersionHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("New") && !value["New"].IsNull())
    {
        if (!value["New"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NetAttackEvent.New` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_new = value["New"].GetBool();
        m_newHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetAttackEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_dstPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dstPort, allocator);
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

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_mergeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mergeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_vulSupportDefenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulSupportDefense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulSupportDefense, allocator);
    }

    if (m_vulDefenceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulDefenceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulDefenceStatus, allocator);
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

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_newHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "New";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_new, allocator);
    }

}


uint64_t NetAttackEvent::GetId() const
{
    return m_id;
}

void NetAttackEvent::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool NetAttackEvent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string NetAttackEvent::GetUuid() const
{
    return m_uuid;
}

void NetAttackEvent::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool NetAttackEvent::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

uint64_t NetAttackEvent::GetDstPort() const
{
    return m_dstPort;
}

void NetAttackEvent::SetDstPort(const uint64_t& _dstPort)
{
    m_dstPort = _dstPort;
    m_dstPortHasBeenSet = true;
}

bool NetAttackEvent::DstPortHasBeenSet() const
{
    return m_dstPortHasBeenSet;
}

string NetAttackEvent::GetSrcIP() const
{
    return m_srcIP;
}

void NetAttackEvent::SetSrcIP(const string& _srcIP)
{
    m_srcIP = _srcIP;
    m_srcIPHasBeenSet = true;
}

bool NetAttackEvent::SrcIPHasBeenSet() const
{
    return m_srcIPHasBeenSet;
}

string NetAttackEvent::GetLocation() const
{
    return m_location;
}

void NetAttackEvent::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool NetAttackEvent::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

uint64_t NetAttackEvent::GetVulId() const
{
    return m_vulId;
}

void NetAttackEvent::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool NetAttackEvent::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string NetAttackEvent::GetVulName() const
{
    return m_vulName;
}

void NetAttackEvent::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool NetAttackEvent::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string NetAttackEvent::GetMergeTime() const
{
    return m_mergeTime;
}

void NetAttackEvent::SetMergeTime(const string& _mergeTime)
{
    m_mergeTime = _mergeTime;
    m_mergeTimeHasBeenSet = true;
}

bool NetAttackEvent::MergeTimeHasBeenSet() const
{
    return m_mergeTimeHasBeenSet;
}

MachineExtraInfo NetAttackEvent::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void NetAttackEvent::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool NetAttackEvent::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

uint64_t NetAttackEvent::GetType() const
{
    return m_type;
}

void NetAttackEvent::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NetAttackEvent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t NetAttackEvent::GetStatus() const
{
    return m_status;
}

void NetAttackEvent::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool NetAttackEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t NetAttackEvent::GetVulSupportDefense() const
{
    return m_vulSupportDefense;
}

void NetAttackEvent::SetVulSupportDefense(const uint64_t& _vulSupportDefense)
{
    m_vulSupportDefense = _vulSupportDefense;
    m_vulSupportDefenseHasBeenSet = true;
}

bool NetAttackEvent::VulSupportDefenseHasBeenSet() const
{
    return m_vulSupportDefenseHasBeenSet;
}

uint64_t NetAttackEvent::GetVulDefenceStatus() const
{
    return m_vulDefenceStatus;
}

void NetAttackEvent::SetVulDefenceStatus(const uint64_t& _vulDefenceStatus)
{
    m_vulDefenceStatus = _vulDefenceStatus;
    m_vulDefenceStatusHasBeenSet = true;
}

bool NetAttackEvent::VulDefenceStatusHasBeenSet() const
{
    return m_vulDefenceStatusHasBeenSet;
}

uint64_t NetAttackEvent::GetPayVersion() const
{
    return m_payVersion;
}

void NetAttackEvent::SetPayVersion(const uint64_t& _payVersion)
{
    m_payVersion = _payVersion;
    m_payVersionHasBeenSet = true;
}

bool NetAttackEvent::PayVersionHasBeenSet() const
{
    return m_payVersionHasBeenSet;
}

string NetAttackEvent::GetQuuid() const
{
    return m_quuid;
}

void NetAttackEvent::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool NetAttackEvent::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

uint64_t NetAttackEvent::GetCount() const
{
    return m_count;
}

void NetAttackEvent::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool NetAttackEvent::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

bool NetAttackEvent::GetNew() const
{
    return m_new;
}

void NetAttackEvent::SetNew(const bool& _new)
{
    m_new = _new;
    m_newHasBeenSet = true;
}

bool NetAttackEvent::NewHasBeenSet() const
{
    return m_newHasBeenSet;
}

