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

#include <tencentcloud/vpc/v20170312/model/CreateDirectConnectGatewayCcnRoutesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CreateDirectConnectGatewayCcnRoutesRequest::CreateDirectConnectGatewayCcnRoutesRequest() :
    m_directConnectGatewayIdHasBeenSet(false),
    m_routesHasBeenSet(false)
{
}

string CreateDirectConnectGatewayCcnRoutesRequest::ToJsonString() const
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

    if (m_routesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Routes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routes.begin(); itr != m_routes.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDirectConnectGatewayCcnRoutesRequest::GetDirectConnectGatewayId() const
{
    return m_directConnectGatewayId;
}

void CreateDirectConnectGatewayCcnRoutesRequest::SetDirectConnectGatewayId(const string& _directConnectGatewayId)
{
    m_directConnectGatewayId = _directConnectGatewayId;
    m_directConnectGatewayIdHasBeenSet = true;
}

bool CreateDirectConnectGatewayCcnRoutesRequest::DirectConnectGatewayIdHasBeenSet() const
{
    return m_directConnectGatewayIdHasBeenSet;
}

vector<DirectConnectGatewayCcnRoute> CreateDirectConnectGatewayCcnRoutesRequest::GetRoutes() const
{
    return m_routes;
}

void CreateDirectConnectGatewayCcnRoutesRequest::SetRoutes(const vector<DirectConnectGatewayCcnRoute>& _routes)
{
    m_routes = _routes;
    m_routesHasBeenSet = true;
}

bool CreateDirectConnectGatewayCcnRoutesRequest::RoutesHasBeenSet() const
{
    return m_routesHasBeenSet;
}


