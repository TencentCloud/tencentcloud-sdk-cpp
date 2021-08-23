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

#include <tencentcloud/tke/v20180525/model/RouteTableInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

RouteTableInfo::RouteTableInfo() :
    m_routeTableNameHasBeenSet(false),
    m_routeTableCidrBlockHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

CoreInternalOutcome RouteTableInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteTableName") && !value["RouteTableName"].IsNull())
    {
        if (!value["RouteTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteTableInfo.RouteTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableName = string(value["RouteTableName"].GetString());
        m_routeTableNameHasBeenSet = true;
    }

    if (value.HasMember("RouteTableCidrBlock") && !value["RouteTableCidrBlock"].IsNull())
    {
        if (!value["RouteTableCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteTableInfo.RouteTableCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableCidrBlock = string(value["RouteTableCidrBlock"].GetString());
        m_routeTableCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteTableInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouteTableInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTableCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

}


string RouteTableInfo::GetRouteTableName() const
{
    return m_routeTableName;
}

void RouteTableInfo::SetRouteTableName(const string& _routeTableName)
{
    m_routeTableName = _routeTableName;
    m_routeTableNameHasBeenSet = true;
}

bool RouteTableInfo::RouteTableNameHasBeenSet() const
{
    return m_routeTableNameHasBeenSet;
}

string RouteTableInfo::GetRouteTableCidrBlock() const
{
    return m_routeTableCidrBlock;
}

void RouteTableInfo::SetRouteTableCidrBlock(const string& _routeTableCidrBlock)
{
    m_routeTableCidrBlock = _routeTableCidrBlock;
    m_routeTableCidrBlockHasBeenSet = true;
}

bool RouteTableInfo::RouteTableCidrBlockHasBeenSet() const
{
    return m_routeTableCidrBlockHasBeenSet;
}

string RouteTableInfo::GetVpcId() const
{
    return m_vpcId;
}

void RouteTableInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool RouteTableInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

