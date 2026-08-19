/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/ClusterPodListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ClusterPodListItem::ClusterPodListItem() :
    m_assetIdHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_podUidHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_podIPsHasBeenSet(false),
    m_runStatusHasBeenSet(false),
    m_defendCoresCountHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_workloadTypeHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_uniqueIDHasBeenSet(false),
    m_riskEventCriticalCountHasBeenSet(false),
    m_riskEventHighCountHasBeenSet(false),
    m_riskEventMiddleCountHasBeenSet(false),
    m_riskEventLowCountHasBeenSet(false),
    m_alarmEventCriticalCountHasBeenSet(false),
    m_alarmEventHighCountHasBeenSet(false),
    m_alarmEventMiddleCountHasBeenSet(false),
    m_alarmEventLowCountHasBeenSet(false),
    m_containerListHasBeenSet(false),
    m_alarmCountHasBeenSet(false),
    m_coresCountHasBeenSet(false)
{
}

CoreInternalOutcome ClusterPodListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("PodUid") && !value["PodUid"].IsNull())
    {
        if (!value["PodUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.PodUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podUid = string(value["PodUid"].GetString());
        m_podUidHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("PodIPs") && !value["PodIPs"].IsNull())
    {
        if (!value["PodIPs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.PodIPs` is not array type"));

        const rapidjson::Value &tmpValue = value["PodIPs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_podIPs.push_back((*itr).GetString());
        }
        m_podIPsHasBeenSet = true;
    }

    if (value.HasMember("RunStatus") && !value["RunStatus"].IsNull())
    {
        if (!value["RunStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.RunStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runStatus = string(value["RunStatus"].GetString());
        m_runStatusHasBeenSet = true;
    }

    if (value.HasMember("DefendCoresCount") && !value["DefendCoresCount"].IsNull())
    {
        if (!value["DefendCoresCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.DefendCoresCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defendCoresCount = value["DefendCoresCount"].GetInt64();
        m_defendCoresCountHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("WorkloadName") && !value["WorkloadName"].IsNull())
    {
        if (!value["WorkloadName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.WorkloadName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadName = string(value["WorkloadName"].GetString());
        m_workloadNameHasBeenSet = true;
    }

    if (value.HasMember("WorkloadType") && !value["WorkloadType"].IsNull())
    {
        if (!value["WorkloadType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.WorkloadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadType = string(value["WorkloadType"].GetString());
        m_workloadTypeHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UniqueID") && !value["UniqueID"].IsNull())
    {
        if (!value["UniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.UniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueID = string(value["UniqueID"].GetString());
        m_uniqueIDHasBeenSet = true;
    }

    if (value.HasMember("RiskEventCriticalCount") && !value["RiskEventCriticalCount"].IsNull())
    {
        if (!value["RiskEventCriticalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.RiskEventCriticalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventCriticalCount = value["RiskEventCriticalCount"].GetUint64();
        m_riskEventCriticalCountHasBeenSet = true;
    }

    if (value.HasMember("RiskEventHighCount") && !value["RiskEventHighCount"].IsNull())
    {
        if (!value["RiskEventHighCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.RiskEventHighCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventHighCount = value["RiskEventHighCount"].GetUint64();
        m_riskEventHighCountHasBeenSet = true;
    }

    if (value.HasMember("RiskEventMiddleCount") && !value["RiskEventMiddleCount"].IsNull())
    {
        if (!value["RiskEventMiddleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.RiskEventMiddleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventMiddleCount = value["RiskEventMiddleCount"].GetUint64();
        m_riskEventMiddleCountHasBeenSet = true;
    }

    if (value.HasMember("RiskEventLowCount") && !value["RiskEventLowCount"].IsNull())
    {
        if (!value["RiskEventLowCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.RiskEventLowCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventLowCount = value["RiskEventLowCount"].GetUint64();
        m_riskEventLowCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmEventCriticalCount") && !value["AlarmEventCriticalCount"].IsNull())
    {
        if (!value["AlarmEventCriticalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.AlarmEventCriticalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEventCriticalCount = value["AlarmEventCriticalCount"].GetUint64();
        m_alarmEventCriticalCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmEventHighCount") && !value["AlarmEventHighCount"].IsNull())
    {
        if (!value["AlarmEventHighCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.AlarmEventHighCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEventHighCount = value["AlarmEventHighCount"].GetUint64();
        m_alarmEventHighCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmEventMiddleCount") && !value["AlarmEventMiddleCount"].IsNull())
    {
        if (!value["AlarmEventMiddleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.AlarmEventMiddleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEventMiddleCount = value["AlarmEventMiddleCount"].GetUint64();
        m_alarmEventMiddleCountHasBeenSet = true;
    }

    if (value.HasMember("AlarmEventLowCount") && !value["AlarmEventLowCount"].IsNull())
    {
        if (!value["AlarmEventLowCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.AlarmEventLowCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEventLowCount = value["AlarmEventLowCount"].GetUint64();
        m_alarmEventLowCountHasBeenSet = true;
    }

    if (value.HasMember("ContainerList") && !value["ContainerList"].IsNull())
    {
        if (!value["ContainerList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.ContainerList` is not array type"));

        const rapidjson::Value &tmpValue = value["ContainerList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClusterContainerListItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_containerList.push_back(item);
        }
        m_containerListHasBeenSet = true;
    }

    if (value.HasMember("AlarmCount") && !value["AlarmCount"].IsNull())
    {
        if (!value["AlarmCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.AlarmCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCount = value["AlarmCount"].GetUint64();
        m_alarmCountHasBeenSet = true;
    }

    if (value.HasMember("CoresCount") && !value["CoresCount"].IsNull())
    {
        if (!value["CoresCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterPodListItem.CoresCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_coresCount = value["CoresCount"].GetInt64();
        m_coresCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterPodListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_podUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podUid.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIPs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_podIPs.begin(); itr != m_podIPs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_runStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_defendCoresCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendCoresCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defendCoresCount, allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadName.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_riskEventCriticalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventCriticalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventCriticalCount, allocator);
    }

    if (m_riskEventHighCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventHighCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventHighCount, allocator);
    }

    if (m_riskEventMiddleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventMiddleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventMiddleCount, allocator);
    }

    if (m_riskEventLowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskEventLowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_riskEventLowCount, allocator);
    }

    if (m_alarmEventCriticalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEventCriticalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmEventCriticalCount, allocator);
    }

    if (m_alarmEventHighCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEventHighCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmEventHighCount, allocator);
    }

    if (m_alarmEventMiddleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEventMiddleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmEventMiddleCount, allocator);
    }

    if (m_alarmEventLowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEventLowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmEventLowCount, allocator);
    }

    if (m_containerListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_containerList.begin(); itr != m_containerList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmCount, allocator);
    }

    if (m_coresCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoresCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_coresCount, allocator);
    }

}


string ClusterPodListItem::GetAssetId() const
{
    return m_assetId;
}

void ClusterPodListItem::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool ClusterPodListItem::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

uint64_t ClusterPodListItem::GetAppID() const
{
    return m_appID;
}

void ClusterPodListItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool ClusterPodListItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string ClusterPodListItem::GetPodUid() const
{
    return m_podUid;
}

void ClusterPodListItem::SetPodUid(const string& _podUid)
{
    m_podUid = _podUid;
    m_podUidHasBeenSet = true;
}

bool ClusterPodListItem::PodUidHasBeenSet() const
{
    return m_podUidHasBeenSet;
}

string ClusterPodListItem::GetPodName() const
{
    return m_podName;
}

void ClusterPodListItem::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool ClusterPodListItem::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

vector<string> ClusterPodListItem::GetPodIPs() const
{
    return m_podIPs;
}

void ClusterPodListItem::SetPodIPs(const vector<string>& _podIPs)
{
    m_podIPs = _podIPs;
    m_podIPsHasBeenSet = true;
}

bool ClusterPodListItem::PodIPsHasBeenSet() const
{
    return m_podIPsHasBeenSet;
}

string ClusterPodListItem::GetRunStatus() const
{
    return m_runStatus;
}

void ClusterPodListItem::SetRunStatus(const string& _runStatus)
{
    m_runStatus = _runStatus;
    m_runStatusHasBeenSet = true;
}

bool ClusterPodListItem::RunStatusHasBeenSet() const
{
    return m_runStatusHasBeenSet;
}

int64_t ClusterPodListItem::GetDefendCoresCount() const
{
    return m_defendCoresCount;
}

void ClusterPodListItem::SetDefendCoresCount(const int64_t& _defendCoresCount)
{
    m_defendCoresCount = _defendCoresCount;
    m_defendCoresCountHasBeenSet = true;
}

bool ClusterPodListItem::DefendCoresCountHasBeenSet() const
{
    return m_defendCoresCountHasBeenSet;
}

string ClusterPodListItem::GetNodeId() const
{
    return m_nodeId;
}

void ClusterPodListItem::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool ClusterPodListItem::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string ClusterPodListItem::GetNodeType() const
{
    return m_nodeType;
}

void ClusterPodListItem::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ClusterPodListItem::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string ClusterPodListItem::GetWorkloadName() const
{
    return m_workloadName;
}

void ClusterPodListItem::SetWorkloadName(const string& _workloadName)
{
    m_workloadName = _workloadName;
    m_workloadNameHasBeenSet = true;
}

bool ClusterPodListItem::WorkloadNameHasBeenSet() const
{
    return m_workloadNameHasBeenSet;
}

string ClusterPodListItem::GetWorkloadType() const
{
    return m_workloadType;
}

void ClusterPodListItem::SetWorkloadType(const string& _workloadType)
{
    m_workloadType = _workloadType;
    m_workloadTypeHasBeenSet = true;
}

bool ClusterPodListItem::WorkloadTypeHasBeenSet() const
{
    return m_workloadTypeHasBeenSet;
}

string ClusterPodListItem::GetNamespace() const
{
    return m_namespace;
}

void ClusterPodListItem::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool ClusterPodListItem::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string ClusterPodListItem::GetCreateTime() const
{
    return m_createTime;
}

void ClusterPodListItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClusterPodListItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ClusterPodListItem::GetUniqueID() const
{
    return m_uniqueID;
}

void ClusterPodListItem::SetUniqueID(const string& _uniqueID)
{
    m_uniqueID = _uniqueID;
    m_uniqueIDHasBeenSet = true;
}

bool ClusterPodListItem::UniqueIDHasBeenSet() const
{
    return m_uniqueIDHasBeenSet;
}

uint64_t ClusterPodListItem::GetRiskEventCriticalCount() const
{
    return m_riskEventCriticalCount;
}

void ClusterPodListItem::SetRiskEventCriticalCount(const uint64_t& _riskEventCriticalCount)
{
    m_riskEventCriticalCount = _riskEventCriticalCount;
    m_riskEventCriticalCountHasBeenSet = true;
}

bool ClusterPodListItem::RiskEventCriticalCountHasBeenSet() const
{
    return m_riskEventCriticalCountHasBeenSet;
}

uint64_t ClusterPodListItem::GetRiskEventHighCount() const
{
    return m_riskEventHighCount;
}

void ClusterPodListItem::SetRiskEventHighCount(const uint64_t& _riskEventHighCount)
{
    m_riskEventHighCount = _riskEventHighCount;
    m_riskEventHighCountHasBeenSet = true;
}

bool ClusterPodListItem::RiskEventHighCountHasBeenSet() const
{
    return m_riskEventHighCountHasBeenSet;
}

uint64_t ClusterPodListItem::GetRiskEventMiddleCount() const
{
    return m_riskEventMiddleCount;
}

void ClusterPodListItem::SetRiskEventMiddleCount(const uint64_t& _riskEventMiddleCount)
{
    m_riskEventMiddleCount = _riskEventMiddleCount;
    m_riskEventMiddleCountHasBeenSet = true;
}

bool ClusterPodListItem::RiskEventMiddleCountHasBeenSet() const
{
    return m_riskEventMiddleCountHasBeenSet;
}

uint64_t ClusterPodListItem::GetRiskEventLowCount() const
{
    return m_riskEventLowCount;
}

void ClusterPodListItem::SetRiskEventLowCount(const uint64_t& _riskEventLowCount)
{
    m_riskEventLowCount = _riskEventLowCount;
    m_riskEventLowCountHasBeenSet = true;
}

bool ClusterPodListItem::RiskEventLowCountHasBeenSet() const
{
    return m_riskEventLowCountHasBeenSet;
}

uint64_t ClusterPodListItem::GetAlarmEventCriticalCount() const
{
    return m_alarmEventCriticalCount;
}

void ClusterPodListItem::SetAlarmEventCriticalCount(const uint64_t& _alarmEventCriticalCount)
{
    m_alarmEventCriticalCount = _alarmEventCriticalCount;
    m_alarmEventCriticalCountHasBeenSet = true;
}

bool ClusterPodListItem::AlarmEventCriticalCountHasBeenSet() const
{
    return m_alarmEventCriticalCountHasBeenSet;
}

uint64_t ClusterPodListItem::GetAlarmEventHighCount() const
{
    return m_alarmEventHighCount;
}

void ClusterPodListItem::SetAlarmEventHighCount(const uint64_t& _alarmEventHighCount)
{
    m_alarmEventHighCount = _alarmEventHighCount;
    m_alarmEventHighCountHasBeenSet = true;
}

bool ClusterPodListItem::AlarmEventHighCountHasBeenSet() const
{
    return m_alarmEventHighCountHasBeenSet;
}

uint64_t ClusterPodListItem::GetAlarmEventMiddleCount() const
{
    return m_alarmEventMiddleCount;
}

void ClusterPodListItem::SetAlarmEventMiddleCount(const uint64_t& _alarmEventMiddleCount)
{
    m_alarmEventMiddleCount = _alarmEventMiddleCount;
    m_alarmEventMiddleCountHasBeenSet = true;
}

bool ClusterPodListItem::AlarmEventMiddleCountHasBeenSet() const
{
    return m_alarmEventMiddleCountHasBeenSet;
}

uint64_t ClusterPodListItem::GetAlarmEventLowCount() const
{
    return m_alarmEventLowCount;
}

void ClusterPodListItem::SetAlarmEventLowCount(const uint64_t& _alarmEventLowCount)
{
    m_alarmEventLowCount = _alarmEventLowCount;
    m_alarmEventLowCountHasBeenSet = true;
}

bool ClusterPodListItem::AlarmEventLowCountHasBeenSet() const
{
    return m_alarmEventLowCountHasBeenSet;
}

vector<ClusterContainerListItem> ClusterPodListItem::GetContainerList() const
{
    return m_containerList;
}

void ClusterPodListItem::SetContainerList(const vector<ClusterContainerListItem>& _containerList)
{
    m_containerList = _containerList;
    m_containerListHasBeenSet = true;
}

bool ClusterPodListItem::ContainerListHasBeenSet() const
{
    return m_containerListHasBeenSet;
}

uint64_t ClusterPodListItem::GetAlarmCount() const
{
    return m_alarmCount;
}

void ClusterPodListItem::SetAlarmCount(const uint64_t& _alarmCount)
{
    m_alarmCount = _alarmCount;
    m_alarmCountHasBeenSet = true;
}

bool ClusterPodListItem::AlarmCountHasBeenSet() const
{
    return m_alarmCountHasBeenSet;
}

int64_t ClusterPodListItem::GetCoresCount() const
{
    return m_coresCount;
}

void ClusterPodListItem::SetCoresCount(const int64_t& _coresCount)
{
    m_coresCount = _coresCount;
    m_coresCountHasBeenSet = true;
}

bool ClusterPodListItem::CoresCountHasBeenSet() const
{
    return m_coresCountHasBeenSet;
}

