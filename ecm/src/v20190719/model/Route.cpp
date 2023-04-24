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

#include <tencentcloud/ecm/v20190719/model/Route.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

Route::Route() :
    m_destinationCidrBlockHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_routeItemIdHasBeenSet(false),
    m_routeDescriptionHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_routeTypeHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false)
{
}

CoreInternalOutcome Route::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DestinationCidrBlock") && !value["DestinationCidrBlock"].IsNull())
    {
        if (!value["DestinationCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Route.DestinationCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidrBlock = string(value["DestinationCidrBlock"].GetString());
        m_destinationCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("GatewayType") && !value["GatewayType"].IsNull())
    {
        if (!value["GatewayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Route.GatewayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayType = string(value["GatewayType"].GetString());
        m_gatewayTypeHasBeenSet = true;
    }

    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Route.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("RouteItemId") && !value["RouteItemId"].IsNull())
    {
        if (!value["RouteItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Route.RouteItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeItemId = string(value["RouteItemId"].GetString());
        m_routeItemIdHasBeenSet = true;
    }

    if (value.HasMember("RouteDescription") && !value["RouteDescription"].IsNull())
    {
        if (!value["RouteDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Route.RouteDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeDescription = string(value["RouteDescription"].GetString());
        m_routeDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Route.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("RouteType") && !value["RouteType"].IsNull())
    {
        if (!value["RouteType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Route.RouteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeType = string(value["RouteType"].GetString());
        m_routeTypeHasBeenSet = true;
    }

    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Route.RouteId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = value["RouteId"].GetUint64();
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("RouteTableId") && !value["RouteTableId"].IsNull())
    {
        if (!value["RouteTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Route.RouteTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableId = string(value["RouteTableId"].GetString());
        m_routeTableIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Route::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_routeItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeItemId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_routeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeType.c_str(), allocator).Move(), allocator);
    }

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routeId, allocator);
    }

    if (m_routeTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

}


string Route::GetDestinationCidrBlock() const
{
    return m_destinationCidrBlock;
}

void Route::SetDestinationCidrBlock(const string& _destinationCidrBlock)
{
    m_destinationCidrBlock = _destinationCidrBlock;
    m_destinationCidrBlockHasBeenSet = true;
}

bool Route::DestinationCidrBlockHasBeenSet() const
{
    return m_destinationCidrBlockHasBeenSet;
}

string Route::GetGatewayType() const
{
    return m_gatewayType;
}

void Route::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool Route::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

string Route::GetGatewayId() const
{
    return m_gatewayId;
}

void Route::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool Route::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string Route::GetRouteItemId() const
{
    return m_routeItemId;
}

void Route::SetRouteItemId(const string& _routeItemId)
{
    m_routeItemId = _routeItemId;
    m_routeItemIdHasBeenSet = true;
}

bool Route::RouteItemIdHasBeenSet() const
{
    return m_routeItemIdHasBeenSet;
}

string Route::GetRouteDescription() const
{
    return m_routeDescription;
}

void Route::SetRouteDescription(const string& _routeDescription)
{
    m_routeDescription = _routeDescription;
    m_routeDescriptionHasBeenSet = true;
}

bool Route::RouteDescriptionHasBeenSet() const
{
    return m_routeDescriptionHasBeenSet;
}

bool Route::GetEnabled() const
{
    return m_enabled;
}

void Route::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool Route::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string Route::GetRouteType() const
{
    return m_routeType;
}

void Route::SetRouteType(const string& _routeType)
{
    m_routeType = _routeType;
    m_routeTypeHasBeenSet = true;
}

bool Route::RouteTypeHasBeenSet() const
{
    return m_routeTypeHasBeenSet;
}

uint64_t Route::GetRouteId() const
{
    return m_routeId;
}

void Route::SetRouteId(const uint64_t& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool Route::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

string Route::GetRouteTableId() const
{
    return m_routeTableId;
}

void Route::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool Route::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

