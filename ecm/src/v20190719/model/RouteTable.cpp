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

#include <tencentcloud/ecm/v20190719/model/RouteTable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

RouteTable::RouteTable() :
    m_vpcIdHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_routeTableNameHasBeenSet(false),
    m_associationSetHasBeenSet(false),
    m_routeSetHasBeenSet(false),
    m_mainHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

CoreInternalOutcome RouteTable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteTable.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("RouteTableId") && !value["RouteTableId"].IsNull())
    {
        if (!value["RouteTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteTable.RouteTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableId = string(value["RouteTableId"].GetString());
        m_routeTableIdHasBeenSet = true;
    }

    if (value.HasMember("RouteTableName") && !value["RouteTableName"].IsNull())
    {
        if (!value["RouteTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteTable.RouteTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableName = string(value["RouteTableName"].GetString());
        m_routeTableNameHasBeenSet = true;
    }

    if (value.HasMember("AssociationSet") && !value["AssociationSet"].IsNull())
    {
        if (!value["AssociationSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RouteTable.AssociationSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AssociationSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RouteTableAssociation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_associationSet.push_back(item);
        }
        m_associationSetHasBeenSet = true;
    }

    if (value.HasMember("RouteSet") && !value["RouteSet"].IsNull())
    {
        if (!value["RouteSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RouteTable.RouteSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RouteSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Route item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_routeSet.push_back(item);
        }
        m_routeSetHasBeenSet = true;
    }

    if (value.HasMember("Main") && !value["Main"].IsNull())
    {
        if (!value["Main"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RouteTable.Main` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_main = value["Main"].GetBool();
        m_mainHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouteTable.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouteTable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
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

    if (m_associationSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssociationSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_associationSet.begin(); itr != m_associationSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_routeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_routeSet.begin(); itr != m_routeSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Main";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_main, allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

}


string RouteTable::GetVpcId() const
{
    return m_vpcId;
}

void RouteTable::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool RouteTable::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string RouteTable::GetRouteTableId() const
{
    return m_routeTableId;
}

void RouteTable::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool RouteTable::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

string RouteTable::GetRouteTableName() const
{
    return m_routeTableName;
}

void RouteTable::SetRouteTableName(const string& _routeTableName)
{
    m_routeTableName = _routeTableName;
    m_routeTableNameHasBeenSet = true;
}

bool RouteTable::RouteTableNameHasBeenSet() const
{
    return m_routeTableNameHasBeenSet;
}

vector<RouteTableAssociation> RouteTable::GetAssociationSet() const
{
    return m_associationSet;
}

void RouteTable::SetAssociationSet(const vector<RouteTableAssociation>& _associationSet)
{
    m_associationSet = _associationSet;
    m_associationSetHasBeenSet = true;
}

bool RouteTable::AssociationSetHasBeenSet() const
{
    return m_associationSetHasBeenSet;
}

vector<Route> RouteTable::GetRouteSet() const
{
    return m_routeSet;
}

void RouteTable::SetRouteSet(const vector<Route>& _routeSet)
{
    m_routeSet = _routeSet;
    m_routeSetHasBeenSet = true;
}

bool RouteTable::RouteSetHasBeenSet() const
{
    return m_routeSetHasBeenSet;
}

bool RouteTable::GetMain() const
{
    return m_main;
}

void RouteTable::SetMain(const bool& _main)
{
    m_main = _main;
    m_mainHasBeenSet = true;
}

bool RouteTable::MainHasBeenSet() const
{
    return m_mainHasBeenSet;
}

string RouteTable::GetCreatedTime() const
{
    return m_createdTime;
}

void RouteTable::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool RouteTable::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

