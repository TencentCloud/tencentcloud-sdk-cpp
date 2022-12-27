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

#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateRocketMQGroupRequest::CreateRocketMQGroupRequest() :
    m_groupIdHasBeenSet(false),
    m_namespacesHasBeenSet(false),
    m_readEnableHasBeenSet(false),
    m_broadcastEnableHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_retryMaxTimesHasBeenSet(false)
{
}

string CreateRocketMQGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespaces";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namespaces.begin(); itr != m_namespaces.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_groupTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupType.c_str(), allocator).Move(), allocator);
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


string CreateRocketMQGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void CreateRocketMQGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateRocketMQGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

vector<string> CreateRocketMQGroupRequest::GetNamespaces() const
{
    return m_namespaces;
}

void CreateRocketMQGroupRequest::SetNamespaces(const vector<string>& _namespaces)
{
    m_namespaces = _namespaces;
    m_namespacesHasBeenSet = true;
}

bool CreateRocketMQGroupRequest::NamespacesHasBeenSet() const
{
    return m_namespacesHasBeenSet;
}

bool CreateRocketMQGroupRequest::GetReadEnable() const
{
    return m_readEnable;
}

void CreateRocketMQGroupRequest::SetReadEnable(const bool& _readEnable)
{
    m_readEnable = _readEnable;
    m_readEnableHasBeenSet = true;
}

bool CreateRocketMQGroupRequest::ReadEnableHasBeenSet() const
{
    return m_readEnableHasBeenSet;
}

bool CreateRocketMQGroupRequest::GetBroadcastEnable() const
{
    return m_broadcastEnable;
}

void CreateRocketMQGroupRequest::SetBroadcastEnable(const bool& _broadcastEnable)
{
    m_broadcastEnable = _broadcastEnable;
    m_broadcastEnableHasBeenSet = true;
}

bool CreateRocketMQGroupRequest::BroadcastEnableHasBeenSet() const
{
    return m_broadcastEnableHasBeenSet;
}

string CreateRocketMQGroupRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateRocketMQGroupRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateRocketMQGroupRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateRocketMQGroupRequest::GetRemark() const
{
    return m_remark;
}

void CreateRocketMQGroupRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateRocketMQGroupRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateRocketMQGroupRequest::GetGroupType() const
{
    return m_groupType;
}

void CreateRocketMQGroupRequest::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool CreateRocketMQGroupRequest::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

uint64_t CreateRocketMQGroupRequest::GetRetryMaxTimes() const
{
    return m_retryMaxTimes;
}

void CreateRocketMQGroupRequest::SetRetryMaxTimes(const uint64_t& _retryMaxTimes)
{
    m_retryMaxTimes = _retryMaxTimes;
    m_retryMaxTimesHasBeenSet = true;
}

bool CreateRocketMQGroupRequest::RetryMaxTimesHasBeenSet() const
{
    return m_retryMaxTimesHasBeenSet;
}


