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

#include <tencentcloud/organization/v20210331/model/CreateOrganizationIdentityRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

CreateOrganizationIdentityRequest::CreateOrganizationIdentityRequest() :
    m_identityAliasNameHasBeenSet(false),
    m_identityPolicyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateOrganizationIdentityRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_identityAliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityAliasName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_identityAliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_identityPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_identityPolicy.begin(); itr != m_identityPolicy.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


string CreateOrganizationIdentityRequest::GetIdentityAliasName() const
{
    return m_identityAliasName;
}

void CreateOrganizationIdentityRequest::SetIdentityAliasName(const string& _identityAliasName)
{
    m_identityAliasName = _identityAliasName;
    m_identityAliasNameHasBeenSet = true;
}

bool CreateOrganizationIdentityRequest::IdentityAliasNameHasBeenSet() const
{
    return m_identityAliasNameHasBeenSet;
}

vector<IdentityPolicy> CreateOrganizationIdentityRequest::GetIdentityPolicy() const
{
    return m_identityPolicy;
}

void CreateOrganizationIdentityRequest::SetIdentityPolicy(const vector<IdentityPolicy>& _identityPolicy)
{
    m_identityPolicy = _identityPolicy;
    m_identityPolicyHasBeenSet = true;
}

bool CreateOrganizationIdentityRequest::IdentityPolicyHasBeenSet() const
{
    return m_identityPolicyHasBeenSet;
}

string CreateOrganizationIdentityRequest::GetDescription() const
{
    return m_description;
}

void CreateOrganizationIdentityRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateOrganizationIdentityRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


