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

#include <tencentcloud/iotcloud/v20210408/model/CreateTopicPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotcloud::V20210408::Model;
using namespace std;

CreateTopicPolicyRequest::CreateTopicPolicyRequest() :
    m_productIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_privilegeHasBeenSet(false),
    m_brokerSubscribeHasBeenSet(false)
{
}

string CreateTopicPolicyRequest::ToJsonString() const
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


string CreateTopicPolicyRequest::GetProductId() const
{
    return m_productId;
}

void CreateTopicPolicyRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CreateTopicPolicyRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CreateTopicPolicyRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateTopicPolicyRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateTopicPolicyRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

uint64_t CreateTopicPolicyRequest::GetPrivilege() const
{
    return m_privilege;
}

void CreateTopicPolicyRequest::SetPrivilege(const uint64_t& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool CreateTopicPolicyRequest::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}

BrokerSubscribe CreateTopicPolicyRequest::GetBrokerSubscribe() const
{
    return m_brokerSubscribe;
}

void CreateTopicPolicyRequest::SetBrokerSubscribe(const BrokerSubscribe& _brokerSubscribe)
{
    m_brokerSubscribe = _brokerSubscribe;
    m_brokerSubscribeHasBeenSet = true;
}

bool CreateTopicPolicyRequest::BrokerSubscribeHasBeenSet() const
{
    return m_brokerSubscribeHasBeenSet;
}


