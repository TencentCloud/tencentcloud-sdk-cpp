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

#include <tencentcloud/iecp/v20210914/model/GridPodInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

GridPodInfo::GridPodInfo() :
    m_nameHasBeenSet(false),
    m_nameSpaceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeIPHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_runSecHasBeenSet(false),
    m_restartCountHasBeenSet(false),
    m_clusterIDHasBeenSet(false)
{
}

CoreInternalOutcome GridPodInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridPodInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("NameSpace") && !value["NameSpace"].IsNull())
    {
        if (!value["NameSpace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridPodInfo.NameSpace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameSpace = string(value["NameSpace"].GetString());
        m_nameSpaceHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridPodInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridPodInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeIP") && !value["NodeIP"].IsNull())
    {
        if (!value["NodeIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridPodInfo.NodeIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIP = string(value["NodeIP"].GetString());
        m_nodeIPHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridPodInfo.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridPodInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("RunSec") && !value["RunSec"].IsNull())
    {
        if (!value["RunSec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GridPodInfo.RunSec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runSec = value["RunSec"].GetInt64();
        m_runSecHasBeenSet = true;
    }

    if (value.HasMember("RestartCount") && !value["RestartCount"].IsNull())
    {
        if (!value["RestartCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GridPodInfo.RestartCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restartCount = value["RestartCount"].GetInt64();
        m_restartCountHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GridPodInfo.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GridPodInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_nameSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeIP.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_runSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runSec, allocator);
    }

    if (m_restartCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartCount, allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

}


string GridPodInfo::GetName() const
{
    return m_name;
}

void GridPodInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GridPodInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GridPodInfo::GetNameSpace() const
{
    return m_nameSpace;
}

void GridPodInfo::SetNameSpace(const string& _nameSpace)
{
    m_nameSpace = _nameSpace;
    m_nameSpaceHasBeenSet = true;
}

bool GridPodInfo::NameSpaceHasBeenSet() const
{
    return m_nameSpaceHasBeenSet;
}

string GridPodInfo::GetStatus() const
{
    return m_status;
}

void GridPodInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GridPodInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GridPodInfo::GetNodeName() const
{
    return m_nodeName;
}

void GridPodInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool GridPodInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string GridPodInfo::GetNodeIP() const
{
    return m_nodeIP;
}

void GridPodInfo::SetNodeIP(const string& _nodeIP)
{
    m_nodeIP = _nodeIP;
    m_nodeIPHasBeenSet = true;
}

bool GridPodInfo::NodeIPHasBeenSet() const
{
    return m_nodeIPHasBeenSet;
}

string GridPodInfo::GetPodIP() const
{
    return m_podIP;
}

void GridPodInfo::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool GridPodInfo::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string GridPodInfo::GetStartTime() const
{
    return m_startTime;
}

void GridPodInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool GridPodInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t GridPodInfo::GetRunSec() const
{
    return m_runSec;
}

void GridPodInfo::SetRunSec(const int64_t& _runSec)
{
    m_runSec = _runSec;
    m_runSecHasBeenSet = true;
}

bool GridPodInfo::RunSecHasBeenSet() const
{
    return m_runSecHasBeenSet;
}

int64_t GridPodInfo::GetRestartCount() const
{
    return m_restartCount;
}

void GridPodInfo::SetRestartCount(const int64_t& _restartCount)
{
    m_restartCount = _restartCount;
    m_restartCountHasBeenSet = true;
}

bool GridPodInfo::RestartCountHasBeenSet() const
{
    return m_restartCountHasBeenSet;
}

string GridPodInfo::GetClusterID() const
{
    return m_clusterID;
}

void GridPodInfo::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool GridPodInfo::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

