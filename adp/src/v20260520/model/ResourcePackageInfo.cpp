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

#include <tencentcloud/adp/v20260520/model/ResourcePackageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ResourcePackageInfo::ResourcePackageInfo() :
    m_packageTypeHasBeenSet(false),
    m_resourceTotalHasBeenSet(false),
    m_resourceUsageHasBeenSet(false),
    m_knowledgeCapacityHasBeenSet(false),
    m_knowledgeUsageHasBeenSet(false),
    m_resourceStatusHasBeenSet(false)
{
}

CoreInternalOutcome ResourcePackageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePackageInfo.PackageType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = value["PackageType"].GetUint64();
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("ResourceTotal") && !value["ResourceTotal"].IsNull())
    {
        if (!value["ResourceTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePackageInfo.ResourceTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceTotal = value["ResourceTotal"].GetInt64();
        m_resourceTotalHasBeenSet = true;
    }

    if (value.HasMember("ResourceUsage") && !value["ResourceUsage"].IsNull())
    {
        if (!value["ResourceUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePackageInfo.ResourceUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_resourceUsage = value["ResourceUsage"].GetDouble();
        m_resourceUsageHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeCapacity") && !value["KnowledgeCapacity"].IsNull())
    {
        if (!value["KnowledgeCapacity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePackageInfo.KnowledgeCapacity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeCapacity = value["KnowledgeCapacity"].GetDouble();
        m_knowledgeCapacityHasBeenSet = true;
    }

    if (value.HasMember("KnowledgeUsage") && !value["KnowledgeUsage"].IsNull())
    {
        if (!value["KnowledgeUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePackageInfo.KnowledgeUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_knowledgeUsage = value["KnowledgeUsage"].GetDouble();
        m_knowledgeUsageHasBeenSet = true;
    }

    if (value.HasMember("ResourceStatus") && !value["ResourceStatus"].IsNull())
    {
        if (!value["ResourceStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePackageInfo.ResourceStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceStatus = value["ResourceStatus"].GetUint64();
        m_resourceStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourcePackageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageType, allocator);
    }

    if (m_resourceTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceTotal, allocator);
    }

    if (m_resourceUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceUsage, allocator);
    }

    if (m_knowledgeCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_knowledgeCapacity, allocator);
    }

    if (m_knowledgeUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KnowledgeUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_knowledgeUsage, allocator);
    }

    if (m_resourceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceStatus, allocator);
    }

}


uint64_t ResourcePackageInfo::GetPackageType() const
{
    return m_packageType;
}

void ResourcePackageInfo::SetPackageType(const uint64_t& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool ResourcePackageInfo::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

int64_t ResourcePackageInfo::GetResourceTotal() const
{
    return m_resourceTotal;
}

void ResourcePackageInfo::SetResourceTotal(const int64_t& _resourceTotal)
{
    m_resourceTotal = _resourceTotal;
    m_resourceTotalHasBeenSet = true;
}

bool ResourcePackageInfo::ResourceTotalHasBeenSet() const
{
    return m_resourceTotalHasBeenSet;
}

double ResourcePackageInfo::GetResourceUsage() const
{
    return m_resourceUsage;
}

void ResourcePackageInfo::SetResourceUsage(const double& _resourceUsage)
{
    m_resourceUsage = _resourceUsage;
    m_resourceUsageHasBeenSet = true;
}

bool ResourcePackageInfo::ResourceUsageHasBeenSet() const
{
    return m_resourceUsageHasBeenSet;
}

double ResourcePackageInfo::GetKnowledgeCapacity() const
{
    return m_knowledgeCapacity;
}

void ResourcePackageInfo::SetKnowledgeCapacity(const double& _knowledgeCapacity)
{
    m_knowledgeCapacity = _knowledgeCapacity;
    m_knowledgeCapacityHasBeenSet = true;
}

bool ResourcePackageInfo::KnowledgeCapacityHasBeenSet() const
{
    return m_knowledgeCapacityHasBeenSet;
}

double ResourcePackageInfo::GetKnowledgeUsage() const
{
    return m_knowledgeUsage;
}

void ResourcePackageInfo::SetKnowledgeUsage(const double& _knowledgeUsage)
{
    m_knowledgeUsage = _knowledgeUsage;
    m_knowledgeUsageHasBeenSet = true;
}

bool ResourcePackageInfo::KnowledgeUsageHasBeenSet() const
{
    return m_knowledgeUsageHasBeenSet;
}

uint64_t ResourcePackageInfo::GetResourceStatus() const
{
    return m_resourceStatus;
}

void ResourcePackageInfo::SetResourceStatus(const uint64_t& _resourceStatus)
{
    m_resourceStatus = _resourceStatus;
    m_resourceStatusHasBeenSet = true;
}

bool ResourcePackageInfo::ResourceStatusHasBeenSet() const
{
    return m_resourceStatusHasBeenSet;
}

