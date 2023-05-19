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

#include <tencentcloud/tcss/v20201101/model/AccessControlEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AccessControlEventInfo::AccessControlEventInfo() :
    m_processNameHasBeenSet(false),
    m_matchRuleNameHasBeenSet(false),
    m_foundTimeHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_behaviorHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_matchRuleIdHasBeenSet(false),
    m_matchActionHasBeenSet(false),
    m_matchProcessPathHasBeenSet(false),
    m_matchFilePathHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_ruleExistHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_latestFoundTimeHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_containerNetStatusHasBeenSet(false),
    m_containerNetSubStatusHasBeenSet(false),
    m_containerIsolateOperationSrcHasBeenSet(false),
    m_containerStatusHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_hostIDHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

CoreInternalOutcome AccessControlEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("MatchRuleName") && !value["MatchRuleName"].IsNull())
    {
        if (!value["MatchRuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.MatchRuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchRuleName = string(value["MatchRuleName"].GetString());
        m_matchRuleNameHasBeenSet = true;
    }

    if (value.HasMember("FoundTime") && !value["FoundTime"].IsNull())
    {
        if (!value["FoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.FoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_foundTime = string(value["FoundTime"].GetString());
        m_foundTimeHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("Behavior") && !value["Behavior"].IsNull())
    {
        if (!value["Behavior"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.Behavior` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_behavior = string(value["Behavior"].GetString());
        m_behaviorHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("MatchRuleId") && !value["MatchRuleId"].IsNull())
    {
        if (!value["MatchRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.MatchRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchRuleId = string(value["MatchRuleId"].GetString());
        m_matchRuleIdHasBeenSet = true;
    }

    if (value.HasMember("MatchAction") && !value["MatchAction"].IsNull())
    {
        if (!value["MatchAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.MatchAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchAction = string(value["MatchAction"].GetString());
        m_matchActionHasBeenSet = true;
    }

    if (value.HasMember("MatchProcessPath") && !value["MatchProcessPath"].IsNull())
    {
        if (!value["MatchProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.MatchProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchProcessPath = string(value["MatchProcessPath"].GetString());
        m_matchProcessPathHasBeenSet = true;
    }

    if (value.HasMember("MatchFilePath") && !value["MatchFilePath"].IsNull())
    {
        if (!value["MatchFilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.MatchFilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchFilePath = string(value["MatchFilePath"].GetString());
        m_matchFilePathHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("RuleExist") && !value["RuleExist"].IsNull())
    {
        if (!value["RuleExist"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.RuleExist` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ruleExist = value["RuleExist"].GetBool();
        m_ruleExistHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("LatestFoundTime") && !value["LatestFoundTime"].IsNull())
    {
        if (!value["LatestFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.LatestFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFoundTime = string(value["LatestFoundTime"].GetString());
        m_latestFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetStatus") && !value["ContainerNetStatus"].IsNull())
    {
        if (!value["ContainerNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.ContainerNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetStatus = string(value["ContainerNetStatus"].GetString());
        m_containerNetStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetSubStatus") && !value["ContainerNetSubStatus"].IsNull())
    {
        if (!value["ContainerNetSubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.ContainerNetSubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetSubStatus = string(value["ContainerNetSubStatus"].GetString());
        m_containerNetSubStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerIsolateOperationSrc") && !value["ContainerIsolateOperationSrc"].IsNull())
    {
        if (!value["ContainerIsolateOperationSrc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.ContainerIsolateOperationSrc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerIsolateOperationSrc = string(value["ContainerIsolateOperationSrc"].GetString());
        m_containerIsolateOperationSrcHasBeenSet = true;
    }

    if (value.HasMember("ContainerStatus") && !value["ContainerStatus"].IsNull())
    {
        if (!value["ContainerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.ContainerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerStatus = string(value["ContainerStatus"].GetString());
        m_containerStatusHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("NodeID") && !value["NodeID"].IsNull())
    {
        if (!value["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(value["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (value.HasMember("HostID") && !value["HostID"].IsNull())
    {
        if (!value["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(value["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessControlEventInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessControlEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_matchRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchRuleName.c_str(), allocator).Move(), allocator);
    }

    if (m_foundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_foundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_behaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Behavior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_behavior.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_matchRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_matchActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchAction.c_str(), allocator).Move(), allocator);
    }

    if (m_matchProcessPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchProcessPath.c_str(), allocator).Move(), allocator);
    }

    if (m_matchFilePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchFilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchFilePath.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleExist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleExist, allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_latestFoundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFoundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerNetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerNetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNetSubStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerNetSubStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerNetSubStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIsolateOperationSrcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerIsolateOperationSrc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerIsolateOperationSrc.c_str(), allocator).Move(), allocator);
    }

    if (m_containerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
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

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeID.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostID.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

}


string AccessControlEventInfo::GetProcessName() const
{
    return m_processName;
}

void AccessControlEventInfo::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool AccessControlEventInfo::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string AccessControlEventInfo::GetMatchRuleName() const
{
    return m_matchRuleName;
}

void AccessControlEventInfo::SetMatchRuleName(const string& _matchRuleName)
{
    m_matchRuleName = _matchRuleName;
    m_matchRuleNameHasBeenSet = true;
}

bool AccessControlEventInfo::MatchRuleNameHasBeenSet() const
{
    return m_matchRuleNameHasBeenSet;
}

string AccessControlEventInfo::GetFoundTime() const
{
    return m_foundTime;
}

void AccessControlEventInfo::SetFoundTime(const string& _foundTime)
{
    m_foundTime = _foundTime;
    m_foundTimeHasBeenSet = true;
}

bool AccessControlEventInfo::FoundTimeHasBeenSet() const
{
    return m_foundTimeHasBeenSet;
}

string AccessControlEventInfo::GetContainerName() const
{
    return m_containerName;
}

void AccessControlEventInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool AccessControlEventInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string AccessControlEventInfo::GetImageName() const
{
    return m_imageName;
}

void AccessControlEventInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool AccessControlEventInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string AccessControlEventInfo::GetBehavior() const
{
    return m_behavior;
}

void AccessControlEventInfo::SetBehavior(const string& _behavior)
{
    m_behavior = _behavior;
    m_behaviorHasBeenSet = true;
}

bool AccessControlEventInfo::BehaviorHasBeenSet() const
{
    return m_behaviorHasBeenSet;
}

string AccessControlEventInfo::GetStatus() const
{
    return m_status;
}

void AccessControlEventInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AccessControlEventInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AccessControlEventInfo::GetId() const
{
    return m_id;
}

void AccessControlEventInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AccessControlEventInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AccessControlEventInfo::GetFileName() const
{
    return m_fileName;
}

void AccessControlEventInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool AccessControlEventInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string AccessControlEventInfo::GetEventType() const
{
    return m_eventType;
}

void AccessControlEventInfo::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool AccessControlEventInfo::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string AccessControlEventInfo::GetImageId() const
{
    return m_imageId;
}

void AccessControlEventInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool AccessControlEventInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string AccessControlEventInfo::GetContainerId() const
{
    return m_containerId;
}

void AccessControlEventInfo::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool AccessControlEventInfo::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string AccessControlEventInfo::GetSolution() const
{
    return m_solution;
}

void AccessControlEventInfo::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool AccessControlEventInfo::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string AccessControlEventInfo::GetDescription() const
{
    return m_description;
}

void AccessControlEventInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AccessControlEventInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AccessControlEventInfo::GetMatchRuleId() const
{
    return m_matchRuleId;
}

void AccessControlEventInfo::SetMatchRuleId(const string& _matchRuleId)
{
    m_matchRuleId = _matchRuleId;
    m_matchRuleIdHasBeenSet = true;
}

bool AccessControlEventInfo::MatchRuleIdHasBeenSet() const
{
    return m_matchRuleIdHasBeenSet;
}

string AccessControlEventInfo::GetMatchAction() const
{
    return m_matchAction;
}

void AccessControlEventInfo::SetMatchAction(const string& _matchAction)
{
    m_matchAction = _matchAction;
    m_matchActionHasBeenSet = true;
}

bool AccessControlEventInfo::MatchActionHasBeenSet() const
{
    return m_matchActionHasBeenSet;
}

string AccessControlEventInfo::GetMatchProcessPath() const
{
    return m_matchProcessPath;
}

void AccessControlEventInfo::SetMatchProcessPath(const string& _matchProcessPath)
{
    m_matchProcessPath = _matchProcessPath;
    m_matchProcessPathHasBeenSet = true;
}

bool AccessControlEventInfo::MatchProcessPathHasBeenSet() const
{
    return m_matchProcessPathHasBeenSet;
}

string AccessControlEventInfo::GetMatchFilePath() const
{
    return m_matchFilePath;
}

void AccessControlEventInfo::SetMatchFilePath(const string& _matchFilePath)
{
    m_matchFilePath = _matchFilePath;
    m_matchFilePathHasBeenSet = true;
}

bool AccessControlEventInfo::MatchFilePathHasBeenSet() const
{
    return m_matchFilePathHasBeenSet;
}

string AccessControlEventInfo::GetFilePath() const
{
    return m_filePath;
}

void AccessControlEventInfo::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool AccessControlEventInfo::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

bool AccessControlEventInfo::GetRuleExist() const
{
    return m_ruleExist;
}

void AccessControlEventInfo::SetRuleExist(const bool& _ruleExist)
{
    m_ruleExist = _ruleExist;
    m_ruleExistHasBeenSet = true;
}

bool AccessControlEventInfo::RuleExistHasBeenSet() const
{
    return m_ruleExistHasBeenSet;
}

int64_t AccessControlEventInfo::GetEventCount() const
{
    return m_eventCount;
}

void AccessControlEventInfo::SetEventCount(const int64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool AccessControlEventInfo::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

string AccessControlEventInfo::GetLatestFoundTime() const
{
    return m_latestFoundTime;
}

void AccessControlEventInfo::SetLatestFoundTime(const string& _latestFoundTime)
{
    m_latestFoundTime = _latestFoundTime;
    m_latestFoundTimeHasBeenSet = true;
}

bool AccessControlEventInfo::LatestFoundTimeHasBeenSet() const
{
    return m_latestFoundTimeHasBeenSet;
}

string AccessControlEventInfo::GetRuleId() const
{
    return m_ruleId;
}

void AccessControlEventInfo::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AccessControlEventInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string AccessControlEventInfo::GetContainerNetStatus() const
{
    return m_containerNetStatus;
}

void AccessControlEventInfo::SetContainerNetStatus(const string& _containerNetStatus)
{
    m_containerNetStatus = _containerNetStatus;
    m_containerNetStatusHasBeenSet = true;
}

bool AccessControlEventInfo::ContainerNetStatusHasBeenSet() const
{
    return m_containerNetStatusHasBeenSet;
}

string AccessControlEventInfo::GetContainerNetSubStatus() const
{
    return m_containerNetSubStatus;
}

void AccessControlEventInfo::SetContainerNetSubStatus(const string& _containerNetSubStatus)
{
    m_containerNetSubStatus = _containerNetSubStatus;
    m_containerNetSubStatusHasBeenSet = true;
}

bool AccessControlEventInfo::ContainerNetSubStatusHasBeenSet() const
{
    return m_containerNetSubStatusHasBeenSet;
}

string AccessControlEventInfo::GetContainerIsolateOperationSrc() const
{
    return m_containerIsolateOperationSrc;
}

void AccessControlEventInfo::SetContainerIsolateOperationSrc(const string& _containerIsolateOperationSrc)
{
    m_containerIsolateOperationSrc = _containerIsolateOperationSrc;
    m_containerIsolateOperationSrcHasBeenSet = true;
}

bool AccessControlEventInfo::ContainerIsolateOperationSrcHasBeenSet() const
{
    return m_containerIsolateOperationSrcHasBeenSet;
}

string AccessControlEventInfo::GetContainerStatus() const
{
    return m_containerStatus;
}

void AccessControlEventInfo::SetContainerStatus(const string& _containerStatus)
{
    m_containerStatus = _containerStatus;
    m_containerStatusHasBeenSet = true;
}

bool AccessControlEventInfo::ContainerStatusHasBeenSet() const
{
    return m_containerStatusHasBeenSet;
}

string AccessControlEventInfo::GetNodeName() const
{
    return m_nodeName;
}

void AccessControlEventInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool AccessControlEventInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string AccessControlEventInfo::GetPodName() const
{
    return m_podName;
}

void AccessControlEventInfo::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool AccessControlEventInfo::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string AccessControlEventInfo::GetPodIP() const
{
    return m_podIP;
}

void AccessControlEventInfo::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool AccessControlEventInfo::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string AccessControlEventInfo::GetNodeType() const
{
    return m_nodeType;
}

void AccessControlEventInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool AccessControlEventInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string AccessControlEventInfo::GetClusterID() const
{
    return m_clusterID;
}

void AccessControlEventInfo::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool AccessControlEventInfo::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string AccessControlEventInfo::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void AccessControlEventInfo::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool AccessControlEventInfo::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string AccessControlEventInfo::GetPublicIP() const
{
    return m_publicIP;
}

void AccessControlEventInfo::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool AccessControlEventInfo::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string AccessControlEventInfo::GetNodeID() const
{
    return m_nodeID;
}

void AccessControlEventInfo::SetNodeID(const string& _nodeID)
{
    m_nodeID = _nodeID;
    m_nodeIDHasBeenSet = true;
}

bool AccessControlEventInfo::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string AccessControlEventInfo::GetHostID() const
{
    return m_hostID;
}

void AccessControlEventInfo::SetHostID(const string& _hostID)
{
    m_hostID = _hostID;
    m_hostIDHasBeenSet = true;
}

bool AccessControlEventInfo::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string AccessControlEventInfo::GetHostIP() const
{
    return m_hostIP;
}

void AccessControlEventInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool AccessControlEventInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string AccessControlEventInfo::GetClusterName() const
{
    return m_clusterName;
}

void AccessControlEventInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool AccessControlEventInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

