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

#include <tencentcloud/dbbrain/v20210527/model/TopSqlTpl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

TopSqlTpl::TopSqlTpl() :
    m_execTimesHasBeenSet(false),
    m_sqlTemplateIdHasBeenSet(false),
    m_affectRowsMinHasBeenSet(false),
    m_sqlTemplateHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_affectRowsMaxHasBeenSet(false),
    m_sqlTypeHasBeenSet(false),
    m_affectRowsHasBeenSet(false),
    m_dBHasBeenSet(false),
    m_lockWaitTimeMinHasBeenSet(false),
    m_cpuTimeHasBeenSet(false),
    m_ioWaitTimeMaxHasBeenSet(false),
    m_lockWaitTimeMaxHasBeenSet(false),
    m_checkRowsMinHasBeenSet(false),
    m_checkRowsHasBeenSet(false),
    m_cpuTimeMaxHasBeenSet(false),
    m_ioWaitTimeMinHasBeenSet(false),
    m_latencyMaxHasBeenSet(false),
    m_ioWaitTimeHasBeenSet(false),
    m_checkRowsMaxHasBeenSet(false),
    m_cpuTimeMinHasBeenSet(false),
    m_sqlTextHasBeenSet(false),
    m_lockWaitTimeHasBeenSet(false),
    m_latencyMinHasBeenSet(false),
    m_latencyHasBeenSet(false),
    m_queryTimeRatioHasBeenSet(false),
    m_checkRowsAvgHasBeenSet(false),
    m_cpuTimeAvgHasBeenSet(false),
    m_ioWaitTimeAvgHasBeenSet(false),
    m_latencyAvgHasBeenSet(false),
    m_lockWaitTimeAvgHasBeenSet(false),
    m_sentRowsHasBeenSet(false),
    m_sentRowsAvgHasBeenSet(false),
    m_affectRowsAvgHasBeenSet(false)
{
}

