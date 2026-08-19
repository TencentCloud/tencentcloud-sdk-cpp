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

#include <tencentcloud/csip/v20221121/model/ClusterContainerListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ClusterContainerListItem::ClusterContainerListItem() :
    m_appIDHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_runStatusHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_podUidHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_isolateStatusHasBeenSet(false),
    m_riskEventCriticalCountHasBeenSet(false),
    m_riskEventHighCountHasBeenSet(false),
    m_riskEventMiddleCountHasBeenSet(false),
    m_riskEventLowCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_alarmCountHasBeenSet(false)
{
}

CoreInternalOutcome ClusterContainerListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.AppID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetUint64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("RunStatus") && !value["RunStatus"].IsNull())
    {
        if (!value["RunStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.RunStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runStatus = string(value["RunStatus"].GetString());
        m_runStatusHasBeenSet = true;
    }

    if (value.HasMember("NodeId") && !value["NodeId"].IsNull())
    {
        if (!value["NodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.NodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeId = string(value["NodeId"].GetString());
        m_nodeIdHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("PodUid") && !value["PodUid"].IsNull())
    {
        if (!value["PodUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.PodUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podUid = string(value["PodUid"].GetString());
        m_podUidHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("IsolateStatus") && !value["IsolateStatus"].IsNull())
    {
        if (!value["IsolateStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.IsolateStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateStatus = string(value["IsolateStatus"].GetString());
        m_isolateStatusHasBeenSet = true;
    }

    if (value.HasMember("RiskEventCriticalCount") && !value["RiskEventCriticalCount"].IsNull())
    {
        if (!value["RiskEventCriticalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.RiskEventCriticalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventCriticalCount = value["RiskEventCriticalCount"].GetUint64();
        m_riskEventCriticalCountHasBeenSet = true;
    }

    if (value.HasMember("RiskEventHighCount") && !value["RiskEventHighCount"].IsNull())
    {
        if (!value["RiskEventHighCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.RiskEventHighCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventHighCount = value["RiskEventHighCount"].GetUint64();
        m_riskEventHighCountHasBeenSet = true;
    }

    if (value.HasMember("RiskEventMiddleCount") && !value["RiskEventMiddleCount"].IsNull())
    {
        if (!value["RiskEventMiddleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.RiskEventMiddleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventMiddleCount = value["RiskEventMiddleCount"].GetUint64();
        m_riskEventMiddleCountHasBeenSet = true;
    }

    if (value.HasMember("RiskEventLowCount") && !value["RiskEventLowCount"].IsNull())
    {
        if (!value["RiskEventLowCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.RiskEventLowCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_riskEventLowCount = value["RiskEventLowCount"].GetUint64();
        m_riskEventLowCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AlarmCount") && !value["AlarmCount"].IsNull())
    {
        if (!value["AlarmCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterContainerListItem.AlarmCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCount = value["AlarmCount"].GetUint64();
        m_alarmCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterContainerListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_runStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runStatus.c_str(), allocator).Move(), allocator);
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

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateStatus.c_str(), allocator).Move(), allocator);
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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmCount, allocator);
    }

}


uint64_t ClusterContainerListItem::GetAppID() const
{
    return m_appID;
}

void ClusterContainerListItem::SetAppID(const uint64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool ClusterContainerListItem::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string ClusterContainerListItem::GetAssetId() const
{
    return m_assetId;
}

void ClusterContainerListItem::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool ClusterContainerListItem::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string ClusterContainerListItem::GetContainerId() const
{
    return m_containerId;
}

void ClusterContainerListItem::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool ClusterContainerListItem::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string ClusterContainerListItem::GetContainerName() const
{
    return m_containerName;
}

void ClusterContainerListItem::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool ClusterContainerListItem::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string ClusterContainerListItem::GetRunStatus() const
{
    return m_runStatus;
}

void ClusterContainerListItem::SetRunStatus(const string& _runStatus)
{
    m_runStatus = _runStatus;
    m_runStatusHasBeenSet = true;
}

bool ClusterContainerListItem::RunStatusHasBeenSet() const
{
    return m_runStatusHasBeenSet;
}

string ClusterContainerListItem::GetNodeId() const
{
    return m_nodeId;
}

void ClusterContainerListItem::SetNodeId(const string& _nodeId)
{
    m_nodeId = _nodeId;
    m_nodeIdHasBeenSet = true;
}

bool ClusterContainerListItem::NodeIdHasBeenSet() const
{
    return m_nodeIdHasBeenSet;
}

string ClusterContainerListItem::GetNodeType() const
{
    return m_nodeType;
}

void ClusterContainerListItem::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ClusterContainerListItem::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string ClusterContainerListItem::GetPodUid() const
{
    return m_podUid;
}

void ClusterContainerListItem::SetPodUid(const string& _podUid)
{
    m_podUid = _podUid;
    m_podUidHasBeenSet = true;
}

bool ClusterContainerListItem::PodUidHasBeenSet() const
{
    return m_podUidHasBeenSet;
}

string ClusterContainerListItem::GetPodName() const
{
    return m_podName;
}

void ClusterContainerListItem::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool ClusterContainerListItem::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string ClusterContainerListItem::GetImageId() const
{
    return m_imageId;
}

void ClusterContainerListItem::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ClusterContainerListItem::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string ClusterContainerListItem::GetImageName() const
{
    return m_imageName;
}

void ClusterContainerListItem::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ClusterContainerListItem::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string ClusterContainerListItem::GetIsolateStatus() const
{
    return m_isolateStatus;
}

void ClusterContainerListItem::SetIsolateStatus(const string& _isolateStatus)
{
    m_isolateStatus = _isolateStatus;
    m_isolateStatusHasBeenSet = true;
}

bool ClusterContainerListItem::IsolateStatusHasBeenSet() const
{
    return m_isolateStatusHasBeenSet;
}

uint64_t ClusterContainerListItem::GetRiskEventCriticalCount() const
{
    return m_riskEventCriticalCount;
}

void ClusterContainerListItem::SetRiskEventCriticalCount(const uint64_t& _riskEventCriticalCount)
{
    m_riskEventCriticalCount = _riskEventCriticalCount;
    m_riskEventCriticalCountHasBeenSet = true;
}

bool ClusterContainerListItem::RiskEventCriticalCountHasBeenSet() const
{
    return m_riskEventCriticalCountHasBeenSet;
}

uint64_t ClusterContainerListItem::GetRiskEventHighCount() const
{
    return m_riskEventHighCount;
}

void ClusterContainerListItem::SetRiskEventHighCount(const uint64_t& _riskEventHighCount)
{
    m_riskEventHighCount = _riskEventHighCount;
    m_riskEventHighCountHasBeenSet = true;
}

bool ClusterContainerListItem::RiskEventHighCountHasBeenSet() const
{
    return m_riskEventHighCountHasBeenSet;
}

uint64_t ClusterContainerListItem::GetRiskEventMiddleCount() const
{
    return m_riskEventMiddleCount;
}

void ClusterContainerListItem::SetRiskEventMiddleCount(const uint64_t& _riskEventMiddleCount)
{
    m_riskEventMiddleCount = _riskEventMiddleCount;
    m_riskEventMiddleCountHasBeenSet = true;
}

bool ClusterContainerListItem::RiskEventMiddleCountHasBeenSet() const
{
    return m_riskEventMiddleCountHasBeenSet;
}

uint64_t ClusterContainerListItem::GetRiskEventLowCount() const
{
    return m_riskEventLowCount;
}

void ClusterContainerListItem::SetRiskEventLowCount(const uint64_t& _riskEventLowCount)
{
    m_riskEventLowCount = _riskEventLowCount;
    m_riskEventLowCountHasBeenSet = true;
}

bool ClusterContainerListItem::RiskEventLowCountHasBeenSet() const
{
    return m_riskEventLowCountHasBeenSet;
}

string ClusterContainerListItem::GetCreateTime() const
{
    return m_createTime;
}

void ClusterContainerListItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClusterContainerListItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ClusterContainerListItem::GetAlarmCount() const
{
    return m_alarmCount;
}

void ClusterContainerListItem::SetAlarmCount(const uint64_t& _alarmCount)
{
    m_alarmCount = _alarmCount;
    m_alarmCountHasBeenSet = true;
}

bool ClusterContainerListItem::AlarmCountHasBeenSet() const
{
    return m_alarmCountHasBeenSet;
}

