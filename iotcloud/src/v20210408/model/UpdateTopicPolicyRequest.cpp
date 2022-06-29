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

#include <tencentcloud/iotcloud/v20210408/model/UpdateTopicPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

UpdateTopicPolicyRequest::UpdateTopicPolicyRequest() :
    m_productIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_newTopicNameHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_brokerSubscribeHasBeenSet(false)
{
}

string UpdateTopicPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_newTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewTopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newTopicName.c_str(), allocator).Move(), allocator);
    }

    if (m_privilegeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Privilege";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_privilege, allocator);
    }

    if (m_brokerSubscribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerSubscribe";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_brokerSubscribe.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateTopicPolicyRequest::GetProductId() const
{
    return m_productId;
}

void UpdateTopicPolicyRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool UpdateTopicPolicyRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string UpdateTopicPolicyRequest::GetTopicName() const
{
    return m_topicName;
}

void UpdateTopicPolicyRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool UpdateTopicPolicyRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string UpdateTopicPolicyRequest::GetNewTopicName() const
{
    return m_newTopicName;
}

void UpdateTopicPolicyRequest::SetNewTopicName(const string& _newTopicName)
{
    m_newTopicName = _newTopicName;
    m_newTopicNameHasBeenSet = true;
}

bool UpdateTopicPolicyRequest::NewTopicNameHasBeenSet() const
{
    return m_newTopicNameHasBeenSet;
}

uint64_t UpdateTopicPolicyRequest::GetPrivilege() const
{
    return m_privilege;
}

void UpdateTopicPolicyRequest::SetPrivilege(const uint64_t& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool UpdateTopicPolicyRequest::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

BrokerSubscribe UpdateTopicPolicyRequest::GetBrokerSubscribe() const
{
    return m_brokerSubscribe;
}

void UpdateTopicPolicyRequest::SetBrokerSubscribe(const BrokerSubscribe& _brokerSubscribe)
{
    m_brokerSubscribe = _brokerSubscribe;
    m_brokerSubscribeHasBeenSet = true;
}

bool UpdateTopicPolicyRequest::BrokerSubscribeHasBeenSet() const
{
    return m_brokerSubscribeHasBeenSet;
}


