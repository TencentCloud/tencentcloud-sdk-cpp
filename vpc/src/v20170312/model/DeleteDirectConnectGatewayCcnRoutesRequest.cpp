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

#include <tencentcloud/vpc/v20170312/model/DeleteDirectConnectGatewayCcnRoutesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DeleteDirectConnectGatewayCcnRoutesRequest::DeleteDirectConnectGatewayCcnRoutesRequest() :
    m_directConnectGatewayIdHasBeenSet(false),
    m_routeIdsHasBeenSet(false),
    m_addressTypeHasBeenSet(false)
{
}

string DeleteDirectConnectGatewayCcnRoutesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_directConnectGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directConnectGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_routeIds.begin(); itr != m_routeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_addressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_addressType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteDirectConnectGatewayCcnRoutesRequest::GetDirectConnectGatewayId() const
{
    return m_directConnectGatewayId;
}

void DeleteDirectConnectGatewayCcnRoutesRequest::SetDirectConnectGatewayId(const string& _directConnectGatewayId)
{
    m_directConnectGatewayId = _directConnectGatewayId;
    m_directConnectGatewayIdHasBeenSet = true;
}

bool DeleteDirectConnectGatewayCcnRoutesRequest::DirectConnectGatewayIdHasBeenSet() const
{
    return m_directConnectGatewayIdHasBeenSet;
}

vector<string> DeleteDirectConnectGatewayCcnRoutesRequest::GetRouteIds() const
{
    return m_routeIds;
}

void DeleteDirectConnectGatewayCcnRoutesRequest::SetRouteIds(const vector<string>& _routeIds)
{
    m_routeIds = _routeIds;
    m_routeIdsHasBeenSet = true;
}

bool DeleteDirectConnectGatewayCcnRoutesRequest::RouteIdsHasBeenSet() const
{
    return m_routeIdsHasBeenSet;
}

string DeleteDirectConnectGatewayCcnRoutesRequest::GetAddressType() const
{
    return m_addressType;
}

void DeleteDirectConnectGatewayCcnRoutesRequest::SetAddressType(const string& _addressType)
{
    m_addressType = _addressType;
    m_addressTypeHasBeenSet = true;
}

bool DeleteDirectConnectGatewayCcnRoutesRequest::AddressTypeHasBeenSet() const
{
    return m_addressTypeHasBeenSet;
}


