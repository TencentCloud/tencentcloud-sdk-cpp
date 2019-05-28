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

#include <tencentcloud/cvm/v20170312/model/InquiryPriceRunInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace rapidjson;
using namespace std;

InquiryPriceRunInstancesRequest::InquiryPriceRunInstancesRequest() :
    m_placementHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_dataDisksHasBeenSet(false),
    m_virtualPrivateCloudHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_enhancedServiceHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false)
{
}

string InquiryPriceRunInstancesRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_placementHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Placement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_placement.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageId.c_str(), allocator).Move(), allocator);
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

    if (m_instanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceType.c_str(), allocator).Move(), allocator);
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

    if (m_virtualPrivateCloudHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "VirtualPrivateCloud";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_virtualPrivateCloud.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_internetAccessibleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_enhancedServiceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnhancedService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_enhancedService.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_hostNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HostName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_hostName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSpecification.begin(); itr != m_tagSpecification.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_instanceMarketOptionsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceMarketOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_instanceMarketOptions.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Placement InquiryPriceRunInstancesRequest::GetPlacement() const
{
    return m_placement;
}

void InquiryPriceRunInstancesRequest::SetPlacement(const Placement& _placement)
{
    m_placement = _placement;
    m_placementHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::PlacementHasBeenSet() const
{
    return m_placementHasBeenSet;
}

string InquiryPriceRunInstancesRequest::GetImageId() const
{
    return m_imageId;
}

void InquiryPriceRunInstancesRequest::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string InquiryPriceRunInstancesRequest::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void InquiryPriceRunInstancesRequest::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

InstanceChargePrepaid InquiryPriceRunInstancesRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void InquiryPriceRunInstancesRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

string InquiryPriceRunInstancesRequest::GetInstanceType() const
{
    return m_instanceType;
}

void InquiryPriceRunInstancesRequest::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

SystemDisk InquiryPriceRunInstancesRequest::GetSystemDisk() const
{
    return m_systemDisk;
}

void InquiryPriceRunInstancesRequest::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<DataDisk> InquiryPriceRunInstancesRequest::GetDataDisks() const
{
    return m_dataDisks;
}

void InquiryPriceRunInstancesRequest::SetDataDisks(const vector<DataDisk>& _dataDisks)
{
    m_dataDisks = _dataDisks;
    m_dataDisksHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::DataDisksHasBeenSet() const
{
    return m_dataDisksHasBeenSet;
}

VirtualPrivateCloud InquiryPriceRunInstancesRequest::GetVirtualPrivateCloud() const
{
    return m_virtualPrivateCloud;
}

void InquiryPriceRunInstancesRequest::SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud)
{
    m_virtualPrivateCloud = _virtualPrivateCloud;
    m_virtualPrivateCloudHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::VirtualPrivateCloudHasBeenSet() const
{
    return m_virtualPrivateCloudHasBeenSet;
}

InternetAccessible InquiryPriceRunInstancesRequest::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void InquiryPriceRunInstancesRequest::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

int64_t InquiryPriceRunInstancesRequest::GetInstanceCount() const
{
    return m_instanceCount;
}

void InquiryPriceRunInstancesRequest::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string InquiryPriceRunInstancesRequest::GetInstanceName() const
{
    return m_instanceName;
}

void InquiryPriceRunInstancesRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

LoginSettings InquiryPriceRunInstancesRequest::GetLoginSettings() const
{
    return m_loginSettings;
}

void InquiryPriceRunInstancesRequest::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

vector<string> InquiryPriceRunInstancesRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void InquiryPriceRunInstancesRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

EnhancedService InquiryPriceRunInstancesRequest::GetEnhancedService() const
{
    return m_enhancedService;
}

void InquiryPriceRunInstancesRequest::SetEnhancedService(const EnhancedService& _enhancedService)
{
    m_enhancedService = _enhancedService;
    m_enhancedServiceHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::EnhancedServiceHasBeenSet() const
{
    return m_enhancedServiceHasBeenSet;
}

string InquiryPriceRunInstancesRequest::GetClientToken() const
{
    return m_clientToken;
}

void InquiryPriceRunInstancesRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

string InquiryPriceRunInstancesRequest::GetHostName() const
{
    return m_hostName;
}

void InquiryPriceRunInstancesRequest::SetHostName(const string& _hostName)
{
    m_hostName = _hostName;
    m_hostNameHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::HostNameHasBeenSet() const
{
    return m_hostNameHasBeenSet;
}

vector<TagSpecification> InquiryPriceRunInstancesRequest::GetTagSpecification() const
{
    return m_tagSpecification;
}

void InquiryPriceRunInstancesRequest::SetTagSpecification(const vector<TagSpecification>& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

InstanceMarketOptionsRequest InquiryPriceRunInstancesRequest::GetInstanceMarketOptions() const
{
    return m_instanceMarketOptions;
}

void InquiryPriceRunInstancesRequest::SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions)
{
    m_instanceMarketOptions = _instanceMarketOptions;
    m_instanceMarketOptionsHasBeenSet = true;
}

bool InquiryPriceRunInstancesRequest::InstanceMarketOptionsHasBeenSet() const
{
    return m_instanceMarketOptionsHasBeenSet;
}


