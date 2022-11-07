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

#include <tencentcloud/wedata/v20210820/model/GetIntegrationNodeColumnSchemaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

GetIntegrationNodeColumnSchemaRequest::GetIntegrationNodeColumnSchemaRequest() :
    m_columnContentHasBeenSet(false),
    m_datasourceTypeHasBeenSet(false)
{
}

string GetIntegrationNodeColumnSchemaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_columnContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_columnContent.c_str(), allocator).Move(), allocator);
    }

    if (m_datasourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatasourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_datasourceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetIntegrationNodeColumnSchemaRequest::GetColumnContent() const
{
    return m_columnContent;
}

void GetIntegrationNodeColumnSchemaRequest::SetColumnContent(const string& _columnContent)
{
    m_columnContent = _columnContent;
    m_columnContentHasBeenSet = true;
}

bool GetIntegrationNodeColumnSchemaRequest::ColumnContentHasBeenSet() const
{
    return m_columnContentHasBeenSet;
}

string GetIntegrationNodeColumnSchemaRequest::GetDatasourceType() const
{
    return m_datasourceType;
}

void GetIntegrationNodeColumnSchemaRequest::SetDatasourceType(const string& _datasourceType)
{
    m_datasourceType = _datasourceType;
    m_datasourceTypeHasBeenSet = true;
}

bool GetIntegrationNodeColumnSchemaRequest::DatasourceTypeHasBeenSet() const
{
    return m_datasourceTypeHasBeenSet;
}


