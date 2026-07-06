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

#include <tencentcloud/dts/v20211206/model/CompareTableResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CompareTableResult::CompareTableResult() :
    m_dbHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_tableHasBeenSet(false),
    m_conclusionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_rowCountHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_finishedAtHasBeenSet(false),
    m_expectedAtHasBeenSet(false),
    m_srcItemHasBeenSet(false),
    m_dstItemHasBeenSet(false)
{
}

CoreInternalOutcome CompareTableResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableResult.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableResult.Schema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schema = string(value["Schema"].GetString());
        m_schemaHasBeenSet = true;
    }

    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableResult.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("Conclusion") && !value["Conclusion"].IsNull())
    {
        if (!value["Conclusion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableResult.Conclusion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conclusion = string(value["Conclusion"].GetString());
        m_conclusionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableResult.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("RowCount") && !value["RowCount"].IsNull())
    {
        if (!value["RowCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableResult.RowCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowCount = value["RowCount"].GetInt64();
        m_rowCountHasBeenSet = true;
    }

    if (value.HasMember("StartedAt") && !value["StartedAt"].IsNull())
    {
        if (!value["StartedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableResult.StartedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startedAt = string(value["StartedAt"].GetString());
        m_startedAtHasBeenSet = true;
    }

    if (value.HasMember("FinishedAt") && !value["FinishedAt"].IsNull())
    {
        if (!value["FinishedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableResult.FinishedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishedAt = string(value["FinishedAt"].GetString());
        m_finishedAtHasBeenSet = true;
    }

    if (value.HasMember("ExpectedAt") && !value["ExpectedAt"].IsNull())
    {
        if (!value["ExpectedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableResult.ExpectedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expectedAt = string(value["ExpectedAt"].GetString());
        m_expectedAtHasBeenSet = true;
    }

    if (value.HasMember("SrcItem") && !value["SrcItem"].IsNull())
    {
        if (!value["SrcItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableResult.SrcItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcItem = string(value["SrcItem"].GetString());
        m_srcItemHasBeenSet = true;
    }

    if (value.HasMember("DstItem") && !value["DstItem"].IsNull())
    {
        if (!value["DstItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompareTableResult.DstItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstItem = string(value["DstItem"].GetString());
        m_dstItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompareTableResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schema.c_str(), allocator).Move(), allocator);
    }

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_conclusionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Conclusion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conclusion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_rowCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowCount, allocator);
    }

    if (m_startedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_finishedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_expectedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expectedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_srcItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcItem.c_str(), allocator).Move(), allocator);
    }

    if (m_dstItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstItem.c_str(), allocator).Move(), allocator);
    }

}


string CompareTableResult::GetDb() const
{
    return m_db;
}

void CompareTableResult::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool CompareTableResult::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string CompareTableResult::GetSchema() const
{
    return m_schema;
}

void CompareTableResult::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool CompareTableResult::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

string CompareTableResult::GetTable() const
{
    return m_table;
}

void CompareTableResult::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool CompareTableResult::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

string CompareTableResult::GetConclusion() const
{
    return m_conclusion;
}

void CompareTableResult::SetConclusion(const string& _conclusion)
{
    m_conclusion = _conclusion;
    m_conclusionHasBeenSet = true;
}

bool CompareTableResult::ConclusionHasBeenSet() const
{
    return m_conclusionHasBeenSet;
}

string CompareTableResult::GetStatus() const
{
    return m_status;
}

void CompareTableResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CompareTableResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t CompareTableResult::GetProgress() const
{
    return m_progress;
}

void CompareTableResult::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool CompareTableResult::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

int64_t CompareTableResult::GetRowCount() const
{
    return m_rowCount;
}

void CompareTableResult::SetRowCount(const int64_t& _rowCount)
{
    m_rowCount = _rowCount;
    m_rowCountHasBeenSet = true;
}

bool CompareTableResult::RowCountHasBeenSet() const
{
    return m_rowCountHasBeenSet;
}

string CompareTableResult::GetStartedAt() const
{
    return m_startedAt;
}

void CompareTableResult::SetStartedAt(const string& _startedAt)
{
    m_startedAt = _startedAt;
    m_startedAtHasBeenSet = true;
}

bool CompareTableResult::StartedAtHasBeenSet() const
{
    return m_startedAtHasBeenSet;
}

string CompareTableResult::GetFinishedAt() const
{
    return m_finishedAt;
}

void CompareTableResult::SetFinishedAt(const string& _finishedAt)
{
    m_finishedAt = _finishedAt;
    m_finishedAtHasBeenSet = true;
}

bool CompareTableResult::FinishedAtHasBeenSet() const
{
    return m_finishedAtHasBeenSet;
}

string CompareTableResult::GetExpectedAt() const
{
    return m_expectedAt;
}

void CompareTableResult::SetExpectedAt(const string& _expectedAt)
{
    m_expectedAt = _expectedAt;
    m_expectedAtHasBeenSet = true;
}

bool CompareTableResult::ExpectedAtHasBeenSet() const
{
    return m_expectedAtHasBeenSet;
}

string CompareTableResult::GetSrcItem() const
{
    return m_srcItem;
}

void CompareTableResult::SetSrcItem(const string& _srcItem)
{
    m_srcItem = _srcItem;
    m_srcItemHasBeenSet = true;
}

bool CompareTableResult::SrcItemHasBeenSet() const
{
    return m_srcItemHasBeenSet;
}

string CompareTableResult::GetDstItem() const
{
    return m_dstItem;
}

void CompareTableResult::SetDstItem(const string& _dstItem)
{
    m_dstItem = _dstItem;
    m_dstItemHasBeenSet = true;
}

bool CompareTableResult::DstItemHasBeenSet() const
{
    return m_dstItemHasBeenSet;
}

