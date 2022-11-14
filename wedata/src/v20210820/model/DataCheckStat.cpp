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

#include <tencentcloud/wedata/v20210820/model/DataCheckStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DataCheckStat::DataCheckStat() :
    m_tableTotalHasBeenSet(false),
    m_columnTotalHasBeenSet(false),
    m_tableConfigHasBeenSet(false),
    m_columnConfigHasBeenSet(false),
    m_tableExecHasBeenSet(false),
    m_columnExecHasBeenSet(false)
{
}

CoreInternalOutcome DataCheckStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableTotal") && !value["TableTotal"].IsNull())
    {
        if (!value["TableTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheckStat.TableTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableTotal = value["TableTotal"].GetUint64();
        m_tableTotalHasBeenSet = true;
    }

    if (value.HasMember("ColumnTotal") && !value["ColumnTotal"].IsNull())
    {
        if (!value["ColumnTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheckStat.ColumnTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_columnTotal = value["ColumnTotal"].GetUint64();
        m_columnTotalHasBeenSet = true;
    }

    if (value.HasMember("TableConfig") && !value["TableConfig"].IsNull())
    {
        if (!value["TableConfig"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheckStat.TableConfig` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableConfig = value["TableConfig"].GetUint64();
        m_tableConfigHasBeenSet = true;
    }

    if (value.HasMember("ColumnConfig") && !value["ColumnConfig"].IsNull())
    {
        if (!value["ColumnConfig"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheckStat.ColumnConfig` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_columnConfig = value["ColumnConfig"].GetUint64();
        m_columnConfigHasBeenSet = true;
    }

    if (value.HasMember("TableExec") && !value["TableExec"].IsNull())
    {
        if (!value["TableExec"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheckStat.TableExec` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableExec = value["TableExec"].GetUint64();
        m_tableExecHasBeenSet = true;
    }

    if (value.HasMember("ColumnExec") && !value["ColumnExec"].IsNull())
    {
        if (!value["ColumnExec"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataCheckStat.ColumnExec` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_columnExec = value["ColumnExec"].GetUint64();
        m_columnExecHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataCheckStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableTotal, allocator);
    }

    if (m_columnTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnTotal, allocator);
    }

    if (m_tableConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableConfig, allocator);
    }

    if (m_columnConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnConfig, allocator);
    }

    if (m_tableExecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableExec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableExec, allocator);
    }

    if (m_columnExecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnExec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_columnExec, allocator);
    }

}


uint64_t DataCheckStat::GetTableTotal() const
{
    return m_tableTotal;
}

void DataCheckStat::SetTableTotal(const uint64_t& _tableTotal)
{
    m_tableTotal = _tableTotal;
    m_tableTotalHasBeenSet = true;
}

bool DataCheckStat::TableTotalHasBeenSet() const
{
    return m_tableTotalHasBeenSet;
}

uint64_t DataCheckStat::GetColumnTotal() const
{
    return m_columnTotal;
}

void DataCheckStat::SetColumnTotal(const uint64_t& _columnTotal)
{
    m_columnTotal = _columnTotal;
    m_columnTotalHasBeenSet = true;
}

bool DataCheckStat::ColumnTotalHasBeenSet() const
{
    return m_columnTotalHasBeenSet;
}

uint64_t DataCheckStat::GetTableConfig() const
{
    return m_tableConfig;
}

void DataCheckStat::SetTableConfig(const uint64_t& _tableConfig)
{
    m_tableConfig = _tableConfig;
    m_tableConfigHasBeenSet = true;
}

bool DataCheckStat::TableConfigHasBeenSet() const
{
    return m_tableConfigHasBeenSet;
}

uint64_t DataCheckStat::GetColumnConfig() const
{
    return m_columnConfig;
}

void DataCheckStat::SetColumnConfig(const uint64_t& _columnConfig)
{
    m_columnConfig = _columnConfig;
    m_columnConfigHasBeenSet = true;
}

bool DataCheckStat::ColumnConfigHasBeenSet() const
{
    return m_columnConfigHasBeenSet;
}

uint64_t DataCheckStat::GetTableExec() const
{
    return m_tableExec;
}

void DataCheckStat::SetTableExec(const uint64_t& _tableExec)
{
    m_tableExec = _tableExec;
    m_tableExecHasBeenSet = true;
}

bool DataCheckStat::TableExecHasBeenSet() const
{
    return m_tableExecHasBeenSet;
}

uint64_t DataCheckStat::GetColumnExec() const
{
    return m_columnExec;
}

void DataCheckStat::SetColumnExec(const uint64_t& _columnExec)
{
    m_columnExec = _columnExec;
    m_columnExecHasBeenSet = true;
}

bool DataCheckStat::ColumnExecHasBeenSet() const
{
    return m_columnExecHasBeenSet;
}

