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

#include <tencentcloud/dlc/v20210125/model/ResourceSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ResourceSpec::ResourceSpec() :
    m_resourceTypeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_billingItemHasBeenSet(false),
    m_specDescHasBeenSet(false),
    m_specHasBeenSet(false),
    m_gpuTypeHasBeenSet(false),
    m_maxCardPerNodeHasBeenSet(false)
{
}

CoreInternalOutcome ResourceSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("BillingItem") && !value["BillingItem"].IsNull())
    {
        if (!value["BillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.BillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItem = string(value["BillingItem"].GetString());
        m_billingItemHasBeenSet = true;
    }

    if (value.HasMember("SpecDesc") && !value["SpecDesc"].IsNull())
    {
        if (!value["SpecDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.SpecDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specDesc = string(value["SpecDesc"].GetString());
        m_specDescHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("GpuType") && !value["GpuType"].IsNull())
    {
        if (!value["GpuType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.GpuType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gpuType = string(value["GpuType"].GetString());
        m_gpuTypeHasBeenSet = true;
    }

    if (value.HasMember("MaxCardPerNode") && !value["MaxCardPerNode"].IsNull())
    {
        if (!value["MaxCardPerNode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceSpec.MaxCardPerNode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxCardPerNode = value["MaxCardPerNode"].GetInt64();
        m_maxCardPerNodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_billingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItem.c_str(), allocator).Move(), allocator);
    }

    if (m_specDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_gpuTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GpuType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gpuType.c_str(), allocator).Move(), allocator);
    }

    if (m_maxCardPerNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCardPerNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCardPerNode, allocator);
    }

}


string ResourceSpec::GetResourceType() const
{
    return m_resourceType;
}

void ResourceSpec::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool ResourceSpec::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string ResourceSpec::GetInstanceType() const
{
    return m_instanceType;
}

void ResourceSpec::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ResourceSpec::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ResourceSpec::GetBillingItem() const
{
    return m_billingItem;
}

void ResourceSpec::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool ResourceSpec::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

string ResourceSpec::GetSpecDesc() const
{
    return m_specDesc;
}

void ResourceSpec::SetSpecDesc(const string& _specDesc)
{
    m_specDesc = _specDesc;
    m_specDescHasBeenSet = true;
}

bool ResourceSpec::SpecDescHasBeenSet() const
{
    return m_specDescHasBeenSet;
}

string ResourceSpec::GetSpec() const
{
    return m_spec;
}

void ResourceSpec::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool ResourceSpec::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

string ResourceSpec::GetGpuType() const
{
    return m_gpuType;
}

void ResourceSpec::SetGpuType(const string& _gpuType)
{
    m_gpuType = _gpuType;
    m_gpuTypeHasBeenSet = true;
}

bool ResourceSpec::GpuTypeHasBeenSet() const
{
    return m_gpuTypeHasBeenSet;
}

int64_t ResourceSpec::GetMaxCardPerNode() const
{
    return m_maxCardPerNode;
}

void ResourceSpec::SetMaxCardPerNode(const int64_t& _maxCardPerNode)
{
    m_maxCardPerNode = _maxCardPerNode;
    m_maxCardPerNodeHasBeenSet = true;
}

bool ResourceSpec::MaxCardPerNodeHasBeenSet() const
{
    return m_maxCardPerNodeHasBeenSet;
}

