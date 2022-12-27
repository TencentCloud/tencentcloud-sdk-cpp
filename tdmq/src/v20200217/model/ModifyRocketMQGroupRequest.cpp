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

#include <tencentcloud/tdmq/v20200217/model/ModifyRocketMQGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ModifyRocketMQGroupRequest::ModifyRocketMQGroupRequest() :
    m_clusterIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_readEnableHasBeenSet(false),
    m_broadcastEnableHasBeenSet(false),
    m_retryMaxTimesHasBeenSet(false)
{
}

string ModifyRocketMQGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_readEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_readEnable, allocator);
    }

    if (m_broadcastEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BroadcastEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_broadcastEnable, allocator);
    }

    if (m_retryMaxTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryMaxTimes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_retryMaxTimes, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRocketMQGroupRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyRocketMQGroupRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyRocketMQGroupRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyRocketMQGroupRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void ModifyRocketMQGroupRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool ModifyRocketMQGroupRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string ModifyRocketMQGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void ModifyRocketMQGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ModifyRocketMQGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ModifyRocketMQGroupRequest::GetRemark() const
{
    return m_remark;
}

void ModifyRocketMQGroupRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyRocketMQGroupRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool ModifyRocketMQGroupRequest::GetReadEnable() const
{
    return m_readEnable;
}

void ModifyRocketMQGroupRequest::SetReadEnable(const bool& _readEnable)
{
    m_readEnable = _readEnable;
    m_readEnableHasBeenSet = true;
}

bool ModifyRocketMQGroupRequest::ReadEnableHasBeenSet() const
{
    return m_readEnableHasBeenSet;
}

bool ModifyRocketMQGroupRequest::GetBroadcastEnable() const
{
    return m_broadcastEnable;
}

void ModifyRocketMQGroupRequest::SetBroadcastEnable(const bool& _broadcastEnable)
{
    m_broadcastEnable = _broadcastEnable;
    m_broadcastEnableHasBeenSet = true;
}

bool ModifyRocketMQGroupRequest::BroadcastEnableHasBeenSet() const
{
    return m_broadcastEnableHasBeenSet;
}

uint64_t ModifyRocketMQGroupRequest::GetRetryMaxTimes() const
{
    return m_retryMaxTimes;
}

void ModifyRocketMQGroupRequest::SetRetryMaxTimes(const uint64_t& _retryMaxTimes)
{
    m_retryMaxTimes = _retryMaxTimes;
    m_retryMaxTimesHasBeenSet = true;
}

bool ModifyRocketMQGroupRequest::RetryMaxTimesHasBeenSet() const
{
    return m_retryMaxTimesHasBeenSet;
}


