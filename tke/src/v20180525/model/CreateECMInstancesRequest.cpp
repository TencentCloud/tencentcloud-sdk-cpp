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

#include <tencentcloud/tke/v20180525/model/CreateECMInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreateECMInstancesRequest::CreateECMInstancesRequest() :
    m_clusterIDHasBeenSet(false),
    m_moduleIdHasBeenSet(false),
    m_zoneInstanceCountISPSetHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_enhancedServiceHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_externalHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
}

string CreateECMInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterID.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_moduleId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneInstanceCountISPSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneInstanceCountISPSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_zoneInstanceCountISPSet.begin(); itr != m_zoneInstanceCountISPSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_enhancedServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnhancedService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enhancedService.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_userDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_externalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "External";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_external.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateECMInstancesRequest::GetClusterID() const
{
    return m_clusterID;
}

void CreateECMInstancesRequest::SetClusterID(const string& _clusterID)
{
    m_clusterID = _clusterID;
    m_clusterIDHasBeenSet = true;
}

bool CreateECMInstancesRequest::ClusterIDHasBeenSet() const
{
    return m_clusterIDHasBeenSet;
}

string CreateECMInstancesRequest::GetModuleId() const
{
    return m_moduleId;
}

void CreateECMInstancesRequest::SetModuleId(const string& _moduleId)
{
    m_moduleId = _moduleId;
    m_moduleIdHasBeenSet = true;
}

bool CreateECMInstancesRequest::ModuleIdHasBeenSet() const
{
    return m_moduleIdHasBeenSet;
}

vector<ECMZoneInstanceCountISP> CreateECMInstancesRequest::GetZoneInstanceCountISPSet() const
{
    return m_zoneInstanceCountISPSet;
}

void CreateECMInstancesRequest::SetZoneInstanceCountISPSet(const vector<ECMZoneInstanceCountISP>& _zoneInstanceCountISPSet)
{
    m_zoneInstanceCountISPSet = _zoneInstanceCountISPSet;
    m_zoneInstanceCountISPSetHasBeenSet = true;
}

bool CreateECMInstancesRequest::ZoneInstanceCountISPSetHasBeenSet() const
{
    return m_zoneInstanceCountISPSetHasBeenSet;
}

string CreateECMInstancesRequest::GetPassword() const
{
    return m_password;
}

void CreateECMInstancesRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateECMInstancesRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

int64_t CreateECMInstancesRequest::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void CreateECMInstancesRequest::SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool CreateECMInstancesRequest::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string CreateECMInstancesRequest::GetImageId() const
{
    return m_imageId;
}

void CreateECMInstancesRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool CreateECMInstancesRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string CreateECMInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void CreateECMInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CreateECMInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CreateECMInstancesRequest::GetHostName() const
{
    return m_hostName;
}

void CreateECMInstancesRequest::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool CreateECMInstancesRequest::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

ECMEnhancedService CreateECMInstancesRequest::GetEnhancedService() const
{
    return m_enhancedService;
}

void CreateECMInstancesRequest::SetEnhancedService(const ECMEnhancedService& _enhancedService)
{
    m_enhancedService = _enhancedService;
    m_enhancedServiceHasBeenSet = true;
}

bool CreateECMInstancesRequest::EnhancedServiceHasBeenSet() const
{
    return m_enhancedServiceHasBeenSet;
}

string CreateECMInstancesRequest::GetUserData() const
{
    return m_userData;
}

void CreateECMInstancesRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool CreateECMInstancesRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

string CreateECMInstancesRequest::GetExternal() const
{
    return m_external;
}

void CreateECMInstancesRequest::SetExternal(const string& _external)
{
    m_external = _external;
    m_externalHasBeenSet = true;
}

bool CreateECMInstancesRequest::ExternalHasBeenSet() const
{
    return m_externalHasBeenSet;
}

vector<string> CreateECMInstancesRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void CreateECMInstancesRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool CreateECMInstancesRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}


