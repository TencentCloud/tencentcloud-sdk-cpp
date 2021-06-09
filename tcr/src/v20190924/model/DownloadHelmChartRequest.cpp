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

#include <tencentcloud/tcr/v20190924/model/DownloadHelmChartRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

DownloadHelmChartRequest::DownloadHelmChartRequest() :
    m_registryIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_chartNameHasBeenSet(false),
    m_chartVersionHasBeenSet(false)
{
}

string DownloadHelmChartRequest::ToJsonString() const
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


string DownloadHelmChartRequest::GetRegistryId() const
{
    return m_registryId;
}

void DownloadHelmChartRequest::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool DownloadHelmChartRequest::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string DownloadHelmChartRequest::GetNamespaceName() const
{
    return m_namespaceName;
}

void DownloadHelmChartRequest::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool DownloadHelmChartRequest::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

string DownloadHelmChartRequest::GetChartName() const
{
    return m_chartName;
}

void DownloadHelmChartRequest::SetChartName(const string& _chartName)
{
    m_chartName = _chartName;
    m_chartNameHasBeenSet = true;
}

bool DownloadHelmChartRequest::ChartNameHasBeenSet() const
{
    return m_chartNameHasBeenSet;
}

string DownloadHelmChartRequest::GetChartVersion() const
{
    return m_chartVersion;
}

void DownloadHelmChartRequest::SetChartVersion(const string& _chartVersion)
{
    m_chartVersion = _chartVersion;
    m_chartVersionHasBeenSet = true;
}

bool DownloadHelmChartRequest::ChartVersionHasBeenSet() const
{
    return m_chartVersionHasBeenSet;
}


