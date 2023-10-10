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

#include <tencentcloud/cwp/v20180228/model/RiskDnsEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RiskDnsEvent::RiskDnsEvent() :
    m_idHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_protectLevelHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_accessCountHasBeenSet(false),
    m_threatDescHasBeenSet(false),
    m_suggestSolutionHasBeenSet(false),
    m_referenceLinkHasBeenSet(false),
    m_handleStatusHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_processMd5HasBeenSet(false),
    m_cmdLineHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_hostStatusHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_osTypeHasBeenSet(false)
{
}

CoreInternalOutcome RiskDnsEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.PolicyId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetInt64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.PolicyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = value["PolicyType"].GetInt64();
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("ProtectLevel") && !value["ProtectLevel"].IsNull())
    {
        if (!value["ProtectLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.ProtectLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_protectLevel = value["ProtectLevel"].GetInt64();
        m_protectLevelHasBeenSet = true;
    }

    if (value.HasMember("HostId") && !value["HostId"].IsNull())
    {
        if (!value["HostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.HostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostId = string(value["HostId"].GetString());
        m_hostIdHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("AgentId") && !value["AgentId"].IsNull())
    {
        if (!value["AgentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.AgentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agentId = string(value["AgentId"].GetString());
        m_agentIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("AccessCount") && !value["AccessCount"].IsNull())
    {
        if (!value["AccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.AccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessCount = value["AccessCount"].GetInt64();
        m_accessCountHasBeenSet = true;
    }

    if (value.HasMember("ThreatDesc") && !value["ThreatDesc"].IsNull())
    {
        if (!value["ThreatDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.ThreatDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_threatDesc = string(value["ThreatDesc"].GetString());
        m_threatDescHasBeenSet = true;
    }

    if (value.HasMember("SuggestSolution") && !value["SuggestSolution"].IsNull())
    {
        if (!value["SuggestSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.SuggestSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestSolution = string(value["SuggestSolution"].GetString());
        m_suggestSolutionHasBeenSet = true;
    }

    if (value.HasMember("ReferenceLink") && !value["ReferenceLink"].IsNull())
    {
        if (!value["ReferenceLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.ReferenceLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceLink = string(value["ReferenceLink"].GetString());
        m_referenceLinkHasBeenSet = true;
    }

    if (value.HasMember("HandleStatus") && !value["HandleStatus"].IsNull())
    {
        if (!value["HandleStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.HandleStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_handleStatus = value["HandleStatus"].GetInt64();
        m_handleStatusHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.Pid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetInt64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("ProcessMd5") && !value["ProcessMd5"].IsNull())
    {
        if (!value["ProcessMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.ProcessMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processMd5 = string(value["ProcessMd5"].GetString());
        m_processMd5HasBeenSet = true;
    }

    if (value.HasMember("CmdLine") && !value["CmdLine"].IsNull())
    {
        if (!value["CmdLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.CmdLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdLine = string(value["CmdLine"].GetString());
        m_cmdLineHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("HostStatus") && !value["HostStatus"].IsNull())
    {
        if (!value["HostStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.HostStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostStatus = string(value["HostStatus"].GetString());
        m_hostStatusHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("OsType") && !value["OsType"].IsNull())
    {
        if (!value["OsType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDnsEvent.OsType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_osType = value["OsType"].GetInt64();
        m_osTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskDnsEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyType, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_protectLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectLevel, allocator);
    }

    if (m_hostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostId.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_wanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
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

    if (m_accessCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessCount, allocator);
    }

    if (m_threatDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThreatDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_threatDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestSolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestSolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestSolution.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceLink.c_str(), allocator).Move(), allocator);
    }

    if (m_handleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handleStatus, allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
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

    if (m_cmdLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdLine.c_str(), allocator).Move(), allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_hostStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_osTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_osType, allocator);
    }

}


int64_t RiskDnsEvent::GetId() const
{
    return m_id;
}

void RiskDnsEvent::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RiskDnsEvent::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t RiskDnsEvent::GetPolicyId() const
{
    return m_policyId;
}

void RiskDnsEvent::SetPolicyId(const int64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool RiskDnsEvent::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

int64_t RiskDnsEvent::GetPolicyType() const
{
    return m_policyType;
}

void RiskDnsEvent::SetPolicyType(const int64_t& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool RiskDnsEvent::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

string RiskDnsEvent::GetPolicyName() const
{
    return m_policyName;
}

void RiskDnsEvent::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool RiskDnsEvent::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

int64_t RiskDnsEvent::GetProtectLevel() const
{
    return m_protectLevel;
}

void RiskDnsEvent::SetProtectLevel(const int64_t& _protectLevel)
{
    m_protectLevel = _protectLevel;
    m_protectLevelHasBeenSet = true;
}

bool RiskDnsEvent::ProtectLevelHasBeenSet() const
{
    return m_protectLevelHasBeenSet;
}

string RiskDnsEvent::GetHostId() const
{
    return m_hostId;
}

void RiskDnsEvent::SetHostId(const string& _hostId)
{
    m_hostId = _hostId;
    m_hostIdHasBeenSet = true;
}

bool RiskDnsEvent::HostIdHasBeenSet() const
{
    return m_hostIdHasBeenSet;
}

string RiskDnsEvent::GetHostName() const
{
    return m_hostName;
}

void RiskDnsEvent::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool RiskDnsEvent::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string RiskDnsEvent::GetHostIp() const
{
    return m_hostIp;
}

void RiskDnsEvent::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool RiskDnsEvent::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string RiskDnsEvent::GetWanIp() const
{
    return m_wanIp;
}

void RiskDnsEvent::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool RiskDnsEvent::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

string RiskDnsEvent::GetAgentId() const
{
    return m_agentId;
}

void RiskDnsEvent::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool RiskDnsEvent::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string RiskDnsEvent::GetDomain() const
{
    return m_domain;
}

void RiskDnsEvent::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool RiskDnsEvent::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> RiskDnsEvent::GetTags() const
{
    return m_tags;
}

void RiskDnsEvent::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RiskDnsEvent::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t RiskDnsEvent::GetAccessCount() const
{
    return m_accessCount;
}

void RiskDnsEvent::SetAccessCount(const int64_t& _accessCount)
{
    m_accessCount = _accessCount;
    m_accessCountHasBeenSet = true;
}

bool RiskDnsEvent::AccessCountHasBeenSet() const
{
    return m_accessCountHasBeenSet;
}

string RiskDnsEvent::GetThreatDesc() const
{
    return m_threatDesc;
}

void RiskDnsEvent::SetThreatDesc(const string& _threatDesc)
{
    m_threatDesc = _threatDesc;
    m_threatDescHasBeenSet = true;
}

bool RiskDnsEvent::ThreatDescHasBeenSet() const
{
    return m_threatDescHasBeenSet;
}

string RiskDnsEvent::GetSuggestSolution() const
{
    return m_suggestSolution;
}

void RiskDnsEvent::SetSuggestSolution(const string& _suggestSolution)
{
    m_suggestSolution = _suggestSolution;
    m_suggestSolutionHasBeenSet = true;
}

bool RiskDnsEvent::SuggestSolutionHasBeenSet() const
{
    return m_suggestSolutionHasBeenSet;
}

string RiskDnsEvent::GetReferenceLink() const
{
    return m_referenceLink;
}

void RiskDnsEvent::SetReferenceLink(const string& _referenceLink)
{
    m_referenceLink = _referenceLink;
    m_referenceLinkHasBeenSet = true;
}

bool RiskDnsEvent::ReferenceLinkHasBeenSet() const
{
    return m_referenceLinkHasBeenSet;
}

int64_t RiskDnsEvent::GetHandleStatus() const
{
    return m_handleStatus;
}

void RiskDnsEvent::SetHandleStatus(const int64_t& _handleStatus)
{
    m_handleStatus = _handleStatus;
    m_handleStatusHasBeenSet = true;
}

bool RiskDnsEvent::HandleStatusHasBeenSet() const
{
    return m_handleStatusHasBeenSet;
}

int64_t RiskDnsEvent::GetPid() const
{
    return m_pid;
}

void RiskDnsEvent::SetPid(const int64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool RiskDnsEvent::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

string RiskDnsEvent::GetProcessName() const
{
    return m_processName;
}

void RiskDnsEvent::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool RiskDnsEvent::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string RiskDnsEvent::GetProcessMd5() const
{
    return m_processMd5;
}

void RiskDnsEvent::SetProcessMd5(const string& _processMd5)
{
    m_processMd5 = _processMd5;
    m_processMd5HasBeenSet = true;
}

bool RiskDnsEvent::ProcessMd5HasBeenSet() const
{
    return m_processMd5HasBeenSet;
}

string RiskDnsEvent::GetCmdLine() const
{
    return m_cmdLine;
}

void RiskDnsEvent::SetCmdLine(const string& _cmdLine)
{
    m_cmdLine = _cmdLine;
    m_cmdLineHasBeenSet = true;
}

bool RiskDnsEvent::CmdLineHasBeenSet() const
{
    return m_cmdLineHasBeenSet;
}

string RiskDnsEvent::GetFirstTime() const
{
    return m_firstTime;
}

void RiskDnsEvent::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool RiskDnsEvent::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

string RiskDnsEvent::GetLastTime() const
{
    return m_lastTime;
}

void RiskDnsEvent::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool RiskDnsEvent::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

string RiskDnsEvent::GetHostStatus() const
{
    return m_hostStatus;
}

void RiskDnsEvent::SetHostStatus(const string& _hostStatus)
{
    m_hostStatus = _hostStatus;
    m_hostStatusHasBeenSet = true;
}

bool RiskDnsEvent::HostStatusHasBeenSet() const
{
    return m_hostStatusHasBeenSet;
}

MachineExtraInfo RiskDnsEvent::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void RiskDnsEvent::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool RiskDnsEvent::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

int64_t RiskDnsEvent::GetOsType() const
{
    return m_osType;
}

void RiskDnsEvent::SetOsType(const int64_t& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool RiskDnsEvent::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

