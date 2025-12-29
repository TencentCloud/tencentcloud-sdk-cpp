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

#include <tencentcloud/lke/v20231130/model/AgentOutputConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AgentOutputConfig::AgentOutputConfig() :
    m_outputTypeHasBeenSet(false),
    m_structuredOutputParamsHasBeenSet(false),
    m_widgetIdHasBeenSet(false)
{
}

CoreInternalOutcome AgentOutputConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputType") && !value["OutputType"].IsNull())
    {
        if (!value["OutputType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AgentOutputConfig.OutputType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputType = value["OutputType"].GetInt64();
        m_outputTypeHasBeenSet = true;
    }

    if (value.HasMember("StructuredOutputParams") && !value["StructuredOutputParams"].IsNull())
    {
        if (!value["StructuredOutputParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AgentOutputConfig.StructuredOutputParams` is not array type"));

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

    if (value.HasMember("WidgetId") && !value["WidgetId"].IsNull())
    {
        if (!value["WidgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentOutputConfig.WidgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_widgetId = string(value["WidgetId"].GetString());
        m_widgetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentOutputConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputType, allocator);
    }

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

    if (m_widgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_widgetId.c_str(), allocator).Move(), allocator);
    }

}


int64_t AgentOutputConfig::GetOutputType() const
{
    return m_outputType;
}

void AgentOutputConfig::SetOutputType(const int64_t& _outputType)
{
    m_outputType = _outputType;
    m_outputTypeHasBeenSet = true;
}

bool AgentOutputConfig::OutputTypeHasBeenSet() const
{
    return m_outputTypeHasBeenSet;
}

vector<ParameterConfig> AgentOutputConfig::GetStructuredOutputParams() const
{
    return m_structuredOutputParams;
}

void AgentOutputConfig::SetStructuredOutputParams(const vector<ParameterConfig>& _structuredOutputParams)
{
    m_structuredOutputParams = _structuredOutputParams;
    m_structuredOutputParamsHasBeenSet = true;
}

bool AgentOutputConfig::StructuredOutputParamsHasBeenSet() const
{
    return m_structuredOutputParamsHasBeenSet;
}

string AgentOutputConfig::GetWidgetId() const
{
    return m_widgetId;
}

void AgentOutputConfig::SetWidgetId(const string& _widgetId)
{
    m_widgetId = _widgetId;
    m_widgetIdHasBeenSet = true;
}

bool AgentOutputConfig::WidgetIdHasBeenSet() const
{
    return m_widgetIdHasBeenSet;
}

