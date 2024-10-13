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

#include <tencentcloud/dsgc/v20190723/model/CreateDSPASelfBuildMetaResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CreateDSPASelfBuildMetaResourceRequest::CreateDSPASelfBuildMetaResourceRequest() :
    m_dspaIdHasBeenSet(false),
    m_metaTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceUniqueVpcIdHasBeenSet(false),
    m_resourceUniqueSubnetIdHasBeenSet(false),
    m_resourceAccessTypeHasBeenSet(false),
    m_resourceVipHasBeenSet(false),
    m_resourceVPortHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceValueHasBeenSet(false),
    m_authRangeHasBeenSet(false)
{
}

string CreateDSPASelfBuildMetaResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_metaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metaType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUniqueVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUniqueVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceUniqueVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceUniqueSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUniqueSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceUniqueSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceAccessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceAccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceAccessType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceVip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceVip.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceVPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceVPort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceVPort, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceValue.c_str(), allocator).Move(), allocator);
    }

    if (m_authRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_authRange.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDSPASelfBuildMetaResourceRequest::GetDspaId() const
{
    return m_dspaId;
}

void CreateDSPASelfBuildMetaResourceRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string CreateDSPASelfBuildMetaResourceRequest::GetMetaType() const
{
    return m_metaType;
}

void CreateDSPASelfBuildMetaResourceRequest::SetMetaType(const string& _metaType)
{
    m_metaType = _metaType;
    m_metaTypeHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::MetaTypeHasBeenSet() const
{
    return m_metaTypeHasBeenSet;
}

string CreateDSPASelfBuildMetaResourceRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void CreateDSPASelfBuildMetaResourceRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string CreateDSPASelfBuildMetaResourceRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreateDSPASelfBuildMetaResourceRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CreateDSPASelfBuildMetaResourceRequest::GetResourceUniqueVpcId() const
{
    return m_resourceUniqueVpcId;
}

void CreateDSPASelfBuildMetaResourceRequest::SetResourceUniqueVpcId(const string& _resourceUniqueVpcId)
{
    m_resourceUniqueVpcId = _resourceUniqueVpcId;
    m_resourceUniqueVpcIdHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::ResourceUniqueVpcIdHasBeenSet() const
{
    return m_resourceUniqueVpcIdHasBeenSet;
}

string CreateDSPASelfBuildMetaResourceRequest::GetResourceUniqueSubnetId() const
{
    return m_resourceUniqueSubnetId;
}

void CreateDSPASelfBuildMetaResourceRequest::SetResourceUniqueSubnetId(const string& _resourceUniqueSubnetId)
{
    m_resourceUniqueSubnetId = _resourceUniqueSubnetId;
    m_resourceUniqueSubnetIdHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::ResourceUniqueSubnetIdHasBeenSet() const
{
    return m_resourceUniqueSubnetIdHasBeenSet;
}

string CreateDSPASelfBuildMetaResourceRequest::GetResourceAccessType() const
{
    return m_resourceAccessType;
}

void CreateDSPASelfBuildMetaResourceRequest::SetResourceAccessType(const string& _resourceAccessType)
{
    m_resourceAccessType = _resourceAccessType;
    m_resourceAccessTypeHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::ResourceAccessTypeHasBeenSet() const
{
    return m_resourceAccessTypeHasBeenSet;
}

string CreateDSPASelfBuildMetaResourceRequest::GetResourceVip() const
{
    return m_resourceVip;
}

void CreateDSPASelfBuildMetaResourceRequest::SetResourceVip(const string& _resourceVip)
{
    m_resourceVip = _resourceVip;
    m_resourceVipHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::ResourceVipHasBeenSet() const
{
    return m_resourceVipHasBeenSet;
}

uint64_t CreateDSPASelfBuildMetaResourceRequest::GetResourceVPort() const
{
    return m_resourceVPort;
}

void CreateDSPASelfBuildMetaResourceRequest::SetResourceVPort(const uint64_t& _resourceVPort)
{
    m_resourceVPort = _resourceVPort;
    m_resourceVPortHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::ResourceVPortHasBeenSet() const
{
    return m_resourceVPortHasBeenSet;
}

string CreateDSPASelfBuildMetaResourceRequest::GetUserName() const
{
    return m_userName;
}

void CreateDSPASelfBuildMetaResourceRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CreateDSPASelfBuildMetaResourceRequest::GetPassword() const
{
    return m_password;
}

void CreateDSPASelfBuildMetaResourceRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateDSPASelfBuildMetaResourceRequest::GetResourceName() const
{
    return m_resourceName;
}

void CreateDSPASelfBuildMetaResourceRequest::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

string CreateDSPASelfBuildMetaResourceRequest::GetInstanceType() const
{
    return m_instanceType;
}

void CreateDSPASelfBuildMetaResourceRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CreateDSPASelfBuildMetaResourceRequest::GetInstanceValue() const
{
    return m_instanceValue;
}

void CreateDSPASelfBuildMetaResourceRequest::SetInstanceValue(const string& _instanceValue)
{
    m_instanceValue = _instanceValue;
    m_instanceValueHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::InstanceValueHasBeenSet() const
{
    return m_instanceValueHasBeenSet;
}

string CreateDSPASelfBuildMetaResourceRequest::GetAuthRange() const
{
    return m_authRange;
}

void CreateDSPASelfBuildMetaResourceRequest::SetAuthRange(const string& _authRange)
{
    m_authRange = _authRange;
    m_authRangeHasBeenSet = true;
}

bool CreateDSPASelfBuildMetaResourceRequest::AuthRangeHasBeenSet() const
{
    return m_authRangeHasBeenSet;
}


