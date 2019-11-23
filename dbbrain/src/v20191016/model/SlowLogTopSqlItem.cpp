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

#include <tencentcloud/dbbrain/v20191016/model/SlowLogTopSqlItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace rapidjson;
using namespace std;

SlowLogTopSqlItem::SlowLogTopSqlItem() :
    m_lockTimeHasBeenSet(false),
    m_lockTimeMaxHasBeenSet(false),
    m_lockTimeMinHasBeenSet(false),
    m_rowsExaminedHasBeenSet(false),
    m_rowsExaminedMaxHasBeenSet(false),
    m_rowsExaminedMinHasBeenSet(false),
    m_queryTimeHasBeenSet(false),
    m_queryTimeMaxHasBeenSet(false),
    m_queryTimeMinHasBeenSet(false),
    m_rowsSentHasBeenSet(false),
    m_rowsSentMaxHasBeenSet(false),
    m_rowsSentMinHasBeenSet(false),
    m_execTimesHasBeenSet(false),
    m_sqlTemplateHasBeenSet(false),
    m_sqlTextHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_queryTimeRatioHasBeenSet(false),
    m_lockTimeRatioHasBeenSet(false),
    m_rowsExaminedRatioHasBeenSet(false),
    m_rowsSentRatioHasBeenSet(false)
{
}

