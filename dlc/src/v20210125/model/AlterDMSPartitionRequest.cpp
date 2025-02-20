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

#include <tencentcloud/dlc/v20210125/model/AlterDMSPartitionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

AlterDMSPartitionRequest::AlterDMSPartitionRequest() :
    m_currentDbNameHasBeenSet(false),
    m_currentTableNameHasBeenSet(false),
    m_currentValuesHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false)
{
}

string AlterDMSPartitionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_currentDbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentDbName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentDbName.c_str(), allocator).Move(), allocator);
    }

    if (m_currentTableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentTableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentTableName.c_str(), allocator).Move(), allocator);
    }

    if (m_currentValuesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentValues";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_currentValues.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_partition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_datasourceConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceConnectionName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AlterDMSPartitionRequest::GetCurrentDbName() const
{
    return m_currentDbName;
}

void AlterDMSPartitionRequest::SetCurrentDbName(const string& _currentDbName)
{
    m_currentDbName = _currentDbName;
    m_currentDbNameHasBeenSet = true;
}

bool AlterDMSPartitionRequest::CurrentDbNameHasBeenSet() const
{
    return m_currentDbNameHasBeenSet;
}

string AlterDMSPartitionRequest::GetCurrentTableName() const
{
    return m_currentTableName;
}

void AlterDMSPartitionRequest::SetCurrentTableName(const string& _currentTableName)
{
    m_currentTableName = _currentTableName;
    m_currentTableNameHasBeenSet = true;
}

bool AlterDMSPartitionRequest::CurrentTableNameHasBeenSet() const
{
    return m_currentTableNameHasBeenSet;
}

string AlterDMSPartitionRequest::GetCurrentValues() const
{
    return m_currentValues;
}

void AlterDMSPartitionRequest::SetCurrentValues(const string& _currentValues)
{
    m_currentValues = _currentValues;
    m_currentValuesHasBeenSet = true;
}

bool AlterDMSPartitionRequest::CurrentValuesHasBeenSet() const
{
    return m_currentValuesHasBeenSet;
}

DMSPartition AlterDMSPartitionRequest::GetPartition() const
{
    return m_partition;
}

void AlterDMSPartitionRequest::SetPartition(const DMSPartition& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool AlterDMSPartitionRequest::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

string AlterDMSPartitionRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void AlterDMSPartitionRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool AlterDMSPartitionRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}


