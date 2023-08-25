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

#include <tencentcloud/tdmq/v20200217/model/ModifyEnvironmentAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ModifyEnvironmentAttributesRequest::ModifyEnvironmentAttributesRequest() :
    m_environmentIdHasBeenSet(false),
    m_msgTTLHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_retentionPolicyHasBeenSet(false),
    m_autoSubscriptionCreationHasBeenSet(false)
{
}

string ModifyEnvironmentAttributesRequest::ToJsonString() const
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

    if (m_msgTTLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTTL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_msgTTL, allocator);
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

    if (m_retentionPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetentionPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_retentionPolicy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoSubscriptionCreationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSubscriptionCreation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoSubscriptionCreation, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyEnvironmentAttributesRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void ModifyEnvironmentAttributesRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool ModifyEnvironmentAttributesRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

uint64_t ModifyEnvironmentAttributesRequest::GetMsgTTL() const
{
    return m_msgTTL;
}

void ModifyEnvironmentAttributesRequest::SetMsgTTL(const uint64_t& _msgTTL)
{
    m_msgTTL = _msgTTL;
    m_msgTTLHasBeenSet = true;
}

bool ModifyEnvironmentAttributesRequest::MsgTTLHasBeenSet() const
{
    return m_msgTTLHasBeenSet;
}

string ModifyEnvironmentAttributesRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyEnvironmentAttributesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyEnvironmentAttributesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyEnvironmentAttributesRequest::GetRemark() const
{
    return m_remark;
}

void ModifyEnvironmentAttributesRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyEnvironmentAttributesRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

RetentionPolicy ModifyEnvironmentAttributesRequest::GetRetentionPolicy() const
{
    return m_retentionPolicy;
}

void ModifyEnvironmentAttributesRequest::SetRetentionPolicy(const RetentionPolicy& _retentionPolicy)
{
    m_retentionPolicy = _retentionPolicy;
    m_retentionPolicyHasBeenSet = true;
}

bool ModifyEnvironmentAttributesRequest::RetentionPolicyHasBeenSet() const
{
    return m_retentionPolicyHasBeenSet;
}

bool ModifyEnvironmentAttributesRequest::GetAutoSubscriptionCreation() const
{
    return m_autoSubscriptionCreation;
}

void ModifyEnvironmentAttributesRequest::SetAutoSubscriptionCreation(const bool& _autoSubscriptionCreation)
{
    m_autoSubscriptionCreation = _autoSubscriptionCreation;
    m_autoSubscriptionCreationHasBeenSet = true;
}

bool ModifyEnvironmentAttributesRequest::AutoSubscriptionCreationHasBeenSet() const
{
    return m_autoSubscriptionCreationHasBeenSet;
}


