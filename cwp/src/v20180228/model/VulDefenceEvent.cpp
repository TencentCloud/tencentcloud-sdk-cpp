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

#include <tencentcloud/cwp/v20180228/model/VulDefenceEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulDefenceEvent::VulDefenceEvent() :
    m_vulIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_cveIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_sourcePortHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_mergeTimeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_upgradeTypeHasBeenSet(false),
    m_fixTypeHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome VulDefenceEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("CveId") && !value["CveId"].IsNull())
    {
        if (!value["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(value["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.EventType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetUint64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceIp") && !value["SourceIp"].IsNull())
    {
        if (!value["SourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.SourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIp = string(value["SourceIp"].GetString());
        m_sourceIpHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("SourcePort") && !value["SourcePort"].IsNull())
    {
        if (!value["SourcePort"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.SourcePort` is not array type"));

        const rapidjson::Value &tmpValue = value["SourcePort"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourcePort.push_back((*itr).GetUint64());
        }
        m_sourcePortHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MergeTime") && !value["MergeTime"].IsNull())
    {
        if (!value["MergeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.MergeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mergeTime = string(value["MergeTime"].GetString());
        m_mergeTimeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UpgradeType") && !value["UpgradeType"].IsNull())
    {
        if (!value["UpgradeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.UpgradeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeType = value["UpgradeType"].GetInt64();
        m_upgradeTypeHasBeenSet = true;
    }

    if (value.HasMember("FixType") && !value["FixType"].IsNull())
    {
        if (!value["FixType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.FixType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fixType = value["FixType"].GetInt64();
        m_fixTypeHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEvent.MachineExtraInfo` is not object type").SetRequestId(requestId));
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

void VulDefenceEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventType, allocator);
    }

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_sourcePortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourcePort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourcePort.begin(); itr != m_sourcePort.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_mergeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mergeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_upgradeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upgradeType, allocator);
    }

    if (m_fixTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fixType, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
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


uint64_t VulDefenceEvent::GetVulId() const
{
    return m_vulId;
}

void VulDefenceEvent::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulDefenceEvent::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string VulDefenceEvent::GetVulName() const
{
    return m_vulName;
}

void VulDefenceEvent::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulDefenceEvent::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string VulDefenceEvent::GetCveId() const
{
    return m_cveId;
}

void VulDefenceEvent::SetCveId(const string& _cveId)
{
    m_cveId = _cveId;
    m_cveIdHasBeenSet = true;
}

bool VulDefenceEvent::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

int64_t VulDefenceEvent::GetId() const
{
    return m_id;
}

void VulDefenceEvent::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VulDefenceEvent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string VulDefenceEvent::GetQuuid() const
{
    return m_quuid;
}

void VulDefenceEvent::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool VulDefenceEvent::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string VulDefenceEvent::GetAlias() const
{
    return m_alias;
}

void VulDefenceEvent::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool VulDefenceEvent::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string VulDefenceEvent::GetPrivateIp() const
{
    return m_privateIp;
}

void VulDefenceEvent::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool VulDefenceEvent::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string VulDefenceEvent::GetPublicIp() const
{
    return m_publicIp;
}

void VulDefenceEvent::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool VulDefenceEvent::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

uint64_t VulDefenceEvent::GetEventType() const
{
    return m_eventType;
}

void VulDefenceEvent::SetEventType(const uint64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool VulDefenceEvent::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string VulDefenceEvent::GetSourceIp() const
{
    return m_sourceIp;
}

void VulDefenceEvent::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool VulDefenceEvent::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

string VulDefenceEvent::GetCity() const
{
    return m_city;
}

void VulDefenceEvent::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool VulDefenceEvent::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

vector<uint64_t> VulDefenceEvent::GetSourcePort() const
{
    return m_sourcePort;
}

void VulDefenceEvent::SetSourcePort(const vector<uint64_t>& _sourcePort)
{
    m_sourcePort = _sourcePort;
    m_sourcePortHasBeenSet = true;
}

bool VulDefenceEvent::SourcePortHasBeenSet() const
{
    return m_sourcePortHasBeenSet;
}

string VulDefenceEvent::GetCreateTime() const
{
    return m_createTime;
}

void VulDefenceEvent::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VulDefenceEvent::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VulDefenceEvent::GetMergeTime() const
{
    return m_mergeTime;
}

void VulDefenceEvent::SetMergeTime(const string& _mergeTime)
{
    m_mergeTime = _mergeTime;
    m_mergeTimeHasBeenSet = true;
}

bool VulDefenceEvent::MergeTimeHasBeenSet() const
{
    return m_mergeTimeHasBeenSet;
}

int64_t VulDefenceEvent::GetCount() const
{
    return m_count;
}

void VulDefenceEvent::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool VulDefenceEvent::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t VulDefenceEvent::GetStatus() const
{
    return m_status;
}

void VulDefenceEvent::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VulDefenceEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t VulDefenceEvent::GetUpgradeType() const
{
    return m_upgradeType;
}

void VulDefenceEvent::SetUpgradeType(const int64_t& _upgradeType)
{
    m_upgradeType = _upgradeType;
    m_upgradeTypeHasBeenSet = true;
}

bool VulDefenceEvent::UpgradeTypeHasBeenSet() const
{
    return m_upgradeTypeHasBeenSet;
}

int64_t VulDefenceEvent::GetFixType() const
{
    return m_fixType;
}

void VulDefenceEvent::SetFixType(const int64_t& _fixType)
{
    m_fixType = _fixType;
    m_fixTypeHasBeenSet = true;
}

bool VulDefenceEvent::FixTypeHasBeenSet() const
{
    return m_fixTypeHasBeenSet;
}

string VulDefenceEvent::GetUuid() const
{
    return m_uuid;
}

void VulDefenceEvent::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool VulDefenceEvent::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

MachineExtraInfo VulDefenceEvent::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void VulDefenceEvent::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool VulDefenceEvent::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

