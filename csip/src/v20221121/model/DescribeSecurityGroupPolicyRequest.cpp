/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/DescribeSecurityGroupPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeSecurityGroupPolicyRequest::DescribeSecurityGroupPolicyRequest() :
    m_providerHasBeenSet(false),
    m_assetIDHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_memberIdHasBeenSet(false),
    m_securityGroupIDHasBeenSet(false)
{
}

string DescribeSecurityGroupPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_assetIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetID.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_securityGroupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_securityGroupID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSecurityGroupPolicyRequest::GetProvider() const
{
    return m_provider;
}

void DescribeSecurityGroupPolicyRequest::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool DescribeSecurityGroupPolicyRequest::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string DescribeSecurityGroupPolicyRequest::GetAssetID() const
{
    return m_assetID;
}

void DescribeSecurityGroupPolicyRequest::SetAssetID(const string& _assetID)
{
    m_assetID = _assetID;
    m_assetIDHasBeenSet = true;
}

bool DescribeSecurityGroupPolicyRequest::AssetIDHasBeenSet() const
{
    return m_assetIDHasBeenSet;
}

string DescribeSecurityGroupPolicyRequest::GetAssetType() const
{
    return m_assetType;
}

void DescribeSecurityGroupPolicyRequest::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool DescribeSecurityGroupPolicyRequest::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

vector<string> DescribeSecurityGroupPolicyRequest::GetMemberId() const
{
    return m_memberId;
}

void DescribeSecurityGroupPolicyRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool DescribeSecurityGroupPolicyRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

string DescribeSecurityGroupPolicyRequest::GetSecurityGroupID() const
{
    return m_securityGroupID;
}

void DescribeSecurityGroupPolicyRequest::SetSecurityGroupID(const string& _securityGroupID)
{
    m_securityGroupID = _securityGroupID;
    m_securityGroupIDHasBeenSet = true;
}

bool DescribeSecurityGroupPolicyRequest::SecurityGroupIDHasBeenSet() const
{
    return m_securityGroupIDHasBeenSet;
}


