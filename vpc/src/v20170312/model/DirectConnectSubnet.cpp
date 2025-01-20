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

#include <tencentcloud/vpc/v20170312/model/DirectConnectSubnet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DirectConnectSubnet::DirectConnectSubnet() :
    m_directConnectGatewayIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false)
{
}

CoreInternalOutcome DirectConnectSubnet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DirectConnectGatewayId") && !value["DirectConnectGatewayId"].IsNull())
    {
        if (!value["DirectConnectGatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectSubnet.DirectConnectGatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directConnectGatewayId = string(value["DirectConnectGatewayId"].GetString());
        m_directConnectGatewayIdHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DirectConnectSubnet.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DirectConnectSubnet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_directConnectGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectGatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directConnectGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

}


string DirectConnectSubnet::GetDirectConnectGatewayId() const
{
    return m_directConnectGatewayId;
}

void DirectConnectSubnet::SetDirectConnectGatewayId(const string& _directConnectGatewayId)
{
    m_directConnectGatewayId = _directConnectGatewayId;
    m_directConnectGatewayIdHasBeenSet = true;
}

bool DirectConnectSubnet::DirectConnectGatewayIdHasBeenSet() const
{
    return m_directConnectGatewayIdHasBeenSet;
}

string DirectConnectSubnet::GetCidrBlock() const
{
    return m_cidrBlock;
}

void DirectConnectSubnet::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool DirectConnectSubnet::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

