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

#include <tencentcloud/vpc/v20170312/model/RouteSelectionPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

RouteSelectionPolicy::RouteSelectionPolicy() :
    m_ccnIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_routeTableNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_sourceCidrBlockHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceUinHasBeenSet(false)
{
}

CoreInternalOutcome RouteSelectionPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteSelectionPolicy.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("RouteTableId") && !value["RouteTableId"].IsNull())
    {
        if (!value["RouteTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteSelectionPolicy.RouteTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableId = string(value["RouteTableId"].GetString());
        m_routeTableIdHasBeenSet = true;
    }

    if (value.HasMember("RouteTableName") && !value["RouteTableName"].IsNull())
    {
        if (!value["RouteTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteSelectionPolicy.RouteTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableName = string(value["RouteTableName"].GetString());
        m_routeTableNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteSelectionPolicy.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteSelectionPolicy.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("SourceCidrBlock") && !value["SourceCidrBlock"].IsNull())
    {
        if (!value["SourceCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteSelectionPolicy.SourceCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCidrBlock = string(value["SourceCidrBlock"].GetString());
        m_sourceCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteSelectionPolicy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteSelectionPolicy.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceUin") && !value["InstanceUin"].IsNull())
    {
        if (!value["InstanceUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteSelectionPolicy.InstanceUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceUin = string(value["InstanceUin"].GetString());
        m_instanceUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouteSelectionPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceUin.c_str(), allocator).Move(), allocator);
    }

}


string RouteSelectionPolicy::GetCcnId() const
{
    return m_ccnId;
}

void RouteSelectionPolicy::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool RouteSelectionPolicy::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string RouteSelectionPolicy::GetRouteTableId() const
{
    return m_routeTableId;
}

void RouteSelectionPolicy::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool RouteSelectionPolicy::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

string RouteSelectionPolicy::GetRouteTableName() const
{
    return m_routeTableName;
}

void RouteSelectionPolicy::SetRouteTableName(const string& _routeTableName)
{
    m_routeTableName = _routeTableName;
    m_routeTableNameHasBeenSet = true;
}

bool RouteSelectionPolicy::RouteTableNameHasBeenSet() const
{
    return m_routeTableNameHasBeenSet;
}

string RouteSelectionPolicy::GetInstanceType() const
{
    return m_instanceType;
}

void RouteSelectionPolicy::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool RouteSelectionPolicy::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string RouteSelectionPolicy::GetInstanceName() const
{
    return m_instanceName;
}

void RouteSelectionPolicy::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RouteSelectionPolicy::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string RouteSelectionPolicy::GetSourceCidrBlock() const
{
    return m_sourceCidrBlock;
}

void RouteSelectionPolicy::SetSourceCidrBlock(const string& _sourceCidrBlock)
{
    m_sourceCidrBlock = _sourceCidrBlock;
    m_sourceCidrBlockHasBeenSet = true;
}

bool RouteSelectionPolicy::SourceCidrBlockHasBeenSet() const
{
    return m_sourceCidrBlockHasBeenSet;
}

string RouteSelectionPolicy::GetDescription() const
{
    return m_description;
}

void RouteSelectionPolicy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RouteSelectionPolicy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string RouteSelectionPolicy::GetInstanceId() const
{
    return m_instanceId;
}

void RouteSelectionPolicy::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RouteSelectionPolicy::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RouteSelectionPolicy::GetInstanceUin() const
{
    return m_instanceUin;
}

void RouteSelectionPolicy::SetInstanceUin(const string& _instanceUin)
{
    m_instanceUin = _instanceUin;
    m_instanceUinHasBeenSet = true;
}

bool RouteSelectionPolicy::InstanceUinHasBeenSet() const
{
    return m_instanceUinHasBeenSet;
}

