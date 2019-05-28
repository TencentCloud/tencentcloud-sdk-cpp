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

#include <tencentcloud/vpc/v20170312/model/CcnRoute.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CcnRoute::CcnRoute() :
    m_routeIdHasBeenSet(false),
    m_destinationCidrBlockHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceRegionHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_instanceUinHasBeenSet(false)
{
}

CoreInternalOutcome CcnRoute::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteId") && !value["RouteId"].IsNull())
    {
        if (!value["RouteId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnRoute.RouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeId = string(value["RouteId"].GetString());
        m_routeIdHasBeenSet = true;
    }

    if (value.HasMember("DestinationCidrBlock") && !value["DestinationCidrBlock"].IsNull())
    {
        if (!value["DestinationCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnRoute.DestinationCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_destinationCidrBlock = string(value["DestinationCidrBlock"].GetString());
        m_destinationCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnRoute.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnRoute.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnRoute.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceRegion") && !value["InstanceRegion"].IsNull())
    {
        if (!value["InstanceRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnRoute.InstanceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRegion = string(value["InstanceRegion"].GetString());
        m_instanceRegionHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnRoute.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Error("response `CcnRoute.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("InstanceUin") && !value["InstanceUin"].IsNull())
    {
        if (!value["InstanceUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnRoute.InstanceUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceUin = string(value["InstanceUin"].GetString());
        m_instanceUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnRoute::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
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

    if (m_instanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_instanceUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceUin.c_str(), allocator).Move(), allocator);
    }

}


string CcnRoute::GetRouteId() const
{
    return m_routeId;
}

void CcnRoute::SetRouteId(const string& _routeId)
{
    m_routeId = _routeId;
    m_routeIdHasBeenSet = true;
}

bool CcnRoute::RouteIdHasBeenSet() const
{
    return m_routeIdHasBeenSet;
}

string CcnRoute::GetDestinationCidrBlock() const
{
    return m_destinationCidrBlock;
}

void CcnRoute::SetDestinationCidrBlock(const string& _destinationCidrBlock)
{
    m_destinationCidrBlock = _destinationCidrBlock;
    m_destinationCidrBlockHasBeenSet = true;
}

bool CcnRoute::DestinationCidrBlockHasBeenSet() const
{
    return m_destinationCidrBlockHasBeenSet;
}

string CcnRoute::GetInstanceType() const
{
    return m_instanceType;
}

void CcnRoute::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CcnRoute::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CcnRoute::GetInstanceId() const
{
    return m_instanceId;
}

void CcnRoute::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CcnRoute::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CcnRoute::GetInstanceName() const
{
    return m_instanceName;
}

void CcnRoute::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CcnRoute::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CcnRoute::GetInstanceRegion() const
{
    return m_instanceRegion;
}

void CcnRoute::SetInstanceRegion(const string& _instanceRegion)
{
    m_instanceRegion = _instanceRegion;
    m_instanceRegionHasBeenSet = true;
}

bool CcnRoute::InstanceRegionHasBeenSet() const
{
    return m_instanceRegionHasBeenSet;
}

string CcnRoute::GetUpdateTime() const
{
    return m_updateTime;
}

void CcnRoute::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CcnRoute::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool CcnRoute::GetEnabled() const
{
    return m_enabled;
}

void CcnRoute::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CcnRoute::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string CcnRoute::GetInstanceUin() const
{
    return m_instanceUin;
}

void CcnRoute::SetInstanceUin(const string& _instanceUin)
{
    m_instanceUin = _instanceUin;
    m_instanceUinHasBeenSet = true;
}

bool CcnRoute::InstanceUinHasBeenSet() const
{
    return m_instanceUinHasBeenSet;
}

