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

#include <tencentcloud/tdmq/v20200217/model/CreateEnvironmentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateEnvironmentRequest::CreateEnvironmentRequest() :
    m_environmentIdHasBeenSet(false),
    m_msgTTLHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_retentionPolicyHasBeenSet(false),
    m_autoSubscriptionCreationHasBeenSet(false)
{
}

string CreateEnvironmentRequest::ToJsonString() const
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


string CreateEnvironmentRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void CreateEnvironmentRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool CreateEnvironmentRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

uint64_t CreateEnvironmentRequest::GetMsgTTL() const
{
    return m_msgTTL;
}

void CreateEnvironmentRequest::SetMsgTTL(const uint64_t& _msgTTL)
{
    m_msgTTL = _msgTTL;
    m_msgTTLHasBeenSet = true;
}

bool CreateEnvironmentRequest::MsgTTLHasBeenSet() const
{
    return m_msgTTLHasBeenSet;
}

string CreateEnvironmentRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateEnvironmentRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateEnvironmentRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateEnvironmentRequest::GetRemark() const
{
    return m_remark;
}

void CreateEnvironmentRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateEnvironmentRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

RetentionPolicy CreateEnvironmentRequest::GetRetentionPolicy() const
{
    return m_retentionPolicy;
}

void CreateEnvironmentRequest::SetRetentionPolicy(const RetentionPolicy& _retentionPolicy)
{
    m_retentionPolicy = _retentionPolicy;
    m_retentionPolicyHasBeenSet = true;
}

bool CreateEnvironmentRequest::RetentionPolicyHasBeenSet() const
{
    return m_retentionPolicyHasBeenSet;
}

bool CreateEnvironmentRequest::GetAutoSubscriptionCreation() const
{
    return m_autoSubscriptionCreation;
}

void CreateEnvironmentRequest::SetAutoSubscriptionCreation(const bool& _autoSubscriptionCreation)
{
    m_autoSubscriptionCreation = _autoSubscriptionCreation;
    m_autoSubscriptionCreationHasBeenSet = true;
}

bool CreateEnvironmentRequest::AutoSubscriptionCreationHasBeenSet() const
{
    return m_autoSubscriptionCreationHasBeenSet;
}


