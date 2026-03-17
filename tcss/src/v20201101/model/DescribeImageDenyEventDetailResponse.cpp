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

#include <tencentcloud/tcss/v20201101/model/DescribeImageDenyEventDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeImageDenyEventDetailResponse::DescribeImageDenyEventDetailResponse() :
    m_eventIDHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleIDHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_ruleStatusHasBeenSet(false),
    m_ruleEffectStatusHasBeenSet(false),
    m_ruleInfoHasBeenSet(false),
    m_ruleDescriptionHasBeenSet(false),
    m_imageIDHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_nodeIPHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_qUUIDHasBeenSet(false),
    m_foundTimeHasBeenSet(false),
    m_latestFoundTimeHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_dealBehaviorHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_ruleEffectTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_startParamHasBeenSet(false),
    m_solutionHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_podStatusHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_nodeSubNetIDHasBeenSet(false),
    m_nodeSubNetNameHasBeenSet(false),
    m_nodeSubNetCIDRHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_imageRegistryInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeImageDenyEventDetailResponse::Deserialize(const string &payload)
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
        if (!rsp["EventID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventID = rsp["EventID"].GetInt64();
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

    if (rsp.HasMember("RuleName") && !rsp["RuleName"].IsNull())
    {
        if (!rsp["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(rsp["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (rsp.HasMember("RuleID") && !rsp["RuleID"].IsNull())
    {
        if (!rsp["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(rsp["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }

    if (rsp.HasMember("RuleType") && !rsp["RuleType"].IsNull())
    {
        if (!rsp["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(rsp["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RuleStatus") && !rsp["RuleStatus"].IsNull())
    {
        if (!rsp["RuleStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleStatus = rsp["RuleStatus"].GetInt64();
        m_ruleStatusHasBeenSet = true;
    }

    if (rsp.HasMember("RuleEffectStatus") && !rsp["RuleEffectStatus"].IsNull())
    {
        if (!rsp["RuleEffectStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEffectStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleEffectStatus = string(rsp["RuleEffectStatus"].GetString());
        m_ruleEffectStatusHasBeenSet = true;
    }

    if (rsp.HasMember("RuleInfo") && !rsp["RuleInfo"].IsNull())
    {
        if (!rsp["RuleInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RuleInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleInfo.push_back((*itr).GetString());
        }
        m_ruleInfoHasBeenSet = true;
    }

    if (rsp.HasMember("RuleDescription") && !rsp["RuleDescription"].IsNull())
    {
        if (!rsp["RuleDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleDescription = string(rsp["RuleDescription"].GetString());
        m_ruleDescriptionHasBeenSet = true;
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

    if (rsp.HasMember("NodeName") && !rsp["NodeName"].IsNull())
    {
        if (!rsp["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(rsp["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (rsp.HasMember("NodeIP") && !rsp["NodeIP"].IsNull())
    {
        if (!rsp["NodeIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIP = string(rsp["NodeIP"].GetString());
        m_nodeIPHasBeenSet = true;
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

    if (rsp.HasMember("QUUID") && !rsp["QUUID"].IsNull())
    {
        if (!rsp["QUUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QUUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qUUID = string(rsp["QUUID"].GetString());
        m_qUUIDHasBeenSet = true;
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

    if (rsp.HasMember("EventCount") && !rsp["EventCount"].IsNull())
    {
        if (!rsp["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = rsp["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
    }

    if (rsp.HasMember("DealBehavior") && !rsp["DealBehavior"].IsNull())
    {
        if (!rsp["DealBehavior"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DealBehavior` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealBehavior = string(rsp["DealBehavior"].GetString());
        m_dealBehaviorHasBeenSet = true;
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

    if (rsp.HasMember("RuleEffectTime") && !rsp["RuleEffectTime"].IsNull())
    {
        if (!rsp["RuleEffectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEffectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleEffectTime = string(rsp["RuleEffectTime"].GetString());
        m_ruleEffectTimeHasBeenSet = true;
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

    if (rsp.HasMember("StartParam") && !rsp["StartParam"].IsNull())
    {
        if (!rsp["StartParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startParam = string(rsp["StartParam"].GetString());
        m_startParamHasBeenSet = true;
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

    if (rsp.HasMember("ClusterID") && !rsp["ClusterID"].IsNull())
    {
        if (!rsp["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(rsp["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
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

    if (rsp.HasMember("NodeID") && !rsp["NodeID"].IsNull())
    {
        if (!rsp["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(rsp["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
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

    if (rsp.HasMember("ClusterName") && !rsp["ClusterName"].IsNull())
    {
        if (!rsp["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(rsp["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (rsp.HasMember("ImageRegistryInfo") && !rsp["ImageRegistryInfo"].IsNull())
    {
        if (!rsp["ImageRegistryInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRegistryInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageRegistryInfo.Deserialize(rsp["ImageRegistryInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageRegistryInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeImageDenyEventDetailResponse::ToJsonString() const
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

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleStatus, allocator);
    }

    if (m_ruleEffectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleEffectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleEffectStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleInfo.begin(); itr != m_ruleInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ruleDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleDescription.c_str(), allocator).Move(), allocator);
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

    if (m_publicIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicIP.c_str(), allocator).Move(), allocator);
    }

    if (m_qUUIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUUID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qUUID.c_str(), allocator).Move(), allocator);
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

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_dealBehaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealBehavior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dealBehavior.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleEffectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleEffectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleEffectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_startParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startParam.c_str(), allocator).Move(), allocator);
    }

    if (m_solutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Solution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_solution.c_str(), allocator).Move(), allocator);
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

    if (m_nodeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeID.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUniqueID.c_str(), allocator).Move(), allocator);
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

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_imageRegistryInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRegistryInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageRegistryInfo.ToJsonObject(value[key.c_str()], allocator);
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


int64_t DescribeImageDenyEventDetailResponse::GetEventID() const
{
    return m_eventID;
}

bool DescribeImageDenyEventDetailResponse::EventIDHasBeenSet() const
{
    return m_eventIDHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetEventType() const
{
    return m_eventType;
}

bool DescribeImageDenyEventDetailResponse::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetRuleName() const
{
    return m_ruleName;
}

bool DescribeImageDenyEventDetailResponse::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetRuleID() const
{
    return m_ruleID;
}

bool DescribeImageDenyEventDetailResponse::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetRuleType() const
{
    return m_ruleType;
}

bool DescribeImageDenyEventDetailResponse::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t DescribeImageDenyEventDetailResponse::GetRuleStatus() const
{
    return m_ruleStatus;
}

bool DescribeImageDenyEventDetailResponse::RuleStatusHasBeenSet() const
{
    return m_ruleStatusHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetRuleEffectStatus() const
{
    return m_ruleEffectStatus;
}

bool DescribeImageDenyEventDetailResponse::RuleEffectStatusHasBeenSet() const
{
    return m_ruleEffectStatusHasBeenSet;
}

vector<string> DescribeImageDenyEventDetailResponse::GetRuleInfo() const
{
    return m_ruleInfo;
}

bool DescribeImageDenyEventDetailResponse::RuleInfoHasBeenSet() const
{
    return m_ruleInfoHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetRuleDescription() const
{
    return m_ruleDescription;
}

bool DescribeImageDenyEventDetailResponse::RuleDescriptionHasBeenSet() const
{
    return m_ruleDescriptionHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetImageID() const
{
    return m_imageID;
}

bool DescribeImageDenyEventDetailResponse::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetImageName() const
{
    return m_imageName;
}

bool DescribeImageDenyEventDetailResponse::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetNodeName() const
{
    return m_nodeName;
}

bool DescribeImageDenyEventDetailResponse::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetNodeIP() const
{
    return m_nodeIP;
}

bool DescribeImageDenyEventDetailResponse::NodeIPHasBeenSet() const
{
    return m_nodeIPHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetPublicIP() const
{
    return m_publicIP;
}

bool DescribeImageDenyEventDetailResponse::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetQUUID() const
{
    return m_qUUID;
}

bool DescribeImageDenyEventDetailResponse::QUUIDHasBeenSet() const
{
    return m_qUUIDHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetFoundTime() const
{
    return m_foundTime;
}

bool DescribeImageDenyEventDetailResponse::FoundTimeHasBeenSet() const
{
    return m_foundTimeHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetLatestFoundTime() const
{
    return m_latestFoundTime;
}

bool DescribeImageDenyEventDetailResponse::LatestFoundTimeHasBeenSet() const
{
    return m_latestFoundTimeHasBeenSet;
}

int64_t DescribeImageDenyEventDetailResponse::GetEventCount() const
{
    return m_eventCount;
}

bool DescribeImageDenyEventDetailResponse::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetDealBehavior() const
{
    return m_dealBehavior;
}

bool DescribeImageDenyEventDetailResponse::DealBehaviorHasBeenSet() const
{
    return m_dealBehaviorHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetPodName() const
{
    return m_podName;
}

bool DescribeImageDenyEventDetailResponse::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetRuleEffectTime() const
{
    return m_ruleEffectTime;
}

bool DescribeImageDenyEventDetailResponse::RuleEffectTimeHasBeenSet() const
{
    return m_ruleEffectTimeHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetDescription() const
{
    return m_description;
}

bool DescribeImageDenyEventDetailResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetStartParam() const
{
    return m_startParam;
}

bool DescribeImageDenyEventDetailResponse::StartParamHasBeenSet() const
{
    return m_startParamHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetSolution() const
{
    return m_solution;
}

bool DescribeImageDenyEventDetailResponse::SolutionHasBeenSet() const
{
    return m_solutionHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetPodIP() const
{
    return m_podIP;
}

bool DescribeImageDenyEventDetailResponse::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetPodStatus() const
{
    return m_podStatus;
}

bool DescribeImageDenyEventDetailResponse::PodStatusHasBeenSet() const
{
    return m_podStatusHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetClusterID() const
{
    return m_clusterID;
}

bool DescribeImageDenyEventDetailResponse::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetNodeType() const
{
    return m_nodeType;
}

bool DescribeImageDenyEventDetailResponse::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetNodeID() const
{
    return m_nodeID;
}

bool DescribeImageDenyEventDetailResponse::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

bool DescribeImageDenyEventDetailResponse::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetNodeSubNetID() const
{
    return m_nodeSubNetID;
}

bool DescribeImageDenyEventDetailResponse::NodeSubNetIDHasBeenSet() const
{
    return m_nodeSubNetIDHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetNodeSubNetName() const
{
    return m_nodeSubNetName;
}

bool DescribeImageDenyEventDetailResponse::NodeSubNetNameHasBeenSet() const
{
    return m_nodeSubNetNameHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetNodeSubNetCIDR() const
{
    return m_nodeSubNetCIDR;
}

bool DescribeImageDenyEventDetailResponse::NodeSubNetCIDRHasBeenSet() const
{
    return m_nodeSubNetCIDRHasBeenSet;
}

string DescribeImageDenyEventDetailResponse::GetClusterName() const
{
    return m_clusterName;
}

bool DescribeImageDenyEventDetailResponse::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

ImageRegistryInfo DescribeImageDenyEventDetailResponse::GetImageRegistryInfo() const
{
    return m_imageRegistryInfo;
}

bool DescribeImageDenyEventDetailResponse::ImageRegistryInfoHasBeenSet() const
{
    return m_imageRegistryInfoHasBeenSet;
}


