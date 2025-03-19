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

#include <tencentcloud/tdmq/v20200217/model/Cluster.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

Cluster::Cluster() :
    m_clusterIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_endPointNumHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_healthyHasBeenSet(false),
    m_healthyInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_maxNamespaceNumHasBeenSet(false),
    m_maxTopicNumHasBeenSet(false),
    m_maxQpsHasBeenSet(false),
    m_messageRetentionTimeHasBeenSet(false),
    m_maxStorageCapacityHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_publicEndPointHasBeenSet(false),
    m_vpcEndPointHasBeenSet(false),
    m_namespaceNumHasBeenSet(false),
    m_usedStorageBudgetHasBeenSet(false),
    m_maxPublishRateInMessagesHasBeenSet(false),
    m_maxDispatchRateInMessagesHasBeenSet(false),
    m_maxPublishRateInBytesHasBeenSet(false),
    m_maxDispatchRateInBytesHasBeenSet(false),
    m_topicNumHasBeenSet(false),
    m_maxMessageDelayInSecondsHasBeenSet(false),
    m_publicAccessEnabledHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_upgradeProInstanceHasBeenSet(false)
{
}

CoreInternalOutcome Cluster::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterName") && !value["ClusterName"].IsNull())
    {
        if (!value["ClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterName = string(value["ClusterName"].GetString());
        m_clusterNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("EndPointNum") && !value["EndPointNum"].IsNull())
    {
        if (!value["EndPointNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.EndPointNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endPointNum = value["EndPointNum"].GetInt64();
        m_endPointNumHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Healthy") && !value["Healthy"].IsNull())
    {
        if (!value["Healthy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Healthy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_healthy = value["Healthy"].GetInt64();
        m_healthyHasBeenSet = true;
    }

    if (value.HasMember("HealthyInfo") && !value["HealthyInfo"].IsNull())
    {
        if (!value["HealthyInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.HealthyInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthyInfo = string(value["HealthyInfo"].GetString());
        m_healthyInfoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("MaxNamespaceNum") && !value["MaxNamespaceNum"].IsNull())
    {
        if (!value["MaxNamespaceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.MaxNamespaceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxNamespaceNum = value["MaxNamespaceNum"].GetInt64();
        m_maxNamespaceNumHasBeenSet = true;
    }

    if (value.HasMember("MaxTopicNum") && !value["MaxTopicNum"].IsNull())
    {
        if (!value["MaxTopicNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.MaxTopicNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTopicNum = value["MaxTopicNum"].GetInt64();
        m_maxTopicNumHasBeenSet = true;
    }

    if (value.HasMember("MaxQps") && !value["MaxQps"].IsNull())
    {
        if (!value["MaxQps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.MaxQps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQps = value["MaxQps"].GetInt64();
        m_maxQpsHasBeenSet = true;
    }

    if (value.HasMember("MessageRetentionTime") && !value["MessageRetentionTime"].IsNull())
    {
        if (!value["MessageRetentionTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.MessageRetentionTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_messageRetentionTime = value["MessageRetentionTime"].GetInt64();
        m_messageRetentionTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxStorageCapacity") && !value["MaxStorageCapacity"].IsNull())
    {
        if (!value["MaxStorageCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.MaxStorageCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorageCapacity = value["MaxStorageCapacity"].GetInt64();
        m_maxStorageCapacityHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("PublicEndPoint") && !value["PublicEndPoint"].IsNull())
    {
        if (!value["PublicEndPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.PublicEndPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicEndPoint = string(value["PublicEndPoint"].GetString());
        m_publicEndPointHasBeenSet = true;
    }

    if (value.HasMember("VpcEndPoint") && !value["VpcEndPoint"].IsNull())
    {
        if (!value["VpcEndPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.VpcEndPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcEndPoint = string(value["VpcEndPoint"].GetString());
        m_vpcEndPointHasBeenSet = true;
    }

    if (value.HasMember("NamespaceNum") && !value["NamespaceNum"].IsNull())
    {
        if (!value["NamespaceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.NamespaceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceNum = value["NamespaceNum"].GetInt64();
        m_namespaceNumHasBeenSet = true;
    }

    if (value.HasMember("UsedStorageBudget") && !value["UsedStorageBudget"].IsNull())
    {
        if (!value["UsedStorageBudget"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.UsedStorageBudget` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedStorageBudget = value["UsedStorageBudget"].GetInt64();
        m_usedStorageBudgetHasBeenSet = true;
    }

    if (value.HasMember("MaxPublishRateInMessages") && !value["MaxPublishRateInMessages"].IsNull())
    {
        if (!value["MaxPublishRateInMessages"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.MaxPublishRateInMessages` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPublishRateInMessages = value["MaxPublishRateInMessages"].GetInt64();
        m_maxPublishRateInMessagesHasBeenSet = true;
    }

    if (value.HasMember("MaxDispatchRateInMessages") && !value["MaxDispatchRateInMessages"].IsNull())
    {
        if (!value["MaxDispatchRateInMessages"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.MaxDispatchRateInMessages` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDispatchRateInMessages = value["MaxDispatchRateInMessages"].GetInt64();
        m_maxDispatchRateInMessagesHasBeenSet = true;
    }

    if (value.HasMember("MaxPublishRateInBytes") && !value["MaxPublishRateInBytes"].IsNull())
    {
        if (!value["MaxPublishRateInBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.MaxPublishRateInBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxPublishRateInBytes = value["MaxPublishRateInBytes"].GetInt64();
        m_maxPublishRateInBytesHasBeenSet = true;
    }

    if (value.HasMember("MaxDispatchRateInBytes") && !value["MaxDispatchRateInBytes"].IsNull())
    {
        if (!value["MaxDispatchRateInBytes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.MaxDispatchRateInBytes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDispatchRateInBytes = value["MaxDispatchRateInBytes"].GetInt64();
        m_maxDispatchRateInBytesHasBeenSet = true;
    }

    if (value.HasMember("TopicNum") && !value["TopicNum"].IsNull())
    {
        if (!value["TopicNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.TopicNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicNum = value["TopicNum"].GetInt64();
        m_topicNumHasBeenSet = true;
    }

    if (value.HasMember("MaxMessageDelayInSeconds") && !value["MaxMessageDelayInSeconds"].IsNull())
    {
        if (!value["MaxMessageDelayInSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.MaxMessageDelayInSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMessageDelayInSeconds = value["MaxMessageDelayInSeconds"].GetInt64();
        m_maxMessageDelayInSecondsHasBeenSet = true;
    }

    if (value.HasMember("PublicAccessEnabled") && !value["PublicAccessEnabled"].IsNull())
    {
        if (!value["PublicAccessEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.PublicAccessEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_publicAccessEnabled = value["PublicAccessEnabled"].GetBool();
        m_publicAccessEnabledHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Cluster.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("PayMode") && !value["PayMode"].IsNull())
    {
        if (!value["PayMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.PayMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payMode = value["PayMode"].GetInt64();
        m_payModeHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("UpgradeProInstance") && !value["UpgradeProInstance"].IsNull())
    {
        if (!value["UpgradeProInstance"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Cluster.UpgradeProInstance` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_upgradeProInstance = value["UpgradeProInstance"].GetBool();
        m_upgradeProInstanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Cluster::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPointNum, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_healthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Healthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthy, allocator);
    }

    if (m_healthyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthyInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_maxNamespaceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxNamespaceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxNamespaceNum, allocator);
    }

    if (m_maxTopicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTopicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTopicNum, allocator);
    }

    if (m_maxQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQps, allocator);
    }

    if (m_messageRetentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_messageRetentionTime, allocator);
    }

    if (m_maxStorageCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorageCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorageCapacity, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_publicEndPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicEndPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicEndPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcEndPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcEndPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcEndPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_namespaceNum, allocator);
    }

    if (m_usedStorageBudgetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedStorageBudget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedStorageBudget, allocator);
    }

    if (m_maxPublishRateInMessagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPublishRateInMessages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPublishRateInMessages, allocator);
    }

    if (m_maxDispatchRateInMessagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDispatchRateInMessages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDispatchRateInMessages, allocator);
    }

    if (m_maxPublishRateInBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxPublishRateInBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxPublishRateInBytes, allocator);
    }

    if (m_maxDispatchRateInBytesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDispatchRateInBytes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDispatchRateInBytes, allocator);
    }

    if (m_topicNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicNum, allocator);
    }

    if (m_maxMessageDelayInSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMessageDelayInSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMessageDelayInSeconds, allocator);
    }

    if (m_publicAccessEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAccessEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicAccessEnabled, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payMode, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeProInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeProInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upgradeProInstance, allocator);
    }

}


string Cluster::GetClusterId() const
{
    return m_clusterId;
}

void Cluster::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool Cluster::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string Cluster::GetClusterName() const
{
    return m_clusterName;
}

void Cluster::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool Cluster::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string Cluster::GetRemark() const
{
    return m_remark;
}

void Cluster::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool Cluster::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t Cluster::GetEndPointNum() const
{
    return m_endPointNum;
}

void Cluster::SetEndPointNum(const int64_t& _endPointNum)
{
    m_endPointNum = _endPointNum;
    m_endPointNumHasBeenSet = true;
}

bool Cluster::EndPointNumHasBeenSet() const
{
    return m_endPointNumHasBeenSet;
}

string Cluster::GetCreateTime() const
{
    return m_createTime;
}

void Cluster::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Cluster::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t Cluster::GetHealthy() const
{
    return m_healthy;
}

void Cluster::SetHealthy(const int64_t& _healthy)
{
    m_healthy = _healthy;
    m_healthyHasBeenSet = true;
}

bool Cluster::HealthyHasBeenSet() const
{
    return m_healthyHasBeenSet;
}

string Cluster::GetHealthyInfo() const
{
    return m_healthyInfo;
}

void Cluster::SetHealthyInfo(const string& _healthyInfo)
{
    m_healthyInfo = _healthyInfo;
    m_healthyInfoHasBeenSet = true;
}

bool Cluster::HealthyInfoHasBeenSet() const
{
    return m_healthyInfoHasBeenSet;
}

int64_t Cluster::GetStatus() const
{
    return m_status;
}

void Cluster::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Cluster::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t Cluster::GetMaxNamespaceNum() const
{
    return m_maxNamespaceNum;
}

void Cluster::SetMaxNamespaceNum(const int64_t& _maxNamespaceNum)
{
    m_maxNamespaceNum = _maxNamespaceNum;
    m_maxNamespaceNumHasBeenSet = true;
}

bool Cluster::MaxNamespaceNumHasBeenSet() const
{
    return m_maxNamespaceNumHasBeenSet;
}

int64_t Cluster::GetMaxTopicNum() const
{
    return m_maxTopicNum;
}

void Cluster::SetMaxTopicNum(const int64_t& _maxTopicNum)
{
    m_maxTopicNum = _maxTopicNum;
    m_maxTopicNumHasBeenSet = true;
}

bool Cluster::MaxTopicNumHasBeenSet() const
{
    return m_maxTopicNumHasBeenSet;
}

int64_t Cluster::GetMaxQps() const
{
    return m_maxQps;
}

void Cluster::SetMaxQps(const int64_t& _maxQps)
{
    m_maxQps = _maxQps;
    m_maxQpsHasBeenSet = true;
}

bool Cluster::MaxQpsHasBeenSet() const
{
    return m_maxQpsHasBeenSet;
}

int64_t Cluster::GetMessageRetentionTime() const
{
    return m_messageRetentionTime;
}

void Cluster::SetMessageRetentionTime(const int64_t& _messageRetentionTime)
{
    m_messageRetentionTime = _messageRetentionTime;
    m_messageRetentionTimeHasBeenSet = true;
}

bool Cluster::MessageRetentionTimeHasBeenSet() const
{
    return m_messageRetentionTimeHasBeenSet;
}

int64_t Cluster::GetMaxStorageCapacity() const
{
    return m_maxStorageCapacity;
}

void Cluster::SetMaxStorageCapacity(const int64_t& _maxStorageCapacity)
{
    m_maxStorageCapacity = _maxStorageCapacity;
    m_maxStorageCapacityHasBeenSet = true;
}

bool Cluster::MaxStorageCapacityHasBeenSet() const
{
    return m_maxStorageCapacityHasBeenSet;
}

string Cluster::GetVersion() const
{
    return m_version;
}

void Cluster::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool Cluster::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string Cluster::GetPublicEndPoint() const
{
    return m_publicEndPoint;
}

void Cluster::SetPublicEndPoint(const string& _publicEndPoint)
{
    m_publicEndPoint = _publicEndPoint;
    m_publicEndPointHasBeenSet = true;
}

bool Cluster::PublicEndPointHasBeenSet() const
{
    return m_publicEndPointHasBeenSet;
}

string Cluster::GetVpcEndPoint() const
{
    return m_vpcEndPoint;
}

void Cluster::SetVpcEndPoint(const string& _vpcEndPoint)
{
    m_vpcEndPoint = _vpcEndPoint;
    m_vpcEndPointHasBeenSet = true;
}

bool Cluster::VpcEndPointHasBeenSet() const
{
    return m_vpcEndPointHasBeenSet;
}

int64_t Cluster::GetNamespaceNum() const
{
    return m_namespaceNum;
}

void Cluster::SetNamespaceNum(const int64_t& _namespaceNum)
{
    m_namespaceNum = _namespaceNum;
    m_namespaceNumHasBeenSet = true;
}

bool Cluster::NamespaceNumHasBeenSet() const
{
    return m_namespaceNumHasBeenSet;
}

int64_t Cluster::GetUsedStorageBudget() const
{
    return m_usedStorageBudget;
}

void Cluster::SetUsedStorageBudget(const int64_t& _usedStorageBudget)
{
    m_usedStorageBudget = _usedStorageBudget;
    m_usedStorageBudgetHasBeenSet = true;
}

bool Cluster::UsedStorageBudgetHasBeenSet() const
{
    return m_usedStorageBudgetHasBeenSet;
}

int64_t Cluster::GetMaxPublishRateInMessages() const
{
    return m_maxPublishRateInMessages;
}

void Cluster::SetMaxPublishRateInMessages(const int64_t& _maxPublishRateInMessages)
{
    m_maxPublishRateInMessages = _maxPublishRateInMessages;
    m_maxPublishRateInMessagesHasBeenSet = true;
}

bool Cluster::MaxPublishRateInMessagesHasBeenSet() const
{
    return m_maxPublishRateInMessagesHasBeenSet;
}

int64_t Cluster::GetMaxDispatchRateInMessages() const
{
    return m_maxDispatchRateInMessages;
}

void Cluster::SetMaxDispatchRateInMessages(const int64_t& _maxDispatchRateInMessages)
{
    m_maxDispatchRateInMessages = _maxDispatchRateInMessages;
    m_maxDispatchRateInMessagesHasBeenSet = true;
}

bool Cluster::MaxDispatchRateInMessagesHasBeenSet() const
{
    return m_maxDispatchRateInMessagesHasBeenSet;
}

int64_t Cluster::GetMaxPublishRateInBytes() const
{
    return m_maxPublishRateInBytes;
}

void Cluster::SetMaxPublishRateInBytes(const int64_t& _maxPublishRateInBytes)
{
    m_maxPublishRateInBytes = _maxPublishRateInBytes;
    m_maxPublishRateInBytesHasBeenSet = true;
}

bool Cluster::MaxPublishRateInBytesHasBeenSet() const
{
    return m_maxPublishRateInBytesHasBeenSet;
}

int64_t Cluster::GetMaxDispatchRateInBytes() const
{
    return m_maxDispatchRateInBytes;
}

void Cluster::SetMaxDispatchRateInBytes(const int64_t& _maxDispatchRateInBytes)
{
    m_maxDispatchRateInBytes = _maxDispatchRateInBytes;
    m_maxDispatchRateInBytesHasBeenSet = true;
}

bool Cluster::MaxDispatchRateInBytesHasBeenSet() const
{
    return m_maxDispatchRateInBytesHasBeenSet;
}

int64_t Cluster::GetTopicNum() const
{
    return m_topicNum;
}

void Cluster::SetTopicNum(const int64_t& _topicNum)
{
    m_topicNum = _topicNum;
    m_topicNumHasBeenSet = true;
}

bool Cluster::TopicNumHasBeenSet() const
{
    return m_topicNumHasBeenSet;
}

int64_t Cluster::GetMaxMessageDelayInSeconds() const
{
    return m_maxMessageDelayInSeconds;
}

void Cluster::SetMaxMessageDelayInSeconds(const int64_t& _maxMessageDelayInSeconds)
{
    m_maxMessageDelayInSeconds = _maxMessageDelayInSeconds;
    m_maxMessageDelayInSecondsHasBeenSet = true;
}

bool Cluster::MaxMessageDelayInSecondsHasBeenSet() const
{
    return m_maxMessageDelayInSecondsHasBeenSet;
}

bool Cluster::GetPublicAccessEnabled() const
{
    return m_publicAccessEnabled;
}

void Cluster::SetPublicAccessEnabled(const bool& _publicAccessEnabled)
{
    m_publicAccessEnabled = _publicAccessEnabled;
    m_publicAccessEnabledHasBeenSet = true;
}

bool Cluster::PublicAccessEnabledHasBeenSet() const
{
    return m_publicAccessEnabledHasBeenSet;
}

vector<Tag> Cluster::GetTags() const
{
    return m_tags;
}

void Cluster::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Cluster::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t Cluster::GetPayMode() const
{
    return m_payMode;
}

void Cluster::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool Cluster::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t Cluster::GetProjectId() const
{
    return m_projectId;
}

void Cluster::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool Cluster::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string Cluster::GetProjectName() const
{
    return m_projectName;
}

void Cluster::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool Cluster::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

bool Cluster::GetUpgradeProInstance() const
{
    return m_upgradeProInstance;
}

void Cluster::SetUpgradeProInstance(const bool& _upgradeProInstance)
{
    m_upgradeProInstance = _upgradeProInstance;
    m_upgradeProInstanceHasBeenSet = true;
}

bool Cluster::UpgradeProInstanceHasBeenSet() const
{
    return m_upgradeProInstanceHasBeenSet;
}

