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

#include <tencentcloud/dbbrain/v20210527/model/DescribeUserSqlAdviceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace rapidjson;
using namespace std;

DescribeUserSqlAdviceRequest::DescribeUserSqlAdviceRequest() :
    m_instanceIdHasBeenSet(false),
    m_sqlTextHasBeenSet(false),
    m_schemaHasBeenSet(false)
{
}

string DescribeUserSqlAdviceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTextHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SqlText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_sqlText.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Schema";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_schema.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeUserSqlAdviceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeUserSqlAdviceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeUserSqlAdviceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeUserSqlAdviceRequest::GetSqlText() const
{
    return m_sqlText;
}

void DescribeUserSqlAdviceRequest::SetSqlText(const string& _sqlText)
{
    m_sqlText = _sqlText;
    m_sqlTextHasBeenSet = true;
}

bool DescribeUserSqlAdviceRequest::SqlTextHasBeenSet() const
{
    return m_sqlTextHasBeenSet;
}

string DescribeUserSqlAdviceRequest::GetSchema() const
{
    return m_schema;
}

void DescribeUserSqlAdviceRequest::SetSchema(const string& _schema)
{
    m_schema = _schema;
    m_schemaHasBeenSet = true;
}

bool DescribeUserSqlAdviceRequest::SchemaHasBeenSet() const
{
    return m_schemaHasBeenSet;
}


