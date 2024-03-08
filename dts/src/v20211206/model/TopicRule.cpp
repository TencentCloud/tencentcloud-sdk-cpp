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

#include <tencentcloud/dts/v20211206/model/TopicRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

TopicRule::TopicRule() :
    m_topicNameHasBeenSet(false),
    m_partitionTypeHasBeenSet(false),
    m_dbMatchModeHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_tableMatchModeHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_columnsHasBeenSet(false)
{
}

CoreInternalOutcome TopicRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRule.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("PartitionType") && !value["PartitionType"].IsNull())
    {
        if (!value["PartitionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRule.PartitionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partitionType = string(value["PartitionType"].GetString());
        m_partitionTypeHasBeenSet = true;
    }

    if (value.HasMember("DbMatchMode") && !value["DbMatchMode"].IsNull())
    {
        if (!value["DbMatchMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRule.DbMatchMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbMatchMode = string(value["DbMatchMode"].GetString());
        m_dbMatchModeHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRule.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("TableMatchMode") && !value["TableMatchMode"].IsNull())
    {
        if (!value["TableMatchMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRule.TableMatchMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableMatchMode = string(value["TableMatchMode"].GetString());
        m_tableMatchModeHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopicRule.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TopicRule.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_columns.push_back((*itr).GetString());
        }
        m_columnsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopicRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partitionType.c_str(), allocator).Move(), allocator);
    }

    if (m_dbMatchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMatchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbMatchMode.c_str(), allocator).Move(), allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableMatchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableMatchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableMatchMode.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TopicRule::GetTopicName() const
{
    return m_topicName;
}

void TopicRule::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool TopicRule::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string TopicRule::GetPartitionType() const
{
    return m_partitionType;
}

void TopicRule::SetPartitionType(const string& _partitionType)
{
    m_partitionType = _partitionType;
    m_partitionTypeHasBeenSet = true;
}

bool TopicRule::PartitionTypeHasBeenSet() const
{
    return m_partitionTypeHasBeenSet;
}

string TopicRule::GetDbMatchMode() const
{
    return m_dbMatchMode;
}

void TopicRule::SetDbMatchMode(const string& _dbMatchMode)
{
    m_dbMatchMode = _dbMatchMode;
    m_dbMatchModeHasBeenSet = true;
}

bool TopicRule::DbMatchModeHasBeenSet() const
{
    return m_dbMatchModeHasBeenSet;
}

string TopicRule::GetDbName() const
{
    return m_dbName;
}

void TopicRule::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool TopicRule::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string TopicRule::GetTableMatchMode() const
{
    return m_tableMatchMode;
}

void TopicRule::SetTableMatchMode(const string& _tableMatchMode)
{
    m_tableMatchMode = _tableMatchMode;
    m_tableMatchModeHasBeenSet = true;
}

bool TopicRule::TableMatchModeHasBeenSet() const
{
    return m_tableMatchModeHasBeenSet;
}

string TopicRule::GetTableName() const
{
    return m_tableName;
}

void TopicRule::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TopicRule::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

vector<string> TopicRule::GetColumns() const
{
    return m_columns;
}

void TopicRule::SetColumns(const vector<string>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool TopicRule::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

