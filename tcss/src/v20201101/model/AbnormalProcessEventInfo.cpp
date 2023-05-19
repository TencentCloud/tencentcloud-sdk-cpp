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

#include <tencentcloud/tcss/v20201101/model/AbnormalProcessEventInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AbnormalProcessEventInfo::AbnormalProcessEventInfo() :
    m_processPathHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_matchRuleNameHasBeenSet(false),
    m_foundTimeHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_behaviorHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_matchRuleIdHasBeenSet(false),
    m_matchActionHasBeenSet(false),
    m_matchProcessPathHasBeenSet(false),
    m_ruleExistHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_latestFoundTimeHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_matchGroupNameHasBeenSet(false),
    m_matchRuleLevelHasBeenSet(false),
    m_containerNetStatusHasBeenSet(false),
    m_containerNetSubStatusHasBeenSet(false),
    m_containerIsolateOperationSrcHasBeenSet(false),
    m_containerStatusHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_hostIDHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_clusterNameHasBeenSet(false)
{
}

CoreInternalOutcome AbnormalProcessEventInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProcessPath") && !value["ProcessPath"].IsNull())
    {
        if (!value["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(value["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("MatchRuleName") && !value["MatchRuleName"].IsNull())
    {
        if (!value["MatchRuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.MatchRuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchRuleName = string(value["MatchRuleName"].GetString());
        m_matchRuleNameHasBeenSet = true;
    }

    if (value.HasMember("FoundTime") && !value["FoundTime"].IsNull())
    {
        if (!value["FoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.FoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_foundTime = string(value["FoundTime"].GetString());
        m_foundTimeHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("Behavior") && !value["Behavior"].IsNull())
    {
        if (!value["Behavior"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.Behavior` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_behavior = string(value["Behavior"].GetString());
        m_behaviorHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("Solution") && !value["Solution"].IsNull())
    {
        if (!value["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(value["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("MatchRuleId") && !value["MatchRuleId"].IsNull())
    {
        if (!value["MatchRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.MatchRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchRuleId = string(value["MatchRuleId"].GetString());
        m_matchRuleIdHasBeenSet = true;
    }

    if (value.HasMember("MatchAction") && !value["MatchAction"].IsNull())
    {
        if (!value["MatchAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.MatchAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchAction = string(value["MatchAction"].GetString());
        m_matchActionHasBeenSet = true;
    }

    if (value.HasMember("MatchProcessPath") && !value["MatchProcessPath"].IsNull())
    {
        if (!value["MatchProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.MatchProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchProcessPath = string(value["MatchProcessPath"].GetString());
        m_matchProcessPathHasBeenSet = true;
    }

    if (value.HasMember("RuleExist") && !value["RuleExist"].IsNull())
    {
        if (!value["RuleExist"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.RuleExist` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ruleExist = value["RuleExist"].GetBool();
        m_ruleExistHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("LatestFoundTime") && !value["LatestFoundTime"].IsNull())
    {
        if (!value["LatestFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.LatestFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFoundTime = string(value["LatestFoundTime"].GetString());
        m_latestFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("MatchGroupName") && !value["MatchGroupName"].IsNull())
    {
        if (!value["MatchGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.MatchGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchGroupName = string(value["MatchGroupName"].GetString());
        m_matchGroupNameHasBeenSet = true;
    }

    if (value.HasMember("MatchRuleLevel") && !value["MatchRuleLevel"].IsNull())
    {
        if (!value["MatchRuleLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.MatchRuleLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchRuleLevel = string(value["MatchRuleLevel"].GetString());
        m_matchRuleLevelHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetStatus") && !value["ContainerNetStatus"].IsNull())
    {
        if (!value["ContainerNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.ContainerNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetStatus = string(value["ContainerNetStatus"].GetString());
        m_containerNetStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerNetSubStatus") && !value["ContainerNetSubStatus"].IsNull())
    {
        if (!value["ContainerNetSubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.ContainerNetSubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetSubStatus = string(value["ContainerNetSubStatus"].GetString());
        m_containerNetSubStatusHasBeenSet = true;
    }

    if (value.HasMember("ContainerIsolateOperationSrc") && !value["ContainerIsolateOperationSrc"].IsNull())
    {
        if (!value["ContainerIsolateOperationSrc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.ContainerIsolateOperationSrc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerIsolateOperationSrc = string(value["ContainerIsolateOperationSrc"].GetString());
        m_containerIsolateOperationSrcHasBeenSet = true;
    }

    if (value.HasMember("ContainerStatus") && !value["ContainerStatus"].IsNull())
    {
        if (!value["ContainerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.ContainerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerStatus = string(value["ContainerStatus"].GetString());
        m_containerStatusHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeID") && !value["NodeID"].IsNull())
    {
        if (!value["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(value["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (value.HasMember("HostID") && !value["HostID"].IsNull())
    {
        if (!value["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(value["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (value.HasMember("HostIP") && !value["HostIP"].IsNull())
    {
        if (!value["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(value["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AbnormalProcessEventInfo.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AbnormalProcessEventInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPath.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
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

    if (m_matchGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_matchRuleLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRuleLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchRuleLevel.c_str(), allocator).Move(), allocator);
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

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
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

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
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


string AbnormalProcessEventInfo::GetProcessPath() const
{
    return m_processPath;
}

void AbnormalProcessEventInfo::SetProcessPath(const string& _processPath)
{
    m_processPath = _processPath;
    m_processPathHasBeenSet = true;
}

bool AbnormalProcessEventInfo::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

string AbnormalProcessEventInfo::GetEventType() const
{
    return m_eventType;
}

void AbnormalProcessEventInfo::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool AbnormalProcessEventInfo::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string AbnormalProcessEventInfo::GetMatchRuleName() const
{
    return m_matchRuleName;
}

void AbnormalProcessEventInfo::SetMatchRuleName(const string& _matchRuleName)
{
    m_matchRuleName = _matchRuleName;
    m_matchRuleNameHasBeenSet = true;
}

bool AbnormalProcessEventInfo::MatchRuleNameHasBeenSet() const
{
    return m_matchRuleNameHasBeenSet;
}

string AbnormalProcessEventInfo::GetFoundTime() const
{
    return m_foundTime;
}

void AbnormalProcessEventInfo::SetFoundTime(const string& _foundTime)
{
    m_foundTime = _foundTime;
    m_foundTimeHasBeenSet = true;
}

bool AbnormalProcessEventInfo::FoundTimeHasBeenSet() const
{
    return m_foundTimeHasBeenSet;
}

string AbnormalProcessEventInfo::GetContainerName() const
{
    return m_containerName;
}

void AbnormalProcessEventInfo::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool AbnormalProcessEventInfo::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string AbnormalProcessEventInfo::GetImageName() const
{
    return m_imageName;
}

void AbnormalProcessEventInfo::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool AbnormalProcessEventInfo::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string AbnormalProcessEventInfo::GetBehavior() const
{
    return m_behavior;
}

void AbnormalProcessEventInfo::SetBehavior(const string& _behavior)
{
    m_behavior = _behavior;
    m_behaviorHasBeenSet = true;
}

bool AbnormalProcessEventInfo::BehaviorHasBeenSet() const
{
    return m_behaviorHasBeenSet;
}

string AbnormalProcessEventInfo::GetStatus() const
{
    return m_status;
}

void AbnormalProcessEventInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AbnormalProcessEventInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AbnormalProcessEventInfo::GetId() const
{
    return m_id;
}

void AbnormalProcessEventInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AbnormalProcessEventInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AbnormalProcessEventInfo::GetImageId() const
{
    return m_imageId;
}

void AbnormalProcessEventInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool AbnormalProcessEventInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string AbnormalProcessEventInfo::GetContainerId() const
{
    return m_containerId;
}

void AbnormalProcessEventInfo::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool AbnormalProcessEventInfo::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string AbnormalProcessEventInfo::GetSolution() const
{
    return m_solution;
}

void AbnormalProcessEventInfo::SetSolution(const string& _solution)
{
    m_solution = _solution;
    m_solutionHasBeenSet = true;
}

bool AbnormalProcessEventInfo::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string AbnormalProcessEventInfo::GetDescription() const
{
    return m_description;
}

void AbnormalProcessEventInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AbnormalProcessEventInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AbnormalProcessEventInfo::GetMatchRuleId() const
{
    return m_matchRuleId;
}

void AbnormalProcessEventInfo::SetMatchRuleId(const string& _matchRuleId)
{
    m_matchRuleId = _matchRuleId;
    m_matchRuleIdHasBeenSet = true;
}

bool AbnormalProcessEventInfo::MatchRuleIdHasBeenSet() const
{
    return m_matchRuleIdHasBeenSet;
}

string AbnormalProcessEventInfo::GetMatchAction() const
{
    return m_matchAction;
}

void AbnormalProcessEventInfo::SetMatchAction(const string& _matchAction)
{
    m_matchAction = _matchAction;
    m_matchActionHasBeenSet = true;
}

bool AbnormalProcessEventInfo::MatchActionHasBeenSet() const
{
    return m_matchActionHasBeenSet;
}

string AbnormalProcessEventInfo::GetMatchProcessPath() const
{
    return m_matchProcessPath;
}

void AbnormalProcessEventInfo::SetMatchProcessPath(const string& _matchProcessPath)
{
    m_matchProcessPath = _matchProcessPath;
    m_matchProcessPathHasBeenSet = true;
}

bool AbnormalProcessEventInfo::MatchProcessPathHasBeenSet() const
{
    return m_matchProcessPathHasBeenSet;
}

bool AbnormalProcessEventInfo::GetRuleExist() const
{
    return m_ruleExist;
}

void AbnormalProcessEventInfo::SetRuleExist(const bool& _ruleExist)
{
    m_ruleExist = _ruleExist;
    m_ruleExistHasBeenSet = true;
}

bool AbnormalProcessEventInfo::RuleExistHasBeenSet() const
{
    return m_ruleExistHasBeenSet;
}

int64_t AbnormalProcessEventInfo::GetEventCount() const
{
    return m_eventCount;
}

void AbnormalProcessEventInfo::SetEventCount(const int64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool AbnormalProcessEventInfo::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

string AbnormalProcessEventInfo::GetLatestFoundTime() const
{
    return m_latestFoundTime;
}

void AbnormalProcessEventInfo::SetLatestFoundTime(const string& _latestFoundTime)
{
    m_latestFoundTime = _latestFoundTime;
    m_latestFoundTimeHasBeenSet = true;
}

bool AbnormalProcessEventInfo::LatestFoundTimeHasBeenSet() const
{
    return m_latestFoundTimeHasBeenSet;
}

string AbnormalProcessEventInfo::GetRuleId() const
{
    return m_ruleId;
}

void AbnormalProcessEventInfo::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool AbnormalProcessEventInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string AbnormalProcessEventInfo::GetMatchGroupName() const
{
    return m_matchGroupName;
}

void AbnormalProcessEventInfo::SetMatchGroupName(const string& _matchGroupName)
{
    m_matchGroupName = _matchGroupName;
    m_matchGroupNameHasBeenSet = true;
}

bool AbnormalProcessEventInfo::MatchGroupNameHasBeenSet() const
{
    return m_matchGroupNameHasBeenSet;
}

string AbnormalProcessEventInfo::GetMatchRuleLevel() const
{
    return m_matchRuleLevel;
}

void AbnormalProcessEventInfo::SetMatchRuleLevel(const string& _matchRuleLevel)
{
    m_matchRuleLevel = _matchRuleLevel;
    m_matchRuleLevelHasBeenSet = true;
}

bool AbnormalProcessEventInfo::MatchRuleLevelHasBeenSet() const
{
    return m_matchRuleLevelHasBeenSet;
}

string AbnormalProcessEventInfo::GetContainerNetStatus() const
{
    return m_containerNetStatus;
}

void AbnormalProcessEventInfo::SetContainerNetStatus(const string& _containerNetStatus)
{
    m_containerNetStatus = _containerNetStatus;
    m_containerNetStatusHasBeenSet = true;
}

bool AbnormalProcessEventInfo::ContainerNetStatusHasBeenSet() const
{
    return m_containerNetStatusHasBeenSet;
}

string AbnormalProcessEventInfo::GetContainerNetSubStatus() const
{
    return m_containerNetSubStatus;
}

void AbnormalProcessEventInfo::SetContainerNetSubStatus(const string& _containerNetSubStatus)
{
    m_containerNetSubStatus = _containerNetSubStatus;
    m_containerNetSubStatusHasBeenSet = true;
}

bool AbnormalProcessEventInfo::ContainerNetSubStatusHasBeenSet() const
{
    return m_containerNetSubStatusHasBeenSet;
}

string AbnormalProcessEventInfo::GetContainerIsolateOperationSrc() const
{
    return m_containerIsolateOperationSrc;
}

void AbnormalProcessEventInfo::SetContainerIsolateOperationSrc(const string& _containerIsolateOperationSrc)
{
    m_containerIsolateOperationSrc = _containerIsolateOperationSrc;
    m_containerIsolateOperationSrcHasBeenSet = true;
}

bool AbnormalProcessEventInfo::ContainerIsolateOperationSrcHasBeenSet() const
{
    return m_containerIsolateOperationSrcHasBeenSet;
}

string AbnormalProcessEventInfo::GetContainerStatus() const
{
    return m_containerStatus;
}

void AbnormalProcessEventInfo::SetContainerStatus(const string& _containerStatus)
{
    m_containerStatus = _containerStatus;
    m_containerStatusHasBeenSet = true;
}

bool AbnormalProcessEventInfo::ContainerStatusHasBeenSet() const
{
    return m_containerStatusHasBeenSet;
}

string AbnormalProcessEventInfo::GetClusterID() const
{
    return m_clusterID;
}

void AbnormalProcessEventInfo::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool AbnormalProcessEventInfo::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string AbnormalProcessEventInfo::GetNodeType() const
{
    return m_nodeType;
}

void AbnormalProcessEventInfo::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool AbnormalProcessEventInfo::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string AbnormalProcessEventInfo::GetPodName() const
{
    return m_podName;
}

void AbnormalProcessEventInfo::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool AbnormalProcessEventInfo::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string AbnormalProcessEventInfo::GetPodIP() const
{
    return m_podIP;
}

void AbnormalProcessEventInfo::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool AbnormalProcessEventInfo::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string AbnormalProcessEventInfo::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void AbnormalProcessEventInfo::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool AbnormalProcessEventInfo::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string AbnormalProcessEventInfo::GetPublicIP() const
{
    return m_publicIP;
}

void AbnormalProcessEventInfo::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool AbnormalProcessEventInfo::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string AbnormalProcessEventInfo::GetNodeName() const
{
    return m_nodeName;
}

void AbnormalProcessEventInfo::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool AbnormalProcessEventInfo::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string AbnormalProcessEventInfo::GetNodeID() const
{
    return m_nodeID;
}

void AbnormalProcessEventInfo::SetNodeID(const string& _nodeID)
{
    m_nodeID = _nodeID;
    m_nodeIDHasBeenSet = true;
}

bool AbnormalProcessEventInfo::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string AbnormalProcessEventInfo::GetHostID() const
{
    return m_hostID;
}

void AbnormalProcessEventInfo::SetHostID(const string& _hostID)
{
    m_hostID = _hostID;
    m_hostIDHasBeenSet = true;
}

bool AbnormalProcessEventInfo::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string AbnormalProcessEventInfo::GetHostIP() const
{
    return m_hostIP;
}

void AbnormalProcessEventInfo::SetHostIP(const string& _hostIP)
{
    m_hostIP = _hostIP;
    m_hostIPHasBeenSet = true;
}

bool AbnormalProcessEventInfo::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string AbnormalProcessEventInfo::GetClusterName() const
{
    return m_clusterName;
}

void AbnormalProcessEventInfo::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool AbnormalProcessEventInfo::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

