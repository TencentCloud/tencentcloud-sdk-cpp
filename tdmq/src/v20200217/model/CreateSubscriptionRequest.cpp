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

#include <tencentcloud/tdmq/v20200217/model/CreateSubscriptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateSubscriptionRequest::CreateSubscriptionRequest() :
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_subscriptionNameHasBeenSet(false),
    m_isIdempotentHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_autoCreatePolicyTopicHasBeenSet(false),
    m_postFixPatternHasBeenSet(false)
{
}

string CreateSubscriptionRequest::ToJsonString() const
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

    if (m_subscriptionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscriptionName.c_str(), allocator).Move(), allocator);
    }

    if (m_isIdempotentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsIdempotent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isIdempotent, allocator);
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

    if (m_autoCreatePolicyTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoCreatePolicyTopic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoCreatePolicyTopic, allocator);
    }

    if (m_postFixPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostFixPattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_postFixPattern.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSubscriptionRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void CreateSubscriptionRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool CreateSubscriptionRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string CreateSubscriptionRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateSubscriptionRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateSubscriptionRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string CreateSubscriptionRequest::GetSubscriptionName() const
{
    return m_subscriptionName;
}

void CreateSubscriptionRequest::SetSubscriptionName(const string& _subscriptionName)
{
    m_subscriptionName = _subscriptionName;
    m_subscriptionNameHasBeenSet = true;
}

bool CreateSubscriptionRequest::SubscriptionNameHasBeenSet() const
{
    return m_subscriptionNameHasBeenSet;
}

bool CreateSubscriptionRequest::GetIsIdempotent() const
{
    return m_isIdempotent;
}

void CreateSubscriptionRequest::SetIsIdempotent(const bool& _isIdempotent)
{
    m_isIdempotent = _isIdempotent;
    m_isIdempotentHasBeenSet = true;
}

bool CreateSubscriptionRequest::IsIdempotentHasBeenSet() const
{
    return m_isIdempotentHasBeenSet;
}

string CreateSubscriptionRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateSubscriptionRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateSubscriptionRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateSubscriptionRequest::GetRemark() const
{
    return m_remark;
}

void CreateSubscriptionRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateSubscriptionRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool CreateSubscriptionRequest::GetAutoCreatePolicyTopic() const
{
    return m_autoCreatePolicyTopic;
}

void CreateSubscriptionRequest::SetAutoCreatePolicyTopic(const bool& _autoCreatePolicyTopic)
{
    m_autoCreatePolicyTopic = _autoCreatePolicyTopic;
    m_autoCreatePolicyTopicHasBeenSet = true;
}

bool CreateSubscriptionRequest::AutoCreatePolicyTopicHasBeenSet() const
{
    return m_autoCreatePolicyTopicHasBeenSet;
}

string CreateSubscriptionRequest::GetPostFixPattern() const
{
    return m_postFixPattern;
}

void CreateSubscriptionRequest::SetPostFixPattern(const string& _postFixPattern)
{
    m_postFixPattern = _postFixPattern;
    m_postFixPatternHasBeenSet = true;
}

bool CreateSubscriptionRequest::PostFixPatternHasBeenSet() const
{
    return m_postFixPatternHasBeenSet;
}


