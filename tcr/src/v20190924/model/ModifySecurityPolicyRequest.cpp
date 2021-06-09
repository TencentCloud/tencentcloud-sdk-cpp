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

#include <tencentcloud/tcr/v20190924/model/ModifySecurityPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

ModifySecurityPolicyRequest::ModifySecurityPolicyRequest() :
    m_registryIdHasBeenSet(false),
    m_policyIndexHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string ModifySecurityPolicyRequest::ToJsonString() const
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

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySecurityPolicyRequest::GetRegistryId() const
{
    return m_registryId;
}

void ModifySecurityPolicyRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool ModifySecurityPolicyRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

int64_t ModifySecurityPolicyRequest::GetPolicyIndex() const
{
    return m_policyIndex;
}

void ModifySecurityPolicyRequest::SetPolicyIndex(const int64_t& _policyIndex)
{
    m_policyIndex = _policyIndex;
    m_policyIndexHasBeenSet = true;
}

bool ModifySecurityPolicyRequest::PolicyIndexHasBeenSet() const
{
    return m_policyIndexHasBeenSet;
}

string ModifySecurityPolicyRequest::GetCidrBlock() const
{
    return m_cidrBlock;
}

void ModifySecurityPolicyRequest::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool ModifySecurityPolicyRequest::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string ModifySecurityPolicyRequest::GetDescription() const
{
    return m_description;
}

void ModifySecurityPolicyRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifySecurityPolicyRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


