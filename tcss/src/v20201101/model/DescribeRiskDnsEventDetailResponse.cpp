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

#include <tencentcloud/tcss/v20201101/model/DescribeRiskDnsEventDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeRiskDnsEventDetailResponse::DescribeRiskDnsEventDetailResponse() :
    m_eventIDHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_foundTimeHasBeenSet(false),
    m_latestFoundTimeHasBeenSet(false),
    m_containerIDHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_containerNetStatusHasBeenSet(false),
    m_containerStatusHasBeenSet(false),
    m_containerNetSubStatusHasBeenSet(false),
    m_containerIsolateOperationSrcHasBeenSet(false),
    m_imageIDHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_hostIPHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_matchRuleTypeHasBeenSet(false),
    m_featureLabelHasBeenSet(false),
    m_processAuthorityHasBeenSet(false),
    m_processMd5HasBeenSet(false),
    m_processStartUserHasBeenSet(false),
    m_processUserGroupHasBeenSet(false),
    m_processPathHasBeenSet(false),
    m_processTreeHasBeenSet(false),
    m_processParamHasBeenSet(false),
    m_parentProcessStartUserHasBeenSet(false),
    m_parentProcessUserGroupHasBeenSet(false),
    m_parentProcessPathHasBeenSet(false),
    m_parentProcessParamHasBeenSet(false),
    m_ancestorProcessStartUserHasBeenSet(false),
    m_ancestorProcessUserGroupHasBeenSet(false),
    m_ancestorProcessPathHasBeenSet(false),
    m_ancestorProcessParamHasBeenSet(false),
    m_hostIDHasBeenSet(false),
    m_eventStatusHasBeenSet(false),
    m_operationTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeSubNetIDHasBeenSet(false),
    m_nodeSubNetNameHasBeenSet(false),
    m_nodeSubNetCIDRHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_podStatusHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_workloadTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRiskDnsEventDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EventID") && !rsp["EventID"].IsNull())
    {
        if (!rsp["EventID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventID = rsp["EventID"].GetUint64();
        m_eventIDHasBeenSet = true;
    }

    if (rsp.HasMember("EventType") && !rsp["EventType"].IsNull())
    {
        if (!rsp["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(rsp["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (rsp.HasMember("EventCount") && !rsp["EventCount"].IsNull())
    {
        if (!rsp["EventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = rsp["EventCount"].GetUint64();
        m_eventCountHasBeenSet = true;
    }

    if (rsp.HasMember("FoundTime") && !rsp["FoundTime"].IsNull())
    {
        if (!rsp["FoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_foundTime = string(rsp["FoundTime"].GetString());
        m_foundTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LatestFoundTime") && !rsp["LatestFoundTime"].IsNull())
    {
        if (!rsp["LatestFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFoundTime = string(rsp["LatestFoundTime"].GetString());
        m_latestFoundTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerID") && !rsp["ContainerID"].IsNull())
    {
        if (!rsp["ContainerID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerID = string(rsp["ContainerID"].GetString());
        m_containerIDHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerName") && !rsp["ContainerName"].IsNull())
    {
        if (!rsp["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(rsp["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerNetStatus") && !rsp["ContainerNetStatus"].IsNull())
    {
        if (!rsp["ContainerNetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerNetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetStatus = string(rsp["ContainerNetStatus"].GetString());
        m_containerNetStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerStatus") && !rsp["ContainerStatus"].IsNull())
    {
        if (!rsp["ContainerStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerStatus = string(rsp["ContainerStatus"].GetString());
        m_containerStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerNetSubStatus") && !rsp["ContainerNetSubStatus"].IsNull())
    {
        if (!rsp["ContainerNetSubStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerNetSubStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerNetSubStatus = string(rsp["ContainerNetSubStatus"].GetString());
        m_containerNetSubStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ContainerIsolateOperationSrc") && !rsp["ContainerIsolateOperationSrc"].IsNull())
    {
        if (!rsp["ContainerIsolateOperationSrc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerIsolateOperationSrc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerIsolateOperationSrc = string(rsp["ContainerIsolateOperationSrc"].GetString());
        m_containerIsolateOperationSrcHasBeenSet = true;
    }

    if (rsp.HasMember("ImageID") && !rsp["ImageID"].IsNull())
    {
        if (!rsp["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(rsp["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (rsp.HasMember("ImageName") && !rsp["ImageName"].IsNull())
    {
        if (!rsp["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(rsp["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (rsp.HasMember("HostName") && !rsp["HostName"].IsNull())
    {
        if (!rsp["HostName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostName = string(rsp["HostName"].GetString());
        m_hostNameHasBeenSet = true;
    }

    if (rsp.HasMember("HostIP") && !rsp["HostIP"].IsNull())
    {
        if (!rsp["HostIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIP = string(rsp["HostIP"].GetString());
        m_hostIPHasBeenSet = true;
    }

    if (rsp.HasMember("PublicIP") && !rsp["PublicIP"].IsNull())
    {
        if (!rsp["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(rsp["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
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

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("Solution") && !rsp["Solution"].IsNull())
    {
        if (!rsp["Solution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Solution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_solution = string(rsp["Solution"].GetString());
        m_solutionHasBeenSet = true;
    }

    if (rsp.HasMember("Reference") && !rsp["Reference"].IsNull())
    {
        if (!rsp["Reference"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Reference` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Reference"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reference.push_back((*itr).GetString());
        }
        m_referenceHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("City") && !rsp["City"].IsNull())
    {
        if (!rsp["City"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `City` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_city = string(rsp["City"].GetString());
        m_cityHasBeenSet = true;
    }

    if (rsp.HasMember("MatchRuleType") && !rsp["MatchRuleType"].IsNull())
    {
        if (!rsp["MatchRuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MatchRuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchRuleType = string(rsp["MatchRuleType"].GetString());
        m_matchRuleTypeHasBeenSet = true;
    }

    if (rsp.HasMember("FeatureLabel") && !rsp["FeatureLabel"].IsNull())
    {
        if (!rsp["FeatureLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FeatureLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_featureLabel = string(rsp["FeatureLabel"].GetString());
        m_featureLabelHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessAuthority") && !rsp["ProcessAuthority"].IsNull())
    {
        if (!rsp["ProcessAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processAuthority = string(rsp["ProcessAuthority"].GetString());
        m_processAuthorityHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessMd5") && !rsp["ProcessMd5"].IsNull())
    {
        if (!rsp["ProcessMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processMd5 = string(rsp["ProcessMd5"].GetString());
        m_processMd5HasBeenSet = true;
    }

    if (rsp.HasMember("ProcessStartUser") && !rsp["ProcessStartUser"].IsNull())
    {
        if (!rsp["ProcessStartUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessStartUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processStartUser = string(rsp["ProcessStartUser"].GetString());
        m_processStartUserHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessUserGroup") && !rsp["ProcessUserGroup"].IsNull())
    {
        if (!rsp["ProcessUserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessUserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processUserGroup = string(rsp["ProcessUserGroup"].GetString());
        m_processUserGroupHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessPath") && !rsp["ProcessPath"].IsNull())
    {
        if (!rsp["ProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processPath = string(rsp["ProcessPath"].GetString());
        m_processPathHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessTree") && !rsp["ProcessTree"].IsNull())
    {
        if (!rsp["ProcessTree"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessTree` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processTree = string(rsp["ProcessTree"].GetString());
        m_processTreeHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessParam") && !rsp["ProcessParam"].IsNull())
    {
        if (!rsp["ProcessParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processParam = string(rsp["ProcessParam"].GetString());
        m_processParamHasBeenSet = true;
    }

    if (rsp.HasMember("ParentProcessStartUser") && !rsp["ParentProcessStartUser"].IsNull())
    {
        if (!rsp["ParentProcessStartUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentProcessStartUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcessStartUser = string(rsp["ParentProcessStartUser"].GetString());
        m_parentProcessStartUserHasBeenSet = true;
    }

    if (rsp.HasMember("ParentProcessUserGroup") && !rsp["ParentProcessUserGroup"].IsNull())
    {
        if (!rsp["ParentProcessUserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentProcessUserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcessUserGroup = string(rsp["ParentProcessUserGroup"].GetString());
        m_parentProcessUserGroupHasBeenSet = true;
    }

    if (rsp.HasMember("ParentProcessPath") && !rsp["ParentProcessPath"].IsNull())
    {
        if (!rsp["ParentProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcessPath = string(rsp["ParentProcessPath"].GetString());
        m_parentProcessPathHasBeenSet = true;
    }

    if (rsp.HasMember("ParentProcessParam") && !rsp["ParentProcessParam"].IsNull())
    {
        if (!rsp["ParentProcessParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParentProcessParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentProcessParam = string(rsp["ParentProcessParam"].GetString());
        m_parentProcessParamHasBeenSet = true;
    }

    if (rsp.HasMember("AncestorProcessStartUser") && !rsp["AncestorProcessStartUser"].IsNull())
    {
        if (!rsp["AncestorProcessStartUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AncestorProcessStartUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ancestorProcessStartUser = string(rsp["AncestorProcessStartUser"].GetString());
        m_ancestorProcessStartUserHasBeenSet = true;
    }

    if (rsp.HasMember("AncestorProcessUserGroup") && !rsp["AncestorProcessUserGroup"].IsNull())
    {
        if (!rsp["AncestorProcessUserGroup"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AncestorProcessUserGroup` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ancestorProcessUserGroup = string(rsp["AncestorProcessUserGroup"].GetString());
        m_ancestorProcessUserGroupHasBeenSet = true;
    }

    if (rsp.HasMember("AncestorProcessPath") && !rsp["AncestorProcessPath"].IsNull())
    {
        if (!rsp["AncestorProcessPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AncestorProcessPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ancestorProcessPath = string(rsp["AncestorProcessPath"].GetString());
        m_ancestorProcessPathHasBeenSet = true;
    }

    if (rsp.HasMember("AncestorProcessParam") && !rsp["AncestorProcessParam"].IsNull())
    {
        if (!rsp["AncestorProcessParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AncestorProcessParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ancestorProcessParam = string(rsp["AncestorProcessParam"].GetString());
        m_ancestorProcessParamHasBeenSet = true;
    }

    if (rsp.HasMember("HostID") && !rsp["HostID"].IsNull())
    {
        if (!rsp["HostID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostID = string(rsp["HostID"].GetString());
        m_hostIDHasBeenSet = true;
    }

    if (rsp.HasMember("EventStatus") && !rsp["EventStatus"].IsNull())
    {
        if (!rsp["EventStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventStatus = string(rsp["EventStatus"].GetString());
        m_eventStatusHasBeenSet = true;
    }

    if (rsp.HasMember("OperationTime") && !rsp["OperationTime"].IsNull())
    {
        if (!rsp["OperationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationTime = string(rsp["OperationTime"].GetString());
        m_operationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("NodeType") && !rsp["NodeType"].IsNull())
    {
        if (!rsp["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(rsp["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
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

    if (rsp.HasMember("NodeSubNetID") && !rsp["NodeSubNetID"].IsNull())
    {
        if (!rsp["NodeSubNetID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSubNetID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetID = string(rsp["NodeSubNetID"].GetString());
        m_nodeSubNetIDHasBeenSet = true;
    }

    if (rsp.HasMember("NodeSubNetName") && !rsp["NodeSubNetName"].IsNull())
    {
        if (!rsp["NodeSubNetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSubNetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetName = string(rsp["NodeSubNetName"].GetString());
        m_nodeSubNetNameHasBeenSet = true;
    }

    if (rsp.HasMember("NodeSubNetCIDR") && !rsp["NodeSubNetCIDR"].IsNull())
    {
        if (!rsp["NodeSubNetCIDR"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeSubNetCIDR` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeSubNetCIDR = string(rsp["NodeSubNetCIDR"].GetString());
        m_nodeSubNetCIDRHasBeenSet = true;
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

    if (rsp.HasMember("PodIP") && !rsp["PodIP"].IsNull())
    {
        if (!rsp["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(rsp["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (rsp.HasMember("PodStatus") && !rsp["PodStatus"].IsNull())
    {
        if (!rsp["PodStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podStatus = string(rsp["PodStatus"].GetString());
        m_podStatusHasBeenSet = true;
    }

    if (rsp.HasMember("NodeUniqueID") && !rsp["NodeUniqueID"].IsNull())
    {
        if (!rsp["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(rsp["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }

    if (rsp.HasMember("NodeID") && !rsp["NodeID"].IsNull())
    {
        if (!rsp["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(rsp["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
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

    if (rsp.HasMember("Namespace") && !rsp["Namespace"].IsNull())
    {
        if (!rsp["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(rsp["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
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


    return CoreInternalOutcome(true);
}

string DescribeRiskDnsEventDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_eventIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventID, allocator);
    }

    if (m_eventTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_foundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_foundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestFoundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFoundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerID.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_containerNetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerNetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerNetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_containerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerStatus.c_str(), allocator).Move(), allocator);
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

    if (m_imageIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageID.c_str(), allocator).Move(), allocator);
    }

    if (m_imageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIP.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reference.begin(); itr != m_reference.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_cityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "City";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_city.c_str(), allocator).Move(), allocator);
    }

    if (m_matchRuleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchRuleType.c_str(), allocator).Move(), allocator);
    }

    if (m_featureLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_featureLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_processAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_processMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_processStartUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessStartUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processStartUser.c_str(), allocator).Move(), allocator);
    }

    if (m_processUserGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessUserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processUserGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_processPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processPath.c_str(), allocator).Move(), allocator);
    }

    if (m_processTreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessTree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processTree.c_str(), allocator).Move(), allocator);
    }

    if (m_processParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processParam.c_str(), allocator).Move(), allocator);
    }

    if (m_parentProcessStartUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcessStartUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentProcessStartUser.c_str(), allocator).Move(), allocator);
    }

    if (m_parentProcessUserGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcessUserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentProcessUserGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_parentProcessPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentProcessPath.c_str(), allocator).Move(), allocator);
    }

    if (m_parentProcessParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentProcessParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentProcessParam.c_str(), allocator).Move(), allocator);
    }

    if (m_ancestorProcessStartUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AncestorProcessStartUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ancestorProcessStartUser.c_str(), allocator).Move(), allocator);
    }

    if (m_ancestorProcessUserGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AncestorProcessUserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ancestorProcessUserGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_ancestorProcessPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AncestorProcessPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ancestorProcessPath.c_str(), allocator).Move(), allocator);
    }

    if (m_ancestorProcessParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AncestorProcessParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ancestorProcessParam.c_str(), allocator).Move(), allocator);
    }

    if (m_hostIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostID.c_str(), allocator).Move(), allocator);
    }

    if (m_eventStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeType.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSubNetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSubNetID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSubNetID.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSubNetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSubNetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSubNetName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeSubNetCIDRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeSubNetCIDR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeSubNetCIDR.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_podStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeID.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_workloadType.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeRiskDnsEventDetailResponse::GetEventID() const
{
    return m_eventID;
}

bool DescribeRiskDnsEventDetailResponse::EventIDHasBeenSet() const
{
    return m_eventIDHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetEventType() const
{
    return m_eventType;
}

bool DescribeRiskDnsEventDetailResponse::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

uint64_t DescribeRiskDnsEventDetailResponse::GetEventCount() const
{
    return m_eventCount;
}

bool DescribeRiskDnsEventDetailResponse::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetFoundTime() const
{
    return m_foundTime;
}

bool DescribeRiskDnsEventDetailResponse::FoundTimeHasBeenSet() const
{
    return m_foundTimeHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetLatestFoundTime() const
{
    return m_latestFoundTime;
}

bool DescribeRiskDnsEventDetailResponse::LatestFoundTimeHasBeenSet() const
{
    return m_latestFoundTimeHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetContainerID() const
{
    return m_containerID;
}

bool DescribeRiskDnsEventDetailResponse::ContainerIDHasBeenSet() const
{
    return m_containerIDHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetContainerName() const
{
    return m_containerName;
}

bool DescribeRiskDnsEventDetailResponse::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetContainerNetStatus() const
{
    return m_containerNetStatus;
}

bool DescribeRiskDnsEventDetailResponse::ContainerNetStatusHasBeenSet() const
{
    return m_containerNetStatusHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetContainerStatus() const
{
    return m_containerStatus;
}

bool DescribeRiskDnsEventDetailResponse::ContainerStatusHasBeenSet() const
{
    return m_containerStatusHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetContainerNetSubStatus() const
{
    return m_containerNetSubStatus;
}

bool DescribeRiskDnsEventDetailResponse::ContainerNetSubStatusHasBeenSet() const
{
    return m_containerNetSubStatusHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetContainerIsolateOperationSrc() const
{
    return m_containerIsolateOperationSrc;
}

bool DescribeRiskDnsEventDetailResponse::ContainerIsolateOperationSrcHasBeenSet() const
{
    return m_containerIsolateOperationSrcHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetImageID() const
{
    return m_imageID;
}

bool DescribeRiskDnsEventDetailResponse::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetImageName() const
{
    return m_imageName;
}

bool DescribeRiskDnsEventDetailResponse::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetHostName() const
{
    return m_hostName;
}

bool DescribeRiskDnsEventDetailResponse::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetHostIP() const
{
    return m_hostIP;
}

bool DescribeRiskDnsEventDetailResponse::HostIPHasBeenSet() const
{
    return m_hostIPHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetPublicIP() const
{
    return m_publicIP;
}

bool DescribeRiskDnsEventDetailResponse::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetPodName() const
{
    return m_podName;
}

bool DescribeRiskDnsEventDetailResponse::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetDescription() const
{
    return m_description;
}

bool DescribeRiskDnsEventDetailResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetSolution() const
{
    return m_solution;
}

bool DescribeRiskDnsEventDetailResponse::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

vector<string> DescribeRiskDnsEventDetailResponse::GetReference() const
{
    return m_reference;
}

bool DescribeRiskDnsEventDetailResponse::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetAddress() const
{
    return m_address;
}

bool DescribeRiskDnsEventDetailResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetCity() const
{
    return m_city;
}

bool DescribeRiskDnsEventDetailResponse::CityHasBeenSet() const
{
    return m_cityHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetMatchRuleType() const
{
    return m_matchRuleType;
}

bool DescribeRiskDnsEventDetailResponse::MatchRuleTypeHasBeenSet() const
{
    return m_matchRuleTypeHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetFeatureLabel() const
{
    return m_featureLabel;
}

bool DescribeRiskDnsEventDetailResponse::FeatureLabelHasBeenSet() const
{
    return m_featureLabelHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetProcessAuthority() const
{
    return m_processAuthority;
}

bool DescribeRiskDnsEventDetailResponse::ProcessAuthorityHasBeenSet() const
{
    return m_processAuthorityHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetProcessMd5() const
{
    return m_processMd5;
}

bool DescribeRiskDnsEventDetailResponse::ProcessMd5HasBeenSet() const
{
    return m_processMd5HasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetProcessStartUser() const
{
    return m_processStartUser;
}

bool DescribeRiskDnsEventDetailResponse::ProcessStartUserHasBeenSet() const
{
    return m_processStartUserHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetProcessUserGroup() const
{
    return m_processUserGroup;
}

bool DescribeRiskDnsEventDetailResponse::ProcessUserGroupHasBeenSet() const
{
    return m_processUserGroupHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetProcessPath() const
{
    return m_processPath;
}

bool DescribeRiskDnsEventDetailResponse::ProcessPathHasBeenSet() const
{
    return m_processPathHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetProcessTree() const
{
    return m_processTree;
}

bool DescribeRiskDnsEventDetailResponse::ProcessTreeHasBeenSet() const
{
    return m_processTreeHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetProcessParam() const
{
    return m_processParam;
}

bool DescribeRiskDnsEventDetailResponse::ProcessParamHasBeenSet() const
{
    return m_processParamHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetParentProcessStartUser() const
{
    return m_parentProcessStartUser;
}

bool DescribeRiskDnsEventDetailResponse::ParentProcessStartUserHasBeenSet() const
{
    return m_parentProcessStartUserHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetParentProcessUserGroup() const
{
    return m_parentProcessUserGroup;
}

bool DescribeRiskDnsEventDetailResponse::ParentProcessUserGroupHasBeenSet() const
{
    return m_parentProcessUserGroupHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetParentProcessPath() const
{
    return m_parentProcessPath;
}

bool DescribeRiskDnsEventDetailResponse::ParentProcessPathHasBeenSet() const
{
    return m_parentProcessPathHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetParentProcessParam() const
{
    return m_parentProcessParam;
}

bool DescribeRiskDnsEventDetailResponse::ParentProcessParamHasBeenSet() const
{
    return m_parentProcessParamHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetAncestorProcessStartUser() const
{
    return m_ancestorProcessStartUser;
}

bool DescribeRiskDnsEventDetailResponse::AncestorProcessStartUserHasBeenSet() const
{
    return m_ancestorProcessStartUserHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetAncestorProcessUserGroup() const
{
    return m_ancestorProcessUserGroup;
}

bool DescribeRiskDnsEventDetailResponse::AncestorProcessUserGroupHasBeenSet() const
{
    return m_ancestorProcessUserGroupHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetAncestorProcessPath() const
{
    return m_ancestorProcessPath;
}

bool DescribeRiskDnsEventDetailResponse::AncestorProcessPathHasBeenSet() const
{
    return m_ancestorProcessPathHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetAncestorProcessParam() const
{
    return m_ancestorProcessParam;
}

bool DescribeRiskDnsEventDetailResponse::AncestorProcessParamHasBeenSet() const
{
    return m_ancestorProcessParamHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetHostID() const
{
    return m_hostID;
}

bool DescribeRiskDnsEventDetailResponse::HostIDHasBeenSet() const
{
    return m_hostIDHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetEventStatus() const
{
    return m_eventStatus;
}

bool DescribeRiskDnsEventDetailResponse::EventStatusHasBeenSet() const
{
    return m_eventStatusHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetOperationTime() const
{
    return m_operationTime;
}

bool DescribeRiskDnsEventDetailResponse::OperationTimeHasBeenSet() const
{
    return m_operationTimeHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeRiskDnsEventDetailResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetNodeType() const
{
    return m_nodeType;
}

bool DescribeRiskDnsEventDetailResponse::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetNodeName() const
{
    return m_nodeName;
}

bool DescribeRiskDnsEventDetailResponse::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetNodeSubNetID() const
{
    return m_nodeSubNetID;
}

bool DescribeRiskDnsEventDetailResponse::NodeSubNetIDHasBeenSet() const
{
    return m_nodeSubNetIDHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetNodeSubNetName() const
{
    return m_nodeSubNetName;
}

bool DescribeRiskDnsEventDetailResponse::NodeSubNetNameHasBeenSet() const
{
    return m_nodeSubNetNameHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetNodeSubNetCIDR() const
{
    return m_nodeSubNetCIDR;
}

bool DescribeRiskDnsEventDetailResponse::NodeSubNetCIDRHasBeenSet() const
{
    return m_nodeSubNetCIDRHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetClusterID() const
{
    return m_clusterID;
}

bool DescribeRiskDnsEventDetailResponse::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetPodIP() const
{
    return m_podIP;
}

bool DescribeRiskDnsEventDetailResponse::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetPodStatus() const
{
    return m_podStatus;
}

bool DescribeRiskDnsEventDetailResponse::PodStatusHasBeenSet() const
{
    return m_podStatusHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

bool DescribeRiskDnsEventDetailResponse::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetNodeID() const
{
    return m_nodeID;
}

bool DescribeRiskDnsEventDetailResponse::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetClusterName() const
{
    return m_clusterName;
}

bool DescribeRiskDnsEventDetailResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetNamespace() const
{
    return m_namespace;
}

bool DescribeRiskDnsEventDetailResponse::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeRiskDnsEventDetailResponse::GetWorkloadType() const
{
    return m_workloadType;
}

bool DescribeRiskDnsEventDetailResponse::WorkloadTypeHasBeenSet() const
{
    return m_workloadTypeHasBeenSet;
}


