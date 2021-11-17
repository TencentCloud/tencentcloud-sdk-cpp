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

#include <tencentcloud/mariadb/v20170312/model/SlowLogData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

SlowLogData::SlowLogData() :
    m_checkSumHasBeenSet(false),
    m_dbHasBeenSet(false),
    m_fingerPrintHasBeenSet(false),
    m_lockTimeAvgHasBeenSet(false),
    m_lockTimeMaxHasBeenSet(false),
    m_lockTimeMinHasBeenSet(false),
    m_lockTimeSumHasBeenSet(false),
    m_queryCountHasBeenSet(false),
    m_queryTimeAvgHasBeenSet(false),
    m_queryTimeMaxHasBeenSet(false),
    m_queryTimeMinHasBeenSet(false),
    m_queryTimeSumHasBeenSet(false),
    m_rowsExaminedSumHasBeenSet(false),
    m_rowsSentSumHasBeenSet(false),
    m_tsMaxHasBeenSet(false),
    m_tsMinHasBeenSet(false),
    m_userHasBeenSet(false),
    m_exampleSqlHasBeenSet(false),
    m_hostHasBeenSet(false)
{
}

CoreInternalOutcome SlowLogData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckSum") && !value["CheckSum"].IsNull())
    {
        if (!value["CheckSum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.CheckSum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkSum = string(value["CheckSum"].GetString());
        m_checkSumHasBeenSet = true;
    }

    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("FingerPrint") && !value["FingerPrint"].IsNull())
    {
        if (!value["FingerPrint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.FingerPrint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fingerPrint = string(value["FingerPrint"].GetString());
        m_fingerPrintHasBeenSet = true;
    }

    if (value.HasMember("LockTimeAvg") && !value["LockTimeAvg"].IsNull())
    {
        if (!value["LockTimeAvg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.LockTimeAvg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockTimeAvg = string(value["LockTimeAvg"].GetString());
        m_lockTimeAvgHasBeenSet = true;
    }

    if (value.HasMember("LockTimeMax") && !value["LockTimeMax"].IsNull())
    {
        if (!value["LockTimeMax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.LockTimeMax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockTimeMax = string(value["LockTimeMax"].GetString());
        m_lockTimeMaxHasBeenSet = true;
    }

    if (value.HasMember("LockTimeMin") && !value["LockTimeMin"].IsNull())
    {
        if (!value["LockTimeMin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.LockTimeMin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockTimeMin = string(value["LockTimeMin"].GetString());
        m_lockTimeMinHasBeenSet = true;
    }

    if (value.HasMember("LockTimeSum") && !value["LockTimeSum"].IsNull())
    {
        if (!value["LockTimeSum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.LockTimeSum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockTimeSum = string(value["LockTimeSum"].GetString());
        m_lockTimeSumHasBeenSet = true;
    }

    if (value.HasMember("QueryCount") && !value["QueryCount"].IsNull())
    {
        if (!value["QueryCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.QueryCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryCount = string(value["QueryCount"].GetString());
        m_queryCountHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeAvg") && !value["QueryTimeAvg"].IsNull())
    {
        if (!value["QueryTimeAvg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.QueryTimeAvg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeAvg = string(value["QueryTimeAvg"].GetString());
        m_queryTimeAvgHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeMax") && !value["QueryTimeMax"].IsNull())
    {
        if (!value["QueryTimeMax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.QueryTimeMax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeMax = string(value["QueryTimeMax"].GetString());
        m_queryTimeMaxHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeMin") && !value["QueryTimeMin"].IsNull())
    {
        if (!value["QueryTimeMin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.QueryTimeMin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeMin = string(value["QueryTimeMin"].GetString());
        m_queryTimeMinHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeSum") && !value["QueryTimeSum"].IsNull())
    {
        if (!value["QueryTimeSum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.QueryTimeSum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeSum = string(value["QueryTimeSum"].GetString());
        m_queryTimeSumHasBeenSet = true;
    }

    if (value.HasMember("RowsExaminedSum") && !value["RowsExaminedSum"].IsNull())
    {
        if (!value["RowsExaminedSum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.RowsExaminedSum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rowsExaminedSum = string(value["RowsExaminedSum"].GetString());
        m_rowsExaminedSumHasBeenSet = true;
    }

    if (value.HasMember("RowsSentSum") && !value["RowsSentSum"].IsNull())
    {
        if (!value["RowsSentSum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.RowsSentSum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rowsSentSum = string(value["RowsSentSum"].GetString());
        m_rowsSentSumHasBeenSet = true;
    }

    if (value.HasMember("TsMax") && !value["TsMax"].IsNull())
    {
        if (!value["TsMax"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.TsMax` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tsMax = string(value["TsMax"].GetString());
        m_tsMaxHasBeenSet = true;
    }

    if (value.HasMember("TsMin") && !value["TsMin"].IsNull())
    {
        if (!value["TsMin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.TsMin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tsMin = string(value["TsMin"].GetString());
        m_tsMinHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("ExampleSql") && !value["ExampleSql"].IsNull())
    {
        if (!value["ExampleSql"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.ExampleSql` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exampleSql = string(value["ExampleSql"].GetString());
        m_exampleSqlHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SlowLogData.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SlowLogData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkSum.c_str(), allocator).Move(), allocator);
    }

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
    }

    if (m_fingerPrintHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FingerPrint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fingerPrint.c_str(), allocator).Move(), allocator);
    }

    if (m_lockTimeAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTimeAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockTimeAvg.c_str(), allocator).Move(), allocator);
    }

    if (m_lockTimeMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTimeMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockTimeMax.c_str(), allocator).Move(), allocator);
    }

    if (m_lockTimeMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTimeMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockTimeMin.c_str(), allocator).Move(), allocator);
    }

    if (m_lockTimeSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTimeSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockTimeSum.c_str(), allocator).Move(), allocator);
    }

    if (m_queryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryCount.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTimeAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTimeAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryTimeAvg.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTimeMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTimeMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryTimeMax.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTimeMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTimeMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryTimeMin.c_str(), allocator).Move(), allocator);
    }

    if (m_queryTimeSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTimeSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryTimeSum.c_str(), allocator).Move(), allocator);
    }

    if (m_rowsExaminedSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowsExaminedSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rowsExaminedSum.c_str(), allocator).Move(), allocator);
    }

    if (m_rowsSentSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowsSentSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rowsSentSum.c_str(), allocator).Move(), allocator);
    }

    if (m_tsMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tsMax.c_str(), allocator).Move(), allocator);
    }

    if (m_tsMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tsMin.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_exampleSqlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExampleSql";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exampleSql.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

}


string SlowLogData::GetCheckSum() const
{
    return m_checkSum;
}

void SlowLogData::SetCheckSum(const string& _checkSum)
{
    m_checkSum = _checkSum;
    m_checkSumHasBeenSet = true;
}

bool SlowLogData::CheckSumHasBeenSet() const
{
    return m_checkSumHasBeenSet;
}

string SlowLogData::GetDb() const
{
    return m_db;
}

void SlowLogData::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool SlowLogData::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string SlowLogData::GetFingerPrint() const
{
    return m_fingerPrint;
}

void SlowLogData::SetFingerPrint(const string& _fingerPrint)
{
    m_fingerPrint = _fingerPrint;
    m_fingerPrintHasBeenSet = true;
}

bool SlowLogData::FingerPrintHasBeenSet() const
{
    return m_fingerPrintHasBeenSet;
}

string SlowLogData::GetLockTimeAvg() const
{
    return m_lockTimeAvg;
}

void SlowLogData::SetLockTimeAvg(const string& _lockTimeAvg)
{
    m_lockTimeAvg = _lockTimeAvg;
    m_lockTimeAvgHasBeenSet = true;
}

bool SlowLogData::LockTimeAvgHasBeenSet() const
{
    return m_lockTimeAvgHasBeenSet;
}

string SlowLogData::GetLockTimeMax() const
{
    return m_lockTimeMax;
}

void SlowLogData::SetLockTimeMax(const string& _lockTimeMax)
{
    m_lockTimeMax = _lockTimeMax;
    m_lockTimeMaxHasBeenSet = true;
}

bool SlowLogData::LockTimeMaxHasBeenSet() const
{
    return m_lockTimeMaxHasBeenSet;
}

string SlowLogData::GetLockTimeMin() const
{
    return m_lockTimeMin;
}

void SlowLogData::SetLockTimeMin(const string& _lockTimeMin)
{
    m_lockTimeMin = _lockTimeMin;
    m_lockTimeMinHasBeenSet = true;
}

bool SlowLogData::LockTimeMinHasBeenSet() const
{
    return m_lockTimeMinHasBeenSet;
}

string SlowLogData::GetLockTimeSum() const
{
    return m_lockTimeSum;
}

void SlowLogData::SetLockTimeSum(const string& _lockTimeSum)
{
    m_lockTimeSum = _lockTimeSum;
    m_lockTimeSumHasBeenSet = true;
}

bool SlowLogData::LockTimeSumHasBeenSet() const
{
    return m_lockTimeSumHasBeenSet;
}

string SlowLogData::GetQueryCount() const
{
    return m_queryCount;
}

void SlowLogData::SetQueryCount(const string& _queryCount)
{
    m_queryCount = _queryCount;
    m_queryCountHasBeenSet = true;
}

bool SlowLogData::QueryCountHasBeenSet() const
{
    return m_queryCountHasBeenSet;
}

string SlowLogData::GetQueryTimeAvg() const
{
    return m_queryTimeAvg;
}

void SlowLogData::SetQueryTimeAvg(const string& _queryTimeAvg)
{
    m_queryTimeAvg = _queryTimeAvg;
    m_queryTimeAvgHasBeenSet = true;
}

bool SlowLogData::QueryTimeAvgHasBeenSet() const
{
    return m_queryTimeAvgHasBeenSet;
}

string SlowLogData::GetQueryTimeMax() const
{
    return m_queryTimeMax;
}

void SlowLogData::SetQueryTimeMax(const string& _queryTimeMax)
{
    m_queryTimeMax = _queryTimeMax;
    m_queryTimeMaxHasBeenSet = true;
}

bool SlowLogData::QueryTimeMaxHasBeenSet() const
{
    return m_queryTimeMaxHasBeenSet;
}

string SlowLogData::GetQueryTimeMin() const
{
    return m_queryTimeMin;
}

void SlowLogData::SetQueryTimeMin(const string& _queryTimeMin)
{
    m_queryTimeMin = _queryTimeMin;
    m_queryTimeMinHasBeenSet = true;
}

bool SlowLogData::QueryTimeMinHasBeenSet() const
{
    return m_queryTimeMinHasBeenSet;
}

string SlowLogData::GetQueryTimeSum() const
{
    return m_queryTimeSum;
}

void SlowLogData::SetQueryTimeSum(const string& _queryTimeSum)
{
    m_queryTimeSum = _queryTimeSum;
    m_queryTimeSumHasBeenSet = true;
}

bool SlowLogData::QueryTimeSumHasBeenSet() const
{
    return m_queryTimeSumHasBeenSet;
}

string SlowLogData::GetRowsExaminedSum() const
{
    return m_rowsExaminedSum;
}

void SlowLogData::SetRowsExaminedSum(const string& _rowsExaminedSum)
{
    m_rowsExaminedSum = _rowsExaminedSum;
    m_rowsExaminedSumHasBeenSet = true;
}

bool SlowLogData::RowsExaminedSumHasBeenSet() const
{
    return m_rowsExaminedSumHasBeenSet;
}

string SlowLogData::GetRowsSentSum() const
{
    return m_rowsSentSum;
}

void SlowLogData::SetRowsSentSum(const string& _rowsSentSum)
{
    m_rowsSentSum = _rowsSentSum;
    m_rowsSentSumHasBeenSet = true;
}

bool SlowLogData::RowsSentSumHasBeenSet() const
{
    return m_rowsSentSumHasBeenSet;
}

string SlowLogData::GetTsMax() const
{
    return m_tsMax;
}

void SlowLogData::SetTsMax(const string& _tsMax)
{
    m_tsMax = _tsMax;
    m_tsMaxHasBeenSet = true;
}

bool SlowLogData::TsMaxHasBeenSet() const
{
    return m_tsMaxHasBeenSet;
}

string SlowLogData::GetTsMin() const
{
    return m_tsMin;
}

void SlowLogData::SetTsMin(const string& _tsMin)
{
    m_tsMin = _tsMin;
    m_tsMinHasBeenSet = true;
}

bool SlowLogData::TsMinHasBeenSet() const
{
    return m_tsMinHasBeenSet;
}

string SlowLogData::GetUser() const
{
    return m_user;
}

void SlowLogData::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool SlowLogData::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string SlowLogData::GetExampleSql() const
{
    return m_exampleSql;
}

void SlowLogData::SetExampleSql(const string& _exampleSql)
{
    m_exampleSql = _exampleSql;
    m_exampleSqlHasBeenSet = true;
}

bool SlowLogData::ExampleSqlHasBeenSet() const
{
    return m_exampleSqlHasBeenSet;
}

string SlowLogData::GetHost() const
{
    return m_host;
}

void SlowLogData::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool SlowLogData::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

