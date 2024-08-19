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

#include <tencentcloud/cdwdoris/v20211228/model/OpenCoolDownPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

OpenCoolDownPolicyRequest::OpenCoolDownPolicyRequest() :
    m_instanceIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_batchOpenCoolDownTablesHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_batchOpenCoolDownPartitionsHasBeenSet(false)
{
}

string OpenCoolDownPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_batchOpenCoolDownTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchOpenCoolDownTables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchOpenCoolDownTables.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_batchOpenCoolDownPartitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchOpenCoolDownPartitions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchOpenCoolDownPartitions.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OpenCoolDownPolicyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void OpenCoolDownPolicyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool OpenCoolDownPolicyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string OpenCoolDownPolicyRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void OpenCoolDownPolicyRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool OpenCoolDownPolicyRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string OpenCoolDownPolicyRequest::GetTableName() const
{
    return m_tableName;
}

void OpenCoolDownPolicyRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool OpenCoolDownPolicyRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string OpenCoolDownPolicyRequest::GetOperationType() const
{
    return m_operationType;
}

void OpenCoolDownPolicyRequest::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool OpenCoolDownPolicyRequest::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

string OpenCoolDownPolicyRequest::GetBatchOpenCoolDownTables() const
{
    return m_batchOpenCoolDownTables;
}

void OpenCoolDownPolicyRequest::SetBatchOpenCoolDownTables(const string& _batchOpenCoolDownTables)
{
    m_batchOpenCoolDownTables = _batchOpenCoolDownTables;
    m_batchOpenCoolDownTablesHasBeenSet = true;
}

bool OpenCoolDownPolicyRequest::BatchOpenCoolDownTablesHasBeenSet() const
{
    return m_batchOpenCoolDownTablesHasBeenSet;
}

string OpenCoolDownPolicyRequest::GetPolicyName() const
{
    return m_policyName;
}

void OpenCoolDownPolicyRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool OpenCoolDownPolicyRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string OpenCoolDownPolicyRequest::GetBatchOpenCoolDownPartitions() const
{
    return m_batchOpenCoolDownPartitions;
}

void OpenCoolDownPolicyRequest::SetBatchOpenCoolDownPartitions(const string& _batchOpenCoolDownPartitions)
{
    m_batchOpenCoolDownPartitions = _batchOpenCoolDownPartitions;
    m_batchOpenCoolDownPartitionsHasBeenSet = true;
}

bool OpenCoolDownPolicyRequest::BatchOpenCoolDownPartitionsHasBeenSet() const
{
    return m_batchOpenCoolDownPartitionsHasBeenSet;
}


