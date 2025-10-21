/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ckafka/v20190819/model/EsRecordMapping.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

EsRecordMapping::EsRecordMapping() :
    m_columnNameHasBeenSet(false),
    m_jsonKeyHasBeenSet(false)
{
}

CoreInternalOutcome EsRecordMapping::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ColumnName") && !value["ColumnName"].IsNull())
    {
        if (!value["ColumnName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsRecordMapping.ColumnName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_columnName = string(value["ColumnName"].GetString());
        m_columnNameHasBeenSet = true;
    }

    if (value.HasMember("JsonKey") && !value["JsonKey"].IsNull())
    {
        if (!value["JsonKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EsRecordMapping.JsonKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jsonKey = string(value["JsonKey"].GetString());
        m_jsonKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EsRecordMapping::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_columnNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_columnName.c_str(), allocator).Move(), allocator);
    }

    if (m_jsonKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsonKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jsonKey.c_str(), allocator).Move(), allocator);
    }

}


string EsRecordMapping::GetColumnName() const
{
    return m_columnName;
}

void EsRecordMapping::SetColumnName(const string& _columnName)
{
    m_columnName = _columnName;
    m_columnNameHasBeenSet = true;
}

bool EsRecordMapping::ColumnNameHasBeenSet() const
{
    return m_columnNameHasBeenSet;
}

string EsRecordMapping::GetJsonKey() const
{
    return m_jsonKey;
}

void EsRecordMapping::SetJsonKey(const string& _jsonKey)
{
    m_jsonKey = _jsonKey;
    m_jsonKeyHasBeenSet = true;
}

bool EsRecordMapping::JsonKeyHasBeenSet() const
{
    return m_jsonKeyHasBeenSet;
}

