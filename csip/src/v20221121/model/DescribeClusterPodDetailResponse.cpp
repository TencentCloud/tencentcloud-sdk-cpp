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

#include <tencentcloud/csip/v20221121/model/DescribeClusterPodDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeClusterPodDetailResponse::DescribeClusterPodDetailResponse() :
    m_uniqueIDHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_runStatusHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_startupTimeHasBeenSet(false),
    m_restartCountHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_clusterRunStatusHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_workloadTypeHasBeenSet(false),
    m_riskEventCriticalCountHasBeenSet(false),
    m_riskEventHighCountHasBeenSet(false),
    m_riskEventMiddleCountHasBeenSet(false),
    m_riskEventLowCountHasBeenSet(false),
    m_alarmEventCriticalCountHasBeenSet(false),
    m_alarmEventHighCountHasBeenSet(false),
    m_alarmEventMiddleCountHasBeenSet(false),
    m_alarmEventLowCountHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_nodeInternalIPHasBeenSet(false),
    m_nodeExternalIPHasBeenSet(false),
    m_containerCountHasBeenSet(false),
    m_serviceCountHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionNameEnHasBeenSet(false),
    m_alarmCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeClusterPodDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("UniqueID") && !rsp["UniqueID"].IsNull())
    {
        if (!rsp["UniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqueID = string(rsp["UniqueID"].GetString());
        m_uniqueIDHasBeenSet = true;
    }

    if (rsp.HasMember("AppID") && !rsp["AppID"].IsNull())
    {
        if (!rsp["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = rsp["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (rsp.HasMember("PodName") && !rsp["PodName"].IsNull())
    {
        if (!rsp["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(rsp["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (rsp.HasMember("PodIP") && !rsp["PodIP"].IsNull())
    {
        if (!rsp["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(rsp["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (rsp.HasMember("RunStatus") && !rsp["RunStatus"].IsNull())
    {
        if (!rsp["RunStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runStatus = string(rsp["RunStatus"].GetString());
        m_runStatusHasBeenSet = true;
    }

    if (rsp.HasMember("Labels") && !rsp["Labels"].IsNull())
    {
        if (!rsp["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Labels` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("StartupTime") && !rsp["StartupTime"].IsNull())
    {
        if (!rsp["StartupTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StartupTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startupTime = rsp["StartupTime"].GetUint64();
        m_startupTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RestartCount") && !rsp["RestartCount"].IsNull())
    {
        if (!rsp["RestartCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RestartCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_restartCount = rsp["RestartCount"].GetUint64();
        m_restartCountHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterName") && !rsp["ClusterName"].IsNull())
    {
        if (!rsp["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(rsp["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterID") && !rsp["ClusterID"].IsNull())
    {
        if (!rsp["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(rsp["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterType") && !rsp["ClusterType"].IsNull())
    {
        if (!rsp["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(rsp["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterRunStatus") && !rsp["ClusterRunStatus"].IsNull())
    {
        if (!rsp["ClusterRunStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterRunStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterRunStatus = string(rsp["ClusterRunStatus"].GetString());
        m_clusterRunStatusHasBeenSet = true;
    }

    if (rsp.HasMember("Namespace") && !rsp["Namespace"].IsNull())
    {
        if (!rsp["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(rsp["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (rsp.HasMember("NodeName") && !rsp["NodeName"].IsNull())
    {
        if (!rsp["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(rsp["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (rsp.HasMember("NodeId") && !rsp["NodeId"].IsNull())
    {
        if (!rsp["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(rsp["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("WorkloadName") && !rsp["WorkloadName"].IsNull())
    {
        if (!rsp["WorkloadName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadName = string(rsp["WorkloadName"].GetString());
        m_workloadNameHasBeenSet = true;
    }

    if (rsp.HasMember("WorkloadType") && !rsp["WorkloadType"].IsNull())
    {
        if (!rsp["WorkloadType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WorkloadType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_workloadType = string(rsp["WorkloadType"].GetString());
        m_workloadTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RiskEventCriticalCount") && !rsp["RiskEventCriticalCount"].IsNull())
    {
        if (!rsp["RiskEventCriticalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskEventCriticalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventCriticalCount = rsp["RiskEventCriticalCount"].GetUint64();
        m_riskEventCriticalCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskEventHighCount") && !rsp["RiskEventHighCount"].IsNull())
    {
        if (!rsp["RiskEventHighCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskEventHighCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventHighCount = rsp["RiskEventHighCount"].GetUint64();
        m_riskEventHighCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskEventMiddleCount") && !rsp["RiskEventMiddleCount"].IsNull())
    {
        if (!rsp["RiskEventMiddleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskEventMiddleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventMiddleCount = rsp["RiskEventMiddleCount"].GetUint64();
        m_riskEventMiddleCountHasBeenSet = true;
    }

    if (rsp.HasMember("RiskEventLowCount") && !rsp["RiskEventLowCount"].IsNull())
    {
        if (!rsp["RiskEventLowCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RiskEventLowCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventLowCount = rsp["RiskEventLowCount"].GetUint64();
        m_riskEventLowCountHasBeenSet = true;
    }

    if (rsp.HasMember("AlarmEventCriticalCount") && !rsp["AlarmEventCriticalCount"].IsNull())
    {
        if (!rsp["AlarmEventCriticalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventCriticalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEventCriticalCount = rsp["AlarmEventCriticalCount"].GetUint64();
        m_alarmEventCriticalCountHasBeenSet = true;
    }

    if (rsp.HasMember("AlarmEventHighCount") && !rsp["AlarmEventHighCount"].IsNull())
    {
        if (!rsp["AlarmEventHighCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventHighCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEventHighCount = rsp["AlarmEventHighCount"].GetUint64();
        m_alarmEventHighCountHasBeenSet = true;
    }

    if (rsp.HasMember("AlarmEventMiddleCount") && !rsp["AlarmEventMiddleCount"].IsNull())
    {
        if (!rsp["AlarmEventMiddleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventMiddleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEventMiddleCount = rsp["AlarmEventMiddleCount"].GetUint64();
        m_alarmEventMiddleCountHasBeenSet = true;
    }

    if (rsp.HasMember("AlarmEventLowCount") && !rsp["AlarmEventLowCount"].IsNull())
    {
        if (!rsp["AlarmEventLowCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmEventLowCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEventLowCount = rsp["AlarmEventLowCount"].GetUint64();
        m_alarmEventLowCountHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("NodeInternalIP") && !rsp["NodeInternalIP"].IsNull())
    {
        if (!rsp["NodeInternalIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInternalIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeInternalIP = string(rsp["NodeInternalIP"].GetString());
        m_nodeInternalIPHasBeenSet = true;
    }

    if (rsp.HasMember("NodeExternalIP") && !rsp["NodeExternalIP"].IsNull())
    {
        if (!rsp["NodeExternalIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeExternalIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeExternalIP = string(rsp["NodeExternalIP"].GetString());
        m_nodeExternalIPHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerCount") && !rsp["ContainerCount"].IsNull())
    {
        if (!rsp["ContainerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCount = rsp["ContainerCount"].GetUint64();
        m_containerCountHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceCount") && !rsp["ServiceCount"].IsNull())
    {
        if (!rsp["ServiceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceCount = rsp["ServiceCount"].GetUint64();
        m_serviceCountHasBeenSet = true;
    }

    if (rsp.HasMember("RegionName") && !rsp["RegionName"].IsNull())
    {
        if (!rsp["RegionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(rsp["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (rsp.HasMember("RegionNameEn") && !rsp["RegionNameEn"].IsNull())
    {
        if (!rsp["RegionNameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegionNameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionNameEn = string(rsp["RegionNameEn"].GetString());
        m_regionNameEnHasBeenSet = true;
    }

    if (rsp.HasMember("AlarmCount") && !rsp["AlarmCount"].IsNull())
    {
        if (!rsp["AlarmCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCount = rsp["AlarmCount"].GetUint64();
        m_alarmCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeClusterPodDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_uniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_runStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_startupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startupTime, allocator);
    }

    if (m_restartCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartCount, allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterRunStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterRunStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterRunStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeId.c_str(), allocator).Move(), allocator);
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

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeInternalIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeInternalIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeInternalIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeExternalIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeExternalIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeExternalIP.c_str(), allocator).Move(), allocator);
    }

    if (m_containerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCount, allocator);
    }

    if (m_serviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceCount, allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionNameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionNameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmCount, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeClusterPodDetailResponse::GetUniqueID() const
{
    return m_uniqueID;
}

bool DescribeClusterPodDetailResponse::UniqueIDHasBeenSet() const
{
    return m_uniqueIDHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetAppID() const
{
    return m_appID;
}

bool DescribeClusterPodDetailResponse::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetPodName() const
{
    return m_podName;
}

bool DescribeClusterPodDetailResponse::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetPodIP() const
{
    return m_podIP;
}

bool DescribeClusterPodDetailResponse::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetRunStatus() const
{
    return m_runStatus;
}

bool DescribeClusterPodDetailResponse::RunStatusHasBeenSet() const
{
    return m_runStatusHasBeenSet;
}

vector<AssetTag> DescribeClusterPodDetailResponse::GetLabels() const
{
    return m_labels;
}

bool DescribeClusterPodDetailResponse::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeClusterPodDetailResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetStartupTime() const
{
    return m_startupTime;
}

bool DescribeClusterPodDetailResponse::StartupTimeHasBeenSet() const
{
    return m_startupTimeHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetRestartCount() const
{
    return m_restartCount;
}

bool DescribeClusterPodDetailResponse::RestartCountHasBeenSet() const
{
    return m_restartCountHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetClusterName() const
{
    return m_clusterName;
}

bool DescribeClusterPodDetailResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetClusterID() const
{
    return m_clusterID;
}

bool DescribeClusterPodDetailResponse::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetClusterType() const
{
    return m_clusterType;
}

bool DescribeClusterPodDetailResponse::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetClusterRunStatus() const
{
    return m_clusterRunStatus;
}

bool DescribeClusterPodDetailResponse::ClusterRunStatusHasBeenSet() const
{
    return m_clusterRunStatusHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetNamespace() const
{
    return m_namespace;
}

bool DescribeClusterPodDetailResponse::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetNodeName() const
{
    return m_nodeName;
}

bool DescribeClusterPodDetailResponse::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetNodeId() const
{
    return m_nodeId;
}

bool DescribeClusterPodDetailResponse::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetWorkloadName() const
{
    return m_workloadName;
}

bool DescribeClusterPodDetailResponse::WorkloadNameHasBeenSet() const
{
    return m_workloadNameHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetWorkloadType() const
{
    return m_workloadType;
}

bool DescribeClusterPodDetailResponse::WorkloadTypeHasBeenSet() const
{
    return m_workloadTypeHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetRiskEventCriticalCount() const
{
    return m_riskEventCriticalCount;
}

bool DescribeClusterPodDetailResponse::RiskEventCriticalCountHasBeenSet() const
{
    return m_riskEventCriticalCountHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetRiskEventHighCount() const
{
    return m_riskEventHighCount;
}

bool DescribeClusterPodDetailResponse::RiskEventHighCountHasBeenSet() const
{
    return m_riskEventHighCountHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetRiskEventMiddleCount() const
{
    return m_riskEventMiddleCount;
}

bool DescribeClusterPodDetailResponse::RiskEventMiddleCountHasBeenSet() const
{
    return m_riskEventMiddleCountHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetRiskEventLowCount() const
{
    return m_riskEventLowCount;
}

bool DescribeClusterPodDetailResponse::RiskEventLowCountHasBeenSet() const
{
    return m_riskEventLowCountHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetAlarmEventCriticalCount() const
{
    return m_alarmEventCriticalCount;
}

bool DescribeClusterPodDetailResponse::AlarmEventCriticalCountHasBeenSet() const
{
    return m_alarmEventCriticalCountHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetAlarmEventHighCount() const
{
    return m_alarmEventHighCount;
}

bool DescribeClusterPodDetailResponse::AlarmEventHighCountHasBeenSet() const
{
    return m_alarmEventHighCountHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetAlarmEventMiddleCount() const
{
    return m_alarmEventMiddleCount;
}

bool DescribeClusterPodDetailResponse::AlarmEventMiddleCountHasBeenSet() const
{
    return m_alarmEventMiddleCountHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetAlarmEventLowCount() const
{
    return m_alarmEventLowCount;
}

bool DescribeClusterPodDetailResponse::AlarmEventLowCountHasBeenSet() const
{
    return m_alarmEventLowCountHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeClusterPodDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetNodeInternalIP() const
{
    return m_nodeInternalIP;
}

bool DescribeClusterPodDetailResponse::NodeInternalIPHasBeenSet() const
{
    return m_nodeInternalIPHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetNodeExternalIP() const
{
    return m_nodeExternalIP;
}

bool DescribeClusterPodDetailResponse::NodeExternalIPHasBeenSet() const
{
    return m_nodeExternalIPHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetContainerCount() const
{
    return m_containerCount;
}

bool DescribeClusterPodDetailResponse::ContainerCountHasBeenSet() const
{
    return m_containerCountHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetServiceCount() const
{
    return m_serviceCount;
}

bool DescribeClusterPodDetailResponse::ServiceCountHasBeenSet() const
{
    return m_serviceCountHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetRegionName() const
{
    return m_regionName;
}

bool DescribeClusterPodDetailResponse::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

string DescribeClusterPodDetailResponse::GetRegionNameEn() const
{
    return m_regionNameEn;
}

bool DescribeClusterPodDetailResponse::RegionNameEnHasBeenSet() const
{
    return m_regionNameEnHasBeenSet;
}

uint64_t DescribeClusterPodDetailResponse::GetAlarmCount() const
{
    return m_alarmCount;
}

bool DescribeClusterPodDetailResponse::AlarmCountHasBeenSet() const
{
    return m_alarmCountHasBeenSet;
}


