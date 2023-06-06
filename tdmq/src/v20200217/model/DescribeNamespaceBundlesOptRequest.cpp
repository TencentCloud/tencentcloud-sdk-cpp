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

#include <tencentcloud/tdmq/v20200217/model/DescribeNamespaceBundlesOptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeNamespaceBundlesOptRequest::DescribeNamespaceBundlesOptRequest() :
    m_clusterNameHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_needMetricsHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_bundleHasBeenSet(false),
    m_ownerBrokerHasBeenSet(false)
{
}

string DescribeNamespaceBundlesOptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_needMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedMetrics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needMetrics, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_bundleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bundle";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundle.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerBrokerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerBroker";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ownerBroker.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeNamespaceBundlesOptRequest::GetClusterName() const
{
    return m_clusterName;
}

void DescribeNamespaceBundlesOptRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool DescribeNamespaceBundlesOptRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

string DescribeNamespaceBundlesOptRequest::GetTenantId() const
{
    return m_tenantId;
}

void DescribeNamespaceBundlesOptRequest::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool DescribeNamespaceBundlesOptRequest::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string DescribeNamespaceBundlesOptRequest::GetNamespaceName() const
{
    return m_namespaceName;
}

void DescribeNamespaceBundlesOptRequest::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool DescribeNamespaceBundlesOptRequest::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

bool DescribeNamespaceBundlesOptRequest::GetNeedMetrics() const
{
    return m_needMetrics;
}

void DescribeNamespaceBundlesOptRequest::SetNeedMetrics(const bool& _needMetrics)
{
    m_needMetrics = _needMetrics;
    m_needMetricsHasBeenSet = true;
}

bool DescribeNamespaceBundlesOptRequest::NeedMetricsHasBeenSet() const
{
    return m_needMetricsHasBeenSet;
}

int64_t DescribeNamespaceBundlesOptRequest::GetLimit() const
{
    return m_limit;
}

void DescribeNamespaceBundlesOptRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeNamespaceBundlesOptRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeNamespaceBundlesOptRequest::GetOffset() const
{
    return m_offset;
}

void DescribeNamespaceBundlesOptRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeNamespaceBundlesOptRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeNamespaceBundlesOptRequest::GetBundle() const
{
    return m_bundle;
}

void DescribeNamespaceBundlesOptRequest::SetBundle(const string& _bundle)
{
    m_bundle = _bundle;
    m_bundleHasBeenSet = true;
}

bool DescribeNamespaceBundlesOptRequest::BundleHasBeenSet() const
{
    return m_bundleHasBeenSet;
}

string DescribeNamespaceBundlesOptRequest::GetOwnerBroker() const
{
    return m_ownerBroker;
}

void DescribeNamespaceBundlesOptRequest::SetOwnerBroker(const string& _ownerBroker)
{
    m_ownerBroker = _ownerBroker;
    m_ownerBrokerHasBeenSet = true;
}

bool DescribeNamespaceBundlesOptRequest::OwnerBrokerHasBeenSet() const
{
    return m_ownerBrokerHasBeenSet;
}


