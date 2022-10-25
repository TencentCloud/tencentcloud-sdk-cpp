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

#include <tencentcloud/tem/v20210701/model/RunVersionPod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

RunVersionPod::RunVersionPod() :
    m_webshellHasBeenSet(false),
    m_podIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_podIpHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_deployVersionHasBeenSet(false),
    m_restartCountHasBeenSet(false),
    m_readyHasBeenSet(false),
    m_containerStateHasBeenSet(false),
    m_nodeInfoHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_unhealthyHasBeenSet(false),
    m_unhealthyWarningMsgHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false)
{
}

CoreInternalOutcome RunVersionPod::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Webshell") && !value["Webshell"].IsNull())
    {
        if (!value["Webshell"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.Webshell` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webshell = string(value["Webshell"].GetString());
        m_webshellHasBeenSet = true;
    }

    if (value.HasMember("PodId") && !value["PodId"].IsNull())
    {
        if (!value["PodId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.PodId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podId = string(value["PodId"].GetString());
        m_podIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("PodIp") && !value["PodIp"].IsNull())
    {
        if (!value["PodIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.PodIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIp = string(value["PodIp"].GetString());
        m_podIpHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("DeployVersion") && !value["DeployVersion"].IsNull())
    {
        if (!value["DeployVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.DeployVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deployVersion = string(value["DeployVersion"].GetString());
        m_deployVersionHasBeenSet = true;
    }

    if (value.HasMember("RestartCount") && !value["RestartCount"].IsNull())
    {
        if (!value["RestartCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.RestartCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restartCount = value["RestartCount"].GetInt64();
        m_restartCountHasBeenSet = true;
    }

    if (value.HasMember("Ready") && !value["Ready"].IsNull())
    {
        if (!value["Ready"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.Ready` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ready = value["Ready"].GetBool();
        m_readyHasBeenSet = true;
    }

    if (value.HasMember("ContainerState") && !value["ContainerState"].IsNull())
    {
        if (!value["ContainerState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.ContainerState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerState = string(value["ContainerState"].GetString());
        m_containerStateHasBeenSet = true;
    }

    if (value.HasMember("NodeInfo") && !value["NodeInfo"].IsNull())
    {
        if (!value["NodeInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.NodeInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeInfo.Deserialize(value["NodeInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeInfoHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("Unhealthy") && !value["Unhealthy"].IsNull())
    {
        if (!value["Unhealthy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.Unhealthy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthy = value["Unhealthy"].GetBool();
        m_unhealthyHasBeenSet = true;
    }

    if (value.HasMember("UnhealthyWarningMsg") && !value["UnhealthyWarningMsg"].IsNull())
    {
        if (!value["UnhealthyWarningMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.UnhealthyWarningMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unhealthyWarningMsg = string(value["UnhealthyWarningMsg"].GetString());
        m_unhealthyWarningMsgHasBeenSet = true;
    }

    if (value.HasMember("VersionId") && !value["VersionId"].IsNull())
    {
        if (!value["VersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.VersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionId = string(value["VersionId"].GetString());
        m_versionIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunVersionPod.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunVersionPod::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_webshellHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Webshell";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webshell.c_str(), allocator).Move(), allocator);
    }

    if (m_podIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_podIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIp.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_deployVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deployVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_restartCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartCount, allocator);
    }

    if (m_readyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ready";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ready, allocator);
    }

    if (m_containerStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerState.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_unhealthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unhealthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhealthy, allocator);
    }

    if (m_unhealthyWarningMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhealthyWarningMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unhealthyWarningMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

}


string RunVersionPod::GetWebshell() const
{
    return m_webshell;
}

void RunVersionPod::SetWebshell(const string& _webshell)
{
    m_webshell = _webshell;
    m_webshellHasBeenSet = true;
}

bool RunVersionPod::WebshellHasBeenSet() const
{
    return m_webshellHasBeenSet;
}

string RunVersionPod::GetPodId() const
{
    return m_podId;
}

void RunVersionPod::SetPodId(const string& _podId)
{
    m_podId = _podId;
    m_podIdHasBeenSet = true;
}

bool RunVersionPod::PodIdHasBeenSet() const
{
    return m_podIdHasBeenSet;
}

string RunVersionPod::GetStatus() const
{
    return m_status;
}

void RunVersionPod::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RunVersionPod::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RunVersionPod::GetCreateTime() const
{
    return m_createTime;
}

void RunVersionPod::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RunVersionPod::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RunVersionPod::GetPodIp() const
{
    return m_podIp;
}

void RunVersionPod::SetPodIp(const string& _podIp)
{
    m_podIp = _podIp;
    m_podIpHasBeenSet = true;
}

bool RunVersionPod::PodIpHasBeenSet() const
{
    return m_podIpHasBeenSet;
}

string RunVersionPod::GetZone() const
{
    return m_zone;
}

void RunVersionPod::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool RunVersionPod::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string RunVersionPod::GetDeployVersion() const
{
    return m_deployVersion;
}

void RunVersionPod::SetDeployVersion(const string& _deployVersion)
{
    m_deployVersion = _deployVersion;
    m_deployVersionHasBeenSet = true;
}

bool RunVersionPod::DeployVersionHasBeenSet() const
{
    return m_deployVersionHasBeenSet;
}

int64_t RunVersionPod::GetRestartCount() const
{
    return m_restartCount;
}

void RunVersionPod::SetRestartCount(const int64_t& _restartCount)
{
    m_restartCount = _restartCount;
    m_restartCountHasBeenSet = true;
}

bool RunVersionPod::RestartCountHasBeenSet() const
{
    return m_restartCountHasBeenSet;
}

bool RunVersionPod::GetReady() const
{
    return m_ready;
}

void RunVersionPod::SetReady(const bool& _ready)
{
    m_ready = _ready;
    m_readyHasBeenSet = true;
}

bool RunVersionPod::ReadyHasBeenSet() const
{
    return m_readyHasBeenSet;
}

string RunVersionPod::GetContainerState() const
{
    return m_containerState;
}

void RunVersionPod::SetContainerState(const string& _containerState)
{
    m_containerState = _containerState;
    m_containerStateHasBeenSet = true;
}

bool RunVersionPod::ContainerStateHasBeenSet() const
{
    return m_containerStateHasBeenSet;
}

NodeInfo RunVersionPod::GetNodeInfo() const
{
    return m_nodeInfo;
}

void RunVersionPod::SetNodeInfo(const NodeInfo& _nodeInfo)
{
    m_nodeInfo = _nodeInfo;
    m_nodeInfoHasBeenSet = true;
}

bool RunVersionPod::NodeInfoHasBeenSet() const
{
    return m_nodeInfoHasBeenSet;
}

string RunVersionPod::GetStartTime() const
{
    return m_startTime;
}

void RunVersionPod::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RunVersionPod::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

bool RunVersionPod::GetUnhealthy() const
{
    return m_unhealthy;
}

void RunVersionPod::SetUnhealthy(const bool& _unhealthy)
{
    m_unhealthy = _unhealthy;
    m_unhealthyHasBeenSet = true;
}

bool RunVersionPod::UnhealthyHasBeenSet() const
{
    return m_unhealthyHasBeenSet;
}

string RunVersionPod::GetUnhealthyWarningMsg() const
{
    return m_unhealthyWarningMsg;
}

void RunVersionPod::SetUnhealthyWarningMsg(const string& _unhealthyWarningMsg)
{
    m_unhealthyWarningMsg = _unhealthyWarningMsg;
    m_unhealthyWarningMsgHasBeenSet = true;
}

bool RunVersionPod::UnhealthyWarningMsgHasBeenSet() const
{
    return m_unhealthyWarningMsgHasBeenSet;
}

string RunVersionPod::GetVersionId() const
{
    return m_versionId;
}

void RunVersionPod::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool RunVersionPod::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}

string RunVersionPod::GetApplicationName() const
{
    return m_applicationName;
}

void RunVersionPod::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool RunVersionPod::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

