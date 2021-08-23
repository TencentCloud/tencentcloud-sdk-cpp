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

#include <tencentcloud/dbbrain/v20210527/model/TableSpaceTimeSeries.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

TableSpaceTimeSeries::TableSpaceTimeSeries() :
    m_tableNameHasBeenSet(false),
    m_tableSchemaHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_seriesDataHasBeenSet(false)
{
}

CoreInternalOutcome TableSpaceTimeSeries::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableSpaceTimeSeries.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("TableSchema") && !value["TableSchema"].IsNull())
    {
        if (!value["TableSchema"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableSpaceTimeSeries.TableSchema` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableSchema = string(value["TableSchema"].GetString());
        m_tableSchemaHasBeenSet = true;
    }

    if (value.HasMember("Engine") && !value["Engine"].IsNull())
    {
        if (!value["Engine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableSpaceTimeSeries.Engine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engine = string(value["Engine"].GetString());
        m_engineHasBeenSet = true;
    }

    if (value.HasMember("SeriesData") && !value["SeriesData"].IsNull())
    {
        if (!value["SeriesData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TableSpaceTimeSeries.SeriesData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_seriesData.Deserialize(value["SeriesData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_seriesDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableSpaceTimeSeries::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableSchemaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableSchema";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableSchema.c_str(), allocator).Move(), allocator);
    }

    if (m_engineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Engine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engine.c_str(), allocator).Move(), allocator);
    }

    if (m_seriesDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriesData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_seriesData.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TableSpaceTimeSeries::GetTableName() const
{
    return m_tableName;
}

void TableSpaceTimeSeries::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool TableSpaceTimeSeries::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string TableSpaceTimeSeries::GetTableSchema() const
{
    return m_tableSchema;
}

void TableSpaceTimeSeries::SetTableSchema(const string& _tableSchema)
{
    m_tableSchema = _tableSchema;
    m_tableSchemaHasBeenSet = true;
}

bool TableSpaceTimeSeries::TableSchemaHasBeenSet() const
{
    return m_tableSchemaHasBeenSet;
}

string TableSpaceTimeSeries::GetEngine() const
{
    return m_engine;
}

void TableSpaceTimeSeries::SetEngine(const string& _engine)
{
    m_engine = _engine;
    m_engineHasBeenSet = true;
}

bool TableSpaceTimeSeries::EngineHasBeenSet() const
{
    return m_engineHasBeenSet;
}

MonitorFloatMetricSeriesData TableSpaceTimeSeries::GetSeriesData() const
{
    return m_seriesData;
}

void TableSpaceTimeSeries::SetSeriesData(const MonitorFloatMetricSeriesData& _seriesData)
{
    m_seriesData = _seriesData;
    m_seriesDataHasBeenSet = true;
}

bool TableSpaceTimeSeries::SeriesDataHasBeenSet() const
{
    return m_seriesDataHasBeenSet;
}

