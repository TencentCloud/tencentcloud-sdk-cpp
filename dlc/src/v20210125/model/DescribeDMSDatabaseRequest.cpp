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

#include <tencentcloud/dlc/v20210125/model/DescribeDMSDatabaseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeDMSDatabaseRequest::DescribeDMSDatabaseRequest() :
    m_nameHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_datasourceConnectionNameHasBeenSet(false)
{
}

string DescribeDMSDatabaseRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
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


string DescribeDMSDatabaseRequest::GetName() const
{
    return m_name;
}

void DescribeDMSDatabaseRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeDMSDatabaseRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeDMSDatabaseRequest::GetSchemaName() const
{
    return m_schemaName;
}

void DescribeDMSDatabaseRequest::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DescribeDMSDatabaseRequest::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

string DescribeDMSDatabaseRequest::GetPattern() const
{
    return m_pattern;
}

void DescribeDMSDatabaseRequest::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool DescribeDMSDatabaseRequest::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

string DescribeDMSDatabaseRequest::GetDatasourceConnectionName() const
{
    return m_datasourceConnectionName;
}

void DescribeDMSDatabaseRequest::SetDatasourceConnectionName(const string& _datasourceConnectionName)
{
    m_datasourceConnectionName = _datasourceConnectionName;
    m_datasourceConnectionNameHasBeenSet = true;
}

bool DescribeDMSDatabaseRequest::DatasourceConnectionNameHasBeenSet() const
{
    return m_datasourceConnectionNameHasBeenSet;
}


