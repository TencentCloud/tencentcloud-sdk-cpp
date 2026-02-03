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

#include <tencentcloud/tcb/v20180608/model/CreateCloudBaseGWAPIRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CreateCloudBaseGWAPIRequest::CreateCloudBaseGWAPIRequest() :
    m_serviceIdHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_aPIIdHasBeenSet(false),
    m_customHasBeenSet(false),
    m_authSwitchHasBeenSet(false),
    m_enableRegionHasBeenSet(false),
    m_enableUnionHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_accessTypesHasBeenSet(false),
    m_isShortPathHasBeenSet(false),
    m_pathTransmissionHasBeenSet(false),
    m_enableCheckAcrossDomainHasBeenSet(false),
    m_staticFileDirectoryHasBeenSet(false)
{
}

string CreateCloudBaseGWAPIRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_aPIIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aPIId.c_str(), allocator).Move(), allocator);
    }

    if (m_customHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Custom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_custom.c_str(), allocator).Move(), allocator);
    }

    if (m_authSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthSwitch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_authSwitch, allocator);
    }

    if (m_enableRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableRegion, allocator);
    }

    if (m_enableUnionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableUnion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableUnion, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_accessTypes.begin(); itr != m_accessTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isShortPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShortPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isShortPath, allocator);
    }

    if (m_pathTransmissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathTransmission";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pathTransmission, allocator);
    }

    if (m_enableCheckAcrossDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCheckAcrossDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCheckAcrossDomain, allocator);
    }

    if (m_staticFileDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticFileDirectory";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_staticFileDirectory.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudBaseGWAPIRequest::GetServiceId() const
{
    return m_serviceId;
}

void CreateCloudBaseGWAPIRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string CreateCloudBaseGWAPIRequest::GetPath() const
{
    return m_path;
}

void CreateCloudBaseGWAPIRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

uint64_t CreateCloudBaseGWAPIRequest::GetType() const
{
    return m_type;
}

void CreateCloudBaseGWAPIRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateCloudBaseGWAPIRequest::GetName() const
{
    return m_name;
}

void CreateCloudBaseGWAPIRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCloudBaseGWAPIRequest::GetAPIId() const
{
    return m_aPIId;
}

void CreateCloudBaseGWAPIRequest::SetAPIId(const string& _aPIId)
{
    m_aPIId = _aPIId;
    m_aPIIdHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::APIIdHasBeenSet() const
{
    return m_aPIIdHasBeenSet;
}

string CreateCloudBaseGWAPIRequest::GetCustom() const
{
    return m_custom;
}

void CreateCloudBaseGWAPIRequest::SetCustom(const string& _custom)
{
    m_custom = _custom;
    m_customHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::CustomHasBeenSet() const
{
    return m_customHasBeenSet;
}

uint64_t CreateCloudBaseGWAPIRequest::GetAuthSwitch() const
{
    return m_authSwitch;
}

void CreateCloudBaseGWAPIRequest::SetAuthSwitch(const uint64_t& _authSwitch)
{
    m_authSwitch = _authSwitch;
    m_authSwitchHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::AuthSwitchHasBeenSet() const
{
    return m_authSwitchHasBeenSet;
}

bool CreateCloudBaseGWAPIRequest::GetEnableRegion() const
{
    return m_enableRegion;
}

void CreateCloudBaseGWAPIRequest::SetEnableRegion(const bool& _enableRegion)
{
    m_enableRegion = _enableRegion;
    m_enableRegionHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::EnableRegionHasBeenSet() const
{
    return m_enableRegionHasBeenSet;
}

bool CreateCloudBaseGWAPIRequest::GetEnableUnion() const
{
    return m_enableUnion;
}

void CreateCloudBaseGWAPIRequest::SetEnableUnion(const bool& _enableUnion)
{
    m_enableUnion = _enableUnion;
    m_enableUnionHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::EnableUnionHasBeenSet() const
{
    return m_enableUnionHasBeenSet;
}

string CreateCloudBaseGWAPIRequest::GetDomain() const
{
    return m_domain;
}

void CreateCloudBaseGWAPIRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<string> CreateCloudBaseGWAPIRequest::GetAccessTypes() const
{
    return m_accessTypes;
}

void CreateCloudBaseGWAPIRequest::SetAccessTypes(const vector<string>& _accessTypes)
{
    m_accessTypes = _accessTypes;
    m_accessTypesHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::AccessTypesHasBeenSet() const
{
    return m_accessTypesHasBeenSet;
}

bool CreateCloudBaseGWAPIRequest::GetIsShortPath() const
{
    return m_isShortPath;
}

void CreateCloudBaseGWAPIRequest::SetIsShortPath(const bool& _isShortPath)
{
    m_isShortPath = _isShortPath;
    m_isShortPathHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::IsShortPathHasBeenSet() const
{
    return m_isShortPathHasBeenSet;
}

uint64_t CreateCloudBaseGWAPIRequest::GetPathTransmission() const
{
    return m_pathTransmission;
}

void CreateCloudBaseGWAPIRequest::SetPathTransmission(const uint64_t& _pathTransmission)
{
    m_pathTransmission = _pathTransmission;
    m_pathTransmissionHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::PathTransmissionHasBeenSet() const
{
    return m_pathTransmissionHasBeenSet;
}

uint64_t CreateCloudBaseGWAPIRequest::GetEnableCheckAcrossDomain() const
{
    return m_enableCheckAcrossDomain;
}

void CreateCloudBaseGWAPIRequest::SetEnableCheckAcrossDomain(const uint64_t& _enableCheckAcrossDomain)
{
    m_enableCheckAcrossDomain = _enableCheckAcrossDomain;
    m_enableCheckAcrossDomainHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::EnableCheckAcrossDomainHasBeenSet() const
{
    return m_enableCheckAcrossDomainHasBeenSet;
}

string CreateCloudBaseGWAPIRequest::GetStaticFileDirectory() const
{
    return m_staticFileDirectory;
}

void CreateCloudBaseGWAPIRequest::SetStaticFileDirectory(const string& _staticFileDirectory)
{
    m_staticFileDirectory = _staticFileDirectory;
    m_staticFileDirectoryHasBeenSet = true;
}

bool CreateCloudBaseGWAPIRequest::StaticFileDirectoryHasBeenSet() const
{
    return m_staticFileDirectoryHasBeenSet;
}


