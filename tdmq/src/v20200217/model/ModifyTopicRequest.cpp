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

#include <tencentcloud/tdmq/v20200217/model/ModifyTopicRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ModifyTopicRequest::ModifyTopicRequest() :
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_msgTTLHasBeenSet(false),
    m_unackPolicyHasBeenSet(false),
    m_isolateConsumerEnableHasBeenSet(false),
    m_ackTimeOutHasBeenSet(false)
{
}

string ModifyTopicRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_partitions, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTTL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_msgTTL, allocator);
    }

    if (m_unackPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnackPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_unackPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateConsumerEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateConsumerEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isolateConsumerEnable, allocator);
    }

    if (m_ackTimeOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AckTimeOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ackTimeOut, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTopicRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void ModifyTopicRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool ModifyTopicRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string ModifyTopicRequest::GetTopicName() const
{
    return m_topicName;
}

void ModifyTopicRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ModifyTopicRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

uint64_t ModifyTopicRequest::GetPartitions() const
{
    return m_partitions;
}

void ModifyTopicRequest::SetPartitions(const uint64_t& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool ModifyTopicRequest::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string ModifyTopicRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyTopicRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyTopicRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyTopicRequest::GetRemark() const
{
    return m_remark;
}

void ModifyTopicRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyTopicRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t ModifyTopicRequest::GetMsgTTL() const
{
    return m_msgTTL;
}

void ModifyTopicRequest::SetMsgTTL(const uint64_t& _msgTTL)
{
    m_msgTTL = _msgTTL;
    m_msgTTLHasBeenSet = true;
}

bool ModifyTopicRequest::MsgTTLHasBeenSet() const
{
    return m_msgTTLHasBeenSet;
}

string ModifyTopicRequest::GetUnackPolicy() const
{
    return m_unackPolicy;
}

void ModifyTopicRequest::SetUnackPolicy(const string& _unackPolicy)
{
    m_unackPolicy = _unackPolicy;
    m_unackPolicyHasBeenSet = true;
}

bool ModifyTopicRequest::UnackPolicyHasBeenSet() const
{
    return m_unackPolicyHasBeenSet;
}

bool ModifyTopicRequest::GetIsolateConsumerEnable() const
{
    return m_isolateConsumerEnable;
}

void ModifyTopicRequest::SetIsolateConsumerEnable(const bool& _isolateConsumerEnable)
{
    m_isolateConsumerEnable = _isolateConsumerEnable;
    m_isolateConsumerEnableHasBeenSet = true;
}

bool ModifyTopicRequest::IsolateConsumerEnableHasBeenSet() const
{
    return m_isolateConsumerEnableHasBeenSet;
}

int64_t ModifyTopicRequest::GetAckTimeOut() const
{
    return m_ackTimeOut;
}

void ModifyTopicRequest::SetAckTimeOut(const int64_t& _ackTimeOut)
{
    m_ackTimeOut = _ackTimeOut;
    m_ackTimeOutHasBeenSet = true;
}

bool ModifyTopicRequest::AckTimeOutHasBeenSet() const
{
    return m_ackTimeOutHasBeenSet;
}


