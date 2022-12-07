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

#include <tencentcloud/tke/v20180525/model/CreateClusterReleaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CreateClusterReleaseRequest::CreateClusterReleaseRequest() :
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

string CreateClusterReleaseRequest::ToJsonString() const
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


string CreateClusterReleaseRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateClusterReleaseRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateClusterReleaseRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateClusterReleaseRequest::GetName() const
{
    return m_name;
}

void CreateClusterReleaseRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateClusterReleaseRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateClusterReleaseRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateClusterReleaseRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateClusterReleaseRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string CreateClusterReleaseRequest::GetChart() const
{
    return m_chart;
}

void CreateClusterReleaseRequest::SetChart(const string& _chart)
{
    m_chart = _chart;
    m_chartHasBeenSet = true;
}

bool CreateClusterReleaseRequest::ChartHasBeenSet() const
{
    return m_chartHasBeenSet;
}

ReleaseValues CreateClusterReleaseRequest::GetValues() const
{
    return m_values;
}

void CreateClusterReleaseRequest::SetValues(const ReleaseValues& _values)
{
    m_values = _values;
    m_valuesHasBeenSet = true;
}

bool CreateClusterReleaseRequest::ValuesHasBeenSet() const
{
    return m_valuesHasBeenSet;
}

string CreateClusterReleaseRequest::GetChartFrom() const
{
    return m_chartFrom;
}

void CreateClusterReleaseRequest::SetChartFrom(const string& _chartFrom)
{
    m_chartFrom = _chartFrom;
    m_chartFromHasBeenSet = true;
}

bool CreateClusterReleaseRequest::ChartFromHasBeenSet() const
{
    return m_chartFromHasBeenSet;
}

string CreateClusterReleaseRequest::GetChartVersion() const
{
    return m_chartVersion;
}

void CreateClusterReleaseRequest::SetChartVersion(const string& _chartVersion)
{
    m_chartVersion = _chartVersion;
    m_chartVersionHasBeenSet = true;
}

bool CreateClusterReleaseRequest::ChartVersionHasBeenSet() const
{
    return m_chartVersionHasBeenSet;
}

string CreateClusterReleaseRequest::GetChartRepoURL() const
{
    return m_chartRepoURL;
}

void CreateClusterReleaseRequest::SetChartRepoURL(const string& _chartRepoURL)
{
    m_chartRepoURL = _chartRepoURL;
    m_chartRepoURLHasBeenSet = true;
}

bool CreateClusterReleaseRequest::ChartRepoURLHasBeenSet() const
{
    return m_chartRepoURLHasBeenSet;
}

string CreateClusterReleaseRequest::GetUsername() const
{
    return m_username;
}

void CreateClusterReleaseRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool CreateClusterReleaseRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string CreateClusterReleaseRequest::GetPassword() const
{
    return m_password;
}

void CreateClusterReleaseRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool CreateClusterReleaseRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

string CreateClusterReleaseRequest::GetChartNamespace() const
{
    return m_chartNamespace;
}

void CreateClusterReleaseRequest::SetChartNamespace(const string& _chartNamespace)
{
    m_chartNamespace = _chartNamespace;
    m_chartNamespaceHasBeenSet = true;
}

bool CreateClusterReleaseRequest::ChartNamespaceHasBeenSet() const
{
    return m_chartNamespaceHasBeenSet;
}

string CreateClusterReleaseRequest::GetClusterType() const
{
    return m_clusterType;
}

void CreateClusterReleaseRequest::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool CreateClusterReleaseRequest::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}


