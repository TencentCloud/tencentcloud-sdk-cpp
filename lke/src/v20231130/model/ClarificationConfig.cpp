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

#include <tencentcloud/lke/v20231130/model/ClarificationConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ClarificationConfig::ClarificationConfig() :
    m_outputTypeHasBeenSet(false),
    m_widgetConfigsHasBeenSet(false)
{
}

CoreInternalOutcome ClarificationConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputType") && !value["OutputType"].IsNull())
    {
        if (!value["OutputType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ClarificationConfig.OutputType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputType = value["OutputType"].GetInt64();
        m_outputTypeHasBeenSet = true;
    }

    if (value.HasMember("WidgetConfigs") && !value["WidgetConfigs"].IsNull())
    {
        if (!value["WidgetConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ClarificationConfig.WidgetConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["WidgetConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClarificationWidgetConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_widgetConfigs.push_back(item);
        }
        m_widgetConfigsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClarificationConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputType, allocator);
    }

    if (m_widgetConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_widgetConfigs.begin(); itr != m_widgetConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ClarificationConfig::GetOutputType() const
{
    return m_outputType;
}

void ClarificationConfig::SetOutputType(const int64_t& _outputType)
{
    m_outputType = _outputType;
    m_outputTypeHasBeenSet = true;
}

bool ClarificationConfig::OutputTypeHasBeenSet() const
{
    return m_outputTypeHasBeenSet;
}

vector<ClarificationWidgetConfig> ClarificationConfig::GetWidgetConfigs() const
{
    return m_widgetConfigs;
}

void ClarificationConfig::SetWidgetConfigs(const vector<ClarificationWidgetConfig>& _widgetConfigs)
{
    m_widgetConfigs = _widgetConfigs;
    m_widgetConfigsHasBeenSet = true;
}

bool ClarificationConfig::WidgetConfigsHasBeenSet() const
{
    return m_widgetConfigsHasBeenSet;
}

