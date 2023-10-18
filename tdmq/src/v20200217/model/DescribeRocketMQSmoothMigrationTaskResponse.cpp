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

#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQSmoothMigrationTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeRocketMQSmoothMigrationTaskResponse::DescribeRocketMQSmoothMigrationTaskResponse() :
    m_taskNameHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_sourceClusterNameHasBeenSet(false),
    m_connectionTypeHasBeenSet(false),
    m_sourceClusterNameServerHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_enableACLHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_taskErrorHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_topicTypeDistributionHasBeenSet(false),
    m_topicStageDistributionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRocketMQSmoothMigrationTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskName") && !rsp["TaskName"].IsNull())
    {
        if (!rsp["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(rsp["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (rsp.HasMember("ClusterId") && !rsp["ClusterId"].IsNull())
    {
        if (!rsp["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(rsp["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (rsp.HasMember("SourceClusterName") && !rsp["SourceClusterName"].IsNull())
    {
        if (!rsp["SourceClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceClusterName = string(rsp["SourceClusterName"].GetString());
        m_sourceClusterNameHasBeenSet = true;
    }

    if (rsp.HasMember("ConnectionType") && !rsp["ConnectionType"].IsNull())
    {
        if (!rsp["ConnectionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConnectionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_connectionType = string(rsp["ConnectionType"].GetString());
        m_connectionTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SourceClusterNameServer") && !rsp["SourceClusterNameServer"].IsNull())
    {
        if (!rsp["SourceClusterNameServer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterNameServer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceClusterNameServer = string(rsp["SourceClusterNameServer"].GetString());
        m_sourceClusterNameServerHasBeenSet = true;
    }

    if (rsp.HasMember("VpcId") && !rsp["VpcId"].IsNull())
    {
        if (!rsp["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(rsp["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetId") && !rsp["SubnetId"].IsNull())
    {
        if (!rsp["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(rsp["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (rsp.HasMember("EnableACL") && !rsp["EnableACL"].IsNull())
    {
        if (!rsp["EnableACL"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableACL` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableACL = rsp["EnableACL"].GetBool();
        m_enableACLHasBeenSet = true;
    }

    if (rsp.HasMember("AccessKey") && !rsp["AccessKey"].IsNull())
    {
        if (!rsp["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(rsp["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (rsp.HasMember("SecretKey") && !rsp["SecretKey"].IsNull())
    {
        if (!rsp["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(rsp["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (rsp.HasMember("TaskError") && !rsp["TaskError"].IsNull())
    {
        if (!rsp["TaskError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskError = string(rsp["TaskError"].GetString());
        m_taskErrorHasBeenSet = true;
    }

    if (rsp.HasMember("TaskStatus") && !rsp["TaskStatus"].IsNull())
    {
        if (!rsp["TaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = string(rsp["TaskStatus"].GetString());
        m_taskStatusHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("TopicTypeDistribution") && !rsp["TopicTypeDistribution"].IsNull())
    {
        if (!rsp["TopicTypeDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicTypeDistribution` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TopicTypeDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RocketMQTopicDistribution item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topicTypeDistribution.push_back(item);
        }
        m_topicTypeDistributionHasBeenSet = true;
    }

    if (rsp.HasMember("TopicStageDistribution") && !rsp["TopicStageDistribution"].IsNull())
    {
        if (!rsp["TopicStageDistribution"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicStageDistribution` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TopicStageDistribution"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RocketMQMigrationTopicDistribution item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_topicStageDistribution.push_back(item);
        }
        m_topicStageDistributionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRocketMQSmoothMigrationTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceClusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceClusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_connectionType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceClusterNameServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceClusterNameServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceClusterNameServer.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableACLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableACL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableACL, allocator);
    }

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_taskErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskError.c_str(), allocator).Move(), allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicTypeDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicTypeDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicTypeDistribution.begin(); itr != m_topicTypeDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_topicStageDistributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicStageDistribution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicStageDistribution.begin(); itr != m_topicStageDistribution.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeRocketMQSmoothMigrationTaskResponse::GetTaskName() const
{
    return m_taskName;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DescribeRocketMQSmoothMigrationTaskResponse::GetClusterId() const
{
    return m_clusterId;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeRocketMQSmoothMigrationTaskResponse::GetSourceClusterName() const
{
    return m_sourceClusterName;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::SourceClusterNameHasBeenSet() const
{
    return m_sourceClusterNameHasBeenSet;
}

string DescribeRocketMQSmoothMigrationTaskResponse::GetConnectionType() const
{
    return m_connectionType;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::ConnectionTypeHasBeenSet() const
{
    return m_connectionTypeHasBeenSet;
}

string DescribeRocketMQSmoothMigrationTaskResponse::GetSourceClusterNameServer() const
{
    return m_sourceClusterNameServer;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::SourceClusterNameServerHasBeenSet() const
{
    return m_sourceClusterNameServerHasBeenSet;
}

string DescribeRocketMQSmoothMigrationTaskResponse::GetVpcId() const
{
    return m_vpcId;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeRocketMQSmoothMigrationTaskResponse::GetSubnetId() const
{
    return m_subnetId;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::GetEnableACL() const
{
    return m_enableACL;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::EnableACLHasBeenSet() const
{
    return m_enableACLHasBeenSet;
}

string DescribeRocketMQSmoothMigrationTaskResponse::GetAccessKey() const
{
    return m_accessKey;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string DescribeRocketMQSmoothMigrationTaskResponse::GetSecretKey() const
{
    return m_secretKey;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string DescribeRocketMQSmoothMigrationTaskResponse::GetTaskError() const
{
    return m_taskError;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::TaskErrorHasBeenSet() const
{
    return m_taskErrorHasBeenSet;
}

string DescribeRocketMQSmoothMigrationTaskResponse::GetTaskStatus() const
{
    return m_taskStatus;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

string DescribeRocketMQSmoothMigrationTaskResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<RocketMQTopicDistribution> DescribeRocketMQSmoothMigrationTaskResponse::GetTopicTypeDistribution() const
{
    return m_topicTypeDistribution;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::TopicTypeDistributionHasBeenSet() const
{
    return m_topicTypeDistributionHasBeenSet;
}

vector<RocketMQMigrationTopicDistribution> DescribeRocketMQSmoothMigrationTaskResponse::GetTopicStageDistribution() const
{
    return m_topicStageDistribution;
}

bool DescribeRocketMQSmoothMigrationTaskResponse::TopicStageDistributionHasBeenSet() const
{
    return m_topicStageDistributionHasBeenSet;
}


