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

#include <tencentcloud/bh/v20230418/model/ModifyResourceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ModifyResourceRequest::ModifyResourceRequest() :
    m_resourceIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resourceEditionHasBeenSet(false),
    m_resourceNodeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_packageBandwidthHasBeenSet(false),
    m_packageNodeHasBeenSet(false),
    m_logDeliveryHasBeenSet(false),
    m_iOAResourceHasBeenSet(false),
    m_packageIOAUserCountHasBeenSet(false),
    m_packageIOABandwidthHasBeenSet(false)
{
}

string ModifyResourceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceEditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceEdition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceEdition.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_resourceNode, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_packageBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageBandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_packageBandwidth, allocator);
    }

    if (m_packageNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageNode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_packageNode, allocator);
    }

    if (m_logDeliveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDelivery";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logDelivery, allocator);
    }

    if (m_iOAResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOAResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iOAResource, allocator);
    }

    if (m_packageIOAUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageIOAUserCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_packageIOAUserCount, allocator);
    }

    if (m_packageIOABandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageIOABandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_packageIOABandwidth, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyResourceRequest::GetResourceId() const
{
    return m_resourceId;
}

void ModifyResourceRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ModifyResourceRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string ModifyResourceRequest::GetStatus() const
{
    return m_status;
}

void ModifyResourceRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyResourceRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyResourceRequest::GetResourceEdition() const
{
    return m_resourceEdition;
}

void ModifyResourceRequest::SetResourceEdition(const string& _resourceEdition)
{
    m_resourceEdition = _resourceEdition;
    m_resourceEditionHasBeenSet = true;
}

bool ModifyResourceRequest::ResourceEditionHasBeenSet() const
{
    return m_resourceEditionHasBeenSet;
}

int64_t ModifyResourceRequest::GetResourceNode() const
{
    return m_resourceNode;
}

void ModifyResourceRequest::SetResourceNode(const int64_t& _resourceNode)
{
    m_resourceNode = _resourceNode;
    m_resourceNodeHasBeenSet = true;
}

bool ModifyResourceRequest::ResourceNodeHasBeenSet() const
{
    return m_resourceNodeHasBeenSet;
}

int64_t ModifyResourceRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void ModifyResourceRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool ModifyResourceRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t ModifyResourceRequest::GetPackageBandwidth() const
{
    return m_packageBandwidth;
}

void ModifyResourceRequest::SetPackageBandwidth(const int64_t& _packageBandwidth)
{
    m_packageBandwidth = _packageBandwidth;
    m_packageBandwidthHasBeenSet = true;
}

bool ModifyResourceRequest::PackageBandwidthHasBeenSet() const
{
    return m_packageBandwidthHasBeenSet;
}

int64_t ModifyResourceRequest::GetPackageNode() const
{
    return m_packageNode;
}

void ModifyResourceRequest::SetPackageNode(const int64_t& _packageNode)
{
    m_packageNode = _packageNode;
    m_packageNodeHasBeenSet = true;
}

bool ModifyResourceRequest::PackageNodeHasBeenSet() const
{
    return m_packageNodeHasBeenSet;
}

int64_t ModifyResourceRequest::GetLogDelivery() const
{
    return m_logDelivery;
}

void ModifyResourceRequest::SetLogDelivery(const int64_t& _logDelivery)
{
    m_logDelivery = _logDelivery;
    m_logDeliveryHasBeenSet = true;
}

bool ModifyResourceRequest::LogDeliveryHasBeenSet() const
{
    return m_logDeliveryHasBeenSet;
}

uint64_t ModifyResourceRequest::GetIOAResource() const
{
    return m_iOAResource;
}

void ModifyResourceRequest::SetIOAResource(const uint64_t& _iOAResource)
{
    m_iOAResource = _iOAResource;
    m_iOAResourceHasBeenSet = true;
}

bool ModifyResourceRequest::IOAResourceHasBeenSet() const
{
    return m_iOAResourceHasBeenSet;
}

uint64_t ModifyResourceRequest::GetPackageIOAUserCount() const
{
    return m_packageIOAUserCount;
}

void ModifyResourceRequest::SetPackageIOAUserCount(const uint64_t& _packageIOAUserCount)
{
    m_packageIOAUserCount = _packageIOAUserCount;
    m_packageIOAUserCountHasBeenSet = true;
}

bool ModifyResourceRequest::PackageIOAUserCountHasBeenSet() const
{
    return m_packageIOAUserCountHasBeenSet;
}

uint64_t ModifyResourceRequest::GetPackageIOABandwidth() const
{
    return m_packageIOABandwidth;
}

void ModifyResourceRequest::SetPackageIOABandwidth(const uint64_t& _packageIOABandwidth)
{
    m_packageIOABandwidth = _packageIOABandwidth;
    m_packageIOABandwidthHasBeenSet = true;
}

bool ModifyResourceRequest::PackageIOABandwidthHasBeenSet() const
{
    return m_packageIOABandwidthHasBeenSet;
}


