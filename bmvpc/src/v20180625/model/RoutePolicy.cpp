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

#include <tencentcloud/bmvpc/v20180625/model/RoutePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

RoutePolicy::RoutePolicy() :
    m_destinationCidrBlockHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_routeDescriptionHasBeenSet(false),
    m_routePolicyIdHasBeenSet(false),
    m_routePolicyTypeHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

CoreInternalOutcome RoutePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DestinationCidrBlock") && !value["DestinationCidrBlock"].IsNull())
    {
        if (!value["DestinationCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.DestinationCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidrBlock = string(value["DestinationCidrBlock"].GetString());
        m_destinationCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("GatewayType") && !value["GatewayType"].IsNull())
    {
        if (!value["GatewayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.GatewayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayType = string(value["GatewayType"].GetString());
        m_gatewayTypeHasBeenSet = true;
    }

    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("RouteDescription") && !value["RouteDescription"].IsNull())
    {
        if (!value["RouteDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.RouteDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeDescription = string(value["RouteDescription"].GetString());
        m_routeDescriptionHasBeenSet = true;
    }

    if (value.HasMember("RoutePolicyId") && !value["RoutePolicyId"].IsNull())
    {
        if (!value["RoutePolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.RoutePolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routePolicyId = string(value["RoutePolicyId"].GetString());
        m_routePolicyIdHasBeenSet = true;
    }

    if (value.HasMember("RoutePolicyType") && !value["RoutePolicyType"].IsNull())
    {
        if (!value["RoutePolicyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.RoutePolicyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routePolicyType = string(value["RoutePolicyType"].GetString());
        m_routePolicyTypeHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RoutePolicy.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoutePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_destinationCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayType.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_routePolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routePolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_routePolicyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoutePolicyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routePolicyType.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

}


string RoutePolicy::GetDestinationCidrBlock() const
{
    return m_destinationCidrBlock;
}

void RoutePolicy::SetDestinationCidrBlock(const string& _destinationCidrBlock)
{
    m_destinationCidrBlock = _destinationCidrBlock;
    m_destinationCidrBlockHasBeenSet = true;
}

bool RoutePolicy::DestinationCidrBlockHasBeenSet() const
{
    return m_destinationCidrBlockHasBeenSet;
}

string RoutePolicy::GetGatewayType() const
{
    return m_gatewayType;
}

void RoutePolicy::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool RoutePolicy::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

string RoutePolicy::GetGatewayId() const
{
    return m_gatewayId;
}

void RoutePolicy::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool RoutePolicy::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string RoutePolicy::GetRouteDescription() const
{
    return m_routeDescription;
}

void RoutePolicy::SetRouteDescription(const string& _routeDescription)
{
    m_routeDescription = _routeDescription;
    m_routeDescriptionHasBeenSet = true;
}

bool RoutePolicy::RouteDescriptionHasBeenSet() const
{
    return m_routeDescriptionHasBeenSet;
}

string RoutePolicy::GetRoutePolicyId() const
{
    return m_routePolicyId;
}

void RoutePolicy::SetRoutePolicyId(const string& _routePolicyId)
{
    m_routePolicyId = _routePolicyId;
    m_routePolicyIdHasBeenSet = true;
}

bool RoutePolicy::RoutePolicyIdHasBeenSet() const
{
    return m_routePolicyIdHasBeenSet;
}

string RoutePolicy::GetRoutePolicyType() const
{
    return m_routePolicyType;
}

void RoutePolicy::SetRoutePolicyType(const string& _routePolicyType)
{
    m_routePolicyType = _routePolicyType;
    m_routePolicyTypeHasBeenSet = true;
}

bool RoutePolicy::RoutePolicyTypeHasBeenSet() const
{
    return m_routePolicyTypeHasBeenSet;
}

bool RoutePolicy::GetEnabled() const
{
    return m_enabled;
}

void RoutePolicy::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool RoutePolicy::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

