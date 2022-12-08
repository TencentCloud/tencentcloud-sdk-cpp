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

#include <tencentcloud/tke/v20180525/model/UpgradeClusterReleaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

UpgradeClusterReleaseRequest::UpgradeClusterReleaseRequest() :
    m_clusterIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_chartHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_chartFromHasBeenSet(false),
    m_chartVersionHasBeenSet(false),
    m_chartRepoURLHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_chartNamespaceHasBeenSet(false),
    m_clusterTypeHasBeenSet(false)
{
}

string UpgradeClusterReleaseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_chartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Chart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chart.c_str(), allocator).Move(), allocator);
    }

    if (m_valuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Values";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_values.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_chartFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chartFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_chartVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chartVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_chartRepoURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartRepoURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chartRepoURL.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_chartNamespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChartNamespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chartNamespace.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeClusterReleaseRequest::GetClusterId() const
{
    return m_clusterId;
}

void UpgradeClusterReleaseRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool UpgradeClusterReleaseRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string UpgradeClusterReleaseRequest::GetName() const
{
    return m_name;
}

void UpgradeClusterReleaseRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpgradeClusterReleaseRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpgradeClusterReleaseRequest::GetNamespace() const
{
    return m_namespace;
}

void UpgradeClusterReleaseRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool UpgradeClusterReleaseRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string UpgradeClusterReleaseRequest::GetChart() const
{
    return m_chart;
}

void UpgradeClusterReleaseRequest::SetChart(const string& _chart)
{
    m_chart = _chart;
    m_chartHasBeenSet = true;
}

bool UpgradeClusterReleaseRequest::ChartHasBeenSet() const
{
    return m_chartHasBeenSet;
}

ReleaseValues UpgradeClusterReleaseRequest::GetValues() const
{
    return m_values;
}

void UpgradeClusterReleaseRequest::SetValues(const ReleaseValues& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool UpgradeClusterReleaseRequest::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

string UpgradeClusterReleaseRequest::GetChartFrom() const
{
    return m_chartFrom;
}

void UpgradeClusterReleaseRequest::SetChartFrom(const string& _chartFrom)
{
    m_chartFrom = _chartFrom;
    m_chartFromHasBeenSet = true;
}

bool UpgradeClusterReleaseRequest::ChartFromHasBeenSet() const
{
    return m_chartFromHasBeenSet;
}

string UpgradeClusterReleaseRequest::GetChartVersion() const
{
    return m_chartVersion;
}

void UpgradeClusterReleaseRequest::SetChartVersion(const string& _chartVersion)
{
    m_chartVersion = _chartVersion;
    m_chartVersionHasBeenSet = true;
}

bool UpgradeClusterReleaseRequest::ChartVersionHasBeenSet() const
{
    return m_chartVersionHasBeenSet;
}

string UpgradeClusterReleaseRequest::GetChartRepoURL() const
{
    return m_chartRepoURL;
}

void UpgradeClusterReleaseRequest::SetChartRepoURL(const string& _chartRepoURL)
{
    m_chartRepoURL = _chartRepoURL;
    m_chartRepoURLHasBeenSet = true;
}

bool UpgradeClusterReleaseRequest::ChartRepoURLHasBeenSet() const
{
    return m_chartRepoURLHasBeenSet;
}

string UpgradeClusterReleaseRequest::GetUsername() const
{
    return m_username;
}

void UpgradeClusterReleaseRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool UpgradeClusterReleaseRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string UpgradeClusterReleaseRequest::GetPassword() const
{
    return m_password;
}

void UpgradeClusterReleaseRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool UpgradeClusterReleaseRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string UpgradeClusterReleaseRequest::GetChartNamespace() const
{
    return m_chartNamespace;
}

void UpgradeClusterReleaseRequest::SetChartNamespace(const string& _chartNamespace)
{
    m_chartNamespace = _chartNamespace;
    m_chartNamespaceHasBeenSet = true;
}

bool UpgradeClusterReleaseRequest::ChartNamespaceHasBeenSet() const
{
    return m_chartNamespaceHasBeenSet;
}

string UpgradeClusterReleaseRequest::GetClusterType() const
{
    return m_clusterType;
}

void UpgradeClusterReleaseRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool UpgradeClusterReleaseRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}


