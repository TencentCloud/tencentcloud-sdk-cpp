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

#include <tencentcloud/organization/v20210331/model/CreateOrgServiceAssignRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

CreateOrgServiceAssignRequest::CreateOrgServiceAssignRequest() :
    m_memberUinsHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_managementScopeHasBeenSet(false),
    m_managementScopeUinsHasBeenSet(false),
    m_managementScopeNodeIdsHasBeenSet(false)
{
}

string CreateOrgServiceAssignRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberUins.begin(); itr != m_memberUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_serviceId, allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_managementScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagementScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_managementScope, allocator);
    }

    if (m_managementScopeUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagementScopeUins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_managementScopeUins.begin(); itr != m_managementScopeUins.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_managementScopeNodeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagementScopeNodeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_managementScopeNodeIds.begin(); itr != m_managementScopeNodeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<int64_t> CreateOrgServiceAssignRequest::GetMemberUins() const
{
    return m_memberUins;
}

void CreateOrgServiceAssignRequest::SetMemberUins(const vector<int64_t>& _memberUins)
{
    m_memberUins = _memberUins;
    m_memberUinsHasBeenSet = true;
}

bool CreateOrgServiceAssignRequest::MemberUinsHasBeenSet() const
{
    return m_memberUinsHasBeenSet;
}

uint64_t CreateOrgServiceAssignRequest::GetServiceId() const
{
    return m_serviceId;
}

void CreateOrgServiceAssignRequest::SetServiceId(const uint64_t& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CreateOrgServiceAssignRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CreateOrgServiceAssignRequest::GetProduct() const
{
    return m_product;
}

void CreateOrgServiceAssignRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CreateOrgServiceAssignRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

uint64_t CreateOrgServiceAssignRequest::GetManagementScope() const
{
    return m_managementScope;
}

void CreateOrgServiceAssignRequest::SetManagementScope(const uint64_t& _managementScope)
{
    m_managementScope = _managementScope;
    m_managementScopeHasBeenSet = true;
}

bool CreateOrgServiceAssignRequest::ManagementScopeHasBeenSet() const
{
    return m_managementScopeHasBeenSet;
}

vector<int64_t> CreateOrgServiceAssignRequest::GetManagementScopeUins() const
{
    return m_managementScopeUins;
}

void CreateOrgServiceAssignRequest::SetManagementScopeUins(const vector<int64_t>& _managementScopeUins)
{
    m_managementScopeUins = _managementScopeUins;
    m_managementScopeUinsHasBeenSet = true;
}

bool CreateOrgServiceAssignRequest::ManagementScopeUinsHasBeenSet() const
{
    return m_managementScopeUinsHasBeenSet;
}

vector<int64_t> CreateOrgServiceAssignRequest::GetManagementScopeNodeIds() const
{
    return m_managementScopeNodeIds;
}

void CreateOrgServiceAssignRequest::SetManagementScopeNodeIds(const vector<int64_t>& _managementScopeNodeIds)
{
    m_managementScopeNodeIds = _managementScopeNodeIds;
    m_managementScopeNodeIdsHasBeenSet = true;
}

bool CreateOrgServiceAssignRequest::ManagementScopeNodeIdsHasBeenSet() const
{
    return m_managementScopeNodeIdsHasBeenSet;
}


