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

#include <tencentcloud/cwp/v20180228/model/RiskProcessEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RiskProcessEvent::RiskProcessEvent() :
    m_eventIdHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_wanIpHasBeenSet(false),
    m_processIdHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_cmdLineHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_detectTimeHasBeenSet(false),
    m_virusNameHasBeenSet(false),
    m_checkPlatformHasBeenSet(false),
    m_virusTagsHasBeenSet(false),
    m_threatDescHasBeenSet(false),
    m_suggestSolutionHasBeenSet(false),
    m_referenceLinkHasBeenSet(false),
    m_handleStatusHasBeenSet(false),
    m_onlineStatusHasBeenSet(false),
    m_machineExtraInfoHasBeenSet(false),
    m_uuidHasBeenSet(false)
{
}

CoreInternalOutcome RiskProcessEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("HostName") && !value["HostName"].IsNull())
    {
        if (!value["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(value["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("WanIp") && !value["WanIp"].IsNull())
    {
        if (!value["WanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.WanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wanIp = string(value["WanIp"].GetString());
        m_wanIpHasBeenSet = true;
    }

    if (value.HasMember("ProcessId") && !value["ProcessId"].IsNull())
    {
        if (!value["ProcessId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.ProcessId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_processId = value["ProcessId"].GetInt64();
        m_processIdHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("CmdLine") && !value["CmdLine"].IsNull())
    {
        if (!value["CmdLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.CmdLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmdLine = string(value["CmdLine"].GetString());
        m_cmdLineHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("DetectTime") && !value["DetectTime"].IsNull())
    {
        if (!value["DetectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.DetectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectTime = string(value["DetectTime"].GetString());
        m_detectTimeHasBeenSet = true;
    }

    if (value.HasMember("VirusName") && !value["VirusName"].IsNull())
    {
        if (!value["VirusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.VirusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusName = string(value["VirusName"].GetString());
        m_virusNameHasBeenSet = true;
    }

    if (value.HasMember("CheckPlatform") && !value["CheckPlatform"].IsNull())
    {
        if (!value["CheckPlatform"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.CheckPlatform` is not array type"));

        const rapidjson::Value &tmpValue = value["CheckPlatform"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_checkPlatform.push_back((*itr).GetString());
        }
        m_checkPlatformHasBeenSet = true;
    }

    if (value.HasMember("VirusTags") && !value["VirusTags"].IsNull())
    {
        if (!value["VirusTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.VirusTags` is not array type"));

        const rapidjson::Value &tmpValue = value["VirusTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_virusTags.push_back((*itr).GetString());
        }
        m_virusTagsHasBeenSet = true;
    }

    if (value.HasMember("ThreatDesc") && !value["ThreatDesc"].IsNull())
    {
        if (!value["ThreatDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.ThreatDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_threatDesc = string(value["ThreatDesc"].GetString());
        m_threatDescHasBeenSet = true;
    }

    if (value.HasMember("SuggestSolution") && !value["SuggestSolution"].IsNull())
    {
        if (!value["SuggestSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.SuggestSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestSolution = string(value["SuggestSolution"].GetString());
        m_suggestSolutionHasBeenSet = true;
    }

    if (value.HasMember("ReferenceLink") && !value["ReferenceLink"].IsNull())
    {
        if (!value["ReferenceLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.ReferenceLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceLink = string(value["ReferenceLink"].GetString());
        m_referenceLinkHasBeenSet = true;
    }

    if (value.HasMember("HandleStatus") && !value["HandleStatus"].IsNull())
    {
        if (!value["HandleStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.HandleStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_handleStatus = value["HandleStatus"].GetInt64();
        m_handleStatusHasBeenSet = true;
    }

    if (value.HasMember("OnlineStatus") && !value["OnlineStatus"].IsNull())
    {
        if (!value["OnlineStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.OnlineStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_onlineStatus = value["OnlineStatus"].GetInt64();
        m_onlineStatusHasBeenSet = true;
    }

    if (value.HasMember("MachineExtraInfo") && !value["MachineExtraInfo"].IsNull())
    {
        if (!value["MachineExtraInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.MachineExtraInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machineExtraInfo.Deserialize(value["MachineExtraInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machineExtraInfoHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskProcessEvent.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RiskProcessEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
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

    if (m_processIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_processId, allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_cmdLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmdLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmdLine.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_detectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_virusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusName.c_str(), allocator).Move(), allocator);
    }

    if (m_checkPlatformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPlatform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_checkPlatform.begin(); itr != m_checkPlatform.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_virusTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_virusTags.begin(); itr != m_virusTags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_onlineStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_onlineStatus, allocator);
    }

    if (m_machineExtraInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineExtraInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machineExtraInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

}


int64_t RiskProcessEvent::GetEventId() const
{
    return m_eventId;
}

void RiskProcessEvent::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool RiskProcessEvent::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string RiskProcessEvent::GetHostName() const
{
    return m_hostName;
}

void RiskProcessEvent::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool RiskProcessEvent::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string RiskProcessEvent::GetHostIp() const
{
    return m_hostIp;
}

void RiskProcessEvent::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool RiskProcessEvent::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

string RiskProcessEvent::GetWanIp() const
{
    return m_wanIp;
}

void RiskProcessEvent::SetWanIp(const string& _wanIp)
{
    m_wanIp = _wanIp;
    m_wanIpHasBeenSet = true;
}

bool RiskProcessEvent::WanIpHasBeenSet() const
{
    return m_wanIpHasBeenSet;
}

int64_t RiskProcessEvent::GetProcessId() const
{
    return m_processId;
}

void RiskProcessEvent::SetProcessId(const int64_t& _processId)
{
    m_processId = _processId;
    m_processIdHasBeenSet = true;
}

bool RiskProcessEvent::ProcessIdHasBeenSet() const
{
    return m_processIdHasBeenSet;
}

string RiskProcessEvent::GetFilePath() const
{
    return m_filePath;
}

void RiskProcessEvent::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool RiskProcessEvent::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string RiskProcessEvent::GetCmdLine() const
{
    return m_cmdLine;
}

void RiskProcessEvent::SetCmdLine(const string& _cmdLine)
{
    m_cmdLine = _cmdLine;
    m_cmdLineHasBeenSet = true;
}

bool RiskProcessEvent::CmdLineHasBeenSet() const
{
    return m_cmdLineHasBeenSet;
}

string RiskProcessEvent::GetStartTime() const
{
    return m_startTime;
}

void RiskProcessEvent::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RiskProcessEvent::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RiskProcessEvent::GetDetectTime() const
{
    return m_detectTime;
}

void RiskProcessEvent::SetDetectTime(const string& _detectTime)
{
    m_detectTime = _detectTime;
    m_detectTimeHasBeenSet = true;
}

bool RiskProcessEvent::DetectTimeHasBeenSet() const
{
    return m_detectTimeHasBeenSet;
}

string RiskProcessEvent::GetVirusName() const
{
    return m_virusName;
}

void RiskProcessEvent::SetVirusName(const string& _virusName)
{
    m_virusName = _virusName;
    m_virusNameHasBeenSet = true;
}

bool RiskProcessEvent::VirusNameHasBeenSet() const
{
    return m_virusNameHasBeenSet;
}

vector<string> RiskProcessEvent::GetCheckPlatform() const
{
    return m_checkPlatform;
}

void RiskProcessEvent::SetCheckPlatform(const vector<string>& _checkPlatform)
{
    m_checkPlatform = _checkPlatform;
    m_checkPlatformHasBeenSet = true;
}

bool RiskProcessEvent::CheckPlatformHasBeenSet() const
{
    return m_checkPlatformHasBeenSet;
}

vector<string> RiskProcessEvent::GetVirusTags() const
{
    return m_virusTags;
}

void RiskProcessEvent::SetVirusTags(const vector<string>& _virusTags)
{
    m_virusTags = _virusTags;
    m_virusTagsHasBeenSet = true;
}

bool RiskProcessEvent::VirusTagsHasBeenSet() const
{
    return m_virusTagsHasBeenSet;
}

string RiskProcessEvent::GetThreatDesc() const
{
    return m_threatDesc;
}

void RiskProcessEvent::SetThreatDesc(const string& _threatDesc)
{
    m_threatDesc = _threatDesc;
    m_threatDescHasBeenSet = true;
}

bool RiskProcessEvent::ThreatDescHasBeenSet() const
{
    return m_threatDescHasBeenSet;
}

string RiskProcessEvent::GetSuggestSolution() const
{
    return m_suggestSolution;
}

void RiskProcessEvent::SetSuggestSolution(const string& _suggestSolution)
{
    m_suggestSolution = _suggestSolution;
    m_suggestSolutionHasBeenSet = true;
}

bool RiskProcessEvent::SuggestSolutionHasBeenSet() const
{
    return m_suggestSolutionHasBeenSet;
}

string RiskProcessEvent::GetReferenceLink() const
{
    return m_referenceLink;
}

void RiskProcessEvent::SetReferenceLink(const string& _referenceLink)
{
    m_referenceLink = _referenceLink;
    m_referenceLinkHasBeenSet = true;
}

bool RiskProcessEvent::ReferenceLinkHasBeenSet() const
{
    return m_referenceLinkHasBeenSet;
}

int64_t RiskProcessEvent::GetHandleStatus() const
{
    return m_handleStatus;
}

void RiskProcessEvent::SetHandleStatus(const int64_t& _handleStatus)
{
    m_handleStatus = _handleStatus;
    m_handleStatusHasBeenSet = true;
}

bool RiskProcessEvent::HandleStatusHasBeenSet() const
{
    return m_handleStatusHasBeenSet;
}

int64_t RiskProcessEvent::GetOnlineStatus() const
{
    return m_onlineStatus;
}

void RiskProcessEvent::SetOnlineStatus(const int64_t& _onlineStatus)
{
    m_onlineStatus = _onlineStatus;
    m_onlineStatusHasBeenSet = true;
}

bool RiskProcessEvent::OnlineStatusHasBeenSet() const
{
    return m_onlineStatusHasBeenSet;
}

MachineExtraInfo RiskProcessEvent::GetMachineExtraInfo() const
{
    return m_machineExtraInfo;
}

void RiskProcessEvent::SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo)
{
    m_machineExtraInfo = _machineExtraInfo;
    m_machineExtraInfoHasBeenSet = true;
}

bool RiskProcessEvent::MachineExtraInfoHasBeenSet() const
{
    return m_machineExtraInfoHasBeenSet;
}

string RiskProcessEvent::GetUuid() const
{
    return m_uuid;
}

void RiskProcessEvent::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool RiskProcessEvent::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

