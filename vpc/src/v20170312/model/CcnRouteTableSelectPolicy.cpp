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

#include <tencentcloud/vpc/v20170312/model/CcnRouteTableSelectPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CcnRouteTableSelectPolicy::CcnRouteTableSelectPolicy() :
    m_instanceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_sourceCidrBlockHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome CcnRouteTableSelectPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTableSelectPolicy.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTableSelectPolicy.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceCidrBlock") && !value["SourceCidrBlock"].IsNull())
    {
        if (!value["SourceCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTableSelectPolicy.SourceCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceCidrBlock = string(value["SourceCidrBlock"].GetString());
        m_sourceCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("RouteTableId") && !value["RouteTableId"].IsNull())
    {
        if (!value["RouteTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTableSelectPolicy.RouteTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableId = string(value["RouteTableId"].GetString());
        m_routeTableIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTableSelectPolicy.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnRouteTableSelectPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_sourceCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string CcnRouteTableSelectPolicy::GetInstanceType() const
{
    return m_instanceType;
}

void CcnRouteTableSelectPolicy::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CcnRouteTableSelectPolicy::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CcnRouteTableSelectPolicy::GetInstanceId() const
{
    return m_instanceId;
}

void CcnRouteTableSelectPolicy::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CcnRouteTableSelectPolicy::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CcnRouteTableSelectPolicy::GetSourceCidrBlock() const
{
    return m_sourceCidrBlock;
}

void CcnRouteTableSelectPolicy::SetSourceCidrBlock(const string& _sourceCidrBlock)
{
    m_sourceCidrBlock = _sourceCidrBlock;
    m_sourceCidrBlockHasBeenSet = true;
}

bool CcnRouteTableSelectPolicy::SourceCidrBlockHasBeenSet() const
{
    return m_sourceCidrBlockHasBeenSet;
}

string CcnRouteTableSelectPolicy::GetRouteTableId() const
{
    return m_routeTableId;
}

void CcnRouteTableSelectPolicy::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool CcnRouteTableSelectPolicy::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

string CcnRouteTableSelectPolicy::GetDescription() const
{
    return m_description;
}

void CcnRouteTableSelectPolicy::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CcnRouteTableSelectPolicy::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

