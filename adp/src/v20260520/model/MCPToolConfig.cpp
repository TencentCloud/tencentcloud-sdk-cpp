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

#include <tencentcloud/adp/v20260520/model/MCPToolConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

MCPToolConfig::MCPToolConfig() :
    m_inputsHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_metaHasBeenSet(false),
    m_supportsAppsHasBeenSet(false)
{
}

CoreInternalOutcome MCPToolConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Inputs") && !value["Inputs"].IsNull())
    {
        if (!value["Inputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MCPToolConfig.Inputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Inputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RequestParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inputs.push_back(item);
        }
        m_inputsHasBeenSet = true;
    }

    if (value.HasMember("Outputs") && !value["Outputs"].IsNull())
    {
        if (!value["Outputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MCPToolConfig.Outputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Outputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResponseParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputs.push_back(item);
        }
        m_outputsHasBeenSet = true;
    }

    if (value.HasMember("Meta") && !value["Meta"].IsNull())
    {
        if (!value["Meta"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MCPToolConfig.Meta` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_meta.Deserialize(value["Meta"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaHasBeenSet = true;
    }

    if (value.HasMember("SupportsApps") && !value["SupportsApps"].IsNull())
    {
        if (!value["SupportsApps"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MCPToolConfig.SupportsApps` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportsApps = value["SupportsApps"].GetBool();
        m_supportsAppsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MCPToolConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Inputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inputs.begin(); itr != m_inputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputs.begin(); itr != m_outputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_metaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Meta";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_meta.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_supportsAppsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportsApps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportsApps, allocator);
    }

}


vector<RequestParam> MCPToolConfig::GetInputs() const
{
    return m_inputs;
}

void MCPToolConfig::SetInputs(const vector<RequestParam>& _inputs)
{
    m_inputs = _inputs;
    m_inputsHasBeenSet = true;
}

bool MCPToolConfig::InputsHasBeenSet() const
{
    return m_inputsHasBeenSet;
}

vector<ResponseParam> MCPToolConfig::GetOutputs() const
{
    return m_outputs;
}

void MCPToolConfig::SetOutputs(const vector<ResponseParam>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool MCPToolConfig::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}

MCPToolMeta MCPToolConfig::GetMeta() const
{
    return m_meta;
}

void MCPToolConfig::SetMeta(const MCPToolMeta& _meta)
{
    m_meta = _meta;
    m_metaHasBeenSet = true;
}

bool MCPToolConfig::MetaHasBeenSet() const
{
    return m_metaHasBeenSet;
}

bool MCPToolConfig::GetSupportsApps() const
{
    return m_supportsApps;
}

void MCPToolConfig::SetSupportsApps(const bool& _supportsApps)
{
    m_supportsApps = _supportsApps;
    m_supportsAppsHasBeenSet = true;
}

bool MCPToolConfig::SupportsAppsHasBeenSet() const
{
    return m_supportsAppsHasBeenSet;
}

