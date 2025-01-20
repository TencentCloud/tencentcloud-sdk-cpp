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

#include <tencentcloud/vpc/v20170312/model/CcnInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CcnInstance::CcnInstance() :
    m_instanceIdHasBeenSet(false),
    m_instanceRegionHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_orderTypeHasBeenSet(false)
{
}

CoreInternalOutcome CcnInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceRegion") && !value["InstanceRegion"].IsNull())
    {
        if (!value["InstanceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnInstance.InstanceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRegion = string(value["InstanceRegion"].GetString());
        m_instanceRegionHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnInstance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnInstance.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RouteTableId") && !value["RouteTableId"].IsNull())
    {
        if (!value["RouteTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnInstance.RouteTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableId = string(value["RouteTableId"].GetString());
        m_routeTableIdHasBeenSet = true;
    }

    if (value.HasMember("OrderType") && !value["OrderType"].IsNull())
    {
        if (!value["OrderType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnInstance.OrderType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderType = string(value["OrderType"].GetString());
        m_orderTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderType.c_str(), allocator).Move(), allocator);
    }

}


string CcnInstance::GetInstanceId() const
{
    return m_instanceId;
}

void CcnInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CcnInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CcnInstance::GetInstanceRegion() const
{
    return m_instanceRegion;
}

void CcnInstance::SetInstanceRegion(const string& _instanceRegion)
{
    m_instanceRegion = _instanceRegion;
    m_instanceRegionHasBeenSet = true;
}

bool CcnInstance::InstanceRegionHasBeenSet() const
{
    return m_instanceRegionHasBeenSet;
}

string CcnInstance::GetInstanceType() const
{
    return m_instanceType;
}

void CcnInstance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CcnInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CcnInstance::GetDescription() const
{
    return m_description;
}

void CcnInstance::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CcnInstance::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CcnInstance::GetRouteTableId() const
{
    return m_routeTableId;
}

void CcnInstance::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool CcnInstance::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

string CcnInstance::GetOrderType() const
{
    return m_orderType;
}

void CcnInstance::SetOrderType(const string& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool CcnInstance::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

