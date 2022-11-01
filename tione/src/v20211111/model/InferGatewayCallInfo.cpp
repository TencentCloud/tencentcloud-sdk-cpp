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

#include <tencentcloud/tione/v20211111/model/InferGatewayCallInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

InferGatewayCallInfo::InferGatewayCallInfo() :
    m_vpcHttpAddrHasBeenSet(false),
    m_vpcHttpsAddrHasBeenSet(false),
    m_vpcGrpcTlsAddrHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

CoreInternalOutcome InferGatewayCallInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcHttpAddr") && !value["VpcHttpAddr"].IsNull())
    {
        if (!value["VpcHttpAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferGatewayCallInfo.VpcHttpAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcHttpAddr = string(value["VpcHttpAddr"].GetString());
        m_vpcHttpAddrHasBeenSet = true;
    }

    if (value.HasMember("VpcHttpsAddr") && !value["VpcHttpsAddr"].IsNull())
    {
        if (!value["VpcHttpsAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferGatewayCallInfo.VpcHttpsAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcHttpsAddr = string(value["VpcHttpsAddr"].GetString());
        m_vpcHttpsAddrHasBeenSet = true;
    }

    if (value.HasMember("VpcGrpcTlsAddr") && !value["VpcGrpcTlsAddr"].IsNull())
    {
        if (!value["VpcGrpcTlsAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferGatewayCallInfo.VpcGrpcTlsAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcGrpcTlsAddr = string(value["VpcGrpcTlsAddr"].GetString());
        m_vpcGrpcTlsAddrHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferGatewayCallInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferGatewayCallInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferGatewayCallInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcHttpAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcHttpAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcHttpAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcHttpsAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcHttpsAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcHttpsAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcGrpcTlsAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcGrpcTlsAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcGrpcTlsAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

}


string InferGatewayCallInfo::GetVpcHttpAddr() const
{
    return m_vpcHttpAddr;
}

void InferGatewayCallInfo::SetVpcHttpAddr(const string& _vpcHttpAddr)
{
    m_vpcHttpAddr = _vpcHttpAddr;
    m_vpcHttpAddrHasBeenSet = true;
}

bool InferGatewayCallInfo::VpcHttpAddrHasBeenSet() const
{
    return m_vpcHttpAddrHasBeenSet;
}

string InferGatewayCallInfo::GetVpcHttpsAddr() const
{
    return m_vpcHttpsAddr;
}

void InferGatewayCallInfo::SetVpcHttpsAddr(const string& _vpcHttpsAddr)
{
    m_vpcHttpsAddr = _vpcHttpsAddr;
    m_vpcHttpsAddrHasBeenSet = true;
}

bool InferGatewayCallInfo::VpcHttpsAddrHasBeenSet() const
{
    return m_vpcHttpsAddrHasBeenSet;
}

string InferGatewayCallInfo::GetVpcGrpcTlsAddr() const
{
    return m_vpcGrpcTlsAddr;
}

void InferGatewayCallInfo::SetVpcGrpcTlsAddr(const string& _vpcGrpcTlsAddr)
{
    m_vpcGrpcTlsAddr = _vpcGrpcTlsAddr;
    m_vpcGrpcTlsAddrHasBeenSet = true;
}

bool InferGatewayCallInfo::VpcGrpcTlsAddrHasBeenSet() const
{
    return m_vpcGrpcTlsAddrHasBeenSet;
}

string InferGatewayCallInfo::GetVpcId() const
{
    return m_vpcId;
}

void InferGatewayCallInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool InferGatewayCallInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string InferGatewayCallInfo::GetSubnetId() const
{
    return m_subnetId;
}

void InferGatewayCallInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool InferGatewayCallInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

