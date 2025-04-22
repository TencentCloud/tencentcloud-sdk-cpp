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

#include <tencentcloud/vpc/v20170312/model/GlobalRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

GlobalRoute::GlobalRoute() :
    m_vpcIdHasBeenSet(false),
    m_globalRouteIdHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_subnetRouteAlgorithmHasBeenSet(false)
{
}

CoreInternalOutcome GlobalRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalRoute.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("GlobalRouteId") && !value["GlobalRouteId"].IsNull())
    {
        if (!value["GlobalRouteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalRoute.GlobalRouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_globalRouteId = string(value["GlobalRouteId"].GetString());
        m_globalRouteIdHasBeenSet = true;
    }

    if (value.HasMember("DestinationCidrBlock") && !value["DestinationCidrBlock"].IsNull())
    {
        if (!value["DestinationCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalRoute.DestinationCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidrBlock = string(value["DestinationCidrBlock"].GetString());
        m_destinationCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("GatewayType") && !value["GatewayType"].IsNull())
    {
        if (!value["GatewayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalRoute.GatewayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayType = string(value["GatewayType"].GetString());
        m_gatewayTypeHasBeenSet = true;
    }

    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalRoute.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalRoute.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalRoute.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("SubnetRouteAlgorithm") && !value["SubnetRouteAlgorithm"].IsNull())
    {
        if (!value["SubnetRouteAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GlobalRoute.SubnetRouteAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetRouteAlgorithm = string(value["SubnetRouteAlgorithm"].GetString());
        m_subnetRouteAlgorithmHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GlobalRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_globalRouteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalRouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_globalRouteId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetRouteAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetRouteAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetRouteAlgorithm.c_str(), allocator).Move(), allocator);
    }

}


string GlobalRoute::GetVpcId() const
{
    return m_vpcId;
}

void GlobalRoute::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool GlobalRoute::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string GlobalRoute::GetGlobalRouteId() const
{
    return m_globalRouteId;
}

void GlobalRoute::SetGlobalRouteId(const string& _globalRouteId)
{
    m_globalRouteId = _globalRouteId;
    m_globalRouteIdHasBeenSet = true;
}

bool GlobalRoute::GlobalRouteIdHasBeenSet() const
{
    return m_globalRouteIdHasBeenSet;
}

string GlobalRoute::GetDestinationCidrBlock() const
{
    return m_destinationCidrBlock;
}

void GlobalRoute::SetDestinationCidrBlock(const string& _destinationCidrBlock)
{
    m_destinationCidrBlock = _destinationCidrBlock;
    m_destinationCidrBlockHasBeenSet = true;
}

bool GlobalRoute::DestinationCidrBlockHasBeenSet() const
{
    return m_destinationCidrBlockHasBeenSet;
}

string GlobalRoute::GetGatewayType() const
{
    return m_gatewayType;
}

void GlobalRoute::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool GlobalRoute::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

string GlobalRoute::GetGatewayId() const
{
    return m_gatewayId;
}

void GlobalRoute::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool GlobalRoute::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string GlobalRoute::GetDescription() const
{
    return m_description;
}

void GlobalRoute::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool GlobalRoute::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GlobalRoute::GetCreatedTime() const
{
    return m_createdTime;
}

void GlobalRoute::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool GlobalRoute::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string GlobalRoute::GetSubnetRouteAlgorithm() const
{
    return m_subnetRouteAlgorithm;
}

void GlobalRoute::SetSubnetRouteAlgorithm(const string& _subnetRouteAlgorithm)
{
    m_subnetRouteAlgorithm = _subnetRouteAlgorithm;
    m_subnetRouteAlgorithmHasBeenSet = true;
}

bool GlobalRoute::SubnetRouteAlgorithmHasBeenSet() const
{
    return m_subnetRouteAlgorithmHasBeenSet;
}