CoreInternalOutcome TopSqlTpl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecTimes") && !value["ExecTimes"].IsNull())
    {
        if (!value["ExecTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.ExecTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_execTimes = value["ExecTimes"].GetInt64();
        m_execTimesHasBeenSet = true;
    }

    if (value.HasMember("SqlTemplateId") && !value["SqlTemplateId"].IsNull())
    {
        if (!value["SqlTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.SqlTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlTemplateId = string(value["SqlTemplateId"].GetString());
        m_sqlTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("AffectRowsMin") && !value["AffectRowsMin"].IsNull())
    {
        if (!value["AffectRowsMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.AffectRowsMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectRowsMin = value["AffectRowsMin"].GetInt64();
        m_affectRowsMinHasBeenSet = true;
    }

    if (value.HasMember("SqlTemplate") && !value["SqlTemplate"].IsNull())
    {
        if (!value["SqlTemplate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.SqlTemplate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlTemplate = string(value["SqlTemplate"].GetString());
        m_sqlTemplateHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("AffectRowsMax") && !value["AffectRowsMax"].IsNull())
    {
        if (!value["AffectRowsMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.AffectRowsMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectRowsMax = value["AffectRowsMax"].GetInt64();
        m_affectRowsMaxHasBeenSet = true;
    }

    if (value.HasMember("SqlType") && !value["SqlType"].IsNull())
    {
        if (!value["SqlType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.SqlType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlType = string(value["SqlType"].GetString());
        m_sqlTypeHasBeenSet = true;
    }

    if (value.HasMember("AffectRows") && !value["AffectRows"].IsNull())
    {
        if (!value["AffectRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.AffectRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectRows = value["AffectRows"].GetInt64();
        m_affectRowsHasBeenSet = true;
    }

    if (value.HasMember("DB") && !value["DB"].IsNull())
    {
        if (!value["DB"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.DB` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dB = string(value["DB"].GetString());
        m_dBHasBeenSet = true;
    }

    if (value.HasMember("LockWaitTimeMin") && !value["LockWaitTimeMin"].IsNull())
    {
        if (!value["LockWaitTimeMin"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.LockWaitTimeMin` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lockWaitTimeMin = value["LockWaitTimeMin"].GetDouble();
        m_lockWaitTimeMinHasBeenSet = true;
    }

    if (value.HasMember("CpuTime") && !value["CpuTime"].IsNull())
    {
        if (!value["CpuTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.CpuTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTime = value["CpuTime"].GetDouble();
        m_cpuTimeHasBeenSet = true;
    }

    if (value.HasMember("IoWaitTimeMax") && !value["IoWaitTimeMax"].IsNull())
    {
        if (!value["IoWaitTimeMax"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.IoWaitTimeMax` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ioWaitTimeMax = value["IoWaitTimeMax"].GetDouble();
        m_ioWaitTimeMaxHasBeenSet = true;
    }

    if (value.HasMember("LockWaitTimeMax") && !value["LockWaitTimeMax"].IsNull())
    {
        if (!value["LockWaitTimeMax"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.LockWaitTimeMax` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lockWaitTimeMax = value["LockWaitTimeMax"].GetDouble();
        m_lockWaitTimeMaxHasBeenSet = true;
    }

    if (value.HasMember("CheckRowsMin") && !value["CheckRowsMin"].IsNull())
    {
        if (!value["CheckRowsMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.CheckRowsMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkRowsMin = value["CheckRowsMin"].GetInt64();
        m_checkRowsMinHasBeenSet = true;
    }

    if (value.HasMember("CheckRows") && !value["CheckRows"].IsNull())
    {
        if (!value["CheckRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.CheckRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkRows = value["CheckRows"].GetInt64();
        m_checkRowsHasBeenSet = true;
    }

    if (value.HasMember("CpuTimeMax") && !value["CpuTimeMax"].IsNull())
    {
        if (!value["CpuTimeMax"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.CpuTimeMax` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTimeMax = value["CpuTimeMax"].GetDouble();
        m_cpuTimeMaxHasBeenSet = true;
    }

    if (value.HasMember("IoWaitTimeMin") && !value["IoWaitTimeMin"].IsNull())
    {
        if (!value["IoWaitTimeMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.IoWaitTimeMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ioWaitTimeMin = value["IoWaitTimeMin"].GetInt64();
        m_ioWaitTimeMinHasBeenSet = true;
    }

    if (value.HasMember("LatencyMax") && !value["LatencyMax"].IsNull())
    {
        if (!value["LatencyMax"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.LatencyMax` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_latencyMax = value["LatencyMax"].GetDouble();
        m_latencyMaxHasBeenSet = true;
    }

    if (value.HasMember("IoWaitTime") && !value["IoWaitTime"].IsNull())
    {
        if (!value["IoWaitTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.IoWaitTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ioWaitTime = value["IoWaitTime"].GetDouble();
        m_ioWaitTimeHasBeenSet = true;
    }

    if (value.HasMember("CheckRowsMax") && !value["CheckRowsMax"].IsNull())
    {
        if (!value["CheckRowsMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.CheckRowsMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkRowsMax = value["CheckRowsMax"].GetInt64();
        m_checkRowsMaxHasBeenSet = true;
    }

    if (value.HasMember("CpuTimeMin") && !value["CpuTimeMin"].IsNull())
    {
        if (!value["CpuTimeMin"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.CpuTimeMin` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTimeMin = value["CpuTimeMin"].GetDouble();
        m_cpuTimeMinHasBeenSet = true;
    }

    if (value.HasMember("SqlText") && !value["SqlText"].IsNull())
    {
        if (!value["SqlText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.SqlText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sqlText = string(value["SqlText"].GetString());
        m_sqlTextHasBeenSet = true;
    }

    if (value.HasMember("LockWaitTime") && !value["LockWaitTime"].IsNull())
    {
        if (!value["LockWaitTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.LockWaitTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lockWaitTime = value["LockWaitTime"].GetDouble();
        m_lockWaitTimeHasBeenSet = true;
    }

    if (value.HasMember("LatencyMin") && !value["LatencyMin"].IsNull())
    {
        if (!value["LatencyMin"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.LatencyMin` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_latencyMin = value["LatencyMin"].GetDouble();
        m_latencyMinHasBeenSet = true;
    }

    if (value.HasMember("Latency") && !value["Latency"].IsNull())
    {
        if (!value["Latency"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.Latency` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_latency = value["Latency"].GetDouble();
        m_latencyHasBeenSet = true;
    }

    if (value.HasMember("QueryTimeRatio") && !value["QueryTimeRatio"].IsNull())
    {
        if (!value["QueryTimeRatio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.QueryTimeRatio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queryTimeRatio = string(value["QueryTimeRatio"].GetString());
        m_queryTimeRatioHasBeenSet = true;
    }

    if (value.HasMember("CheckRowsAvg") && !value["CheckRowsAvg"].IsNull())
    {
        if (!value["CheckRowsAvg"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.CheckRowsAvg` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkRowsAvg = value["CheckRowsAvg"].GetInt64();
        m_checkRowsAvgHasBeenSet = true;
    }

    if (value.HasMember("CpuTimeAvg") && !value["CpuTimeAvg"].IsNull())
    {
        if (!value["CpuTimeAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.CpuTimeAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cpuTimeAvg = value["CpuTimeAvg"].GetDouble();
        m_cpuTimeAvgHasBeenSet = true;
    }

    if (value.HasMember("IoWaitTimeAvg") && !value["IoWaitTimeAvg"].IsNull())
    {
        if (!value["IoWaitTimeAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.IoWaitTimeAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ioWaitTimeAvg = value["IoWaitTimeAvg"].GetDouble();
        m_ioWaitTimeAvgHasBeenSet = true;
    }

    if (value.HasMember("LatencyAvg") && !value["LatencyAvg"].IsNull())
    {
        if (!value["LatencyAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.LatencyAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_latencyAvg = value["LatencyAvg"].GetDouble();
        m_latencyAvgHasBeenSet = true;
    }

    if (value.HasMember("LockWaitTimeAvg") && !value["LockWaitTimeAvg"].IsNull())
    {
        if (!value["LockWaitTimeAvg"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.LockWaitTimeAvg` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_lockWaitTimeAvg = value["LockWaitTimeAvg"].GetDouble();
        m_lockWaitTimeAvgHasBeenSet = true;
    }

    if (value.HasMember("SentRows") && !value["SentRows"].IsNull())
    {
        if (!value["SentRows"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.SentRows` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sentRows = value["SentRows"].GetInt64();
        m_sentRowsHasBeenSet = true;
    }

    if (value.HasMember("SentRowsAvg") && !value["SentRowsAvg"].IsNull())
    {
        if (!value["SentRowsAvg"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.SentRowsAvg` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sentRowsAvg = value["SentRowsAvg"].GetInt64();
        m_sentRowsAvgHasBeenSet = true;
    }

    if (value.HasMember("AffectRowsAvg") && !value["AffectRowsAvg"].IsNull())
    {
        if (!value["AffectRowsAvg"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TopSqlTpl.AffectRowsAvg` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectRowsAvg = value["AffectRowsAvg"].GetInt64();
        m_affectRowsAvgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopSqlTpl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_execTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_execTimes, allocator);
    }

    if (m_sqlTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_affectRowsMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectRowsMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectRowsMin, allocator);
    }

    if (m_sqlTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_affectRowsMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectRowsMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectRowsMax, allocator);
    }

    if (m_sqlTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlType.c_str(), allocator).Move(), allocator);
    }

    if (m_affectRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectRows, allocator);
    }

    if (m_dBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dB.c_str(), allocator).Move(), allocator);
    }

    if (m_lockWaitTimeMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockWaitTimeMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockWaitTimeMin, allocator);
    }

    if (m_cpuTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuTime, allocator);
    }

    if (m_ioWaitTimeMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IoWaitTimeMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ioWaitTimeMax, allocator);
    }

    if (m_lockWaitTimeMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockWaitTimeMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockWaitTimeMax, allocator);
    }

    if (m_checkRowsMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckRowsMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkRowsMin, allocator);
    }

    if (m_checkRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkRows, allocator);
    }

    if (m_cpuTimeMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTimeMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuTimeMax, allocator);
    }

    if (m_ioWaitTimeMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IoWaitTimeMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ioWaitTimeMin, allocator);
    }

    if (m_latencyMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatencyMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latencyMax, allocator);
    }

    if (m_ioWaitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IoWaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ioWaitTime, allocator);
    }

    if (m_checkRowsMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckRowsMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkRowsMax, allocator);
    }

    if (m_cpuTimeMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTimeMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuTimeMin, allocator);
    }

    if (m_sqlTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sqlText.c_str(), allocator).Move(), allocator);
    }

    if (m_lockWaitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockWaitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockWaitTime, allocator);
    }

    if (m_latencyMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatencyMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latencyMin, allocator);
    }

    if (m_latencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Latency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latency, allocator);
    }

    if (m_queryTimeRatioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryTimeRatio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queryTimeRatio.c_str(), allocator).Move(), allocator);
    }

    if (m_checkRowsAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckRowsAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkRowsAvg, allocator);
    }

    if (m_cpuTimeAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuTimeAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuTimeAvg, allocator);
    }

    if (m_ioWaitTimeAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IoWaitTimeAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ioWaitTimeAvg, allocator);
    }

    if (m_latencyAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatencyAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_latencyAvg, allocator);
    }

    if (m_lockWaitTimeAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockWaitTimeAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockWaitTimeAvg, allocator);
    }

    if (m_sentRowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentRows";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sentRows, allocator);
    }

    if (m_sentRowsAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SentRowsAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sentRowsAvg, allocator);
    }

    if (m_affectRowsAvgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectRowsAvg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectRowsAvg, allocator);
    }

}


int64_t TopSqlTpl::GetExecTimes() const
{
    return m_execTimes;
}

void TopSqlTpl::SetExecTimes(const int64_t& _execTimes)
{
    m_execTimes = _execTimes;
    m_execTimesHasBeenSet = true;
}

bool TopSqlTpl::ExecTimesHasBeenSet() const
{
    return m_execTimesHasBeenSet;
}

string TopSqlTpl::GetSqlTemplateId() const
{
    return m_sqlTemplateId;
}

void TopSqlTpl::SetSqlTemplateId(const string& _sqlTemplateId)
{
    m_sqlTemplateId = _sqlTemplateId;
    m_sqlTemplateIdHasBeenSet = true;
}

bool TopSqlTpl::SqlTemplateIdHasBeenSet() const
{
    return m_sqlTemplateIdHasBeenSet;
}

int64_t TopSqlTpl::GetAffectRowsMin() const
{
    return m_affectRowsMin;
}

void TopSqlTpl::SetAffectRowsMin(const int64_t& _affectRowsMin)
{
    m_affectRowsMin = _affectRowsMin;
    m_affectRowsMinHasBeenSet = true;
}

bool TopSqlTpl::AffectRowsMinHasBeenSet() const
{
    return m_affectRowsMinHasBeenSet;
}

string TopSqlTpl::GetSqlTemplate() const
{
    return m_sqlTemplate;
}

void TopSqlTpl::SetSqlTemplate(const string& _sqlTemplate)
{
    m_sqlTemplate = _sqlTemplate;
    m_sqlTemplateHasBeenSet = true;
}

bool TopSqlTpl::SqlTemplateHasBeenSet() const
{
    return m_sqlTemplateHasBeenSet;
}

string TopSqlTpl::GetTableName() const
{
    return m_tableName;
}

void TopSqlTpl::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TopSqlTpl::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

int64_t TopSqlTpl::GetAffectRowsMax() const
{
    return m_affectRowsMax;
}

void TopSqlTpl::SetAffectRowsMax(const int64_t& _affectRowsMax)
{
    m_affectRowsMax = _affectRowsMax;
    m_affectRowsMaxHasBeenSet = true;
}

bool TopSqlTpl::AffectRowsMaxHasBeenSet() const
{
    return m_affectRowsMaxHasBeenSet;
}

string TopSqlTpl::GetSqlType() const
{
    return m_sqlType;
}

void TopSqlTpl::SetSqlType(const string& _sqlType)
{
    m_sqlType = _sqlType;
    m_sqlTypeHasBeenSet = true;
}

bool TopSqlTpl::SqlTypeHasBeenSet() const
{
    return m_sqlTypeHasBeenSet;
}

int64_t TopSqlTpl::GetAffectRows() const
{
    return m_affectRows;
}

void TopSqlTpl::SetAffectRows(const int64_t& _affectRows)
{
    m_affectRows = _affectRows;
    m_affectRowsHasBeenSet = true;
}

bool TopSqlTpl::AffectRowsHasBeenSet() const
{
    return m_affectRowsHasBeenSet;
}

string TopSqlTpl::GetDB() const
{
    return m_dB;
}

void TopSqlTpl::SetDB(const string& _dB)
{
    m_dB = _dB;
    m_dBHasBeenSet = true;
}

bool TopSqlTpl::DBHasBeenSet() const
{
    return m_dBHasBeenSet;
}

double TopSqlTpl::GetLockWaitTimeMin() const
{
    return m_lockWaitTimeMin;
}

void TopSqlTpl::SetLockWaitTimeMin(const double& _lockWaitTimeMin)
{
    m_lockWaitTimeMin = _lockWaitTimeMin;
    m_lockWaitTimeMinHasBeenSet = true;
}

bool TopSqlTpl::LockWaitTimeMinHasBeenSet() const
{
    return m_lockWaitTimeMinHasBeenSet;
}

double TopSqlTpl::GetCpuTime() const
{
    return m_cpuTime;
}

void TopSqlTpl::SetCpuTime(const double& _cpuTime)
{
    m_cpuTime = _cpuTime;
    m_cpuTimeHasBeenSet = true;
}

bool TopSqlTpl::CpuTimeHasBeenSet() const
{
    return m_cpuTimeHasBeenSet;
}

double TopSqlTpl::GetIoWaitTimeMax() const
{
    return m_ioWaitTimeMax;
}

void TopSqlTpl::SetIoWaitTimeMax(const double& _ioWaitTimeMax)
{
    m_ioWaitTimeMax = _ioWaitTimeMax;
    m_ioWaitTimeMaxHasBeenSet = true;
}

bool TopSqlTpl::IoWaitTimeMaxHasBeenSet() const
{
    return m_ioWaitTimeMaxHasBeenSet;
}

double TopSqlTpl::GetLockWaitTimeMax() const
{
    return m_lockWaitTimeMax;
}

void TopSqlTpl::SetLockWaitTimeMax(const double& _lockWaitTimeMax)
{
    m_lockWaitTimeMax = _lockWaitTimeMax;
    m_lockWaitTimeMaxHasBeenSet = true;
}

bool TopSqlTpl::LockWaitTimeMaxHasBeenSet() const
{
    return m_lockWaitTimeMaxHasBeenSet;
}

int64_t TopSqlTpl::GetCheckRowsMin() const
{
    return m_checkRowsMin;
}

void TopSqlTpl::SetCheckRowsMin(const int64_t& _checkRowsMin)
{
    m_checkRowsMin = _checkRowsMin;
    m_checkRowsMinHasBeenSet = true;
}

bool TopSqlTpl::CheckRowsMinHasBeenSet() const
{
    return m_checkRowsMinHasBeenSet;
}

int64_t TopSqlTpl::GetCheckRows() const
{
    return m_checkRows;
}

void TopSqlTpl::SetCheckRows(const int64_t& _checkRows)
{
    m_checkRows = _checkRows;
    m_checkRowsHasBeenSet = true;
}

bool TopSqlTpl::CheckRowsHasBeenSet() const
{
    return m_checkRowsHasBeenSet;
}

double TopSqlTpl::GetCpuTimeMax() const
{
    return m_cpuTimeMax;
}

void TopSqlTpl::SetCpuTimeMax(const double& _cpuTimeMax)
{
    m_cpuTimeMax = _cpuTimeMax;
    m_cpuTimeMaxHasBeenSet = true;
}

bool TopSqlTpl::CpuTimeMaxHasBeenSet() const
{
    return m_cpuTimeMaxHasBeenSet;
}

int64_t TopSqlTpl::GetIoWaitTimeMin() const
{
    return m_ioWaitTimeMin;
}

void TopSqlTpl::SetIoWaitTimeMin(const int64_t& _ioWaitTimeMin)
{
    m_ioWaitTimeMin = _ioWaitTimeMin;
    m_ioWaitTimeMinHasBeenSet = true;
}

bool TopSqlTpl::IoWaitTimeMinHasBeenSet() const
{
    return m_ioWaitTimeMinHasBeenSet;
}

double TopSqlTpl::GetLatencyMax() const
{
    return m_latencyMax;
}

void TopSqlTpl::SetLatencyMax(const double& _latencyMax)
{
    m_latencyMax = _latencyMax;
    m_latencyMaxHasBeenSet = true;
}

bool TopSqlTpl::LatencyMaxHasBeenSet() const
{
    return m_latencyMaxHasBeenSet;
}

double TopSqlTpl::GetIoWaitTime() const
{
    return m_ioWaitTime;
}

void TopSqlTpl::SetIoWaitTime(const double& _ioWaitTime)
{
    m_ioWaitTime = _ioWaitTime;
    m_ioWaitTimeHasBeenSet = true;
}

bool TopSqlTpl::IoWaitTimeHasBeenSet() const
{
    return m_ioWaitTimeHasBeenSet;
}

int64_t TopSqlTpl::GetCheckRowsMax() const
{
    return m_checkRowsMax;
}

void TopSqlTpl::SetCheckRowsMax(const int64_t& _checkRowsMax)
{
    m_checkRowsMax = _checkRowsMax;
    m_checkRowsMaxHasBeenSet = true;
}

bool TopSqlTpl::CheckRowsMaxHasBeenSet() const
{
    return m_checkRowsMaxHasBeenSet;
}

double TopSqlTpl::GetCpuTimeMin() const
{
    return m_cpuTimeMin;
}

void TopSqlTpl::SetCpuTimeMin(const double& _cpuTimeMin)
{
    m_cpuTimeMin = _cpuTimeMin;
    m_cpuTimeMinHasBeenSet = true;
}

bool TopSqlTpl::CpuTimeMinHasBeenSet() const
{
    return m_cpuTimeMinHasBeenSet;
}

string TopSqlTpl::GetSqlText() const
{
    return m_sqlText;
}

void TopSqlTpl::SetSqlText(const string& _sqlText)
{
    m_sqlText = _sqlText;
    m_sqlTextHasBeenSet = true;
}

bool TopSqlTpl::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

double TopSqlTpl::GetLockWaitTime() const
{
    return m_lockWaitTime;
}

void TopSqlTpl::SetLockWaitTime(const double& _lockWaitTime)
{
    m_lockWaitTime = _lockWaitTime;
    m_lockWaitTimeHasBeenSet = true;
}

bool TopSqlTpl::LockWaitTimeHasBeenSet() const
{
    return m_lockWaitTimeHasBeenSet;
}

double TopSqlTpl::GetLatencyMin() const
{
    return m_latencyMin;
}

void TopSqlTpl::SetLatencyMin(const double& _latencyMin)
{
    m_latencyMin = _latencyMin;
    m_latencyMinHasBeenSet = true;
}

bool TopSqlTpl::LatencyMinHasBeenSet() const
{
    return m_latencyMinHasBeenSet;
}

double TopSqlTpl::GetLatency() const
{
    return m_latency;
}

void TopSqlTpl::SetLatency(const double& _latency)
{
    m_latency = _latency;
    m_latencyHasBeenSet = true;
}

bool TopSqlTpl::LatencyHasBeenSet() const
{
    return m_latencyHasBeenSet;
}

string TopSqlTpl::GetQueryTimeRatio() const
{
    return m_queryTimeRatio;
}

void TopSqlTpl::SetQueryTimeRatio(const string& _queryTimeRatio)
{
    m_queryTimeRatio = _queryTimeRatio;
    m_queryTimeRatioHasBeenSet = true;
}

bool TopSqlTpl::QueryTimeRatioHasBeenSet() const
{
    return m_queryTimeRatioHasBeenSet;
}

int64_t TopSqlTpl::GetCheckRowsAvg() const
{
    return m_checkRowsAvg;
}

void TopSqlTpl::SetCheckRowsAvg(const int64_t& _checkRowsAvg)
{
    m_checkRowsAvg = _checkRowsAvg;
    m_checkRowsAvgHasBeenSet = true;
}

bool TopSqlTpl::CheckRowsAvgHasBeenSet() const
{
    return m_checkRowsAvgHasBeenSet;
}

double TopSqlTpl::GetCpuTimeAvg() const
{
    return m_cpuTimeAvg;
}

void TopSqlTpl::SetCpuTimeAvg(const double& _cpuTimeAvg)
{
    m_cpuTimeAvg = _cpuTimeAvg;
    m_cpuTimeAvgHasBeenSet = true;
}

bool TopSqlTpl::CpuTimeAvgHasBeenSet() const
{
    return m_cpuTimeAvgHasBeenSet;
}

double TopSqlTpl::GetIoWaitTimeAvg() const
{
    return m_ioWaitTimeAvg;
}

void TopSqlTpl::SetIoWaitTimeAvg(const double& _ioWaitTimeAvg)
{
    m_ioWaitTimeAvg = _ioWaitTimeAvg;
    m_ioWaitTimeAvgHasBeenSet = true;
}

bool TopSqlTpl::IoWaitTimeAvgHasBeenSet() const
{
    return m_ioWaitTimeAvgHasBeenSet;
}

double TopSqlTpl::GetLatencyAvg() const
{
    return m_latencyAvg;
}

void TopSqlTpl::SetLatencyAvg(const double& _latencyAvg)
{
    m_latencyAvg = _latencyAvg;
    m_latencyAvgHasBeenSet = true;
}

bool TopSqlTpl::LatencyAvgHasBeenSet() const
{
    return m_latencyAvgHasBeenSet;
}

double TopSqlTpl::GetLockWaitTimeAvg() const
{
    return m_lockWaitTimeAvg;
}

void TopSqlTpl::SetLockWaitTimeAvg(const double& _lockWaitTimeAvg)
{
    m_lockWaitTimeAvg = _lockWaitTimeAvg;
    m_lockWaitTimeAvgHasBeenSet = true;
}

bool TopSqlTpl::LockWaitTimeAvgHasBeenSet() const
{
    return m_lockWaitTimeAvgHasBeenSet;
}

int64_t TopSqlTpl::GetSentRows() const
{
    return m_sentRows;
}

void TopSqlTpl::SetSentRows(const int64_t& _sentRows)
{
    m_sentRows = _sentRows;
    m_sentRowsHasBeenSet = true;
}

bool TopSqlTpl::SentRowsHasBeenSet() const
{
    return m_sentRowsHasBeenSet;
}

int64_t TopSqlTpl::GetSentRowsAvg() const
{
    return m_sentRowsAvg;
}

void TopSqlTpl::SetSentRowsAvg(const int64_t& _sentRowsAvg)
{
    m_sentRowsAvg = _sentRowsAvg;
    m_sentRowsAvgHasBeenSet = true;
}

bool TopSqlTpl::SentRowsAvgHasBeenSet() const
{
    return m_sentRowsAvgHasBeenSet;
}

int64_t TopSqlTpl::GetAffectRowsAvg() const
{
    return m_affectRowsAvg;
}

void TopSqlTpl::SetAffectRowsAvg(const int64_t& _affectRowsAvg)
{
    m_affectRowsAvg = _affectRowsAvg;
    m_affectRowsAvgHasBeenSet = true;
}

bool TopSqlTpl::AffectRowsAvgHasBeenSet() const
{
    return m_affectRowsAvgHasBeenSet;
}

