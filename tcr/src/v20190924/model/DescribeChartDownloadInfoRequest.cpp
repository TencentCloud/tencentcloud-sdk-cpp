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

#include <tencentcloud/tcr/v20190924/model/DescribeChartDownloadInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DescribeChartDownloadInfoRequest::DescribeChartDownloadInfoRequest() :
    m_registryIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_chartNameHasBeenSet(false),
    m_chartVersionHasBeenSet(false)
{
}

string DescribeChartDownloadInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_chartNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chartName.c_str(), allocator).Move(), allocator);
    }

    if (m_chartVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chartVersion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeChartDownloadInfoRequest::GetRegistryId() const
{
    return m_registryId;
}

void DescribeChartDownloadInfoRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DescribeChartDownloadInfoRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string DescribeChartDownloadInfoRequest::GetNamespaceName() const
{
    return m_namespaceName;
}

void DescribeChartDownloadInfoRequest::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool DescribeChartDownloadInfoRequest::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string DescribeChartDownloadInfoRequest::GetChartName() const
{
    return m_chartName;
}

void DescribeChartDownloadInfoRequest::SetChartName(const string& _chartName)
{
    m_chartName = _chartName;
    m_chartNameHasBeenSet = true;
}

bool DescribeChartDownloadInfoRequest::ChartNameHasBeenSet() const
{
    return m_chartNameHasBeenSet;
}

string DescribeChartDownloadInfoRequest::GetChartVersion() const
{
    return m_chartVersion;
}

void DescribeChartDownloadInfoRequest::SetChartVersion(const string& _chartVersion)
{
    m_chartVersion = _chartVersion;
    m_chartVersionHasBeenSet = true;
}

bool DescribeChartDownloadInfoRequest::ChartVersionHasBeenSet() const
{
    return m_chartVersionHasBeenSet;
}


