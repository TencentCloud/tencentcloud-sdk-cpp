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

#include <tencentcloud/clb/v20180317/model/CreateModelRouterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CreateModelRouterRequest::CreateModelRouterRequest() :
    m_modelRouterTypeHasBeenSet(false),
    m_budgetIdHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_clusterInfoHasBeenSet(false),
    m_modelRouterNameHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_portHasBeenSet(false),
    m_rateLimitConfigHasBeenSet(false),
    m_routerSettingHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

string CreateModelRouterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelRouterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelRouterType.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_budgetId.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_modelRouterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelRouterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelRouterName.c_str(), allocator).Move(), allocator);
    }

    if (m_networkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_networkType.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_rateLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_routerSettingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouterSetting";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_routerSetting.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schema.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateModelRouterRequest::GetModelRouterType() const
{
    return m_modelRouterType;
}

void CreateModelRouterRequest::SetModelRouterType(const string& _modelRouterType)
{
    m_modelRouterType = _modelRouterType;
    m_modelRouterTypeHasBeenSet = true;
}

bool CreateModelRouterRequest::ModelRouterTypeHasBeenSet() const
{
    return m_modelRouterTypeHasBeenSet;
}

string CreateModelRouterRequest::GetBudgetId() const
{
    return m_budgetId;
}

void CreateModelRouterRequest::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool CreateModelRouterRequest::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

string CreateModelRouterRequest::GetCertId() const
{
    return m_certId;
}

void CreateModelRouterRequest::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CreateModelRouterRequest::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

ClusterInfo CreateModelRouterRequest::GetClusterInfo() const
{
    return m_clusterInfo;
}

void CreateModelRouterRequest::SetClusterInfo(const ClusterInfo& _clusterInfo)
{
    m_clusterInfo = _clusterInfo;
    m_clusterInfoHasBeenSet = true;
}

bool CreateModelRouterRequest::ClusterInfoHasBeenSet() const
{
    return m_clusterInfoHasBeenSet;
}

string CreateModelRouterRequest::GetModelRouterName() const
{
    return m_modelRouterName;
}

void CreateModelRouterRequest::SetModelRouterName(const string& _modelRouterName)
{
    m_modelRouterName = _modelRouterName;
    m_modelRouterNameHasBeenSet = true;
}

bool CreateModelRouterRequest::ModelRouterNameHasBeenSet() const
{
    return m_modelRouterNameHasBeenSet;
}

string CreateModelRouterRequest::GetNetworkType() const
{
    return m_networkType;
}

void CreateModelRouterRequest::SetNetworkType(const string& _networkType)
{
    m_networkType = _networkType;
    m_networkTypeHasBeenSet = true;
}

bool CreateModelRouterRequest::NetworkTypeHasBeenSet() const
{
    return m_networkTypeHasBeenSet;
}

uint64_t CreateModelRouterRequest::GetPort() const
{
    return m_port;
}

void CreateModelRouterRequest::SetPort(const uint64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreateModelRouterRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

RateLimitConfigForModelRouter CreateModelRouterRequest::GetRateLimitConfig() const
{
    return m_rateLimitConfig;
}

void CreateModelRouterRequest::SetRateLimitConfig(const RateLimitConfigForModelRouter& _rateLimitConfig)
{
    m_rateLimitConfig = _rateLimitConfig;
    m_rateLimitConfigHasBeenSet = true;
}

bool CreateModelRouterRequest::RateLimitConfigHasBeenSet() const
{
    return m_rateLimitConfigHasBeenSet;
}

RouterSettingWithoutFallBack CreateModelRouterRequest::GetRouterSetting() const
{
    return m_routerSetting;
}

void CreateModelRouterRequest::SetRouterSetting(const RouterSettingWithoutFallBack& _routerSetting)
{
    m_routerSetting = _routerSetting;
    m_routerSettingHasBeenSet = true;
}

bool CreateModelRouterRequest::RouterSettingHasBeenSet() const
{
    return m_routerSettingHasBeenSet;
}

string CreateModelRouterRequest::GetSchema() const
{
    return m_schema;
}

void CreateModelRouterRequest::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool CreateModelRouterRequest::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string CreateModelRouterRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateModelRouterRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateModelRouterRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

vector<TagInfo> CreateModelRouterRequest::GetTags() const
{
    return m_tags;
}

void CreateModelRouterRequest::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateModelRouterRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateModelRouterRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateModelRouterRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateModelRouterRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}


