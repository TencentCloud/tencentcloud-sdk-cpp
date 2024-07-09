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

#include <tencentcloud/tse/v20201207/model/CreateCloudNativeAPIGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateCloudNativeAPIGatewayRequest::CreateCloudNativeAPIGatewayRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_gatewayVersionHasBeenSet(false),
    m_nodeConfigHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_enableClsHasBeenSet(false),
    m_featureVersionHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_engineRegionHasBeenSet(false),
    m_ingressClassNameHasBeenSet(false),
    m_tradeTypeHasBeenSet(false),
    m_internetConfigHasBeenSet(false),
    m_promIdHasBeenSet(false)
{
}

string CreateCloudNativeAPIGatewayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_vpcConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

    if (m_enableClsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableCls";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableCls, allocator);
    }

    if (m_featureVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeatureVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_featureVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_engineRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_ingressClassNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IngressClassName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ingressClassName.c_str(), allocator).Move(), allocator);
    }

    if (m_tradeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TradeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tradeType, allocator);
    }

    if (m_internetConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_promIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_promId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCloudNativeAPIGatewayRequest::GetName() const
{
    return m_name;
}

void CreateCloudNativeAPIGatewayRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateCloudNativeAPIGatewayRequest::GetType() const
{
    return m_type;
}

void CreateCloudNativeAPIGatewayRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateCloudNativeAPIGatewayRequest::GetGatewayVersion() const
{
    return m_gatewayVersion;
}

void CreateCloudNativeAPIGatewayRequest::SetGatewayVersion(const string& _gatewayVersion)
{
    m_gatewayVersion = _gatewayVersion;
    m_gatewayVersionHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::GatewayVersionHasBeenSet() const
{
    return m_gatewayVersionHasBeenSet;
}

CloudNativeAPIGatewayNodeConfig CreateCloudNativeAPIGatewayRequest::GetNodeConfig() const
{
    return m_nodeConfig;
}

void CreateCloudNativeAPIGatewayRequest::SetNodeConfig(const CloudNativeAPIGatewayNodeConfig& _nodeConfig)
{
    m_nodeConfig = _nodeConfig;
    m_nodeConfigHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::NodeConfigHasBeenSet() const
{
    return m_nodeConfigHasBeenSet;
}

CloudNativeAPIGatewayVpcConfig CreateCloudNativeAPIGatewayRequest::GetVpcConfig() const
{
    return m_vpcConfig;
}

void CreateCloudNativeAPIGatewayRequest::SetVpcConfig(const CloudNativeAPIGatewayVpcConfig& _vpcConfig)
{
    m_vpcConfig = _vpcConfig;
    m_vpcConfigHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::VpcConfigHasBeenSet() const
{
    return m_vpcConfigHasBeenSet;
}

string CreateCloudNativeAPIGatewayRequest::GetDescription() const
{
    return m_description;
}

void CreateCloudNativeAPIGatewayRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<InstanceTagInfo> CreateCloudNativeAPIGatewayRequest::GetTags() const
{
    return m_tags;
}

void CreateCloudNativeAPIGatewayRequest::SetTags(const vector<InstanceTagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CreateCloudNativeAPIGatewayRequest::GetEnableCls() const
{
    return m_enableCls;
}

void CreateCloudNativeAPIGatewayRequest::SetEnableCls(const bool& _enableCls)
{
    m_enableCls = _enableCls;
    m_enableClsHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::EnableClsHasBeenSet() const
{
    return m_enableClsHasBeenSet;
}

string CreateCloudNativeAPIGatewayRequest::GetFeatureVersion() const
{
    return m_featureVersion;
}

void CreateCloudNativeAPIGatewayRequest::SetFeatureVersion(const string& _featureVersion)
{
    m_featureVersion = _featureVersion;
    m_featureVersionHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::FeatureVersionHasBeenSet() const
{
    return m_featureVersionHasBeenSet;
}

uint64_t CreateCloudNativeAPIGatewayRequest::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void CreateCloudNativeAPIGatewayRequest::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

string CreateCloudNativeAPIGatewayRequest::GetEngineRegion() const
{
    return m_engineRegion;
}

void CreateCloudNativeAPIGatewayRequest::SetEngineRegion(const string& _engineRegion)
{
    m_engineRegion = _engineRegion;
    m_engineRegionHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::EngineRegionHasBeenSet() const
{
    return m_engineRegionHasBeenSet;
}

string CreateCloudNativeAPIGatewayRequest::GetIngressClassName() const
{
    return m_ingressClassName;
}

void CreateCloudNativeAPIGatewayRequest::SetIngressClassName(const string& _ingressClassName)
{
    m_ingressClassName = _ingressClassName;
    m_ingressClassNameHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::IngressClassNameHasBeenSet() const
{
    return m_ingressClassNameHasBeenSet;
}

int64_t CreateCloudNativeAPIGatewayRequest::GetTradeType() const
{
    return m_tradeType;
}

void CreateCloudNativeAPIGatewayRequest::SetTradeType(const int64_t& _tradeType)
{
    m_tradeType = _tradeType;
    m_tradeTypeHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::TradeTypeHasBeenSet() const
{
    return m_tradeTypeHasBeenSet;
}

InternetConfig CreateCloudNativeAPIGatewayRequest::GetInternetConfig() const
{
    return m_internetConfig;
}

void CreateCloudNativeAPIGatewayRequest::SetInternetConfig(const InternetConfig& _internetConfig)
{
    m_internetConfig = _internetConfig;
    m_internetConfigHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::InternetConfigHasBeenSet() const
{
    return m_internetConfigHasBeenSet;
}

string CreateCloudNativeAPIGatewayRequest::GetPromId() const
{
    return m_promId;
}

void CreateCloudNativeAPIGatewayRequest::SetPromId(const string& _promId)
{
    m_promId = _promId;
    m_promIdHasBeenSet = true;
}

bool CreateCloudNativeAPIGatewayRequest::PromIdHasBeenSet() const
{
    return m_promIdHasBeenSet;
}


