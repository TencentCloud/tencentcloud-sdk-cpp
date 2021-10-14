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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyTopicPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

ModifyTopicPolicyRequest::ModifyTopicPolicyRequest() :
    m_productIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_newTopicNameHasBeenSet(false),
    m_privilegeHasBeenSet(false)
{
}

string ModifyTopicPolicyRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyTopicPolicyRequest::GetProductId() const
{
    return m_productId;
}

void ModifyTopicPolicyRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool ModifyTopicPolicyRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string ModifyTopicPolicyRequest::GetTopicName() const
{
    return m_topicName;
}

void ModifyTopicPolicyRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ModifyTopicPolicyRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string ModifyTopicPolicyRequest::GetNewTopicName() const
{
    return m_newTopicName;
}

void ModifyTopicPolicyRequest::SetNewTopicName(const string& _newTopicName)
{
    m_newTopicName = _newTopicName;
    m_newTopicNameHasBeenSet = true;
}

bool ModifyTopicPolicyRequest::NewTopicNameHasBeenSet() const
{
    return m_newTopicNameHasBeenSet;
}

uint64_t ModifyTopicPolicyRequest::GetPrivilege() const
{
    return m_privilege;
}

void ModifyTopicPolicyRequest::SetPrivilege(const uint64_t& _privilege)
{
    m_privilege = _privilege;
    m_privilegeHasBeenSet = true;
}

bool ModifyTopicPolicyRequest::PrivilegeHasBeenSet() const
{
    return m_privilegeHasBeenSet;
}


