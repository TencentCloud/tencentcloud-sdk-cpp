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

#include <tencentcloud/tcr/v20190924/model/CreateImageAccelerationServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

CreateImageAccelerationServiceRequest::CreateImageAccelerationServiceRequest() :
    m_registryIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_pGroupIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false)
{
}

string CreateImageAccelerationServiceRequest::ToJsonString() const
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

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_pGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagSpecification.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateImageAccelerationServiceRequest::GetRegistryId() const
{
    return m_registryId;
}

void CreateImageAccelerationServiceRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CreateImageAccelerationServiceRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string CreateImageAccelerationServiceRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateImageAccelerationServiceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateImageAccelerationServiceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateImageAccelerationServiceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateImageAccelerationServiceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateImageAccelerationServiceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateImageAccelerationServiceRequest::GetStorageType() const
{
    return m_storageType;
}

void CreateImageAccelerationServiceRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CreateImageAccelerationServiceRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string CreateImageAccelerationServiceRequest::GetPGroupId() const
{
    return m_pGroupId;
}

void CreateImageAccelerationServiceRequest::SetPGroupId(const string& _pGroupId)
{
    m_pGroupId = _pGroupId;
    m_pGroupIdHasBeenSet = true;
}

bool CreateImageAccelerationServiceRequest::PGroupIdHasBeenSet() const
{
    return m_pGroupIdHasBeenSet;
}

string CreateImageAccelerationServiceRequest::GetZone() const
{
    return m_zone;
}

void CreateImageAccelerationServiceRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool CreateImageAccelerationServiceRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

TagSpecification CreateImageAccelerationServiceRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void CreateImageAccelerationServiceRequest::SetTagSpecification(const TagSpecification& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool CreateImageAccelerationServiceRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}


