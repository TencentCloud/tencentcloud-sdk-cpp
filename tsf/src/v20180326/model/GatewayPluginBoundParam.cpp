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

#include <tencentcloud/tsf/v20180326/model/GatewayPluginBoundParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GatewayPluginBoundParam::GatewayPluginBoundParam() :
    m_pluginIdHasBeenSet(false),
    m_scopeTypeHasBeenSet(false),
    m_scopeValueHasBeenSet(false),
    m_microserviceIdHasBeenSet(false),
    m_gatewayInstanceIdHasBeenSet(false)
{
}

CoreInternalOutcome GatewayPluginBoundParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PluginId") && !value["PluginId"].IsNull())
    {
        if (!value["PluginId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayPluginBoundParam.PluginId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pluginId = string(value["PluginId"].GetString());
        m_pluginIdHasBeenSet = true;
    }

    if (value.HasMember("ScopeType") && !value["ScopeType"].IsNull())
    {
        if (!value["ScopeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayPluginBoundParam.ScopeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scopeType = string(value["ScopeType"].GetString());
        m_scopeTypeHasBeenSet = true;
    }

    if (value.HasMember("ScopeValue") && !value["ScopeValue"].IsNull())
    {
        if (!value["ScopeValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayPluginBoundParam.ScopeValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scopeValue = string(value["ScopeValue"].GetString());
        m_scopeValueHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceId") && !value["MicroserviceId"].IsNull())
    {
        if (!value["MicroserviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayPluginBoundParam.MicroserviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceId = string(value["MicroserviceId"].GetString());
        m_microserviceIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayInstanceId") && !value["GatewayInstanceId"].IsNull())
    {
        if (!value["GatewayInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayPluginBoundParam.GatewayInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayInstanceId = string(value["GatewayInstanceId"].GetString());
        m_gatewayInstanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayPluginBoundParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pluginIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pluginId.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scopeType.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scopeValue.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microserviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayInstanceId.c_str(), allocator).Move(), allocator);
    }

}


string GatewayPluginBoundParam::GetPluginId() const
{
    return m_pluginId;
}

void GatewayPluginBoundParam::SetPluginId(const string& _pluginId)
{
    m_pluginId = _pluginId;
    m_pluginIdHasBeenSet = true;
}

bool GatewayPluginBoundParam::PluginIdHasBeenSet() const
{
    return m_pluginIdHasBeenSet;
}

string GatewayPluginBoundParam::GetScopeType() const
{
    return m_scopeType;
}

void GatewayPluginBoundParam::SetScopeType(const string& _scopeType)
{
    m_scopeType = _scopeType;
    m_scopeTypeHasBeenSet = true;
}

bool GatewayPluginBoundParam::ScopeTypeHasBeenSet() const
{
    return m_scopeTypeHasBeenSet;
}

string GatewayPluginBoundParam::GetScopeValue() const
{
    return m_scopeValue;
}

void GatewayPluginBoundParam::SetScopeValue(const string& _scopeValue)
{
    m_scopeValue = _scopeValue;
    m_scopeValueHasBeenSet = true;
}

bool GatewayPluginBoundParam::ScopeValueHasBeenSet() const
{
    return m_scopeValueHasBeenSet;
}

string GatewayPluginBoundParam::GetMicroserviceId() const
{
    return m_microserviceId;
}

void GatewayPluginBoundParam::SetMicroserviceId(const string& _microserviceId)
{
    m_microserviceId = _microserviceId;
    m_microserviceIdHasBeenSet = true;
}

bool GatewayPluginBoundParam::MicroserviceIdHasBeenSet() const
{
    return m_microserviceIdHasBeenSet;
}

string GatewayPluginBoundParam::GetGatewayInstanceId() const
{
    return m_gatewayInstanceId;
}

void GatewayPluginBoundParam::SetGatewayInstanceId(const string& _gatewayInstanceId)
{
    m_gatewayInstanceId = _gatewayInstanceId;
    m_gatewayInstanceIdHasBeenSet = true;
}

bool GatewayPluginBoundParam::GatewayInstanceIdHasBeenSet() const
{
    return m_gatewayInstanceIdHasBeenSet;
}

