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

#include <tencentcloud/tke/v20180525/model/RouteInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

RouteInfo::RouteInfo() :
    m_routeTableNameHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_gatewayIpHasBeenSet(false)
{
}

CoreInternalOutcome RouteInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteTableName") && !value["RouteTableName"].IsNull())
    {
        if (!value["RouteTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.RouteTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableName = string(value["RouteTableName"].GetString());
        m_routeTableNameHasBeenSet = true;
    }

    if (value.HasMember("DestinationCidrBlock") && !value["DestinationCidrBlock"].IsNull())
    {
        if (!value["DestinationCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.DestinationCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidrBlock = string(value["DestinationCidrBlock"].GetString());
        m_destinationCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("GatewayIp") && !value["GatewayIp"].IsNull())
    {
        if (!value["GatewayIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteInfo.GatewayIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayIp = string(value["GatewayIp"].GetString());
        m_gatewayIpHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouteInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayIp.c_str(), allocator).Move(), allocator);
    }

}


string RouteInfo::GetRouteTableName() const
{
    return m_routeTableName;
}

void RouteInfo::SetRouteTableName(const string& _routeTableName)
{
    m_routeTableName = _routeTableName;
    m_routeTableNameHasBeenSet = true;
}

bool RouteInfo::RouteTableNameHasBeenSet() const
{
    return m_routeTableNameHasBeenSet;
}

string RouteInfo::GetDestinationCidrBlock() const
{
    return m_destinationCidrBlock;
}

void RouteInfo::SetDestinationCidrBlock(const string& _destinationCidrBlock)
{
    m_destinationCidrBlock = _destinationCidrBlock;
    m_destinationCidrBlockHasBeenSet = true;
}

bool RouteInfo::DestinationCidrBlockHasBeenSet() const
{
    return m_destinationCidrBlockHasBeenSet;
}

string RouteInfo::GetGatewayIp() const
{
    return m_gatewayIp;
}

void RouteInfo::SetGatewayIp(const string& _gatewayIp)
{
    m_gatewayIp = _gatewayIp;
    m_gatewayIpHasBeenSet = true;
}

bool RouteInfo::GatewayIpHasBeenSet() const
{
    return m_gatewayIpHasBeenSet;
}

