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

#include <tencentcloud/tse/v20201207/model/CreateNativeGatewayServerGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CreateNativeGatewayServerGroupRequest::CreateNativeGatewayServerGroupRequest() :
    m_gatewayIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nodeConfigHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_internetMaxBandwidthOutHasBeenSet(false),
    m_internetConfigHasBeenSet(false)
{
}

string CreateNativeGatewayServerGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_internetMaxBandwidthOutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidthOut";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidthOut, allocator);
    }

    if (m_internetConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_internetConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateNativeGatewayServerGroupRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateNativeGatewayServerGroupRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateNativeGatewayServerGroupRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateNativeGatewayServerGroupRequest::GetName() const
{
    return m_name;
}

void CreateNativeGatewayServerGroupRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateNativeGatewayServerGroupRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

CloudNativeAPIGatewayNodeConfig CreateNativeGatewayServerGroupRequest::GetNodeConfig() const
{
    return m_nodeConfig;
}

void CreateNativeGatewayServerGroupRequest::SetNodeConfig(const CloudNativeAPIGatewayNodeConfig& _nodeConfig)
{
    m_nodeConfig = _nodeConfig;
    m_nodeConfigHasBeenSet = true;
}

bool CreateNativeGatewayServerGroupRequest::NodeConfigHasBeenSet() const
{
    return m_nodeConfigHasBeenSet;
}

string CreateNativeGatewayServerGroupRequest::GetSubnetId() const
{
    return m_subnetId;
}

void CreateNativeGatewayServerGroupRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool CreateNativeGatewayServerGroupRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string CreateNativeGatewayServerGroupRequest::GetDescription() const
{
    return m_description;
}

void CreateNativeGatewayServerGroupRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateNativeGatewayServerGroupRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t CreateNativeGatewayServerGroupRequest::GetInternetMaxBandwidthOut() const
{
    return m_internetMaxBandwidthOut;
}

void CreateNativeGatewayServerGroupRequest::SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut)
{
    m_internetMaxBandwidthOut = _internetMaxBandwidthOut;
    m_internetMaxBandwidthOutHasBeenSet = true;
}

bool CreateNativeGatewayServerGroupRequest::InternetMaxBandwidthOutHasBeenSet() const
{
    return m_internetMaxBandwidthOutHasBeenSet;
}

InternetConfig CreateNativeGatewayServerGroupRequest::GetInternetConfig() const
{
    return m_internetConfig;
}

void CreateNativeGatewayServerGroupRequest::SetInternetConfig(const InternetConfig& _internetConfig)
{
    m_internetConfig = _internetConfig;
    m_internetConfigHasBeenSet = true;
}

bool CreateNativeGatewayServerGroupRequest::InternetConfigHasBeenSet() const
{
    return m_internetConfigHasBeenSet;
}


