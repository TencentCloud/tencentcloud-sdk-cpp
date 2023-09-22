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

#include <tencentcloud/organization/v20210331/model/IdentityPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

IdentityPolicy::IdentityPolicy() :
    m_policyIdHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyDocumentHasBeenSet(false)
{
}

CoreInternalOutcome IdentityPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PolicyId") && !value["PolicyId"].IsNull())
    {
        if (!value["PolicyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IdentityPolicy.PolicyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyId = value["PolicyId"].GetUint64();
        m_policyIdHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdentityPolicy.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyType") && !value["PolicyType"].IsNull())
    {
        if (!value["PolicyType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IdentityPolicy.PolicyType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policyType = value["PolicyType"].GetUint64();
        m_policyTypeHasBeenSet = true;
    }

    if (value.HasMember("PolicyDocument") && !value["PolicyDocument"].IsNull())
    {
        if (!value["PolicyDocument"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdentityPolicy.PolicyDocument` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyDocument = string(value["PolicyDocument"].GetString());
        m_policyDocumentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IdentityPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyId, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyType, allocator);
    }

    if (m_policyDocumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDocument";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyDocument.c_str(), allocator).Move(), allocator);
    }

}


uint64_t IdentityPolicy::GetPolicyId() const
{
    return m_policyId;
}

void IdentityPolicy::SetPolicyId(const uint64_t& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool IdentityPolicy::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

string IdentityPolicy::GetPolicyName() const
{
    return m_policyName;
}

void IdentityPolicy::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool IdentityPolicy::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

uint64_t IdentityPolicy::GetPolicyType() const
{
    return m_policyType;
}

void IdentityPolicy::SetPolicyType(const uint64_t& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool IdentityPolicy::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

string IdentityPolicy::GetPolicyDocument() const
{
    return m_policyDocument;
}

void IdentityPolicy::SetPolicyDocument(const string& _policyDocument)
{
    m_policyDocument = _policyDocument;
    m_policyDocumentHasBeenSet = true;
}

bool IdentityPolicy::PolicyDocumentHasBeenSet() const
{
    return m_policyDocumentHasBeenSet;
}

