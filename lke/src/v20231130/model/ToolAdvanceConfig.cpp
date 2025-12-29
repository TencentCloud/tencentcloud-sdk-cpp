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

#include <tencentcloud/lke/v20231130/model/ToolAdvanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ToolAdvanceConfig::ToolAdvanceConfig() :
    m_enableDirectResultReturnHasBeenSet(false),
    m_outputTypeHasBeenSet(false),
    m_rawStructuredOutputHasBeenSet(false),
    m_customTextOutputsHasBeenSet(false),
    m_outputWidgetConfigHasBeenSet(false)
{
}

CoreInternalOutcome ToolAdvanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableDirectResultReturn") && !value["EnableDirectResultReturn"].IsNull())
    {
        if (!value["EnableDirectResultReturn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ToolAdvanceConfig.EnableDirectResultReturn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableDirectResultReturn = value["EnableDirectResultReturn"].GetBool();
        m_enableDirectResultReturnHasBeenSet = true;
    }

    if (value.HasMember("OutputType") && !value["OutputType"].IsNull())
    {
        if (!value["OutputType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ToolAdvanceConfig.OutputType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outputType = value["OutputType"].GetInt64();
        m_outputTypeHasBeenSet = true;
    }

    if (value.HasMember("RawStructuredOutput") && !value["RawStructuredOutput"].IsNull())
    {
        if (!value["RawStructuredOutput"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ToolAdvanceConfig.RawStructuredOutput` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rawStructuredOutput = string(value["RawStructuredOutput"].GetString());
        m_rawStructuredOutputHasBeenSet = true;
    }

    if (value.HasMember("CustomTextOutputs") && !value["CustomTextOutputs"].IsNull())
    {
        if (!value["CustomTextOutputs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ToolAdvanceConfig.CustomTextOutputs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customTextOutputs = string(value["CustomTextOutputs"].GetString());
        m_customTextOutputsHasBeenSet = true;
    }

    if (value.HasMember("OutputWidgetConfig") && !value["OutputWidgetConfig"].IsNull())
    {
        if (!value["OutputWidgetConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ToolAdvanceConfig.OutputWidgetConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputWidgetConfig.Deserialize(value["OutputWidgetConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputWidgetConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ToolAdvanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableDirectResultReturnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDirectResultReturn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableDirectResultReturn, allocator);
    }

    if (m_outputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputType, allocator);
    }

    if (m_rawStructuredOutputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawStructuredOutput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rawStructuredOutput.c_str(), allocator).Move(), allocator);
    }

    if (m_customTextOutputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomTextOutputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customTextOutputs.c_str(), allocator).Move(), allocator);
    }

    if (m_outputWidgetConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputWidgetConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputWidgetConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool ToolAdvanceConfig::GetEnableDirectResultReturn() const
{
    return m_enableDirectResultReturn;
}

void ToolAdvanceConfig::SetEnableDirectResultReturn(const bool& _enableDirectResultReturn)
{
    m_enableDirectResultReturn = _enableDirectResultReturn;
    m_enableDirectResultReturnHasBeenSet = true;
}

bool ToolAdvanceConfig::EnableDirectResultReturnHasBeenSet() const
{
    return m_enableDirectResultReturnHasBeenSet;
}

int64_t ToolAdvanceConfig::GetOutputType() const
{
    return m_outputType;
}

void ToolAdvanceConfig::SetOutputType(const int64_t& _outputType)
{
    m_outputType = _outputType;
    m_outputTypeHasBeenSet = true;
}

bool ToolAdvanceConfig::OutputTypeHasBeenSet() const
{
    return m_outputTypeHasBeenSet;
}

string ToolAdvanceConfig::GetRawStructuredOutput() const
{
    return m_rawStructuredOutput;
}

void ToolAdvanceConfig::SetRawStructuredOutput(const string& _rawStructuredOutput)
{
    m_rawStructuredOutput = _rawStructuredOutput;
    m_rawStructuredOutputHasBeenSet = true;
}

bool ToolAdvanceConfig::RawStructuredOutputHasBeenSet() const
{
    return m_rawStructuredOutputHasBeenSet;
}

string ToolAdvanceConfig::GetCustomTextOutputs() const
{
    return m_customTextOutputs;
}

void ToolAdvanceConfig::SetCustomTextOutputs(const string& _customTextOutputs)
{
    m_customTextOutputs = _customTextOutputs;
    m_customTextOutputsHasBeenSet = true;
}

bool ToolAdvanceConfig::CustomTextOutputsHasBeenSet() const
{
    return m_customTextOutputsHasBeenSet;
}

OutputWidgetConfig ToolAdvanceConfig::GetOutputWidgetConfig() const
{
    return m_outputWidgetConfig;
}

void ToolAdvanceConfig::SetOutputWidgetConfig(const OutputWidgetConfig& _outputWidgetConfig)
{
    m_outputWidgetConfig = _outputWidgetConfig;
    m_outputWidgetConfigHasBeenSet = true;
}

bool ToolAdvanceConfig::OutputWidgetConfigHasBeenSet() const
{
    return m_outputWidgetConfigHasBeenSet;
}

