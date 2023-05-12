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

#include <tencentcloud/omics/v20221128/model/TableColumn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

TableColumn::TableColumn() :
    m_headerHasBeenSet(false),
    m_dataTypeHasBeenSet(false)
{
}

CoreInternalOutcome TableColumn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Header") && !value["Header"].IsNull())
    {
        if (!value["Header"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableColumn.Header` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_header = string(value["Header"].GetString());
        m_headerHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TableColumn.DataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = string(value["DataType"].GetString());
        m_dataTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableColumn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Header";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_header.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataType.c_str(), allocator).Move(), allocator);
    }

}


string TableColumn::GetHeader() const
{
    return m_header;
}

void TableColumn::SetHeader(const string& _header)
{
    m_header = _header;
    m_headerHasBeenSet = true;
}

bool TableColumn::HeaderHasBeenSet() const
{
    return m_headerHasBeenSet;
}

string TableColumn::GetDataType() const
{
    return m_dataType;
}

void TableColumn::SetDataType(const string& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool TableColumn::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

