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

#include <tencentcloud/emr/v20190103/model/AddNodeResourceConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

AddNodeResourceConfigRequest::AddNodeResourceConfigRequest() :
    m_instanceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_multipleResourceConfigHasBeenSet(false),
    m_resourceBaseTypeHasBeenSet(false),
    m_computeResourceIdHasBeenSet(false),
    m_hardwareResourceTypeHasBeenSet(false)
{
}

string AddNodeResourceConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isDefault.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_multipleResourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultipleResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multipleResourceConfig.begin(); itr != m_multipleResourceConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_resourceBaseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceBaseType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceBaseType.c_str(), allocator).Move(), allocator);
    }

    if (m_computeResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_computeResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_hardwareResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HardwareResourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hardwareResourceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddNodeResourceConfigRequest::GetInstanceId() const
{
    return m_instanceId;
}

void AddNodeResourceConfigRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AddNodeResourceConfigRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AddNodeResourceConfigRequest::GetResourceType() const
{
    return m_resourceType;
}

void AddNodeResourceConfigRequest::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool AddNodeResourceConfigRequest::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

Resource AddNodeResourceConfigRequest::GetResourceConfig() const
{
    return m_resourceConfig;
}

void AddNodeResourceConfigRequest::SetResourceConfig(const Resource& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool AddNodeResourceConfigRequest::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

int64_t AddNodeResourceConfigRequest::GetPayMode() const
{
    return m_payMode;
}

void AddNodeResourceConfigRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool AddNodeResourceConfigRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

string AddNodeResourceConfigRequest::GetIsDefault() const
{
    return m_isDefault;
}

void AddNodeResourceConfigRequest::SetIsDefault(const string& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool AddNodeResourceConfigRequest::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

int64_t AddNodeResourceConfigRequest::GetZoneId() const
{
    return m_zoneId;
}

void AddNodeResourceConfigRequest::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool AddNodeResourceConfigRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<Resource> AddNodeResourceConfigRequest::GetMultipleResourceConfig() const
{
    return m_multipleResourceConfig;
}

void AddNodeResourceConfigRequest::SetMultipleResourceConfig(const vector<Resource>& _multipleResourceConfig)
{
    m_multipleResourceConfig = _multipleResourceConfig;
    m_multipleResourceConfigHasBeenSet = true;
}

bool AddNodeResourceConfigRequest::MultipleResourceConfigHasBeenSet() const
{
    return m_multipleResourceConfigHasBeenSet;
}

string AddNodeResourceConfigRequest::GetResourceBaseType() const
{
    return m_resourceBaseType;
}

void AddNodeResourceConfigRequest::SetResourceBaseType(const string& _resourceBaseType)
{
    m_resourceBaseType = _resourceBaseType;
    m_resourceBaseTypeHasBeenSet = true;
}

bool AddNodeResourceConfigRequest::ResourceBaseTypeHasBeenSet() const
{
    return m_resourceBaseTypeHasBeenSet;
}

string AddNodeResourceConfigRequest::GetComputeResourceId() const
{
    return m_computeResourceId;
}

void AddNodeResourceConfigRequest::SetComputeResourceId(const string& _computeResourceId)
{
    m_computeResourceId = _computeResourceId;
    m_computeResourceIdHasBeenSet = true;
}

bool AddNodeResourceConfigRequest::ComputeResourceIdHasBeenSet() const
{
    return m_computeResourceIdHasBeenSet;
}

string AddNodeResourceConfigRequest::GetHardwareResourceType() const
{
    return m_hardwareResourceType;
}

void AddNodeResourceConfigRequest::SetHardwareResourceType(const string& _hardwareResourceType)
{
    m_hardwareResourceType = _hardwareResourceType;
    m_hardwareResourceTypeHasBeenSet = true;
}

bool AddNodeResourceConfigRequest::HardwareResourceTypeHasBeenSet() const
{
    return m_hardwareResourceTypeHasBeenSet;
}


