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

#include <tencentcloud/dc/v20180410/model/DirectConnectTunnelRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace rapidjson;
using namespace std;

DirectConnectTunnelRoute::DirectConnectTunnelRoute() :
    m_routeIdHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_routeTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_aSPathHasBeenSet(false),
    m_nextHopHasBeenSet(false)
{
}

CoreInternalOutcome DirectConnectTunnelRoute::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnelRoute.RouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = string(value["RouteId"].GetString());
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("DestinationCidrBlock") && !value["DestinationCidrBlock"].IsNull())
    {
        if (!value["DestinationCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnelRoute.DestinationCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidrBlock = string(value["DestinationCidrBlock"].GetString());
        m_destinationCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("RouteType") && !value["RouteType"].IsNull())
    {
        if (!value["RouteType"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnelRoute.RouteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeType = string(value["RouteType"].GetString());
        m_routeTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnelRoute.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ASPath") && !value["ASPath"].IsNull())
    {
        if (!value["ASPath"].IsArray())
            return CoreInternalOutcome(Error("response `DirectConnectTunnelRoute.ASPath` is not array type"));

        const Value &tmpValue = value["ASPath"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aSPath.push_back((*itr).GetString());
        }
        m_aSPathHasBeenSet = true;
    }

    if (value.HasMember("NextHop") && !value["NextHop"].IsNull())
    {
        if (!value["NextHop"].IsString())
        {
            return CoreInternalOutcome(Error("response `DirectConnectTunnelRoute.NextHop` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextHop = string(value["NextHop"].GetString());
        m_nextHopHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DirectConnectTunnelRoute::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_routeIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_routeId.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationCidrBlockHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestinationCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_destinationCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RouteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_routeType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_aSPathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ASPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_aSPath.begin(); itr != m_aSPath.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nextHopHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NextHop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_nextHop.c_str(), allocator).Move(), allocator);
    }

}


string DirectConnectTunnelRoute::GetRouteId() const
{
    return m_routeId;
}

void DirectConnectTunnelRoute::SetRouteId(const string& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool DirectConnectTunnelRoute::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

string DirectConnectTunnelRoute::GetDestinationCidrBlock() const
{
    return m_destinationCidrBlock;
}

void DirectConnectTunnelRoute::SetDestinationCidrBlock(const string& _destinationCidrBlock)
{
    m_destinationCidrBlock = _destinationCidrBlock;
    m_destinationCidrBlockHasBeenSet = true;
}

bool DirectConnectTunnelRoute::DestinationCidrBlockHasBeenSet() const
{
    return m_destinationCidrBlockHasBeenSet;
}

string DirectConnectTunnelRoute::GetRouteType() const
{
    return m_routeType;
}

void DirectConnectTunnelRoute::SetRouteType(const string& _routeType)
{
    m_routeType = _routeType;
    m_routeTypeHasBeenSet = true;
}

bool DirectConnectTunnelRoute::RouteTypeHasBeenSet() const
{
    return m_routeTypeHasBeenSet;
}

string DirectConnectTunnelRoute::GetStatus() const
{
    return m_status;
}

void DirectConnectTunnelRoute::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DirectConnectTunnelRoute::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DirectConnectTunnelRoute::GetASPath() const
{
    return m_aSPath;
}

void DirectConnectTunnelRoute::SetASPath(const vector<string>& _aSPath)
{
    m_aSPath = _aSPath;
    m_aSPathHasBeenSet = true;
}

bool DirectConnectTunnelRoute::ASPathHasBeenSet() const
{
    return m_aSPathHasBeenSet;
}

string DirectConnectTunnelRoute::GetNextHop() const
{
    return m_nextHop;
}

void DirectConnectTunnelRoute::SetNextHop(const string& _nextHop)
{
    m_nextHop = _nextHop;
    m_nextHopHasBeenSet = true;
}

bool DirectConnectTunnelRoute::NextHopHasBeenSet() const
{
    return m_nextHopHasBeenSet;
}

