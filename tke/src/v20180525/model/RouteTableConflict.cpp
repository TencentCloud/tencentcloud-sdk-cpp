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

#include <tencentcloud/tke/v20180525/model/RouteTableConflict.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

RouteTableConflict::RouteTableConflict() :
    m_routeTableTypeHasBeenSet(false),
    m_routeTableCidrBlockHasBeenSet(false),
    m_routeTableNameHasBeenSet(false),
    m_routeTableIdHasBeenSet(false)
{
}

CoreInternalOutcome RouteTableConflict::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RouteTableType") && !value["RouteTableType"].IsNull())
    {
        if (!value["RouteTableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteTableConflict.RouteTableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableType = string(value["RouteTableType"].GetString());
        m_routeTableTypeHasBeenSet = true;
    }

    if (value.HasMember("RouteTableCidrBlock") && !value["RouteTableCidrBlock"].IsNull())
    {
        if (!value["RouteTableCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteTableConflict.RouteTableCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableCidrBlock = string(value["RouteTableCidrBlock"].GetString());
        m_routeTableCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("RouteTableName") && !value["RouteTableName"].IsNull())
    {
        if (!value["RouteTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteTableConflict.RouteTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableName = string(value["RouteTableName"].GetString());
        m_routeTableNameHasBeenSet = true;
    }

    if (value.HasMember("RouteTableId") && !value["RouteTableId"].IsNull())
    {
        if (!value["RouteTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteTableConflict.RouteTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableId = string(value["RouteTableId"].GetString());
        m_routeTableIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouteTableConflict::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_routeTableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableType.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTableCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

}


string RouteTableConflict::GetRouteTableType() const
{
    return m_routeTableType;
}

void RouteTableConflict::SetRouteTableType(const string& _routeTableType)
{
    m_routeTableType = _routeTableType;
    m_routeTableTypeHasBeenSet = true;
}

bool RouteTableConflict::RouteTableTypeHasBeenSet() const
{
    return m_routeTableTypeHasBeenSet;
}

string RouteTableConflict::GetRouteTableCidrBlock() const
{
    return m_routeTableCidrBlock;
}

void RouteTableConflict::SetRouteTableCidrBlock(const string& _routeTableCidrBlock)
{
    m_routeTableCidrBlock = _routeTableCidrBlock;
    m_routeTableCidrBlockHasBeenSet = true;
}

bool RouteTableConflict::RouteTableCidrBlockHasBeenSet() const
{
    return m_routeTableCidrBlockHasBeenSet;
}

string RouteTableConflict::GetRouteTableName() const
{
    return m_routeTableName;
}

void RouteTableConflict::SetRouteTableName(const string& _routeTableName)
{
    m_routeTableName = _routeTableName;
    m_routeTableNameHasBeenSet = true;
}

bool RouteTableConflict::RouteTableNameHasBeenSet() const
{
    return m_routeTableNameHasBeenSet;
}

string RouteTableConflict::GetRouteTableId() const
{
    return m_routeTableId;
}

void RouteTableConflict::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool RouteTableConflict::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

