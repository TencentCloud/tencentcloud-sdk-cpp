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

#include <tencentcloud/wedata/v20210820/model/ColumnAggregationLineage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ColumnAggregationLineage::ColumnAggregationLineage() :
    m_tableNameHasBeenSet(false),
    m_parentIdHasBeenSet(false),
    m_metastoreTypeHasBeenSet(false),
    m_parentSetHasBeenSet(false),
    m_childSetHasBeenSet(false),
    m_columnInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome ColumnAggregationLineage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnAggregationLineage.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("ParentId") && !value["ParentId"].IsNull())
    {
        if (!value["ParentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnAggregationLineage.ParentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentId = string(value["ParentId"].GetString());
        m_parentIdHasBeenSet = true;
    }

    if (value.HasMember("MetastoreType") && !value["MetastoreType"].IsNull())
    {
        if (!value["MetastoreType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnAggregationLineage.MetastoreType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metastoreType = string(value["MetastoreType"].GetString());
        m_metastoreTypeHasBeenSet = true;
    }

    if (value.HasMember("ParentSet") && !value["ParentSet"].IsNull())
    {
        if (!value["ParentSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnAggregationLineage.ParentSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentSet = string(value["ParentSet"].GetString());
        m_parentSetHasBeenSet = true;
    }

    if (value.HasMember("ChildSet") && !value["ChildSet"].IsNull())
    {
        if (!value["ChildSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ColumnAggregationLineage.ChildSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_childSet = string(value["ChildSet"].GetString());
        m_childSetHasBeenSet = true;
    }

    if (value.HasMember("ColumnInfoSet") && !value["ColumnInfoSet"].IsNull())
    {
        if (!value["ColumnInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ColumnAggregationLineage.ColumnInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ColumnInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SimpleColumnInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columnInfoSet.push_back(item);
        }
        m_columnInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ColumnAggregationLineage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentId.c_str(), allocator).Move(), allocator);
    }

    if (m_metastoreTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetastoreType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metastoreType.c_str(), allocator).Move(), allocator);
    }

    if (m_parentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentSet.c_str(), allocator).Move(), allocator);
    }

    if (m_childSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_childSet.c_str(), allocator).Move(), allocator);
    }

    if (m_columnInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columnInfoSet.begin(); itr != m_columnInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ColumnAggregationLineage::GetTableName() const
{
    return m_tableName;
}

void ColumnAggregationLineage::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool ColumnAggregationLineage::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string ColumnAggregationLineage::GetParentId() const
{
    return m_parentId;
}

void ColumnAggregationLineage::SetParentId(const string& _parentId)
{
    m_parentId = _parentId;
    m_parentIdHasBeenSet = true;
}

bool ColumnAggregationLineage::ParentIdHasBeenSet() const
{
    return m_parentIdHasBeenSet;
}

string ColumnAggregationLineage::GetMetastoreType() const
{
    return m_metastoreType;
}

void ColumnAggregationLineage::SetMetastoreType(const string& _metastoreType)
{
    m_metastoreType = _metastoreType;
    m_metastoreTypeHasBeenSet = true;
}

bool ColumnAggregationLineage::MetastoreTypeHasBeenSet() const
{
    return m_metastoreTypeHasBeenSet;
}

string ColumnAggregationLineage::GetParentSet() const
{
    return m_parentSet;
}

void ColumnAggregationLineage::SetParentSet(const string& _parentSet)
{
    m_parentSet = _parentSet;
    m_parentSetHasBeenSet = true;
}

bool ColumnAggregationLineage::ParentSetHasBeenSet() const
{
    return m_parentSetHasBeenSet;
}

string ColumnAggregationLineage::GetChildSet() const
{
    return m_childSet;
}

void ColumnAggregationLineage::SetChildSet(const string& _childSet)
{
    m_childSet = _childSet;
    m_childSetHasBeenSet = true;
}

bool ColumnAggregationLineage::ChildSetHasBeenSet() const
{
    return m_childSetHasBeenSet;
}

vector<SimpleColumnInfo> ColumnAggregationLineage::GetColumnInfoSet() const
{
    return m_columnInfoSet;
}

void ColumnAggregationLineage::SetColumnInfoSet(const vector<SimpleColumnInfo>& _columnInfoSet)
{
    m_columnInfoSet = _columnInfoSet;
    m_columnInfoSetHasBeenSet = true;
}

bool ColumnAggregationLineage::ColumnInfoSetHasBeenSet() const
{
    return m_columnInfoSetHasBeenSet;
}

