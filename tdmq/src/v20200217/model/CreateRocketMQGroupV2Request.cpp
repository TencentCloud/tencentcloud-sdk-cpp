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

#include <tencentcloud/tdmq/v20200217/model/CreateRocketMQGroupV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateRocketMQGroupV2Request::CreateRocketMQGroupV2Request() :
    m_groupIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_readEnableHasBeenSet(false),
    m_broadcastEnableHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_groupTypeHasBeenSet(false),
    m_retryMaxTimesHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

string CreateRocketMQGroupV2Request::ToJsonString() const
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

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
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

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateRocketMQGroupV2Request::GetGroupId() const
{
    return m_groupId;
}

void CreateRocketMQGroupV2Request::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CreateRocketMQGroupV2Request::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string CreateRocketMQGroupV2Request::GetNamespace() const
{
    return m_namespace;
}

void CreateRocketMQGroupV2Request::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateRocketMQGroupV2Request::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

bool CreateRocketMQGroupV2Request::GetReadEnable() const
{
    return m_readEnable;
}

void CreateRocketMQGroupV2Request::SetReadEnable(const bool& _readEnable)
{
    m_readEnable = _readEnable;
    m_readEnableHasBeenSet = true;
}

bool CreateRocketMQGroupV2Request::ReadEnableHasBeenSet() const
{
    return m_readEnableHasBeenSet;
}

bool CreateRocketMQGroupV2Request::GetBroadcastEnable() const
{
    return m_broadcastEnable;
}

void CreateRocketMQGroupV2Request::SetBroadcastEnable(const bool& _broadcastEnable)
{
    m_broadcastEnable = _broadcastEnable;
    m_broadcastEnableHasBeenSet = true;
}

bool CreateRocketMQGroupV2Request::BroadcastEnableHasBeenSet() const
{
    return m_broadcastEnableHasBeenSet;
}

string CreateRocketMQGroupV2Request::GetClusterId() const
{
    return m_clusterId;
}

void CreateRocketMQGroupV2Request::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateRocketMQGroupV2Request::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateRocketMQGroupV2Request::GetRemark() const
{
    return m_remark;
}

void CreateRocketMQGroupV2Request::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateRocketMQGroupV2Request::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateRocketMQGroupV2Request::GetGroupType() const
{
    return m_groupType;
}

void CreateRocketMQGroupV2Request::SetGroupType(const string& _groupType)
{
    m_groupType = _groupType;
    m_groupTypeHasBeenSet = true;
}

bool CreateRocketMQGroupV2Request::GroupTypeHasBeenSet() const
{
    return m_groupTypeHasBeenSet;
}

uint64_t CreateRocketMQGroupV2Request::GetRetryMaxTimes() const
{
    return m_retryMaxTimes;
}

void CreateRocketMQGroupV2Request::SetRetryMaxTimes(const uint64_t& _retryMaxTimes)
{
    m_retryMaxTimes = _retryMaxTimes;
    m_retryMaxTimesHasBeenSet = true;
}

bool CreateRocketMQGroupV2Request::RetryMaxTimesHasBeenSet() const
{
    return m_retryMaxTimesHasBeenSet;
}

vector<Tag> CreateRocketMQGroupV2Request::GetTagList() const
{
    return m_tagList;
}

void CreateRocketMQGroupV2Request::SetTagList(const vector<Tag>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool CreateRocketMQGroupV2Request::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}


