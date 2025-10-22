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

#include <tencentcloud/lke/v20231130/model/StructuredOutputConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

StructuredOutputConfig::StructuredOutputConfig() :
    m_structuredOutputParamsHasBeenSet(false)
{
}

CoreInternalOutcome StructuredOutputConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StructuredOutputParams") && !value["StructuredOutputParams"].IsNull())
    {
        if (!value["StructuredOutputParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StructuredOutputConfig.StructuredOutputParams` is not array type"));

        const rapidjson::Value &tmpValue = value["StructuredOutputParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParameterConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_structuredOutputParams.push_back(item);
        }
        m_structuredOutputParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StructuredOutputConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_structuredOutputParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StructuredOutputParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_structuredOutputParams.begin(); itr != m_structuredOutputParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<ParameterConfig> StructuredOutputConfig::GetStructuredOutputParams() const
{
    return m_structuredOutputParams;
}

void StructuredOutputConfig::SetStructuredOutputParams(const vector<ParameterConfig>& _structuredOutputParams)
{
    m_structuredOutputParams = _structuredOutputParams;
    m_structuredOutputParamsHasBeenSet = true;
}

bool StructuredOutputConfig::StructuredOutputParamsHasBeenSet() const
{
    return m_structuredOutputParamsHasBeenSet;
}