CoreInternalOutcome SlowLogTopSqlItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("LockTime") && !value["LockTime"].IsNull())
    {
        if (!value["LockTime"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.LockTime` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lockTime = value["LockTime"].GetDouble();
        m_lockTimeHasBeenSet = true;
    }

    if (value.HasMember("LockTimeMax") && !value["LockTimeMax"].IsNull())
    {
        if (!value["LockTimeMax"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.LockTimeMax` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lockTimeMax = value["LockTimeMax"].GetDouble();
        m_lockTimeMaxHasBeenSet = true;
    }

    if (value.HasMember("LockTimeMin") && !value["LockTimeMin"].IsNull())
    {
        if (!value["LockTimeMin"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.LockTimeMin` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lockTimeMin = value["LockTimeMin"].GetDouble();
        m_lockTimeMinHasBeenSet = true;
    }

    if (value.HasMember("RowsExamined") && !value["RowsExamined"].IsNull())
    {
        if (!value["RowsExamined"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.RowsExamined` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsExamined = value["RowsExamined"].GetInt64();
        m_rowsExaminedHasBeenSet = true;
    }

    if (value.HasMember("RowsExaminedMax") && !value["RowsExaminedMax"].IsNull())
    {
        if (!value["RowsExaminedMax"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.RowsExaminedMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsExaminedMax = value["RowsExaminedMax"].GetInt64();
        m_rowsExaminedMaxHasBeenSet = true;
    }

    if (value.HasMember("RowsExaminedMin") && !value["RowsExaminedMin"].IsNull())
    {
        if (!value["RowsExaminedMin"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.RowsExaminedMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsExaminedMin = value["RowsExaminedMin"].GetInt64();
        m_rowsExaminedMinHasBeenSet = true;
    }

    if (value.HasMember("QueryTime") && !value["QueryTime"].IsNull())
    {
        if (!value["QueryTime"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.QueryTime` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTime = value["QueryTime"].GetDouble();
        m_queryTimeHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeMax") && !value["QueryTimeMax"].IsNull())
    {
        if (!value["QueryTimeMax"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.QueryTimeMax` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeMax = value["QueryTimeMax"].GetDouble();
        m_queryTimeMaxHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeMin") && !value["QueryTimeMin"].IsNull())
    {
        if (!value["QueryTimeMin"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.QueryTimeMin` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeMin = value["QueryTimeMin"].GetDouble();
        m_queryTimeMinHasBeenSet = true;
    }

    if (value.HasMember("RowsSent") && !value["RowsSent"].IsNull())
    {
        if (!value["RowsSent"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.RowsSent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsSent = value["RowsSent"].GetInt64();
        m_rowsSentHasBeenSet = true;
    }

    if (value.HasMember("RowsSentMax") && !value["RowsSentMax"].IsNull())
    {
        if (!value["RowsSentMax"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.RowsSentMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsSentMax = value["RowsSentMax"].GetInt64();
        m_rowsSentMaxHasBeenSet = true;
    }

    if (value.HasMember("RowsSentMin") && !value["RowsSentMin"].IsNull())
    {
        if (!value["RowsSentMin"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.RowsSentMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rowsSentMin = value["RowsSentMin"].GetInt64();
        m_rowsSentMinHasBeenSet = true;
    }

    if (value.HasMember("ExecTimes") && !value["ExecTimes"].IsNull())
    {
        if (!value["ExecTimes"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.ExecTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_execTimes = value["ExecTimes"].GetInt64();
        m_execTimesHasBeenSet = true;
    }

    if (value.HasMember("SqlTemplate") && !value["SqlTemplate"].IsNull())
    {
        if (!value["SqlTemplate"].IsString())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.SqlTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlTemplate = string(value["SqlTemplate"].GetString());
        m_sqlTemplateHasBeenSet = true;
    }

    if (value.HasMember("SqlText") && !value["SqlText"].IsNull())
    {
        if (!value["SqlText"].IsString())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.SqlText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlText = string(value["SqlText"].GetString());
        m_sqlTextHasBeenSet = true;
    }

    if (value.HasMember("Schema") && !value["Schema"].IsNull())
    {
        if (!value["Schema"].IsString())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.Schema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schema = string(value["Schema"].GetString());
        m_schemaHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeRatio") && !value["QueryTimeRatio"].IsNull())
    {
        if (!value["QueryTimeRatio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.QueryTimeRatio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeRatio = value["QueryTimeRatio"].GetDouble();
        m_queryTimeRatioHasBeenSet = true;
    }

    if (value.HasMember("LockTimeRatio") && !value["LockTimeRatio"].IsNull())
    {
        if (!value["LockTimeRatio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.LockTimeRatio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lockTimeRatio = value["LockTimeRatio"].GetDouble();
        m_lockTimeRatioHasBeenSet = true;
    }

    if (value.HasMember("RowsExaminedRatio") && !value["RowsExaminedRatio"].IsNull())
    {
        if (!value["RowsExaminedRatio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.RowsExaminedRatio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rowsExaminedRatio = value["RowsExaminedRatio"].GetDouble();
        m_rowsExaminedRatioHasBeenSet = true;
    }

    if (value.HasMember("RowsSentRatio") && !value["RowsSentRatio"].IsNull())
    {
        if (!value["RowsSentRatio"].IsDouble())
        {
            return CoreInternalOutcome(Error("response `SlowLogTopSqlItem.RowsSentRatio` IsDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rowsSentRatio = value["RowsSentRatio"].GetDouble();
        m_rowsSentRatioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowLogTopSqlItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_lockTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockTime, allocator);
    }

    if (m_lockTimeMaxHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LockTimeMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockTimeMax, allocator);
    }

    if (m_lockTimeMinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LockTimeMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockTimeMin, allocator);
    }

    if (m_rowsExaminedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RowsExamined";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsExamined, allocator);
    }

    if (m_rowsExaminedMaxHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RowsExaminedMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsExaminedMax, allocator);
    }

    if (m_rowsExaminedMinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RowsExaminedMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsExaminedMin, allocator);
    }

    if (m_queryTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueryTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTime, allocator);
    }

    if (m_queryTimeMaxHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueryTimeMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTimeMax, allocator);
    }

    if (m_queryTimeMinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueryTimeMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTimeMin, allocator);
    }

    if (m_rowsSentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RowsSent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsSent, allocator);
    }

    if (m_rowsSentMaxHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RowsSentMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsSentMax, allocator);
    }

    if (m_rowsSentMinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RowsSentMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsSentMin, allocator);
    }

    if (m_execTimesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExecTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_execTimes, allocator);
    }

    if (m_sqlTemplateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SqlTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sqlTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SqlText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_sqlText.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_schema.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTimeRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueryTimeRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTimeRatio, allocator);
    }

    if (m_lockTimeRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LockTimeRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockTimeRatio, allocator);
    }

    if (m_rowsExaminedRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RowsExaminedRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsExaminedRatio, allocator);
    }

    if (m_rowsSentRatioHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RowsSentRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rowsSentRatio, allocator);
    }

}


double SlowLogTopSqlItem::GetLockTime() const
{
    return m_lockTime;
}

void SlowLogTopSqlItem::SetLockTime(const double& _lockTime)
{
    m_lockTime = _lockTime;
    m_lockTimeHasBeenSet = true;
}

bool SlowLogTopSqlItem::LockTimeHasBeenSet() const
{
    return m_lockTimeHasBeenSet;
}

double SlowLogTopSqlItem::GetLockTimeMax() const
{
    return m_lockTimeMax;
}

void SlowLogTopSqlItem::SetLockTimeMax(const double& _lockTimeMax)
{
    m_lockTimeMax = _lockTimeMax;
    m_lockTimeMaxHasBeenSet = true;
}

bool SlowLogTopSqlItem::LockTimeMaxHasBeenSet() const
{
    return m_lockTimeMaxHasBeenSet;
}

double SlowLogTopSqlItem::GetLockTimeMin() const
{
    return m_lockTimeMin;
}

void SlowLogTopSqlItem::SetLockTimeMin(const double& _lockTimeMin)
{
    m_lockTimeMin = _lockTimeMin;
    m_lockTimeMinHasBeenSet = true;
}

bool SlowLogTopSqlItem::LockTimeMinHasBeenSet() const
{
    return m_lockTimeMinHasBeenSet;
}

int64_t SlowLogTopSqlItem::GetRowsExamined() const
{
    return m_rowsExamined;
}

void SlowLogTopSqlItem::SetRowsExamined(const int64_t& _rowsExamined)
{
    m_rowsExamined = _rowsExamined;
    m_rowsExaminedHasBeenSet = true;
}

bool SlowLogTopSqlItem::RowsExaminedHasBeenSet() const
{
    return m_rowsExaminedHasBeenSet;
}

int64_t SlowLogTopSqlItem::GetRowsExaminedMax() const
{
    return m_rowsExaminedMax;
}

void SlowLogTopSqlItem::SetRowsExaminedMax(const int64_t& _rowsExaminedMax)
{
    m_rowsExaminedMax = _rowsExaminedMax;
    m_rowsExaminedMaxHasBeenSet = true;
}

bool SlowLogTopSqlItem::RowsExaminedMaxHasBeenSet() const
{
    return m_rowsExaminedMaxHasBeenSet;
}

int64_t SlowLogTopSqlItem::GetRowsExaminedMin() const
{
    return m_rowsExaminedMin;
}

void SlowLogTopSqlItem::SetRowsExaminedMin(const int64_t& _rowsExaminedMin)
{
    m_rowsExaminedMin = _rowsExaminedMin;
    m_rowsExaminedMinHasBeenSet = true;
}

bool SlowLogTopSqlItem::RowsExaminedMinHasBeenSet() const
{
    return m_rowsExaminedMinHasBeenSet;
}

double SlowLogTopSqlItem::GetQueryTime() const
{
    return m_queryTime;
}

void SlowLogTopSqlItem::SetQueryTime(const double& _queryTime)
{
    m_queryTime = _queryTime;
    m_queryTimeHasBeenSet = true;
}

bool SlowLogTopSqlItem::QueryTimeHasBeenSet() const
{
    return m_queryTimeHasBeenSet;
}

double SlowLogTopSqlItem::GetQueryTimeMax() const
{
    return m_queryTimeMax;
}

void SlowLogTopSqlItem::SetQueryTimeMax(const double& _queryTimeMax)
{
    m_queryTimeMax = _queryTimeMax;
    m_queryTimeMaxHasBeenSet = true;
}

bool SlowLogTopSqlItem::QueryTimeMaxHasBeenSet() const
{
    return m_queryTimeMaxHasBeenSet;
}

double SlowLogTopSqlItem::GetQueryTimeMin() const
{
    return m_queryTimeMin;
}

void SlowLogTopSqlItem::SetQueryTimeMin(const double& _queryTimeMin)
{
    m_queryTimeMin = _queryTimeMin;
    m_queryTimeMinHasBeenSet = true;
}

bool SlowLogTopSqlItem::QueryTimeMinHasBeenSet() const
{
    return m_queryTimeMinHasBeenSet;
}

int64_t SlowLogTopSqlItem::GetRowsSent() const
{
    return m_rowsSent;
}

void SlowLogTopSqlItem::SetRowsSent(const int64_t& _rowsSent)
{
    m_rowsSent = _rowsSent;
    m_rowsSentHasBeenSet = true;
}

bool SlowLogTopSqlItem::RowsSentHasBeenSet() const
{
    return m_rowsSentHasBeenSet;
}

int64_t SlowLogTopSqlItem::GetRowsSentMax() const
{
    return m_rowsSentMax;
}

void SlowLogTopSqlItem::SetRowsSentMax(const int64_t& _rowsSentMax)
{
    m_rowsSentMax = _rowsSentMax;
    m_rowsSentMaxHasBeenSet = true;
}

bool SlowLogTopSqlItem::RowsSentMaxHasBeenSet() const
{
    return m_rowsSentMaxHasBeenSet;
}

int64_t SlowLogTopSqlItem::GetRowsSentMin() const
{
    return m_rowsSentMin;
}

void SlowLogTopSqlItem::SetRowsSentMin(const int64_t& _rowsSentMin)
{
    m_rowsSentMin = _rowsSentMin;
    m_rowsSentMinHasBeenSet = true;
}

bool SlowLogTopSqlItem::RowsSentMinHasBeenSet() const
{
    return m_rowsSentMinHasBeenSet;
}

int64_t SlowLogTopSqlItem::GetExecTimes() const
{
    return m_execTimes;
}

void SlowLogTopSqlItem::SetExecTimes(const int64_t& _execTimes)
{
    m_execTimes = _execTimes;
    m_execTimesHasBeenSet = true;
}

bool SlowLogTopSqlItem::ExecTimesHasBeenSet() const
{
    return m_execTimesHasBeenSet;
}

string SlowLogTopSqlItem::GetSqlTemplate() const
{
    return m_sqlTemplate;
}

void SlowLogTopSqlItem::SetSqlTemplate(const string& _sqlTemplate)
{
    m_sqlTemplate = _sqlTemplate;
    m_sqlTemplateHasBeenSet = true;
}

bool SlowLogTopSqlItem::SqlTemplateHasBeenSet() const
{
    return m_sqlTemplateHasBeenSet;
}

string SlowLogTopSqlItem::GetSqlText() const
{
    return m_sqlText;
}

void SlowLogTopSqlItem::SetSqlText(const string& _sqlText)
{
    m_sqlText = _sqlText;
    m_sqlTextHasBeenSet = true;
}

bool SlowLogTopSqlItem::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

string SlowLogTopSqlItem::GetSchema() const
{
    return m_schema;
}

void SlowLogTopSqlItem::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool SlowLogTopSqlItem::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}

double SlowLogTopSqlItem::GetQueryTimeRatio() const
{
    return m_queryTimeRatio;
}

void SlowLogTopSqlItem::SetQueryTimeRatio(const double& _queryTimeRatio)
{
    m_queryTimeRatio = _queryTimeRatio;
    m_queryTimeRatioHasBeenSet = true;
}

bool SlowLogTopSqlItem::QueryTimeRatioHasBeenSet() const
{
    return m_queryTimeRatioHasBeenSet;
}

double SlowLogTopSqlItem::GetLockTimeRatio() const
{
    return m_lockTimeRatio;
}

void SlowLogTopSqlItem::SetLockTimeRatio(const double& _lockTimeRatio)
{
    m_lockTimeRatio = _lockTimeRatio;
    m_lockTimeRatioHasBeenSet = true;
}

bool SlowLogTopSqlItem::LockTimeRatioHasBeenSet() const
{
    return m_lockTimeRatioHasBeenSet;
}

double SlowLogTopSqlItem::GetRowsExaminedRatio() const
{
    return m_rowsExaminedRatio;
}

void SlowLogTopSqlItem::SetRowsExaminedRatio(const double& _rowsExaminedRatio)
{
    m_rowsExaminedRatio = _rowsExaminedRatio;
    m_rowsExaminedRatioHasBeenSet = true;
}

bool SlowLogTopSqlItem::RowsExaminedRatioHasBeenSet() const
{
    return m_rowsExaminedRatioHasBeenSet;
}

double SlowLogTopSqlItem::GetRowsSentRatio() const
{
    return m_rowsSentRatio;
}

void SlowLogTopSqlItem::SetRowsSentRatio(const double& _rowsSentRatio)
{
    m_rowsSentRatio = _rowsSentRatio;
    m_rowsSentRatioHasBeenSet = true;
}

bool SlowLogTopSqlItem::RowsSentRatioHasBeenSet() const
{
    return m_rowsSentRatioHasBeenSet;
}

