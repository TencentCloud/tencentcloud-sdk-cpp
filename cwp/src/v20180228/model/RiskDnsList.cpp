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

#include <tencentcloud/cwp/v20180228/model/RiskDnsList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RiskDnsList::RiskDnsList() :
    m_urlHasBeenSet(false),
    m_accessCountHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_processMd5HasBeenSet(false),
    m_globalRuleIdHasBeenSet(false),
    m_userRuleIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_mergeTimeHasBeenSet(false),
    m_quuidHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_cmdLineHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_suggestSchemeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_machineWanIpHasBeenSet(false),
    m_machineStatusHasBeenSet(false)
{
}

CoreInternalOutcome RiskDnsList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("AccessCount") && !value["AccessCount"].IsNull())
    {
        if (!value["AccessCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.AccessCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessCount = value["AccessCount"].GetUint64();
        m_accessCountHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("ProcessMd5") && !value["ProcessMd5"].IsNull())
    {
        if (!value["ProcessMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.ProcessMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processMd5 = string(value["ProcessMd5"].GetString());
        m_processMd5HasBeenSet = true;
    }

    if (value.HasMember("GlobalRuleId") && !value["GlobalRuleId"].IsNull())
    {
        if (!value["GlobalRuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.GlobalRuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_globalRuleId = value["GlobalRuleId"].GetUint64();
        m_globalRuleIdHasBeenSet = true;
    }

    if (value.HasMember("UserRuleId") && !value["UserRuleId"].IsNull())
    {
        if (!value["UserRuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.UserRuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userRuleId = value["UserRuleId"].GetUint64();
        m_userRuleIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("MergeTime") && !value["MergeTime"].IsNull())
    {
        if (!value["MergeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.MergeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mergeTime = string(value["MergeTime"].GetString());
        m_mergeTimeHasBeenSet = true;
    }

    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Reference") && !value["Reference"].IsNull())
    {
        if (!value["Reference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.Reference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reference = string(value["Reference"].GetString());
        m_referenceHasBeenSet = true;
    }

    if (value.HasMember("CmdLine") && !value["CmdLine"].IsNull())
    {
        if (!value["CmdLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.CmdLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdLine = string(value["CmdLine"].GetString());
        m_cmdLineHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.Pid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetUint64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("SuggestScheme") && !value["SuggestScheme"].IsNull())
    {
        if (!value["SuggestScheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.SuggestScheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestScheme = string(value["SuggestScheme"].GetString());
        m_suggestSchemeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("MachineWanIp") && !value["MachineWanIp"].IsNull())
    {
        if (!value["MachineWanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.MachineWanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineWanIp = string(value["MachineWanIp"].GetString());
        m_machineWanIpHasBeenSet = true;
    }

    if (value.HasMember("MachineStatus") && !value["MachineStatus"].IsNull())
    {
        if (!value["MachineStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsList.MachineStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_machineStatus = string(value["MachineStatus"].GetString());
        m_machineStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskDnsList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_accessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessCount, allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_processMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_globalRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_globalRuleId, allocator);
    }

    if (m_userRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userRuleId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
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

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reference.c_str(), allocator).Move(), allocator);
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

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestScheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_machineWanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineWanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineWanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_machineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_machineStatus.c_str(), allocator).Move(), allocator);
    }

}


string RiskDnsList::GetUrl() const
{
    return m_url;
}

void RiskDnsList::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool RiskDnsList::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t RiskDnsList::GetAccessCount() const
{
    return m_accessCount;
}

void RiskDnsList::SetAccessCount(const uint64_t& _accessCount)
{
    m_accessCount = _accessCount;
    m_accessCountHasBeenSet = true;
}

bool RiskDnsList::AccessCountHasBeenSet() const
{
    return m_accessCountHasBeenSet;
}

string RiskDnsList::GetProcessName() const
{
    return m_processName;
}

void RiskDnsList::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool RiskDnsList::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string RiskDnsList::GetProcessMd5() const
{
    return m_processMd5;
}

void RiskDnsList::SetProcessMd5(const string& _processMd5)
{
    m_processMd5 = _processMd5;
    m_processMd5HasBeenSet = true;
}

bool RiskDnsList::ProcessMd5HasBeenSet() const
{
    return m_processMd5HasBeenSet;
}

uint64_t RiskDnsList::GetGlobalRuleId() const
{
    return m_globalRuleId;
}

void RiskDnsList::SetGlobalRuleId(const uint64_t& _globalRuleId)
{
    m_globalRuleId = _globalRuleId;
    m_globalRuleIdHasBeenSet = true;
}

bool RiskDnsList::GlobalRuleIdHasBeenSet() const
{
    return m_globalRuleIdHasBeenSet;
}

uint64_t RiskDnsList::GetUserRuleId() const
{
    return m_userRuleId;
}

void RiskDnsList::SetUserRuleId(const uint64_t& _userRuleId)
{
    m_userRuleId = _userRuleId;
    m_userRuleIdHasBeenSet = true;
}

bool RiskDnsList::UserRuleIdHasBeenSet() const
{
    return m_userRuleIdHasBeenSet;
}

uint64_t RiskDnsList::GetStatus() const
{
    return m_status;
}

void RiskDnsList::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RiskDnsList::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RiskDnsList::GetCreateTime() const
{
    return m_createTime;
}

void RiskDnsList::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RiskDnsList::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RiskDnsList::GetMergeTime() const
{
    return m_mergeTime;
}

void RiskDnsList::SetMergeTime(const string& _mergeTime)
{
    m_mergeTime = _mergeTime;
    m_mergeTimeHasBeenSet = true;
}

bool RiskDnsList::MergeTimeHasBeenSet() const
{
    return m_mergeTimeHasBeenSet;
}

string RiskDnsList::GetQuuid() const
{
    return m_quuid;
}

void RiskDnsList::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool RiskDnsList::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

string RiskDnsList::GetHostIp() const
{
    return m_hostIp;
}

void RiskDnsList::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool RiskDnsList::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string RiskDnsList::GetAlias() const
{
    return m_alias;
}

void RiskDnsList::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool RiskDnsList::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string RiskDnsList::GetDescription() const
{
    return m_description;
}

void RiskDnsList::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RiskDnsList::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t RiskDnsList::GetId() const
{
    return m_id;
}

void RiskDnsList::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RiskDnsList::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string RiskDnsList::GetReference() const
{
    return m_reference;
}

void RiskDnsList::SetReference(const string& _reference)
{
    m_reference = _reference;
    m_referenceHasBeenSet = true;
}

bool RiskDnsList::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

string RiskDnsList::GetCmdLine() const
{
    return m_cmdLine;
}

void RiskDnsList::SetCmdLine(const string& _cmdLine)
{
    m_cmdLine = _cmdLine;
    m_cmdLineHasBeenSet = true;
}

bool RiskDnsList::CmdLineHasBeenSet() const
{
    return m_cmdLineHasBeenSet;
}

uint64_t RiskDnsList::GetPid() const
{
    return m_pid;
}

void RiskDnsList::SetPid(const uint64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool RiskDnsList::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string RiskDnsList::GetUuid() const
{
    return m_uuid;
}

void RiskDnsList::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool RiskDnsList::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string RiskDnsList::GetSuggestScheme() const
{
    return m_suggestScheme;
}

void RiskDnsList::SetSuggestScheme(const string& _suggestScheme)
{
    m_suggestScheme = _suggestScheme;
    m_suggestSchemeHasBeenSet = true;
}

bool RiskDnsList::SuggestSchemeHasBeenSet() const
{
    return m_suggestSchemeHasBeenSet;
}

vector<string> RiskDnsList::GetTags() const
{
    return m_tags;
}

void RiskDnsList::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RiskDnsList::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string RiskDnsList::GetMachineWanIp() const
{
    return m_machineWanIp;
}

void RiskDnsList::SetMachineWanIp(const string& _machineWanIp)
{
    m_machineWanIp = _machineWanIp;
    m_machineWanIpHasBeenSet = true;
}

bool RiskDnsList::MachineWanIpHasBeenSet() const
{
    return m_machineWanIpHasBeenSet;
}

string RiskDnsList::GetMachineStatus() const
{
    return m_machineStatus;
}

void RiskDnsList::SetMachineStatus(const string& _machineStatus)
{
    m_machineStatus = _machineStatus;
    m_machineStatusHasBeenSet = true;
}

bool RiskDnsList::MachineStatusHasBeenSet() const
{
    return m_machineStatusHasBeenSet;
}

