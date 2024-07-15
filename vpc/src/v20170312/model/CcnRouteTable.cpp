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

#include <tencentcloud/vpc/v20170312/model/CcnRouteTable.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CcnRouteTable::CcnRouteTable() :
    m_ccnIdHasBeenSet(false),
    m_ccnRouteTableIdHasBeenSet(false),
    m_routeTableNameHasBeenSet(false),
    m_routeTableDescriptionHasBeenSet(false),
    m_isDefaultTableHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome CcnRouteTable::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTable.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("CcnRouteTableId") && !value["CcnRouteTableId"].IsNull())
    {
        if (!value["CcnRouteTableId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTable.CcnRouteTableId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnRouteTableId = string(value["CcnRouteTableId"].GetString());
        m_ccnRouteTableIdHasBeenSet = true;
    }

    if (value.HasMember("RouteTableName") && !value["RouteTableName"].IsNull())
    {
        if (!value["RouteTableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTable.RouteTableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableName = string(value["RouteTableName"].GetString());
        m_routeTableNameHasBeenSet = true;
    }

    if (value.HasMember("RouteTableDescription") && !value["RouteTableDescription"].IsNull())
    {
        if (!value["RouteTableDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTable.RouteTableDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_routeTableDescription = string(value["RouteTableDescription"].GetString());
        m_routeTableDescriptionHasBeenSet = true;
    }

    if (value.HasMember("IsDefaultTable") && !value["IsDefaultTable"].IsNull())
    {
        if (!value["IsDefaultTable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTable.IsDefaultTable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultTable = value["IsDefaultTable"].GetBool();
        m_isDefaultTableHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnRouteTable.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnRouteTable::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnRouteTableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnRouteTableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnRouteTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_routeTableDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTableDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_routeTableDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefaultTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefaultTable, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string CcnRouteTable::GetCcnId() const
{
    return m_ccnId;
}

void CcnRouteTable::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool CcnRouteTable::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string CcnRouteTable::GetCcnRouteTableId() const
{
    return m_ccnRouteTableId;
}

void CcnRouteTable::SetCcnRouteTableId(const string& _ccnRouteTableId)
{
    m_ccnRouteTableId = _ccnRouteTableId;
    m_ccnRouteTableIdHasBeenSet = true;
}

bool CcnRouteTable::CcnRouteTableIdHasBeenSet() const
{
    return m_ccnRouteTableIdHasBeenSet;
}

string CcnRouteTable::GetRouteTableName() const
{
    return m_routeTableName;
}

void CcnRouteTable::SetRouteTableName(const string& _routeTableName)
{
    m_routeTableName = _routeTableName;
    m_routeTableNameHasBeenSet = true;
}

bool CcnRouteTable::RouteTableNameHasBeenSet() const
{
    return m_routeTableNameHasBeenSet;
}

string CcnRouteTable::GetRouteTableDescription() const
{
    return m_routeTableDescription;
}

void CcnRouteTable::SetRouteTableDescription(const string& _routeTableDescription)
{
    m_routeTableDescription = _routeTableDescription;
    m_routeTableDescriptionHasBeenSet = true;
}

bool CcnRouteTable::RouteTableDescriptionHasBeenSet() const
{
    return m_routeTableDescriptionHasBeenSet;
}

bool CcnRouteTable::GetIsDefaultTable() const
{
    return m_isDefaultTable;
}

void CcnRouteTable::SetIsDefaultTable(const bool& _isDefaultTable)
{
    m_isDefaultTable = _isDefaultTable;
    m_isDefaultTableHasBeenSet = true;
}

bool CcnRouteTable::IsDefaultTableHasBeenSet() const
{
    return m_isDefaultTableHasBeenSet;
}

string CcnRouteTable::GetCreateTime() const
{
    return m_createTime;
}

void CcnRouteTable::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CcnRouteTable::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

