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

#include <tencentcloud/tcaplusdb/v20190823/model/SelectedTableWithField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

SelectedTableWithField::SelectedTableWithField() :
    m_tableGroupIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_tableInstanceIdHasBeenSet(false),
    m_tableIdlTypeHasBeenSet(false),
    m_tableTypeHasBeenSet(false),
    m_selectedFieldsHasBeenSet(false),
    m_shardNumHasBeenSet(false),
    m_kafkaInfoHasBeenSet(false)
{
}

CoreInternalOutcome SelectedTableWithField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableGroupId") && !value["TableGroupId"].IsNull())
    {
        if (!value["TableGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableWithField.TableGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGroupId = string(value["TableGroupId"].GetString());
        m_tableGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableWithField.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableInstanceId") && !value["TableInstanceId"].IsNull())
    {
        if (!value["TableInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableWithField.TableInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableInstanceId = string(value["TableInstanceId"].GetString());
        m_tableInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TableIdlType") && !value["TableIdlType"].IsNull())
    {
        if (!value["TableIdlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableWithField.TableIdlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableIdlType = string(value["TableIdlType"].GetString());
        m_tableIdlTypeHasBeenSet = true;
    }

    if (value.HasMember("TableType") && !value["TableType"].IsNull())
    {
        if (!value["TableType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableWithField.TableType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableType = string(value["TableType"].GetString());
        m_tableTypeHasBeenSet = true;
    }

    if (value.HasMember("SelectedFields") && !value["SelectedFields"].IsNull())
    {
        if (!value["SelectedFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SelectedTableWithField.SelectedFields` is not array type"));

        const rapidjson::Value &tmpValue = value["SelectedFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_selectedFields.push_back(item);
        }
        m_selectedFieldsHasBeenSet = true;
    }

    if (value.HasMember("ShardNum") && !value["ShardNum"].IsNull())
    {
        if (!value["ShardNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableWithField.ShardNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shardNum = value["ShardNum"].GetUint64();
        m_shardNumHasBeenSet = true;
    }

    if (value.HasMember("KafkaInfo") && !value["KafkaInfo"].IsNull())
    {
        if (!value["KafkaInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedTableWithField.KafkaInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kafkaInfo.Deserialize(value["KafkaInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kafkaInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SelectedTableWithField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableIdlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableIdlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableIdlType.c_str(), allocator).Move(), allocator);
    }

    if (m_tableTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableType.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_selectedFields.begin(); itr != m_selectedFields.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_shardNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShardNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shardNum, allocator);
    }

    if (m_kafkaInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kafkaInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SelectedTableWithField::GetTableGroupId() const
{
    return m_tableGroupId;
}

void SelectedTableWithField::SetTableGroupId(const string& _tableGroupId)
{
    m_tableGroupId = _tableGroupId;
    m_tableGroupIdHasBeenSet = true;
}

bool SelectedTableWithField::TableGroupIdHasBeenSet() const
{
    return m_tableGroupIdHasBeenSet;
}

string SelectedTableWithField::GetTableName() const
{
    return m_tableName;
}

void SelectedTableWithField::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool SelectedTableWithField::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string SelectedTableWithField::GetTableInstanceId() const
{
    return m_tableInstanceId;
}

void SelectedTableWithField::SetTableInstanceId(const string& _tableInstanceId)
{
    m_tableInstanceId = _tableInstanceId;
    m_tableInstanceIdHasBeenSet = true;
}

bool SelectedTableWithField::TableInstanceIdHasBeenSet() const
{
    return m_tableInstanceIdHasBeenSet;
}

string SelectedTableWithField::GetTableIdlType() const
{
    return m_tableIdlType;
}

void SelectedTableWithField::SetTableIdlType(const string& _tableIdlType)
{
    m_tableIdlType = _tableIdlType;
    m_tableIdlTypeHasBeenSet = true;
}

bool SelectedTableWithField::TableIdlTypeHasBeenSet() const
{
    return m_tableIdlTypeHasBeenSet;
}

string SelectedTableWithField::GetTableType() const
{
    return m_tableType;
}

void SelectedTableWithField::SetTableType(const string& _tableType)
{
    m_tableType = _tableType;
    m_tableTypeHasBeenSet = true;
}

bool SelectedTableWithField::TableTypeHasBeenSet() const
{
    return m_tableTypeHasBeenSet;
}

vector<FieldInfo> SelectedTableWithField::GetSelectedFields() const
{
    return m_selectedFields;
}

void SelectedTableWithField::SetSelectedFields(const vector<FieldInfo>& _selectedFields)
{
    m_selectedFields = _selectedFields;
    m_selectedFieldsHasBeenSet = true;
}

bool SelectedTableWithField::SelectedFieldsHasBeenSet() const
{
    return m_selectedFieldsHasBeenSet;
}

uint64_t SelectedTableWithField::GetShardNum() const
{
    return m_shardNum;
}

void SelectedTableWithField::SetShardNum(const uint64_t& _shardNum)
{
    m_shardNum = _shardNum;
    m_shardNumHasBeenSet = true;
}

bool SelectedTableWithField::ShardNumHasBeenSet() const
{
    return m_shardNumHasBeenSet;
}

KafkaInfo SelectedTableWithField::GetKafkaInfo() const
{
    return m_kafkaInfo;
}

void SelectedTableWithField::SetKafkaInfo(const KafkaInfo& _kafkaInfo)
{
    m_kafkaInfo = _kafkaInfo;
    m_kafkaInfoHasBeenSet = true;
}

bool SelectedTableWithField::KafkaInfoHasBeenSet() const
{
    return m_kafkaInfoHasBeenSet;
}

