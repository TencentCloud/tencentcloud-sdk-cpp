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

#include <tencentcloud/dts/v20211206/model/DistributeRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DistributeRule::DistributeRule() :
    m_ruleTypeHasBeenSet(false),
    m_dbPatternHasBeenSet(false),
    m_tablePatternHasBeenSet(false),
    m_columnsHasBeenSet(false)
{
}

CoreInternalOutcome DistributeRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("DbPattern") && !value["DbPattern"].IsNull())
    {
        if (!value["DbPattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeRule.DbPattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbPattern = string(value["DbPattern"].GetString());
        m_dbPatternHasBeenSet = true;
    }

    if (value.HasMember("TablePattern") && !value["TablePattern"].IsNull())
    {
        if (!value["TablePattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DistributeRule.TablePattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tablePattern = string(value["TablePattern"].GetString());
        m_tablePatternHasBeenSet = true;
    }

    if (value.HasMember("Columns") && !value["Columns"].IsNull())
    {
        if (!value["Columns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DistributeRule.Columns` is not array type"));

        const rapidjson::Value &tmpValue = value["Columns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_columns.push_back((*itr).GetString());
        }
        m_columnsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DistributeRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_dbPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_tablePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TablePattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tablePattern.c_str(), allocator).Move(), allocator);
    }

    if (m_columnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Columns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_columns.begin(); itr != m_columns.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string DistributeRule::GetRuleType() const
{
    return m_ruleType;
}

void DistributeRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool DistributeRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string DistributeRule::GetDbPattern() const
{
    return m_dbPattern;
}

void DistributeRule::SetDbPattern(const string& _dbPattern)
{
    m_dbPattern = _dbPattern;
    m_dbPatternHasBeenSet = true;
}

bool DistributeRule::DbPatternHasBeenSet() const
{
    return m_dbPatternHasBeenSet;
}

string DistributeRule::GetTablePattern() const
{
    return m_tablePattern;
}

void DistributeRule::SetTablePattern(const string& _tablePattern)
{
    m_tablePattern = _tablePattern;
    m_tablePatternHasBeenSet = true;
}

bool DistributeRule::TablePatternHasBeenSet() const
{
    return m_tablePatternHasBeenSet;
}

vector<string> DistributeRule::GetColumns() const
{
    return m_columns;
}

void DistributeRule::SetColumns(const vector<string>& _columns)
{
    m_columns = _columns;
    m_columnsHasBeenSet = true;
}

bool DistributeRule::ColumnsHasBeenSet() const
{
    return m_columnsHasBeenSet;
}

