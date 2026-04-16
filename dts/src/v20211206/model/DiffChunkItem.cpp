/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dts/v20211206/model/DiffChunkItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DiffChunkItem::DiffChunkItem() :
    m_dBNameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_chunkIdHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_diffTypeHasBeenSet(false),
    m_schemaInfoHasBeenSet(false),
    m_srcItemHasBeenSet(false),
    m_dstItemHasBeenSet(false),
    m_finishedAtHasBeenSet(false)
{
}

CoreInternalOutcome DiffChunkItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DBName") && !value["DBName"].IsNull())
    {
        if (!value["DBName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffChunkItem.DBName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dBName = string(value["DBName"].GetString());
        m_dBNameHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffChunkItem.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffChunkItem.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("ChunkId") && !value["ChunkId"].IsNull())
    {
        if (!value["ChunkId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiffChunkItem.ChunkId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chunkId = value["ChunkId"].GetInt64();
        m_chunkIdHasBeenSet = true;
    }

    if (value.HasMember("Identifier") && !value["Identifier"].IsNull())
    {
        if (!value["Identifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffChunkItem.Identifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifier = string(value["Identifier"].GetString());
        m_identifierHasBeenSet = true;
    }

    if (value.HasMember("DiffType") && !value["DiffType"].IsNull())
    {
        if (!value["DiffType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffChunkItem.DiffType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diffType = string(value["DiffType"].GetString());
        m_diffTypeHasBeenSet = true;
    }

    if (value.HasMember("SchemaInfo") && !value["SchemaInfo"].IsNull())
    {
        if (!value["SchemaInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiffChunkItem.SchemaInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["SchemaInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_schemaInfo.push_back((*itr).GetString());
        }
        m_schemaInfoHasBeenSet = true;
    }

    if (value.HasMember("SrcItem") && !value["SrcItem"].IsNull())
    {
        if (!value["SrcItem"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiffChunkItem.SrcItem` is not array type"));

        const rapidjson::Value &tmpValue = value["SrcItem"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_srcItem.push_back((*itr).GetString());
        }
        m_srcItemHasBeenSet = true;
    }

    if (value.HasMember("DstItem") && !value["DstItem"].IsNull())
    {
        if (!value["DstItem"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiffChunkItem.DstItem` is not array type"));

        const rapidjson::Value &tmpValue = value["DstItem"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dstItem.push_back((*itr).GetString());
        }
        m_dstItemHasBeenSet = true;
    }

    if (value.HasMember("FinishedAt") && !value["FinishedAt"].IsNull())
    {
        if (!value["FinishedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffChunkItem.FinishedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishedAt = string(value["FinishedAt"].GetString());
        m_finishedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiffChunkItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dBName.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_chunkIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChunkId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chunkId, allocator);
    }

    if (m_identifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Identifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifier.c_str(), allocator).Move(), allocator);
    }

    if (m_diffTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diffType.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_schemaInfo.begin(); itr != m_schemaInfo.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_srcItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_srcItem.begin(); itr != m_srcItem.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dstItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dstItem.begin(); itr != m_dstItem.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_finishedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishedAt.c_str(), allocator).Move(), allocator);
    }

}


string DiffChunkItem::GetDBName() const
{
    return m_dBName;
}

void DiffChunkItem::SetDBName(const string& _dBName)
{
    m_dBName = _dBName;
    m_dBNameHasBeenSet = true;
}

bool DiffChunkItem::DBNameHasBeenSet() const
{
    return m_dBNameHasBeenSet;
}

string DiffChunkItem::GetSchemaName() const
{
    return m_schemaName;
}

void DiffChunkItem::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DiffChunkItem::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string DiffChunkItem::GetTableName() const
{
    return m_tableName;
}

void DiffChunkItem::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DiffChunkItem::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

int64_t DiffChunkItem::GetChunkId() const
{
    return m_chunkId;
}

void DiffChunkItem::SetChunkId(const int64_t& _chunkId)
{
    m_chunkId = _chunkId;
    m_chunkIdHasBeenSet = true;
}

bool DiffChunkItem::ChunkIdHasBeenSet() const
{
    return m_chunkIdHasBeenSet;
}

string DiffChunkItem::GetIdentifier() const
{
    return m_identifier;
}

void DiffChunkItem::SetIdentifier(const string& _identifier)
{
    m_identifier = _identifier;
    m_identifierHasBeenSet = true;
}

bool DiffChunkItem::IdentifierHasBeenSet() const
{
    return m_identifierHasBeenSet;
}

string DiffChunkItem::GetDiffType() const
{
    return m_diffType;
}

void DiffChunkItem::SetDiffType(const string& _diffType)
{
    m_diffType = _diffType;
    m_diffTypeHasBeenSet = true;
}

bool DiffChunkItem::DiffTypeHasBeenSet() const
{
    return m_diffTypeHasBeenSet;
}

vector<string> DiffChunkItem::GetSchemaInfo() const
{
    return m_schemaInfo;
}

void DiffChunkItem::SetSchemaInfo(const vector<string>& _schemaInfo)
{
    m_schemaInfo = _schemaInfo;
    m_schemaInfoHasBeenSet = true;
}

bool DiffChunkItem::SchemaInfoHasBeenSet() const
{
    return m_schemaInfoHasBeenSet;
}

vector<string> DiffChunkItem::GetSrcItem() const
{
    return m_srcItem;
}

void DiffChunkItem::SetSrcItem(const vector<string>& _srcItem)
{
    m_srcItem = _srcItem;
    m_srcItemHasBeenSet = true;
}

bool DiffChunkItem::SrcItemHasBeenSet() const
{
    return m_srcItemHasBeenSet;
}

vector<string> DiffChunkItem::GetDstItem() const
{
    return m_dstItem;
}

void DiffChunkItem::SetDstItem(const vector<string>& _dstItem)
{
    m_dstItem = _dstItem;
    m_dstItemHasBeenSet = true;
}

bool DiffChunkItem::DstItemHasBeenSet() const
{
    return m_dstItemHasBeenSet;
}

string DiffChunkItem::GetFinishedAt() const
{
    return m_finishedAt;
}

void DiffChunkItem::SetFinishedAt(const string& _finishedAt)
{
    m_finishedAt = _finishedAt;
    m_finishedAtHasBeenSet = true;
}

bool DiffChunkItem::FinishedAtHasBeenSet() const
{
    return m_finishedAtHasBeenSet;
}

