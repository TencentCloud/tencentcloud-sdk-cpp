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

#include <tencentcloud/tcb/v20180608/model/EstablishWxGatewayRouteRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

EstablishWxGatewayRouteRequest::EstablishWxGatewayRouteRequest() :
    m_gatewayIdHasBeenSet(false),
    m_gatewayRouteNameHasBeenSet(false),
    m_gatewayRouteAddrHasBeenSet(false),
    m_gatewayRouteProtocolHasBeenSet(false),
    m_gatewayRouteDescHasBeenSet(false)
{
}

string EstablishWxGatewayRouteRequest::ToJsonString() const
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

    if (m_gatewayRouteNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayRouteName.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRouteAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteAddr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayRouteAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRouteProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteProtocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayRouteProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRouteDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRouteDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayRouteDesc.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EstablishWxGatewayRouteRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void EstablishWxGatewayRouteRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool EstablishWxGatewayRouteRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string EstablishWxGatewayRouteRequest::GetGatewayRouteName() const
{
    return m_gatewayRouteName;
}

void EstablishWxGatewayRouteRequest::SetGatewayRouteName(const string& _gatewayRouteName)
{
    m_gatewayRouteName = _gatewayRouteName;
    m_gatewayRouteNameHasBeenSet = true;
}

bool EstablishWxGatewayRouteRequest::GatewayRouteNameHasBeenSet() const
{
    return m_gatewayRouteNameHasBeenSet;
}

string EstablishWxGatewayRouteRequest::GetGatewayRouteAddr() const
{
    return m_gatewayRouteAddr;
}

void EstablishWxGatewayRouteRequest::SetGatewayRouteAddr(const string& _gatewayRouteAddr)
{
    m_gatewayRouteAddr = _gatewayRouteAddr;
    m_gatewayRouteAddrHasBeenSet = true;
}

bool EstablishWxGatewayRouteRequest::GatewayRouteAddrHasBeenSet() const
{
    return m_gatewayRouteAddrHasBeenSet;
}

string EstablishWxGatewayRouteRequest::GetGatewayRouteProtocol() const
{
    return m_gatewayRouteProtocol;
}

void EstablishWxGatewayRouteRequest::SetGatewayRouteProtocol(const string& _gatewayRouteProtocol)
{
    m_gatewayRouteProtocol = _gatewayRouteProtocol;
    m_gatewayRouteProtocolHasBeenSet = true;
}

bool EstablishWxGatewayRouteRequest::GatewayRouteProtocolHasBeenSet() const
{
    return m_gatewayRouteProtocolHasBeenSet;
}

string EstablishWxGatewayRouteRequest::GetGatewayRouteDesc() const
{
    return m_gatewayRouteDesc;
}

void EstablishWxGatewayRouteRequest::SetGatewayRouteDesc(const string& _gatewayRouteDesc)
{
    m_gatewayRouteDesc = _gatewayRouteDesc;
    m_gatewayRouteDescHasBeenSet = true;
}

bool EstablishWxGatewayRouteRequest::GatewayRouteDescHasBeenSet() const
{
    return m_gatewayRouteDescHasBeenSet;
}


