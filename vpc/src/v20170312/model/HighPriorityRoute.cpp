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

#include <tencentcloud/vpc/v20170312/model/HighPriorityRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

HighPriorityRoute::HighPriorityRoute() :
    m_highPriorityRouteTableIdHasBeenSet(false),
    m_highPriorityRouteIdHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_subnetRouteAlgorithmHasBeenSet(false),
    m_isCdcHasBeenSet(false),
    m_cdcIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome HighPriorityRoute::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HighPriorityRouteTableId") && !value["HighPriorityRouteTableId"].IsNull())
    {
        if (!value["HighPriorityRouteTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRoute.HighPriorityRouteTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_highPriorityRouteTableId = string(value["HighPriorityRouteTableId"].GetString());
        m_highPriorityRouteTableIdHasBeenSet = true;
    }

    if (value.HasMember("HighPriorityRouteId") && !value["HighPriorityRouteId"].IsNull())
    {
        if (!value["HighPriorityRouteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRoute.HighPriorityRouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_highPriorityRouteId = string(value["HighPriorityRouteId"].GetString());
        m_highPriorityRouteIdHasBeenSet = true;
    }

    if (value.HasMember("DestinationCidrBlock") && !value["DestinationCidrBlock"].IsNull())
    {
        if (!value["DestinationCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRoute.DestinationCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidrBlock = string(value["DestinationCidrBlock"].GetString());
        m_destinationCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("GatewayType") && !value["GatewayType"].IsNull())
    {
        if (!value["GatewayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRoute.GatewayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayType = string(value["GatewayType"].GetString());
        m_gatewayTypeHasBeenSet = true;
    }

    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRoute.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRoute.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("SubnetRouteAlgorithm") && !value["SubnetRouteAlgorithm"].IsNull())
    {
        if (!value["SubnetRouteAlgorithm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRoute.SubnetRouteAlgorithm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetRouteAlgorithm = string(value["SubnetRouteAlgorithm"].GetString());
        m_subnetRouteAlgorithmHasBeenSet = true;
    }

    if (value.HasMember("IsCdc") && !value["IsCdc"].IsNull())
    {
        if (!value["IsCdc"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRoute.IsCdc` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCdc = value["IsCdc"].GetBool();
        m_isCdcHasBeenSet = true;
    }

    if (value.HasMember("CdcId") && !value["CdcId"].IsNull())
    {
        if (!value["CdcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRoute.CdcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cdcId = string(value["CdcId"].GetString());
        m_cdcIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighPriorityRoute.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HighPriorityRoute::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_highPriorityRouteTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPriorityRouteTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_highPriorityRouteTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_highPriorityRouteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighPriorityRouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_highPriorityRouteId.c_str(), allocator).Move(), allocator);
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

    if (m_subnetRouteAlgorithmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetRouteAlgorithm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetRouteAlgorithm.c_str(), allocator).Move(), allocator);
    }

    if (m_isCdcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCdc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCdc, allocator);
    }

    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string HighPriorityRoute::GetHighPriorityRouteTableId() const
{
    return m_highPriorityRouteTableId;
}

void HighPriorityRoute::SetHighPriorityRouteTableId(const string& _highPriorityRouteTableId)
{
    m_highPriorityRouteTableId = _highPriorityRouteTableId;
    m_highPriorityRouteTableIdHasBeenSet = true;
}

bool HighPriorityRoute::HighPriorityRouteTableIdHasBeenSet() const
{
    return m_highPriorityRouteTableIdHasBeenSet;
}

string HighPriorityRoute::GetHighPriorityRouteId() const
{
    return m_highPriorityRouteId;
}

void HighPriorityRoute::SetHighPriorityRouteId(const string& _highPriorityRouteId)
{
    m_highPriorityRouteId = _highPriorityRouteId;
    m_highPriorityRouteIdHasBeenSet = true;
}

bool HighPriorityRoute::HighPriorityRouteIdHasBeenSet() const
{
    return m_highPriorityRouteIdHasBeenSet;
}

string HighPriorityRoute::GetDestinationCidrBlock() const
{
    return m_destinationCidrBlock;
}

void HighPriorityRoute::SetDestinationCidrBlock(const string& _destinationCidrBlock)
{
    m_destinationCidrBlock = _destinationCidrBlock;
    m_destinationCidrBlockHasBeenSet = true;
}

bool HighPriorityRoute::DestinationCidrBlockHasBeenSet() const
{
    return m_destinationCidrBlockHasBeenSet;
}

string HighPriorityRoute::GetGatewayType() const
{
    return m_gatewayType;
}

void HighPriorityRoute::SetGatewayType(const string& _gatewayType)
{
    m_gatewayType = _gatewayType;
    m_gatewayTypeHasBeenSet = true;
}

bool HighPriorityRoute::GatewayTypeHasBeenSet() const
{
    return m_gatewayTypeHasBeenSet;
}

string HighPriorityRoute::GetGatewayId() const
{
    return m_gatewayId;
}

void HighPriorityRoute::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool HighPriorityRoute::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string HighPriorityRoute::GetDescription() const
{
    return m_description;
}

void HighPriorityRoute::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool HighPriorityRoute::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string HighPriorityRoute::GetSubnetRouteAlgorithm() const
{
    return m_subnetRouteAlgorithm;
}

void HighPriorityRoute::SetSubnetRouteAlgorithm(const string& _subnetRouteAlgorithm)
{
    m_subnetRouteAlgorithm = _subnetRouteAlgorithm;
    m_subnetRouteAlgorithmHasBeenSet = true;
}

bool HighPriorityRoute::SubnetRouteAlgorithmHasBeenSet() const
{
    return m_subnetRouteAlgorithmHasBeenSet;
}

bool HighPriorityRoute::GetIsCdc() const
{
    return m_isCdc;
}

void HighPriorityRoute::SetIsCdc(const bool& _isCdc)
{
    m_isCdc = _isCdc;
    m_isCdcHasBeenSet = true;
}

bool HighPriorityRoute::IsCdcHasBeenSet() const
{
    return m_isCdcHasBeenSet;
}

string HighPriorityRoute::GetCdcId() const
{
    return m_cdcId;
}

void HighPriorityRoute::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool HighPriorityRoute::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

string HighPriorityRoute::GetCreatedTime() const
{
    return m_createdTime;
}

void HighPriorityRoute::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool HighPriorityRoute::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

