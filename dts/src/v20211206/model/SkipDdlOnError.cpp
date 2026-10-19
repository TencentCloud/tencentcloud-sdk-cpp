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

#include <tencentcloud/dts/v20211206/model/SkipDdlOnError.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

SkipDdlOnError::SkipDdlOnError() :
    m_tablesHasBeenSet(false),
    m_errorCodesHasBeenSet(false)
{
}

CoreInternalOutcome SkipDdlOnError::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tables") && !value["Tables"].IsNull())
    {
        if (!value["Tables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkipDdlOnError.Tables` is not array type"));

        const rapidjson::Value &tmpValue = value["Tables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tables.push_back((*itr).GetString());
        }
        m_tablesHasBeenSet = true;
    }

    if (value.HasMember("ErrorCodes") && !value["ErrorCodes"].IsNull())
    {
        if (!value["ErrorCodes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkipDdlOnError.ErrorCodes` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorCodes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_errorCodes.push_back((*itr).GetInt64());
        }
        m_errorCodesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkipDdlOnError::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tables.begin(); itr != m_tables.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_errorCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorCodes.begin(); itr != m_errorCodes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<string> SkipDdlOnError::GetTables() const
{
    return m_tables;
}

void SkipDdlOnError::SetTables(const vector<string>& _tables)
{
    m_tables = _tables;
    m_tablesHasBeenSet = true;
}

bool SkipDdlOnError::TablesHasBeenSet() const
{
    return m_tablesHasBeenSet;
}

vector<int64_t> SkipDdlOnError::GetErrorCodes() const
{
    return m_errorCodes;
}

void SkipDdlOnError::SetErrorCodes(const vector<int64_t>& _errorCodes)
{
    m_errorCodes = _errorCodes;
    m_errorCodesHasBeenSet = true;
}

bool SkipDdlOnError::ErrorCodesHasBeenSet() const
{
    return m_errorCodesHasBeenSet;
}

