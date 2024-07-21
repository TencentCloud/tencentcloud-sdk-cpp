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

#include <tencentcloud/vpc/v20170312/model/InstanceBind.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

InstanceBind::InstanceBind() :
    m_ccnIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceBindTimeHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceRegionHasBeenSet(false),
    m_instanceUinHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome InstanceBind::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBind.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBind.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBind.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceBindTime") && !value["InstanceBindTime"].IsNull())
    {
        if (!value["InstanceBindTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBind.InstanceBindTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceBindTime = string(value["InstanceBindTime"].GetString());
        m_instanceBindTimeHasBeenSet = true;
    }

    if (value.HasMember("RouteTableId") && !value["RouteTableId"].IsNull())
    {
        if (!value["RouteTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBind.RouteTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableId = string(value["RouteTableId"].GetString());
        m_routeTableIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBind.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceRegion") && !value["InstanceRegion"].IsNull())
    {
        if (!value["InstanceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBind.InstanceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRegion = string(value["InstanceRegion"].GetString());
        m_instanceRegionHasBeenSet = true;
    }

    if (value.HasMember("InstanceUin") && !value["InstanceUin"].IsNull())
    {
        if (!value["InstanceUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBind.InstanceUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceUin = string(value["InstanceUin"].GetString());
        m_instanceUinHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBind.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceBind::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceBindTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceBindTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceBindTime.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceUin.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

}


string InstanceBind::GetCcnId() const
{
    return m_ccnId;
}

void InstanceBind::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool InstanceBind::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string InstanceBind::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceBind::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceBind::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string InstanceBind::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceBind::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceBind::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string InstanceBind::GetInstanceBindTime() const
{
    return m_instanceBindTime;
}

void InstanceBind::SetInstanceBindTime(const string& _instanceBindTime)
{
    m_instanceBindTime = _instanceBindTime;
    m_instanceBindTimeHasBeenSet = true;
}

bool InstanceBind::InstanceBindTimeHasBeenSet() const
{
    return m_instanceBindTimeHasBeenSet;
}

string InstanceBind::GetRouteTableId() const
{
    return m_routeTableId;
}

void InstanceBind::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool InstanceBind::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

string InstanceBind::GetInstanceName() const
{
    return m_instanceName;
}

void InstanceBind::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool InstanceBind::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string InstanceBind::GetInstanceRegion() const
{
    return m_instanceRegion;
}

void InstanceBind::SetInstanceRegion(const string& _instanceRegion)
{
    m_instanceRegion = _instanceRegion;
    m_instanceRegionHasBeenSet = true;
}

bool InstanceBind::InstanceRegionHasBeenSet() const
{
    return m_instanceRegionHasBeenSet;
}

string InstanceBind::GetInstanceUin() const
{
    return m_instanceUin;
}

void InstanceBind::SetInstanceUin(const string& _instanceUin)
{
    m_instanceUin = _instanceUin;
    m_instanceUinHasBeenSet = true;
}

bool InstanceBind::InstanceUinHasBeenSet() const
{
    return m_instanceUinHasBeenSet;
}

string InstanceBind::GetState() const
{
    return m_state;
}

void InstanceBind::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool InstanceBind::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

