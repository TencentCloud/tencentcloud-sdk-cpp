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

#include <tencentcloud/wedata/v20250806/model/SqlRunExecutionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

SqlRunExecutionResult::SqlRunExecutionResult() :
    m_jobExecutionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_columnsHasBeenSet(false),
    m_rowsHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_costMsHasBeenSet(false),
    m_truncatedHasBeenSet(false)
{
}

CoreInternalOutcome SqlRunExecutionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobExecutionId") && !value["JobExecutionId"].IsNull())
    {
        if (!value["JobExecutionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlRunExecutionResult.JobExecutionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobExecutionId = string(value["JobExecutionId"].GetString());
        m_jobExecutionIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlRunExecutionResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SqlRunExecutionResult.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResultColumnInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_columns.push_back(item);
        }
        m_columnsHasBeenSet = true;
    }

    if (value.HasMember("Rows") && !value["Rows"].IsNull())
    {
        if (!value["Rows"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SqlRunExecutionResult.Rows` is not array type"));

        const rapidjson::Value &tmpValue = value["Rows"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SqlRunResultRow item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rows.push_back(item);
        }
        m_rowsHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SqlRunExecutionResult.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("CostMs") && !value["CostMs"].IsNull())
    {
        if (!value["CostMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SqlRunExecutionResult.CostMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costMs = value["CostMs"].GetInt64();
        m_costMsHasBeenSet = true;
    }

    if (value.HasMember("Truncated") && !value["Truncated"].IsNull())
    {
        if (!value["Truncated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SqlRunExecutionResult.Truncated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_truncated = value["Truncated"].GetBool();
        m_truncatedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SqlRunExecutionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobExecutionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobExecutionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobExecutionId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rows.begin(); itr != m_rows.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_costMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costMs, allocator);
    }

    if (m_truncatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Truncated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_truncated, allocator);
    }

}


string SqlRunExecutionResult::GetJobExecutionId() const
{
    return m_jobExecutionId;
}

void SqlRunExecutionResult::SetJobExecutionId(const string& _jobExecutionId)
{
    m_jobExecutionId = _jobExecutionId;
    m_jobExecutionIdHasBeenSet = true;
}

bool SqlRunExecutionResult::JobExecutionIdHasBeenSet() const
{
    return m_jobExecutionIdHasBeenSet;
}

string SqlRunExecutionResult::GetStatus() const
{
    return m_status;
}

void SqlRunExecutionResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SqlRunExecutionResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<ResultColumnInfo> SqlRunExecutionResult::GetColumns() const
{
    return m_columns;
}

void SqlRunExecutionResult::SetColumns(const vector<ResultColumnInfo>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool SqlRunExecutionResult::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

vector<SqlRunResultRow> SqlRunExecutionResult::GetRows() const
{
    return m_rows;
}

void SqlRunExecutionResult::SetRows(const vector<SqlRunResultRow>& _rows)
{
    m_rows = _rows;
    m_rowsHasBeenSet = true;
}

bool SqlRunExecutionResult::RowsHasBeenSet() const
{
    return m_rowsHasBeenSet;
}

int64_t SqlRunExecutionResult::GetTotal() const
{
    return m_total;
}

void SqlRunExecutionResult::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool SqlRunExecutionResult::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

int64_t SqlRunExecutionResult::GetCostMs() const
{
    return m_costMs;
}

void SqlRunExecutionResult::SetCostMs(const int64_t& _costMs)
{
    m_costMs = _costMs;
    m_costMsHasBeenSet = true;
}

bool SqlRunExecutionResult::CostMsHasBeenSet() const
{
    return m_costMsHasBeenSet;
}

bool SqlRunExecutionResult::GetTruncated() const
{
    return m_truncated;
}

void SqlRunExecutionResult::SetTruncated(const bool& _truncated)
{
    m_truncated = _truncated;
    m_truncatedHasBeenSet = true;
}

bool SqlRunExecutionResult::TruncatedHasBeenSet() const
{
    return m_truncatedHasBeenSet;
}

