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

#include <tencentcloud/tcr/v20190924/model/DeleteSecurityPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DeleteSecurityPolicyRequest::DeleteSecurityPolicyRequest() :
    m_registryIdHasBeenSet(false),
    m_policyIndexHasBeenSet(false),
    m_policyVersionHasBeenSet(false),
    m_cidrBlockHasBeenSet(false)
{
}

string DeleteSecurityPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyIndex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyIndex, allocator);
    }

    if (m_policyVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteSecurityPolicyRequest::GetRegistryId() const
{
    return m_registryId;
}

void DeleteSecurityPolicyRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DeleteSecurityPolicyRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

int64_t DeleteSecurityPolicyRequest::GetPolicyIndex() const
{
    return m_policyIndex;
}

void DeleteSecurityPolicyRequest::SetPolicyIndex(const int64_t& _policyIndex)
{
    m_policyIndex = _policyIndex;
    m_policyIndexHasBeenSet = true;
}

bool DeleteSecurityPolicyRequest::PolicyIndexHasBeenSet() const
{
    return m_policyIndexHasBeenSet;
}

string DeleteSecurityPolicyRequest::GetPolicyVersion() const
{
    return m_policyVersion;
}

void DeleteSecurityPolicyRequest::SetPolicyVersion(const string& _policyVersion)
{
    m_policyVersion = _policyVersion;
    m_policyVersionHasBeenSet = true;
}

bool DeleteSecurityPolicyRequest::PolicyVersionHasBeenSet() const
{
    return m_policyVersionHasBeenSet;
}

string DeleteSecurityPolicyRequest::GetCidrBlock() const
{
    return m_cidrBlock;
}

void DeleteSecurityPolicyRequest::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool DeleteSecurityPolicyRequest::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}


