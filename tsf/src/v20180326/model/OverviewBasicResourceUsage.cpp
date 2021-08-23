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

#include <tencentcloud/tsf/v20180326/model/OverviewBasicResourceUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

OverviewBasicResourceUsage::OverviewBasicResourceUsage() :
    m_applicationCountHasBeenSet(false),
    m_namespaceCountHasBeenSet(false),
    m_groupCountHasBeenSet(false),
    m_packageSpaceUsedHasBeenSet(false),
    m_consulInstanceCountHasBeenSet(false)
{
}

CoreInternalOutcome OverviewBasicResourceUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationCount") && !value["ApplicationCount"].IsNull())
    {
        if (!value["ApplicationCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBasicResourceUsage.ApplicationCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_applicationCount = value["ApplicationCount"].GetInt64();
        m_applicationCountHasBeenSet = true;
    }

    if (value.HasMember("NamespaceCount") && !value["NamespaceCount"].IsNull())
    {
        if (!value["NamespaceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBasicResourceUsage.NamespaceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceCount = value["NamespaceCount"].GetInt64();
        m_namespaceCountHasBeenSet = true;
    }

    if (value.HasMember("GroupCount") && !value["GroupCount"].IsNull())
    {
        if (!value["GroupCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBasicResourceUsage.GroupCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupCount = value["GroupCount"].GetInt64();
        m_groupCountHasBeenSet = true;
    }

    if (value.HasMember("PackageSpaceUsed") && !value["PackageSpaceUsed"].IsNull())
    {
        if (!value["PackageSpaceUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBasicResourceUsage.PackageSpaceUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_packageSpaceUsed = value["PackageSpaceUsed"].GetInt64();
        m_packageSpaceUsedHasBeenSet = true;
    }

    if (value.HasMember("ConsulInstanceCount") && !value["ConsulInstanceCount"].IsNull())
    {
        if (!value["ConsulInstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewBasicResourceUsage.ConsulInstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consulInstanceCount = value["ConsulInstanceCount"].GetInt64();
        m_consulInstanceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewBasicResourceUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applicationCount, allocator);
    }

    if (m_namespaceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_namespaceCount, allocator);
    }

    if (m_groupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupCount, allocator);
    }

    if (m_packageSpaceUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageSpaceUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_packageSpaceUsed, allocator);
    }

    if (m_consulInstanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsulInstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consulInstanceCount, allocator);
    }

}


int64_t OverviewBasicResourceUsage::GetApplicationCount() const
{
    return m_applicationCount;
}

void OverviewBasicResourceUsage::SetApplicationCount(const int64_t& _applicationCount)
{
    m_applicationCount = _applicationCount;
    m_applicationCountHasBeenSet = true;
}

bool OverviewBasicResourceUsage::ApplicationCountHasBeenSet() const
{
    return m_applicationCountHasBeenSet;
}

int64_t OverviewBasicResourceUsage::GetNamespaceCount() const
{
    return m_namespaceCount;
}

void OverviewBasicResourceUsage::SetNamespaceCount(const int64_t& _namespaceCount)
{
    m_namespaceCount = _namespaceCount;
    m_namespaceCountHasBeenSet = true;
}

bool OverviewBasicResourceUsage::NamespaceCountHasBeenSet() const
{
    return m_namespaceCountHasBeenSet;
}

int64_t OverviewBasicResourceUsage::GetGroupCount() const
{
    return m_groupCount;
}

void OverviewBasicResourceUsage::SetGroupCount(const int64_t& _groupCount)
{
    m_groupCount = _groupCount;
    m_groupCountHasBeenSet = true;
}

bool OverviewBasicResourceUsage::GroupCountHasBeenSet() const
{
    return m_groupCountHasBeenSet;
}

int64_t OverviewBasicResourceUsage::GetPackageSpaceUsed() const
{
    return m_packageSpaceUsed;
}

void OverviewBasicResourceUsage::SetPackageSpaceUsed(const int64_t& _packageSpaceUsed)
{
    m_packageSpaceUsed = _packageSpaceUsed;
    m_packageSpaceUsedHasBeenSet = true;
}

bool OverviewBasicResourceUsage::PackageSpaceUsedHasBeenSet() const
{
    return m_packageSpaceUsedHasBeenSet;
}

int64_t OverviewBasicResourceUsage::GetConsulInstanceCount() const
{
    return m_consulInstanceCount;
}

void OverviewBasicResourceUsage::SetConsulInstanceCount(const int64_t& _consulInstanceCount)
{
    m_consulInstanceCount = _consulInstanceCount;
    m_consulInstanceCountHasBeenSet = true;
}

bool OverviewBasicResourceUsage::ConsulInstanceCountHasBeenSet() const
{
    return m_consulInstanceCountHasBeenSet;
}

