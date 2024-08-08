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

#include <tencentcloud/organization/v20210331/model/OrganizationServiceAssignMember.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

OrganizationServiceAssignMember::OrganizationServiceAssignMember() :
    m_serviceIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_memberUinHasBeenSet(false),
    m_memberNameHasBeenSet(false),
    m_usageStatusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_managementScopeHasBeenSet(false),
    m_managementScopeMembersHasBeenSet(false),
    m_managementScopeNodesHasBeenSet(false)
{
}

CoreInternalOutcome OrganizationServiceAssignMember::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssignMember.ServiceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = value["ServiceId"].GetUint64();
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssignMember.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("MemberUin") && !value["MemberUin"].IsNull())
    {
        if (!value["MemberUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssignMember.MemberUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memberUin = value["MemberUin"].GetInt64();
        m_memberUinHasBeenSet = true;
    }

    if (value.HasMember("MemberName") && !value["MemberName"].IsNull())
    {
        if (!value["MemberName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssignMember.MemberName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberName = string(value["MemberName"].GetString());
        m_memberNameHasBeenSet = true;
    }

    if (value.HasMember("UsageStatus") && !value["UsageStatus"].IsNull())
    {
        if (!value["UsageStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssignMember.UsageStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usageStatus = value["UsageStatus"].GetUint64();
        m_usageStatusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssignMember.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ManagementScope") && !value["ManagementScope"].IsNull())
    {
        if (!value["ManagementScope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssignMember.ManagementScope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_managementScope = value["ManagementScope"].GetUint64();
        m_managementScopeHasBeenSet = true;
    }

    if (value.HasMember("ManagementScopeMembers") && !value["ManagementScopeMembers"].IsNull())
    {
        if (!value["ManagementScopeMembers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssignMember.ManagementScopeMembers` is not array type"));

        const rapidjson::Value &tmpValue = value["ManagementScopeMembers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MemberMainInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_managementScopeMembers.push_back(item);
        }
        m_managementScopeMembersHasBeenSet = true;
    }

    if (value.HasMember("ManagementScopeNodes") && !value["ManagementScopeNodes"].IsNull())
    {
        if (!value["ManagementScopeNodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssignMember.ManagementScopeNodes` is not array type"));

        const rapidjson::Value &tmpValue = value["ManagementScopeNodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NodeMainInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_managementScopeNodes.push_back(item);
        }
        m_managementScopeNodesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrganizationServiceAssignMember::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceId, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_memberUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memberUin, allocator);
    }

    if (m_memberNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberName.c_str(), allocator).Move(), allocator);
    }

    if (m_usageStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usageStatus, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_managementScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagementScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_managementScope, allocator);
    }

    if (m_managementScopeMembersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagementScopeMembers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_managementScopeMembers.begin(); itr != m_managementScopeMembers.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_managementScopeNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManagementScopeNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_managementScopeNodes.begin(); itr != m_managementScopeNodes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t OrganizationServiceAssignMember::GetServiceId() const
{
    return m_serviceId;
}

void OrganizationServiceAssignMember::SetServiceId(const uint64_t& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool OrganizationServiceAssignMember::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string OrganizationServiceAssignMember::GetProductName() const
{
    return m_productName;
}

void OrganizationServiceAssignMember::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool OrganizationServiceAssignMember::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

int64_t OrganizationServiceAssignMember::GetMemberUin() const
{
    return m_memberUin;
}

void OrganizationServiceAssignMember::SetMemberUin(const int64_t& _memberUin)
{
    m_memberUin = _memberUin;
    m_memberUinHasBeenSet = true;
}

bool OrganizationServiceAssignMember::MemberUinHasBeenSet() const
{
    return m_memberUinHasBeenSet;
}

string OrganizationServiceAssignMember::GetMemberName() const
{
    return m_memberName;
}

void OrganizationServiceAssignMember::SetMemberName(const string& _memberName)
{
    m_memberName = _memberName;
    m_memberNameHasBeenSet = true;
}

bool OrganizationServiceAssignMember::MemberNameHasBeenSet() const
{
    return m_memberNameHasBeenSet;
}

uint64_t OrganizationServiceAssignMember::GetUsageStatus() const
{
    return m_usageStatus;
}

void OrganizationServiceAssignMember::SetUsageStatus(const uint64_t& _usageStatus)
{
    m_usageStatus = _usageStatus;
    m_usageStatusHasBeenSet = true;
}

bool OrganizationServiceAssignMember::UsageStatusHasBeenSet() const
{
    return m_usageStatusHasBeenSet;
}

string OrganizationServiceAssignMember::GetCreateTime() const
{
    return m_createTime;
}

void OrganizationServiceAssignMember::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OrganizationServiceAssignMember::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t OrganizationServiceAssignMember::GetManagementScope() const
{
    return m_managementScope;
}

void OrganizationServiceAssignMember::SetManagementScope(const uint64_t& _managementScope)
{
    m_managementScope = _managementScope;
    m_managementScopeHasBeenSet = true;
}

bool OrganizationServiceAssignMember::ManagementScopeHasBeenSet() const
{
    return m_managementScopeHasBeenSet;
}

vector<MemberMainInfo> OrganizationServiceAssignMember::GetManagementScopeMembers() const
{
    return m_managementScopeMembers;
}

void OrganizationServiceAssignMember::SetManagementScopeMembers(const vector<MemberMainInfo>& _managementScopeMembers)
{
    m_managementScopeMembers = _managementScopeMembers;
    m_managementScopeMembersHasBeenSet = true;
}

bool OrganizationServiceAssignMember::ManagementScopeMembersHasBeenSet() const
{
    return m_managementScopeMembersHasBeenSet;
}

vector<NodeMainInfo> OrganizationServiceAssignMember::GetManagementScopeNodes() const
{
    return m_managementScopeNodes;
}

void OrganizationServiceAssignMember::SetManagementScopeNodes(const vector<NodeMainInfo>& _managementScopeNodes)
{
    m_managementScopeNodes = _managementScopeNodes;
    m_managementScopeNodesHasBeenSet = true;
}

bool OrganizationServiceAssignMember::ManagementScopeNodesHasBeenSet() const
{
    return m_managementScopeNodesHasBeenSet;
}

