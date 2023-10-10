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

#include <tencentcloud/cwp/v20180228/model/VulDefenceEventDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulDefenceEventDetail::VulDefenceEventDetail() :
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
    m_machineStatusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_fixHasBeenSet(false),
    m_networkPayloadHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_mainClassHasBeenSet(false),
    m_stackTraceHasBeenSet(false),
    m_eventDetailHasBeenSet(false),
    m_exceptionPstreeHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false)
{
}

CoreInternalOutcome VulDefenceEventDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("CveId") && !value["CveId"].IsNull())
    {
        if (!value["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(value["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("PrivateIp") && !value["PrivateIp"].IsNull())
    {
        if (!value["PrivateIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.PrivateIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateIp = string(value["PrivateIp"].GetString());
        m_privateIpHasBeenSet = true;
    }

    if (value.HasMember("PublicIp") && !value["PublicIp"].IsNull())
    {
        if (!value["PublicIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.PublicIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIp = string(value["PublicIp"].GetString());
        m_publicIpHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.EventType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = value["EventType"].GetUint64();
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceIp") && !value["SourceIp"].IsNull())
    {
        if (!value["SourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.SourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIp = string(value["SourceIp"].GetString());
        m_sourceIpHasBeenSet = true;
    }

    if (value.HasMember("City") && !value["City"].IsNull())
    {
        if (!value["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(value["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (value.HasMember("SourcePort") && !value["SourcePort"].IsNull())
    {
        if (!value["SourcePort"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.SourcePort` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MergeTime") && !value["MergeTime"].IsNull())
    {
        if (!value["MergeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.MergeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mergeTime = string(value["MergeTime"].GetString());
        m_mergeTimeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MachineStatus") && !value["MachineStatus"].IsNull())
    {
        if (!value["MachineStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.MachineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = string(value["MachineStatus"].GetString());
        m_machineStatusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Fix") && !value["Fix"].IsNull())
    {
        if (!value["Fix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.Fix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fix = string(value["Fix"].GetString());
        m_fixHasBeenSet = true;
    }

    if (value.HasMember("NetworkPayload") && !value["NetworkPayload"].IsNull())
    {
        if (!value["NetworkPayload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.NetworkPayload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_networkPayload = string(value["NetworkPayload"].GetString());
        m_networkPayloadHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("MainClass") && !value["MainClass"].IsNull())
    {
        if (!value["MainClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.MainClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainClass = string(value["MainClass"].GetString());
        m_mainClassHasBeenSet = true;
    }

    if (value.HasMember("StackTrace") && !value["StackTrace"].IsNull())
    {
        if (!value["StackTrace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.StackTrace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stackTrace = string(value["StackTrace"].GetString());
        m_stackTraceHasBeenSet = true;
    }

    if (value.HasMember("EventDetail") && !value["EventDetail"].IsNull())
    {
        if (!value["EventDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.EventDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventDetail = string(value["EventDetail"].GetString());
        m_eventDetailHasBeenSet = true;
    }

    if (value.HasMember("ExceptionPstree") && !value["ExceptionPstree"].IsNull())
    {
        if (!value["ExceptionPstree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.ExceptionPstree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionPstree = string(value["ExceptionPstree"].GetString());
        m_exceptionPstreeHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceEventDetail.MachineExtraInfo` is not object type").SetRequestId(requestId));
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

void VulDefenceEventDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_machineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_fixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fix.c_str(), allocator).Move(), allocator);
    }

    if (m_networkPayloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkPayload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_networkPayload.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_mainClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainClass.c_str(), allocator).Move(), allocator);
    }

    if (m_stackTraceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StackTrace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stackTrace.c_str(), allocator).Move(), allocator);
    }

    if (m_eventDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_exceptionPstreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionPstree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exceptionPstree.c_str(), allocator).Move(), allocator);
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


string VulDefenceEventDetail::GetVulName() const
{
    return m_vulName;
}

void VulDefenceEventDetail::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulDefenceEventDetail::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string VulDefenceEventDetail::GetCveId() const
{
    return m_cveId;
}

void VulDefenceEventDetail::SetCveId(const string& _cveId)
{
    m_cveId = _cveId;
    m_cveIdHasBeenSet = true;
}

bool VulDefenceEventDetail::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

int64_t VulDefenceEventDetail::GetId() const
{
    return m_id;
}

void VulDefenceEventDetail::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VulDefenceEventDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string VulDefenceEventDetail::GetQuuid() const
{
    return m_quuid;
}

void VulDefenceEventDetail::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool VulDefenceEventDetail::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string VulDefenceEventDetail::GetAlias() const
{
    return m_alias;
}

void VulDefenceEventDetail::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool VulDefenceEventDetail::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string VulDefenceEventDetail::GetPrivateIp() const
{
    return m_privateIp;
}

void VulDefenceEventDetail::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool VulDefenceEventDetail::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string VulDefenceEventDetail::GetPublicIp() const
{
    return m_publicIp;
}

void VulDefenceEventDetail::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool VulDefenceEventDetail::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

uint64_t VulDefenceEventDetail::GetEventType() const
{
    return m_eventType;
}

void VulDefenceEventDetail::SetEventType(const uint64_t& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool VulDefenceEventDetail::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string VulDefenceEventDetail::GetSourceIp() const
{
    return m_sourceIp;
}

void VulDefenceEventDetail::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool VulDefenceEventDetail::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

string VulDefenceEventDetail::GetCity() const
{
    return m_city;
}

void VulDefenceEventDetail::SetCity(const string& _city)
{
    m_city = _city;
    m_cityHasBeenSet = true;
}

bool VulDefenceEventDetail::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

vector<uint64_t> VulDefenceEventDetail::GetSourcePort() const
{
    return m_sourcePort;
}

void VulDefenceEventDetail::SetSourcePort(const vector<uint64_t>& _sourcePort)
{
    m_sourcePort = _sourcePort;
    m_sourcePortHasBeenSet = true;
}

bool VulDefenceEventDetail::SourcePortHasBeenSet() const
{
    return m_sourcePortHasBeenSet;
}

string VulDefenceEventDetail::GetCreateTime() const
{
    return m_createTime;
}

void VulDefenceEventDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VulDefenceEventDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string VulDefenceEventDetail::GetMergeTime() const
{
    return m_mergeTime;
}

void VulDefenceEventDetail::SetMergeTime(const string& _mergeTime)
{
    m_mergeTime = _mergeTime;
    m_mergeTimeHasBeenSet = true;
}

bool VulDefenceEventDetail::MergeTimeHasBeenSet() const
{
    return m_mergeTimeHasBeenSet;
}

int64_t VulDefenceEventDetail::GetCount() const
{
    return m_count;
}

void VulDefenceEventDetail::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool VulDefenceEventDetail::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t VulDefenceEventDetail::GetStatus() const
{
    return m_status;
}

void VulDefenceEventDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VulDefenceEventDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string VulDefenceEventDetail::GetMachineStatus() const
{
    return m_machineStatus;
}

void VulDefenceEventDetail::SetMachineStatus(const string& _machineStatus)
{
    m_machineStatus = _machineStatus;
    m_machineStatusHasBeenSet = true;
}

bool VulDefenceEventDetail::MachineStatusHasBeenSet() const
{
    return m_machineStatusHasBeenSet;
}

string VulDefenceEventDetail::GetDescription() const
{
    return m_description;
}

void VulDefenceEventDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool VulDefenceEventDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string VulDefenceEventDetail::GetFix() const
{
    return m_fix;
}

void VulDefenceEventDetail::SetFix(const string& _fix)
{
    m_fix = _fix;
    m_fixHasBeenSet = true;
}

bool VulDefenceEventDetail::FixHasBeenSet() const
{
    return m_fixHasBeenSet;
}

string VulDefenceEventDetail::GetNetworkPayload() const
{
    return m_networkPayload;
}

void VulDefenceEventDetail::SetNetworkPayload(const string& _networkPayload)
{
    m_networkPayload = _networkPayload;
    m_networkPayloadHasBeenSet = true;
}

bool VulDefenceEventDetail::NetworkPayloadHasBeenSet() const
{
    return m_networkPayloadHasBeenSet;
}

int64_t VulDefenceEventDetail::GetPid() const
{
    return m_pid;
}

void VulDefenceEventDetail::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool VulDefenceEventDetail::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string VulDefenceEventDetail::GetMainClass() const
{
    return m_mainClass;
}

void VulDefenceEventDetail::SetMainClass(const string& _mainClass)
{
    m_mainClass = _mainClass;
    m_mainClassHasBeenSet = true;
}

bool VulDefenceEventDetail::MainClassHasBeenSet() const
{
    return m_mainClassHasBeenSet;
}

string VulDefenceEventDetail::GetStackTrace() const
{
    return m_stackTrace;
}

void VulDefenceEventDetail::SetStackTrace(const string& _stackTrace)
{
    m_stackTrace = _stackTrace;
    m_stackTraceHasBeenSet = true;
}

bool VulDefenceEventDetail::StackTraceHasBeenSet() const
{
    return m_stackTraceHasBeenSet;
}

string VulDefenceEventDetail::GetEventDetail() const
{
    return m_eventDetail;
}

void VulDefenceEventDetail::SetEventDetail(const string& _eventDetail)
{
    m_eventDetail = _eventDetail;
    m_eventDetailHasBeenSet = true;
}

bool VulDefenceEventDetail::EventDetailHasBeenSet() const
{
    return m_eventDetailHasBeenSet;
}

string VulDefenceEventDetail::GetExceptionPstree() const
{
    return m_exceptionPstree;
}

void VulDefenceEventDetail::SetExceptionPstree(const string& _exceptionPstree)
{
    m_exceptionPstree = _exceptionPstree;
    m_exceptionPstreeHasBeenSet = true;
}

bool VulDefenceEventDetail::ExceptionPstreeHasBeenSet() const
{
    return m_exceptionPstreeHasBeenSet;
}

MachineExtraInfo VulDefenceEventDetail::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void VulDefenceEventDetail::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool VulDefenceEventDetail::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

