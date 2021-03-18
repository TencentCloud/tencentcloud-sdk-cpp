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

#include <tencentcloud/dlc/v20210125/model/DescribeTableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace rapidjson;
using namespace std;

DescribeTableRequest::DescribeTableRequest() :
    m_tableNameHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
}

string DescribeTableRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tableNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTableRequest::GetTableName() const
{
    return m_tableName;
}

void DescribeTableRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DescribeTableRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DescribeTableRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void DescribeTableRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool DescribeTableRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}


