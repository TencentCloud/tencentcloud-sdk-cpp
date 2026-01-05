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

#include <tencentcloud/wedata/v20250806/model/QualityRuleFieldConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

QualityRuleFieldConfig::QualityRuleFieldConfig() :
    m_whereConfigHasBeenSet(false),
    m_tableConfigHasBeenSet(false)
{
}

CoreInternalOutcome QualityRuleFieldConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WhereConfig") && !value["WhereConfig"].IsNull())
    {
        if (!value["WhereConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityRuleFieldConfig.WhereConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["WhereConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityFieldConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_whereConfig.push_back(item);
        }
        m_whereConfigHasBeenSet = true;
    }

    if (value.HasMember("TableConfig") && !value["TableConfig"].IsNull())
    {
        if (!value["TableConfig"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QualityRuleFieldConfig.TableConfig` is not array type"));

        const rapidjson::Value &tmpValue = value["TableConfig"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QualityTableConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tableConfig.push_back(item);
        }
        m_tableConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QualityRuleFieldConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_whereConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhereConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_whereConfig.begin(); itr != m_whereConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tableConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableConfig.begin(); itr != m_tableConfig.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<QualityFieldConfig> QualityRuleFieldConfig::GetWhereConfig() const
{
    return m_whereConfig;
}

void QualityRuleFieldConfig::SetWhereConfig(const vector<QualityFieldConfig>& _whereConfig)
{
    m_whereConfig = _whereConfig;
    m_whereConfigHasBeenSet = true;
}

bool QualityRuleFieldConfig::WhereConfigHasBeenSet() const
{
    return m_whereConfigHasBeenSet;
}

vector<QualityTableConfig> QualityRuleFieldConfig::GetTableConfig() const
{
    return m_tableConfig;
}

void QualityRuleFieldConfig::SetTableConfig(const vector<QualityTableConfig>& _tableConfig)
{
    m_tableConfig = _tableConfig;
    m_tableConfigHasBeenSet = true;
}

bool QualityRuleFieldConfig::TableConfigHasBeenSet() const
{
    return m_tableConfigHasBeenSet;
}

