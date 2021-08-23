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

#include <tencentcloud/yunjing/v20180228/model/MaliciousRequest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

MaliciousRequest::MaliciousRequest() :
    m_idHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_machineIpHasBeenSet(false),
    m_machineNameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_countHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_mergeTimeHasBeenSet(false),
    m_processMd5HasBeenSet(false),
    m_cmdLineHasBeenSet(false),
    m_pidHasBeenSet(false)
{
}

CoreInternalOutcome MaliciousRequest::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("MachineIp") && !value["MachineIp"].IsNull())
    {
        if (!value["MachineIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.MachineIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineIp = string(value["MachineIp"].GetString());
        m_machineIpHasBeenSet = true;
    }

    if (value.HasMember("MachineName") && !value["MachineName"].IsNull())
    {
        if (!value["MachineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.MachineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineName = string(value["MachineName"].GetString());
        m_machineNameHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Reference") && !value["Reference"].IsNull())
    {
        if (!value["Reference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.Reference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reference = string(value["Reference"].GetString());
        m_referenceHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MergeTime") && !value["MergeTime"].IsNull())
    {
        if (!value["MergeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.MergeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mergeTime = string(value["MergeTime"].GetString());
        m_mergeTimeHasBeenSet = true;
    }

    if (value.HasMember("ProcessMd5") && !value["ProcessMd5"].IsNull())
    {
        if (!value["ProcessMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.ProcessMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processMd5 = string(value["ProcessMd5"].GetString());
        m_processMd5HasBeenSet = true;
    }

    if (value.HasMember("CmdLine") && !value["CmdLine"].IsNull())
    {
        if (!value["CmdLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.CmdLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdLine = string(value["CmdLine"].GetString());
        m_cmdLineHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaliciousRequest.Pid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetUint64();
        m_pidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaliciousRequest::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
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

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reference.c_str(), allocator).Move(), allocator);
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

    if (m_processMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdLine.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

}


uint64_t MaliciousRequest::GetId() const
{
    return m_id;
}

void MaliciousRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool MaliciousRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string MaliciousRequest::GetUuid() const
{
    return m_uuid;
}

void MaliciousRequest::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool MaliciousRequest::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string MaliciousRequest::GetMachineIp() const
{
    return m_machineIp;
}

void MaliciousRequest::SetMachineIp(const string& _machineIp)
{
    m_machineIp = _machineIp;
    m_machineIpHasBeenSet = true;
}

bool MaliciousRequest::MachineIpHasBeenSet() const
{
    return m_machineIpHasBeenSet;
}

string MaliciousRequest::GetMachineName() const
{
    return m_machineName;
}

void MaliciousRequest::SetMachineName(const string& _machineName)
{
    m_machineName = _machineName;
    m_machineNameHasBeenSet = true;
}

bool MaliciousRequest::MachineNameHasBeenSet() const
{
    return m_machineNameHasBeenSet;
}

string MaliciousRequest::GetDomain() const
{
    return m_domain;
}

void MaliciousRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool MaliciousRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t MaliciousRequest::GetCount() const
{
    return m_count;
}

void MaliciousRequest::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool MaliciousRequest::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string MaliciousRequest::GetProcessName() const
{
    return m_processName;
}

void MaliciousRequest::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool MaliciousRequest::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string MaliciousRequest::GetStatus() const
{
    return m_status;
}

void MaliciousRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MaliciousRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MaliciousRequest::GetDescription() const
{
    return m_description;
}

void MaliciousRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool MaliciousRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string MaliciousRequest::GetReference() const
{
    return m_reference;
}

void MaliciousRequest::SetReference(const string& _reference)
{
    m_reference = _reference;
    m_referenceHasBeenSet = true;
}

bool MaliciousRequest::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

string MaliciousRequest::GetCreateTime() const
{
    return m_createTime;
}

void MaliciousRequest::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool MaliciousRequest::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string MaliciousRequest::GetMergeTime() const
{
    return m_mergeTime;
}

void MaliciousRequest::SetMergeTime(const string& _mergeTime)
{
    m_mergeTime = _mergeTime;
    m_mergeTimeHasBeenSet = true;
}

bool MaliciousRequest::MergeTimeHasBeenSet() const
{
    return m_mergeTimeHasBeenSet;
}

string MaliciousRequest::GetProcessMd5() const
{
    return m_processMd5;
}

void MaliciousRequest::SetProcessMd5(const string& _processMd5)
{
    m_processMd5 = _processMd5;
    m_processMd5HasBeenSet = true;
}

bool MaliciousRequest::ProcessMd5HasBeenSet() const
{
    return m_processMd5HasBeenSet;
}

string MaliciousRequest::GetCmdLine() const
{
    return m_cmdLine;
}

void MaliciousRequest::SetCmdLine(const string& _cmdLine)
{
    m_cmdLine = _cmdLine;
    m_cmdLineHasBeenSet = true;
}

bool MaliciousRequest::CmdLineHasBeenSet() const
{
    return m_cmdLineHasBeenSet;
}

uint64_t MaliciousRequest::GetPid() const
{
    return m_pid;
}

void MaliciousRequest::SetPid(const uint64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool MaliciousRequest::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

