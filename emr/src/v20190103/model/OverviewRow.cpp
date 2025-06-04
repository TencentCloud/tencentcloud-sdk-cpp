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

#include <tencentcloud/emr/v20190103/model/OverviewRow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

OverviewRow::OverviewRow() :
    m_tableHasBeenSet(false),
    m_readRequestCountHasBeenSet(false),
    m_writeRequestCountHasBeenSet(false),
    m_memstoreSizeHasBeenSet(false),
    m_storeFileSizeHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_storeFileNumHasBeenSet(false)
{
}

CoreInternalOutcome OverviewRow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Table") && !value["Table"].IsNull())
    {
        if (!value["Table"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewRow.Table` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_table = string(value["Table"].GetString());
        m_tableHasBeenSet = true;
    }

    if (value.HasMember("ReadRequestCount") && !value["ReadRequestCount"].IsNull())
    {
        if (!value["ReadRequestCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewRow.ReadRequestCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_readRequestCount = value["ReadRequestCount"].GetDouble();
        m_readRequestCountHasBeenSet = true;
    }

    if (value.HasMember("WriteRequestCount") && !value["WriteRequestCount"].IsNull())
    {
        if (!value["WriteRequestCount"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewRow.WriteRequestCount` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_writeRequestCount = value["WriteRequestCount"].GetDouble();
        m_writeRequestCountHasBeenSet = true;
    }

    if (value.HasMember("MemstoreSize") && !value["MemstoreSize"].IsNull())
    {
        if (!value["MemstoreSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewRow.MemstoreSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_memstoreSize = value["MemstoreSize"].GetDouble();
        m_memstoreSizeHasBeenSet = true;
    }

    if (value.HasMember("StoreFileSize") && !value["StoreFileSize"].IsNull())
    {
        if (!value["StoreFileSize"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewRow.StoreFileSize` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storeFileSize = value["StoreFileSize"].GetDouble();
        m_storeFileSizeHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewRow.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("StoreFileNum") && !value["StoreFileNum"].IsNull())
    {
        if (!value["StoreFileNum"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewRow.StoreFileNum` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storeFileNum = value["StoreFileNum"].GetDouble();
        m_storeFileNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewRow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Table";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_table.c_str(), allocator).Move(), allocator);
    }

    if (m_readRequestCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReadRequestCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_readRequestCount, allocator);
    }

    if (m_writeRequestCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteRequestCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writeRequestCount, allocator);
    }

    if (m_memstoreSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemstoreSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memstoreSize, allocator);
    }

    if (m_storeFileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreFileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storeFileSize, allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_storeFileNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoreFileNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storeFileNum, allocator);
    }

}


string OverviewRow::GetTable() const
{
    return m_table;
}

void OverviewRow::SetTable(const string& _table)
{
    m_table = _table;
    m_tableHasBeenSet = true;
}

bool OverviewRow::TableHasBeenSet() const
{
    return m_tableHasBeenSet;
}

double OverviewRow::GetReadRequestCount() const
{
    return m_readRequestCount;
}

void OverviewRow::SetReadRequestCount(const double& _readRequestCount)
{
    m_readRequestCount = _readRequestCount;
    m_readRequestCountHasBeenSet = true;
}

bool OverviewRow::ReadRequestCountHasBeenSet() const
{
    return m_readRequestCountHasBeenSet;
}

double OverviewRow::GetWriteRequestCount() const
{
    return m_writeRequestCount;
}

void OverviewRow::SetWriteRequestCount(const double& _writeRequestCount)
{
    m_writeRequestCount = _writeRequestCount;
    m_writeRequestCountHasBeenSet = true;
}

bool OverviewRow::WriteRequestCountHasBeenSet() const
{
    return m_writeRequestCountHasBeenSet;
}

double OverviewRow::GetMemstoreSize() const
{
    return m_memstoreSize;
}

void OverviewRow::SetMemstoreSize(const double& _memstoreSize)
{
    m_memstoreSize = _memstoreSize;
    m_memstoreSizeHasBeenSet = true;
}

bool OverviewRow::MemstoreSizeHasBeenSet() const
{
    return m_memstoreSizeHasBeenSet;
}

double OverviewRow::GetStoreFileSize() const
{
    return m_storeFileSize;
}

void OverviewRow::SetStoreFileSize(const double& _storeFileSize)
{
    m_storeFileSize = _storeFileSize;
    m_storeFileSizeHasBeenSet = true;
}

bool OverviewRow::StoreFileSizeHasBeenSet() const
{
    return m_storeFileSizeHasBeenSet;
}

string OverviewRow::GetOperation() const
{
    return m_operation;
}

void OverviewRow::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool OverviewRow::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

double OverviewRow::GetStoreFileNum() const
{
    return m_storeFileNum;
}

void OverviewRow::SetStoreFileNum(const double& _storeFileNum)
{
    m_storeFileNum = _storeFileNum;
    m_storeFileNumHasBeenSet = true;
}

bool OverviewRow::StoreFileNumHasBeenSet() const
{
    return m_storeFileNumHasBeenSet;
}

