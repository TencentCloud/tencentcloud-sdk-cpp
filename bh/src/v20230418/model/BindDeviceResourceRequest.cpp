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

#include <tencentcloud/bh/v20230418/model/BindDeviceResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

BindDeviceResourceRequest::BindDeviceResourceRequest() :
    m_deviceIdSetHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_manageDimensionHasBeenSet(false),
    m_manageAccountIdHasBeenSet(false),
    m_manageAccountHasBeenSet(false),
    m_manageKubeconfigHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_workloadHasBeenSet(false)
{
}

string BindDeviceResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceIdSet.begin(); itr != m_deviceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_manageDimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManageDimension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_manageDimension, allocator);
    }

    if (m_manageAccountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManageAccountId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_manageAccountId, allocator);
    }

    if (m_manageAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManageAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_manageAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_manageKubeconfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManageKubeconfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_manageKubeconfig.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Workload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workload.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> BindDeviceResourceRequest::GetDeviceIdSet() const
{
    return m_deviceIdSet;
}

void BindDeviceResourceRequest::SetDeviceIdSet(const vector<uint64_t>& _deviceIdSet)
{
    m_deviceIdSet = _deviceIdSet;
    m_deviceIdSetHasBeenSet = true;
}

bool BindDeviceResourceRequest::DeviceIdSetHasBeenSet() const
{
    return m_deviceIdSetHasBeenSet;
}

string BindDeviceResourceRequest::GetResourceId() const
{
    return m_resourceId;
}

void BindDeviceResourceRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool BindDeviceResourceRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string BindDeviceResourceRequest::GetDomainId() const
{
    return m_domainId;
}

void BindDeviceResourceRequest::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool BindDeviceResourceRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

uint64_t BindDeviceResourceRequest::GetManageDimension() const
{
    return m_manageDimension;
}

void BindDeviceResourceRequest::SetManageDimension(const uint64_t& _manageDimension)
{
    m_manageDimension = _manageDimension;
    m_manageDimensionHasBeenSet = true;
}

bool BindDeviceResourceRequest::ManageDimensionHasBeenSet() const
{
    return m_manageDimensionHasBeenSet;
}

int64_t BindDeviceResourceRequest::GetManageAccountId() const
{
    return m_manageAccountId;
}

void BindDeviceResourceRequest::SetManageAccountId(const int64_t& _manageAccountId)
{
    m_manageAccountId = _manageAccountId;
    m_manageAccountIdHasBeenSet = true;
}

bool BindDeviceResourceRequest::ManageAccountIdHasBeenSet() const
{
    return m_manageAccountIdHasBeenSet;
}

string BindDeviceResourceRequest::GetManageAccount() const
{
    return m_manageAccount;
}

void BindDeviceResourceRequest::SetManageAccount(const string& _manageAccount)
{
    m_manageAccount = _manageAccount;
    m_manageAccountHasBeenSet = true;
}

bool BindDeviceResourceRequest::ManageAccountHasBeenSet() const
{
    return m_manageAccountHasBeenSet;
}

string BindDeviceResourceRequest::GetManageKubeconfig() const
{
    return m_manageKubeconfig;
}

void BindDeviceResourceRequest::SetManageKubeconfig(const string& _manageKubeconfig)
{
    m_manageKubeconfig = _manageKubeconfig;
    m_manageKubeconfigHasBeenSet = true;
}

bool BindDeviceResourceRequest::ManageKubeconfigHasBeenSet() const
{
    return m_manageKubeconfigHasBeenSet;
}

string BindDeviceResourceRequest::GetNamespace() const
{
    return m_namespace;
}

void BindDeviceResourceRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool BindDeviceResourceRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string BindDeviceResourceRequest::GetWorkload() const
{
    return m_workload;
}

void BindDeviceResourceRequest::SetWorkload(const string& _workload)
{
    m_workload = _workload;
    m_workloadHasBeenSet = true;
}

bool BindDeviceResourceRequest::WorkloadHasBeenSet() const
{
    return m_workloadHasBeenSet;
}


