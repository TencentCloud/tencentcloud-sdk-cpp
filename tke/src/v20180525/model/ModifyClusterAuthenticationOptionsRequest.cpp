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

#include <tencentcloud/tke/v20180525/model/ModifyClusterAuthenticationOptionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ModifyClusterAuthenticationOptionsRequest::ModifyClusterAuthenticationOptionsRequest() :
    m_clusterIdHasBeenSet(false),
    m_serviceAccountsHasBeenSet(false),
    m_oIDCConfigHasBeenSet(false)
{
}

string ModifyClusterAuthenticationOptionsRequest::ToJsonString() const
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

    if (m_serviceAccountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceAccounts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceAccounts.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_oIDCConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OIDCConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oIDCConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyClusterAuthenticationOptionsRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyClusterAuthenticationOptionsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyClusterAuthenticationOptionsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

ServiceAccountAuthenticationOptions ModifyClusterAuthenticationOptionsRequest::GetServiceAccounts() const
{
    return m_serviceAccounts;
}

void ModifyClusterAuthenticationOptionsRequest::SetServiceAccounts(const ServiceAccountAuthenticationOptions& _serviceAccounts)
{
    m_serviceAccounts = _serviceAccounts;
    m_serviceAccountsHasBeenSet = true;
}

bool ModifyClusterAuthenticationOptionsRequest::ServiceAccountsHasBeenSet() const
{
    return m_serviceAccountsHasBeenSet;
}

OIDCConfigAuthenticationOptions ModifyClusterAuthenticationOptionsRequest::GetOIDCConfig() const
{
    return m_oIDCConfig;
}

void ModifyClusterAuthenticationOptionsRequest::SetOIDCConfig(const OIDCConfigAuthenticationOptions& _oIDCConfig)
{
    m_oIDCConfig = _oIDCConfig;
    m_oIDCConfigHasBeenSet = true;
}

bool ModifyClusterAuthenticationOptionsRequest::OIDCConfigHasBeenSet() const
{
    return m_oIDCConfigHasBeenSet;
}


