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

#include <tencentcloud/cynosdb/v20190107/model/ExecutionPlanDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ExecutionPlanDetail::ExecutionPlanDetail() :
    m_templateIDHasBeenSet(false),
    m_dbHasBeenSet(false),
    m_sQLSampleHasBeenSet(false),
    m_sQLSampleRewrittenHasBeenSet(false),
    m_tablePlanBeforeHasBeenSet(false),
    m_tablePlanAfterHasBeenSet(false),
    m_treePlanBeforeHasBeenSet(false),
    m_treePlanAfterHasBeenSet(false),
    m_queryTimeBeforeHasBeenSet(false),
    m_queryTimeAfterHasBeenSet(false),
    m_sQLScanRowsBeforeHasBeenSet(false),
    m_sQLScanRowsAfterHasBeenSet(false)
{
}

CoreInternalOutcome ExecutionPlanDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateID") && !value["TemplateID"].IsNull())
    {
        if (!value["TemplateID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlanDetail.TemplateID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateID = string(value["TemplateID"].GetString());
        m_templateIDHasBeenSet = true;
    }

    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlanDetail.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("SQLSample") && !value["SQLSample"].IsNull())
    {
        if (!value["SQLSample"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlanDetail.SQLSample` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQLSample = string(value["SQLSample"].GetString());
        m_sQLSampleHasBeenSet = true;
    }

    if (value.HasMember("SQLSampleRewritten") && !value["SQLSampleRewritten"].IsNull())
    {
        if (!value["SQLSampleRewritten"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlanDetail.SQLSampleRewritten` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQLSampleRewritten = string(value["SQLSampleRewritten"].GetString());
        m_sQLSampleRewrittenHasBeenSet = true;
    }

    if (value.HasMember("TablePlanBefore") && !value["TablePlanBefore"].IsNull())
    {
        if (!value["TablePlanBefore"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExecutionPlanDetail.TablePlanBefore` is not array type"));

        const rapidjson::Value &tmpValue = value["TablePlanBefore"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExplainRow item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tablePlanBefore.push_back(item);
        }
        m_tablePlanBeforeHasBeenSet = true;
    }

    if (value.HasMember("TablePlanAfter") && !value["TablePlanAfter"].IsNull())
    {
        if (!value["TablePlanAfter"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExecutionPlanDetail.TablePlanAfter` is not array type"));

        const rapidjson::Value &tmpValue = value["TablePlanAfter"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExplainRow item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tablePlanAfter.push_back(item);
        }
        m_tablePlanAfterHasBeenSet = true;
    }

    if (value.HasMember("TreePlanBefore") && !value["TreePlanBefore"].IsNull())
    {
        if (!value["TreePlanBefore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlanDetail.TreePlanBefore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treePlanBefore = string(value["TreePlanBefore"].GetString());
        m_treePlanBeforeHasBeenSet = true;
    }

    if (value.HasMember("TreePlanAfter") && !value["TreePlanAfter"].IsNull())
    {
        if (!value["TreePlanAfter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlanDetail.TreePlanAfter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_treePlanAfter = string(value["TreePlanAfter"].GetString());
        m_treePlanAfterHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeBefore") && !value["QueryTimeBefore"].IsNull())
    {
        if (!value["QueryTimeBefore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlanDetail.QueryTimeBefore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeBefore = value["QueryTimeBefore"].GetDouble();
        m_queryTimeBeforeHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeAfter") && !value["QueryTimeAfter"].IsNull())
    {
        if (!value["QueryTimeAfter"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlanDetail.QueryTimeAfter` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeAfter = value["QueryTimeAfter"].GetDouble();
        m_queryTimeAfterHasBeenSet = true;
    }

    if (value.HasMember("SQLScanRowsBefore") && !value["SQLScanRowsBefore"].IsNull())
    {
        if (!value["SQLScanRowsBefore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlanDetail.SQLScanRowsBefore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sQLScanRowsBefore = value["SQLScanRowsBefore"].GetInt64();
        m_sQLScanRowsBeforeHasBeenSet = true;
    }

    if (value.HasMember("SQLScanRowsAfter") && !value["SQLScanRowsAfter"].IsNull())
    {
        if (!value["SQLScanRowsAfter"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionPlanDetail.SQLScanRowsAfter` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sQLScanRowsAfter = value["SQLScanRowsAfter"].GetInt64();
        m_sQLScanRowsAfterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecutionPlanDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateID.c_str(), allocator).Move(), allocator);
    }

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLSampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLSample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQLSample.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLSampleRewrittenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLSampleRewritten";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQLSampleRewritten.c_str(), allocator).Move(), allocator);
    }

    if (m_tablePlanBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePlanBefore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tablePlanBefore.begin(); itr != m_tablePlanBefore.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tablePlanAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePlanAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tablePlanAfter.begin(); itr != m_tablePlanAfter.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_treePlanBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreePlanBefore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treePlanBefore.c_str(), allocator).Move(), allocator);
    }

    if (m_treePlanAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TreePlanAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_treePlanAfter.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTimeBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTimeBefore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTimeBefore, allocator);
    }

    if (m_queryTimeAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTimeAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queryTimeAfter, allocator);
    }

    if (m_sQLScanRowsBeforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLScanRowsBefore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sQLScanRowsBefore, allocator);
    }

    if (m_sQLScanRowsAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLScanRowsAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sQLScanRowsAfter, allocator);
    }

}


string ExecutionPlanDetail::GetTemplateID() const
{
    return m_templateID;
}

void ExecutionPlanDetail::SetTemplateID(const string& _templateID)
{
    m_templateID = _templateID;
    m_templateIDHasBeenSet = true;
}

bool ExecutionPlanDetail::TemplateIDHasBeenSet() const
{
    return m_templateIDHasBeenSet;
}

string ExecutionPlanDetail::GetDb() const
{
    return m_db;
}

void ExecutionPlanDetail::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool ExecutionPlanDetail::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string ExecutionPlanDetail::GetSQLSample() const
{
    return m_sQLSample;
}

void ExecutionPlanDetail::SetSQLSample(const string& _sQLSample)
{
    m_sQLSample = _sQLSample;
    m_sQLSampleHasBeenSet = true;
}

bool ExecutionPlanDetail::SQLSampleHasBeenSet() const
{
    return m_sQLSampleHasBeenSet;
}

string ExecutionPlanDetail::GetSQLSampleRewritten() const
{
    return m_sQLSampleRewritten;
}

void ExecutionPlanDetail::SetSQLSampleRewritten(const string& _sQLSampleRewritten)
{
    m_sQLSampleRewritten = _sQLSampleRewritten;
    m_sQLSampleRewrittenHasBeenSet = true;
}

bool ExecutionPlanDetail::SQLSampleRewrittenHasBeenSet() const
{
    return m_sQLSampleRewrittenHasBeenSet;
}

vector<ExplainRow> ExecutionPlanDetail::GetTablePlanBefore() const
{
    return m_tablePlanBefore;
}

void ExecutionPlanDetail::SetTablePlanBefore(const vector<ExplainRow>& _tablePlanBefore)
{
    m_tablePlanBefore = _tablePlanBefore;
    m_tablePlanBeforeHasBeenSet = true;
}

bool ExecutionPlanDetail::TablePlanBeforeHasBeenSet() const
{
    return m_tablePlanBeforeHasBeenSet;
}

vector<ExplainRow> ExecutionPlanDetail::GetTablePlanAfter() const
{
    return m_tablePlanAfter;
}

void ExecutionPlanDetail::SetTablePlanAfter(const vector<ExplainRow>& _tablePlanAfter)
{
    m_tablePlanAfter = _tablePlanAfter;
    m_tablePlanAfterHasBeenSet = true;
}

bool ExecutionPlanDetail::TablePlanAfterHasBeenSet() const
{
    return m_tablePlanAfterHasBeenSet;
}

string ExecutionPlanDetail::GetTreePlanBefore() const
{
    return m_treePlanBefore;
}

void ExecutionPlanDetail::SetTreePlanBefore(const string& _treePlanBefore)
{
    m_treePlanBefore = _treePlanBefore;
    m_treePlanBeforeHasBeenSet = true;
}

bool ExecutionPlanDetail::TreePlanBeforeHasBeenSet() const
{
    return m_treePlanBeforeHasBeenSet;
}

string ExecutionPlanDetail::GetTreePlanAfter() const
{
    return m_treePlanAfter;
}

void ExecutionPlanDetail::SetTreePlanAfter(const string& _treePlanAfter)
{
    m_treePlanAfter = _treePlanAfter;
    m_treePlanAfterHasBeenSet = true;
}

bool ExecutionPlanDetail::TreePlanAfterHasBeenSet() const
{
    return m_treePlanAfterHasBeenSet;
}

double ExecutionPlanDetail::GetQueryTimeBefore() const
{
    return m_queryTimeBefore;
}

void ExecutionPlanDetail::SetQueryTimeBefore(const double& _queryTimeBefore)
{
    m_queryTimeBefore = _queryTimeBefore;
    m_queryTimeBeforeHasBeenSet = true;
}

bool ExecutionPlanDetail::QueryTimeBeforeHasBeenSet() const
{
    return m_queryTimeBeforeHasBeenSet;
}

double ExecutionPlanDetail::GetQueryTimeAfter() const
{
    return m_queryTimeAfter;
}

void ExecutionPlanDetail::SetQueryTimeAfter(const double& _queryTimeAfter)
{
    m_queryTimeAfter = _queryTimeAfter;
    m_queryTimeAfterHasBeenSet = true;
}

bool ExecutionPlanDetail::QueryTimeAfterHasBeenSet() const
{
    return m_queryTimeAfterHasBeenSet;
}

int64_t ExecutionPlanDetail::GetSQLScanRowsBefore() const
{
    return m_sQLScanRowsBefore;
}

void ExecutionPlanDetail::SetSQLScanRowsBefore(const int64_t& _sQLScanRowsBefore)
{
    m_sQLScanRowsBefore = _sQLScanRowsBefore;
    m_sQLScanRowsBeforeHasBeenSet = true;
}

bool ExecutionPlanDetail::SQLScanRowsBeforeHasBeenSet() const
{
    return m_sQLScanRowsBeforeHasBeenSet;
}

int64_t ExecutionPlanDetail::GetSQLScanRowsAfter() const
{
    return m_sQLScanRowsAfter;
}

void ExecutionPlanDetail::SetSQLScanRowsAfter(const int64_t& _sQLScanRowsAfter)
{
    m_sQLScanRowsAfter = _sQLScanRowsAfter;
    m_sQLScanRowsAfterHasBeenSet = true;
}

bool ExecutionPlanDetail::SQLScanRowsAfterHasBeenSet() const
{
    return m_sQLScanRowsAfterHasBeenSet;
}

