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
using namespace std;

DirectConnectTunnelRoute::DirectConnectTunnelRoute() :
    m_routeIdHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_routeTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_aSPathHasBeenSet(false),
    m_nextHopHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_applyOnTunnelEnableHasBeenSet(false)
{
}

CoreInternalOutcome DirectConnectTunnelRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelRoute.RouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = string(value["RouteId"].GetString());
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("DestinationCidrBlock") && !value["DestinationCidrBlock"].IsNull())
    {
        if (!value["DestinationCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelRoute.DestinationCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidrBlock = string(value["DestinationCidrBlock"].GetString());
        m_destinationCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("RouteType") && !value["RouteType"].IsNull())
    {
        if (!value["RouteType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelRoute.RouteType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeType = string(value["RouteType"].GetString());
        m_routeTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelRoute.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ASPath") && !value["ASPath"].IsNull())
    {
        if (!value["ASPath"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelRoute.ASPath` is not array type"));

        const rapidjson::Value &tmpValue = value["ASPath"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aSPath.push_back((*itr).GetString());
        }
        m_aSPathHasBeenSet = true;
    }

    if (value.HasMember("NextHop") && !value["NextHop"].IsNull())
    {
        if (!value["NextHop"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelRoute.NextHop` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextHop = string(value["NextHop"].GetString());
        m_nextHopHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelRoute.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplyOnTunnelEnable") && !value["ApplyOnTunnelEnable"].IsNull())
    {
        if (!value["ApplyOnTunnelEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectTunnelRoute.ApplyOnTunnelEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_applyOnTunnelEnable = value["ApplyOnTunnelEnable"].GetBool();
        m_applyOnTunnelEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DirectConnectTunnelRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeId.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_destinationCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_aSPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ASPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aSPath.begin(); itr != m_aSPath.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nextHopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextHop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextHop.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applyOnTunnelEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyOnTunnelEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyOnTunnelEnable, allocator);
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

string DirectConnectTunnelRoute::GetUpdateTime() const
{
    return m_updateTime;
}

void DirectConnectTunnelRoute::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DirectConnectTunnelRoute::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool DirectConnectTunnelRoute::GetApplyOnTunnelEnable() const
{
    return m_applyOnTunnelEnable;
}

void DirectConnectTunnelRoute::SetApplyOnTunnelEnable(const bool& _applyOnTunnelEnable)
{
    m_applyOnTunnelEnable = _applyOnTunnelEnable;
    m_applyOnTunnelEnableHasBeenSet = true;
}

bool DirectConnectTunnelRoute::ApplyOnTunnelEnableHasBeenSet() const
{
    return m_applyOnTunnelEnableHasBeenSet;
}

