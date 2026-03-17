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

#include <tencentcloud/tcss/v20201101/model/ImageDenyEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImageDenyEvent::ImageDenyEvent() :
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
    m_qUUIDHasBeenSet(false),
    m_foundTimeHasBeenSet(false),
    m_latestFoundTimeHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_dealBehaviorHasBeenSet(false),
    m_eventIDHasBeenSet(false),
    m_publicIPHasBeenSet(false),
    m_nodeIDHasBeenSet(false),
    m_clusterIDHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_nodeUniqueIDHasBeenSet(false),
    m_podIPHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_imageRegistryInfoHasBeenSet(false)
{
}

CoreInternalOutcome ImageDenyEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventType") && !value["EventType"].IsNull())
    {
        if (!value["EventType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.EventType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventType = string(value["EventType"].GetString());
        m_eventTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(value["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleStatus") && !value["RuleStatus"].IsNull())
    {
        if (!value["RuleStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.RuleStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleStatus = value["RuleStatus"].GetInt64();
        m_ruleStatusHasBeenSet = true;
    }

    if (value.HasMember("RuleEffectStatus") && !value["RuleEffectStatus"].IsNull())
    {
        if (!value["RuleEffectStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.RuleEffectStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleEffectStatus = string(value["RuleEffectStatus"].GetString());
        m_ruleEffectStatusHasBeenSet = true;
    }

    if (value.HasMember("RuleInfo") && !value["RuleInfo"].IsNull())
    {
        if (!value["RuleInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.RuleInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ruleInfo.push_back((*itr).GetString());
        }
        m_ruleInfoHasBeenSet = true;
    }

    if (value.HasMember("RuleDescription") && !value["RuleDescription"].IsNull())
    {
        if (!value["RuleDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.RuleDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleDescription = string(value["RuleDescription"].GetString());
        m_ruleDescriptionHasBeenSet = true;
    }

    if (value.HasMember("ImageID") && !value["ImageID"].IsNull())
    {
        if (!value["ImageID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.ImageID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageID = string(value["ImageID"].GetString());
        m_imageIDHasBeenSet = true;
    }

    if (value.HasMember("ImageName") && !value["ImageName"].IsNull())
    {
        if (!value["ImageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.ImageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageName = string(value["ImageName"].GetString());
        m_imageNameHasBeenSet = true;
    }

    if (value.HasMember("NodeName") && !value["NodeName"].IsNull())
    {
        if (!value["NodeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.NodeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeName = string(value["NodeName"].GetString());
        m_nodeNameHasBeenSet = true;
    }

    if (value.HasMember("NodeIP") && !value["NodeIP"].IsNull())
    {
        if (!value["NodeIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.NodeIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeIP = string(value["NodeIP"].GetString());
        m_nodeIPHasBeenSet = true;
    }

    if (value.HasMember("QUUID") && !value["QUUID"].IsNull())
    {
        if (!value["QUUID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.QUUID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qUUID = string(value["QUUID"].GetString());
        m_qUUIDHasBeenSet = true;
    }

    if (value.HasMember("FoundTime") && !value["FoundTime"].IsNull())
    {
        if (!value["FoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.FoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_foundTime = string(value["FoundTime"].GetString());
        m_foundTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestFoundTime") && !value["LatestFoundTime"].IsNull())
    {
        if (!value["LatestFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.LatestFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFoundTime = string(value["LatestFoundTime"].GetString());
        m_latestFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("DealBehavior") && !value["DealBehavior"].IsNull())
    {
        if (!value["DealBehavior"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.DealBehavior` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dealBehavior = string(value["DealBehavior"].GetString());
        m_dealBehaviorHasBeenSet = true;
    }

    if (value.HasMember("EventID") && !value["EventID"].IsNull())
    {
        if (!value["EventID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.EventID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventID = value["EventID"].GetInt64();
        m_eventIDHasBeenSet = true;
    }

    if (value.HasMember("PublicIP") && !value["PublicIP"].IsNull())
    {
        if (!value["PublicIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.PublicIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicIP = string(value["PublicIP"].GetString());
        m_publicIPHasBeenSet = true;
    }

    if (value.HasMember("NodeID") && !value["NodeID"].IsNull())
    {
        if (!value["NodeID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.NodeID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeID = string(value["NodeID"].GetString());
        m_nodeIDHasBeenSet = true;
    }

    if (value.HasMember("ClusterID") && !value["ClusterID"].IsNull())
    {
        if (!value["ClusterID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.ClusterID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterID = string(value["ClusterID"].GetString());
        m_clusterIDHasBeenSet = true;
    }

    if (value.HasMember("NodeType") && !value["NodeType"].IsNull())
    {
        if (!value["NodeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.NodeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeType = string(value["NodeType"].GetString());
        m_nodeTypeHasBeenSet = true;
    }

    if (value.HasMember("NodeUniqueID") && !value["NodeUniqueID"].IsNull())
    {
        if (!value["NodeUniqueID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.NodeUniqueID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nodeUniqueID = string(value["NodeUniqueID"].GetString());
        m_nodeUniqueIDHasBeenSet = true;
    }

    if (value.HasMember("PodIP") && !value["PodIP"].IsNull())
    {
        if (!value["PodIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.PodIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podIP = string(value["PodIP"].GetString());
        m_podIPHasBeenSet = true;
    }

    if (value.HasMember("PodName") && !value["PodName"].IsNull())
    {
        if (!value["PodName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.PodName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_podName = string(value["PodName"].GetString());
        m_podNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("ImageRegistryInfo") && !value["ImageRegistryInfo"].IsNull())
    {
        if (!value["ImageRegistryInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyEvent.ImageRegistryInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageRegistryInfo.Deserialize(value["ImageRegistryInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageRegistryInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageDenyEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_eventIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventID, allocator);
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

    if (m_nodeUniqueIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeUniqueID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nodeUniqueID.c_str(), allocator).Move(), allocator);
    }

    if (m_podIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podIP.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
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

}


string ImageDenyEvent::GetEventType() const
{
    return m_eventType;
}

void ImageDenyEvent::SetEventType(const string& _eventType)
{
    m_eventType = _eventType;
    m_eventTypeHasBeenSet = true;
}

bool ImageDenyEvent::EventTypeHasBeenSet() const
{
    return m_eventTypeHasBeenSet;
}

string ImageDenyEvent::GetRuleName() const
{
    return m_ruleName;
}

void ImageDenyEvent::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ImageDenyEvent::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string ImageDenyEvent::GetRuleID() const
{
    return m_ruleID;
}

void ImageDenyEvent::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool ImageDenyEvent::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string ImageDenyEvent::GetRuleType() const
{
    return m_ruleType;
}

void ImageDenyEvent::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool ImageDenyEvent::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t ImageDenyEvent::GetRuleStatus() const
{
    return m_ruleStatus;
}

void ImageDenyEvent::SetRuleStatus(const int64_t& _ruleStatus)
{
    m_ruleStatus = _ruleStatus;
    m_ruleStatusHasBeenSet = true;
}

bool ImageDenyEvent::RuleStatusHasBeenSet() const
{
    return m_ruleStatusHasBeenSet;
}

string ImageDenyEvent::GetRuleEffectStatus() const
{
    return m_ruleEffectStatus;
}

void ImageDenyEvent::SetRuleEffectStatus(const string& _ruleEffectStatus)
{
    m_ruleEffectStatus = _ruleEffectStatus;
    m_ruleEffectStatusHasBeenSet = true;
}

bool ImageDenyEvent::RuleEffectStatusHasBeenSet() const
{
    return m_ruleEffectStatusHasBeenSet;
}

vector<string> ImageDenyEvent::GetRuleInfo() const
{
    return m_ruleInfo;
}

void ImageDenyEvent::SetRuleInfo(const vector<string>& _ruleInfo)
{
    m_ruleInfo = _ruleInfo;
    m_ruleInfoHasBeenSet = true;
}

bool ImageDenyEvent::RuleInfoHasBeenSet() const
{
    return m_ruleInfoHasBeenSet;
}

string ImageDenyEvent::GetRuleDescription() const
{
    return m_ruleDescription;
}

void ImageDenyEvent::SetRuleDescription(const string& _ruleDescription)
{
    m_ruleDescription = _ruleDescription;
    m_ruleDescriptionHasBeenSet = true;
}

bool ImageDenyEvent::RuleDescriptionHasBeenSet() const
{
    return m_ruleDescriptionHasBeenSet;
}

string ImageDenyEvent::GetImageID() const
{
    return m_imageID;
}

void ImageDenyEvent::SetImageID(const string& _imageID)
{
    m_imageID = _imageID;
    m_imageIDHasBeenSet = true;
}

bool ImageDenyEvent::ImageIDHasBeenSet() const
{
    return m_imageIDHasBeenSet;
}

string ImageDenyEvent::GetImageName() const
{
    return m_imageName;
}

void ImageDenyEvent::SetImageName(const string& _imageName)
{
    m_imageName = _imageName;
    m_imageNameHasBeenSet = true;
}

bool ImageDenyEvent::ImageNameHasBeenSet() const
{
    return m_imageNameHasBeenSet;
}

string ImageDenyEvent::GetNodeName() const
{
    return m_nodeName;
}

void ImageDenyEvent::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool ImageDenyEvent::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string ImageDenyEvent::GetNodeIP() const
{
    return m_nodeIP;
}

void ImageDenyEvent::SetNodeIP(const string& _nodeIP)
{
    m_nodeIP = _nodeIP;
    m_nodeIPHasBeenSet = true;
}

bool ImageDenyEvent::NodeIPHasBeenSet() const
{
    return m_nodeIPHasBeenSet;
}

string ImageDenyEvent::GetQUUID() const
{
    return m_qUUID;
}

void ImageDenyEvent::SetQUUID(const string& _qUUID)
{
    m_qUUID = _qUUID;
    m_qUUIDHasBeenSet = true;
}

bool ImageDenyEvent::QUUIDHasBeenSet() const
{
    return m_qUUIDHasBeenSet;
}

string ImageDenyEvent::GetFoundTime() const
{
    return m_foundTime;
}

void ImageDenyEvent::SetFoundTime(const string& _foundTime)
{
    m_foundTime = _foundTime;
    m_foundTimeHasBeenSet = true;
}

bool ImageDenyEvent::FoundTimeHasBeenSet() const
{
    return m_foundTimeHasBeenSet;
}

string ImageDenyEvent::GetLatestFoundTime() const
{
    return m_latestFoundTime;
}

void ImageDenyEvent::SetLatestFoundTime(const string& _latestFoundTime)
{
    m_latestFoundTime = _latestFoundTime;
    m_latestFoundTimeHasBeenSet = true;
}

bool ImageDenyEvent::LatestFoundTimeHasBeenSet() const
{
    return m_latestFoundTimeHasBeenSet;
}

int64_t ImageDenyEvent::GetEventCount() const
{
    return m_eventCount;
}

void ImageDenyEvent::SetEventCount(const int64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool ImageDenyEvent::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

string ImageDenyEvent::GetDealBehavior() const
{
    return m_dealBehavior;
}

void ImageDenyEvent::SetDealBehavior(const string& _dealBehavior)
{
    m_dealBehavior = _dealBehavior;
    m_dealBehaviorHasBeenSet = true;
}

bool ImageDenyEvent::DealBehaviorHasBeenSet() const
{
    return m_dealBehaviorHasBeenSet;
}

int64_t ImageDenyEvent::GetEventID() const
{
    return m_eventID;
}

void ImageDenyEvent::SetEventID(const int64_t& _eventID)
{
    m_eventID = _eventID;
    m_eventIDHasBeenSet = true;
}

bool ImageDenyEvent::EventIDHasBeenSet() const
{
    return m_eventIDHasBeenSet;
}

string ImageDenyEvent::GetPublicIP() const
{
    return m_publicIP;
}

void ImageDenyEvent::SetPublicIP(const string& _publicIP)
{
    m_publicIP = _publicIP;
    m_publicIPHasBeenSet = true;
}

bool ImageDenyEvent::PublicIPHasBeenSet() const
{
    return m_publicIPHasBeenSet;
}

string ImageDenyEvent::GetNodeID() const
{
    return m_nodeID;
}

void ImageDenyEvent::SetNodeID(const string& _nodeID)
{
    m_nodeID = _nodeID;
    m_nodeIDHasBeenSet = true;
}

bool ImageDenyEvent::NodeIDHasBeenSet() const
{
    return m_nodeIDHasBeenSet;
}

string ImageDenyEvent::GetClusterID() const
{
    return m_clusterID;
}

void ImageDenyEvent::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool ImageDenyEvent::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string ImageDenyEvent::GetNodeType() const
{
    return m_nodeType;
}

void ImageDenyEvent::SetNodeType(const string& _nodeType)
{
    m_nodeType = _nodeType;
    m_nodeTypeHasBeenSet = true;
}

bool ImageDenyEvent::NodeTypeHasBeenSet() const
{
    return m_nodeTypeHasBeenSet;
}

string ImageDenyEvent::GetNodeUniqueID() const
{
    return m_nodeUniqueID;
}

void ImageDenyEvent::SetNodeUniqueID(const string& _nodeUniqueID)
{
    m_nodeUniqueID = _nodeUniqueID;
    m_nodeUniqueIDHasBeenSet = true;
}

bool ImageDenyEvent::NodeUniqueIDHasBeenSet() const
{
    return m_nodeUniqueIDHasBeenSet;
}

string ImageDenyEvent::GetPodIP() const
{
    return m_podIP;
}

void ImageDenyEvent::SetPodIP(const string& _podIP)
{
    m_podIP = _podIP;
    m_podIPHasBeenSet = true;
}

bool ImageDenyEvent::PodIPHasBeenSet() const
{
    return m_podIPHasBeenSet;
}

string ImageDenyEvent::GetPodName() const
{
    return m_podName;
}

void ImageDenyEvent::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool ImageDenyEvent::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string ImageDenyEvent::GetClusterName() const
{
    return m_clusterName;
}

void ImageDenyEvent::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool ImageDenyEvent::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

ImageRegistryInfo ImageDenyEvent::GetImageRegistryInfo() const
{
    return m_imageRegistryInfo;
}

void ImageDenyEvent::SetImageRegistryInfo(const ImageRegistryInfo& _imageRegistryInfo)
{
    m_imageRegistryInfo = _imageRegistryInfo;
    m_imageRegistryInfoHasBeenSet = true;
}

bool ImageDenyEvent::ImageRegistryInfoHasBeenSet() const
{
    return m_imageRegistryInfoHasBeenSet;
}

