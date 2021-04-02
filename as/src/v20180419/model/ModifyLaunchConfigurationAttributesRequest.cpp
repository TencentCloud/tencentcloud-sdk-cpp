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

#include <tencentcloud/as/v20180419/model/ModifyLaunchConfigurationAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace rapidjson;
using namespace std;

ModifyLaunchConfigurationAttributesRequest::ModifyLaunchConfigurationAttributesRequest() :
    m_launchConfigurationIdHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_instanceTypesCheckPolicyHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false),
    m_diskTypePolicyHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDisksHasBeenSet(false)
{
}

string ModifyLaunchConfigurationAttributesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_launchConfigurationIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LaunchConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_launchConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceTypes.begin(); itr != m_instanceTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceTypesCheckPolicyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceTypesCheckPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceTypesCheckPolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_launchConfigurationNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LaunchConfigurationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_launchConfigurationName.c_str(), allocator).Move(), allocator);
    }

    if (m_userDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_userData.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_internetAccessibleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceMarketOptionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceMarketOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_instanceMarketOptions.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_diskTypePolicyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DiskTypePolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_diskTypePolicy.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dataDisksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataDisks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataDisks.begin(); itr != m_dataDisks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLaunchConfigurationAttributesRequest::GetLaunchConfigurationId() const
{
    return m_launchConfigurationId;
}

void ModifyLaunchConfigurationAttributesRequest::SetLaunchConfigurationId(const string& _launchConfigurationId)
{
    m_launchConfigurationId = _launchConfigurationId;
    m_launchConfigurationIdHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::LaunchConfigurationIdHasBeenSet() const
{
    return m_launchConfigurationIdHasBeenSet;
}

string ModifyLaunchConfigurationAttributesRequest::GetImageId() const
{
    return m_imageId;
}

void ModifyLaunchConfigurationAttributesRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

vector<string> ModifyLaunchConfigurationAttributesRequest::GetInstanceTypes() const
{
    return m_instanceTypes;
}

void ModifyLaunchConfigurationAttributesRequest::SetInstanceTypes(const vector<string>& _instanceTypes)
{
    m_instanceTypes = _instanceTypes;
    m_instanceTypesHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::InstanceTypesHasBeenSet() const
{
    return m_instanceTypesHasBeenSet;
}

string ModifyLaunchConfigurationAttributesRequest::GetInstanceTypesCheckPolicy() const
{
    return m_instanceTypesCheckPolicy;
}

void ModifyLaunchConfigurationAttributesRequest::SetInstanceTypesCheckPolicy(const string& _instanceTypesCheckPolicy)
{
    m_instanceTypesCheckPolicy = _instanceTypesCheckPolicy;
    m_instanceTypesCheckPolicyHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::InstanceTypesCheckPolicyHasBeenSet() const
{
    return m_instanceTypesCheckPolicyHasBeenSet;
}

string ModifyLaunchConfigurationAttributesRequest::GetLaunchConfigurationName() const
{
    return m_launchConfigurationName;
}

void ModifyLaunchConfigurationAttributesRequest::SetLaunchConfigurationName(const string& _launchConfigurationName)
{
    m_launchConfigurationName = _launchConfigurationName;
    m_launchConfigurationNameHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::LaunchConfigurationNameHasBeenSet() const
{
    return m_launchConfigurationNameHasBeenSet;
}

string ModifyLaunchConfigurationAttributesRequest::GetUserData() const
{
    return m_userData;
}

void ModifyLaunchConfigurationAttributesRequest::SetUserData(const string& _userData)
{
    m_userData = _userData;
    m_userDataHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::UserDataHasBeenSet() const
{
    return m_userDataHasBeenSet;
}

vector<string> ModifyLaunchConfigurationAttributesRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void ModifyLaunchConfigurationAttributesRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

InternetAccessible ModifyLaunchConfigurationAttributesRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void ModifyLaunchConfigurationAttributesRequest::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

string ModifyLaunchConfigurationAttributesRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void ModifyLaunchConfigurationAttributesRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

InstanceChargePrepaid ModifyLaunchConfigurationAttributesRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void ModifyLaunchConfigurationAttributesRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

InstanceMarketOptionsRequest ModifyLaunchConfigurationAttributesRequest::GetInstanceMarketOptions() const
{
    return m_instanceMarketOptions;
}

void ModifyLaunchConfigurationAttributesRequest::SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions)
{
    m_instanceMarketOptions = _instanceMarketOptions;
    m_instanceMarketOptionsHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::InstanceMarketOptionsHasBeenSet() const
{
    return m_instanceMarketOptionsHasBeenSet;
}

string ModifyLaunchConfigurationAttributesRequest::GetDiskTypePolicy() const
{
    return m_diskTypePolicy;
}

void ModifyLaunchConfigurationAttributesRequest::SetDiskTypePolicy(const string& _diskTypePolicy)
{
    m_diskTypePolicy = _diskTypePolicy;
    m_diskTypePolicyHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::DiskTypePolicyHasBeenSet() const
{
    return m_diskTypePolicyHasBeenSet;
}

SystemDisk ModifyLaunchConfigurationAttributesRequest::GetSystemDisk() const
{
    return m_systemDisk;
}

void ModifyLaunchConfigurationAttributesRequest::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<DataDisk> ModifyLaunchConfigurationAttributesRequest::GetDataDisks() const
{
    return m_dataDisks;
}

void ModifyLaunchConfigurationAttributesRequest::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool ModifyLaunchConfigurationAttributesRequest::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}


