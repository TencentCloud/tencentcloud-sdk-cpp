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

#include <tencentcloud/postgres/v20170312/model/NetworkAccess.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

NetworkAccess::NetworkAccess() :
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_vip6HasBeenSet(false),
    m_vportHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_vpcStatusHasBeenSet(false)
{
}

CoreInternalOutcome NetworkAccess::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAccess.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAccess.ResourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = value["ResourceType"].GetUint64();
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAccess.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAccess.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("Vip6") && !value["Vip6"].IsNull())
    {
        if (!value["Vip6"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAccess.Vip6` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip6 = string(value["Vip6"].GetString());
        m_vip6HasBeenSet = true;
    }

    if (value.HasMember("Vport") && !value["Vport"].IsNull())
    {
        if (!value["Vport"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAccess.Vport` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vport = value["Vport"].GetInt64();
        m_vportHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAccess.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("VpcStatus") && !value["VpcStatus"].IsNull())
    {
        if (!value["VpcStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAccess.VpcStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcStatus = value["VpcStatus"].GetInt64();
        m_vpcStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkAccess::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceType, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vip6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip6.c_str(), allocator).Move(), allocator);
    }

    if (m_vportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vport, allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcStatus, allocator);
    }

}


string NetworkAccess::GetResourceId() const
{
    return m_resourceId;
}

void NetworkAccess::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool NetworkAccess::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t NetworkAccess::GetResourceType() const
{
    return m_resourceType;
}

void NetworkAccess::SetResourceType(const uint64_t& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool NetworkAccess::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string NetworkAccess::GetVpcId() const
{
    return m_vpcId;
}

void NetworkAccess::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NetworkAccess::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string NetworkAccess::GetVip() const
{
    return m_vip;
}

void NetworkAccess::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool NetworkAccess::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string NetworkAccess::GetVip6() const
{
    return m_vip6;
}

void NetworkAccess::SetVip6(const string& _vip6)
{
    m_vip6 = _vip6;
    m_vip6HasBeenSet = true;
}

bool NetworkAccess::Vip6HasBeenSet() const
{
    return m_vip6HasBeenSet;
}

int64_t NetworkAccess::GetVport() const
{
    return m_vport;
}

void NetworkAccess::SetVport(const int64_t& _vport)
{
    m_vport = _vport;
    m_vportHasBeenSet = true;
}

bool NetworkAccess::VportHasBeenSet() const
{
    return m_vportHasBeenSet;
}

string NetworkAccess::GetSubnetId() const
{
    return m_subnetId;
}

void NetworkAccess::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool NetworkAccess::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t NetworkAccess::GetVpcStatus() const
{
    return m_vpcStatus;
}

void NetworkAccess::SetVpcStatus(const int64_t& _vpcStatus)
{
    m_vpcStatus = _vpcStatus;
    m_vpcStatusHasBeenSet = true;
}

bool NetworkAccess::VpcStatusHasBeenSet() const
{
    return m_vpcStatusHasBeenSet;
}

