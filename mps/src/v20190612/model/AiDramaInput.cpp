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

#include <tencentcloud/mps/v20190612/model/AiDramaInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiDramaInput::AiDramaInput() :
    m_scriptHasBeenSet(false),
    m_styleHasBeenSet(false),
    m_ratioHasBeenSet(false),
    m_resolutionHasBeenSet(false)
{
}

CoreInternalOutcome AiDramaInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Script") && !value["Script"].IsNull())
    {
        if (!value["Script"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiDramaInput.Script` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_script = string(value["Script"].GetString());
        m_scriptHasBeenSet = true;
    }

    if (value.HasMember("Style") && !value["Style"].IsNull())
    {
        if (!value["Style"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiDramaInput.Style` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_style = string(value["Style"].GetString());
        m_styleHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiDramaInput.Ratio` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = string(value["Ratio"].GetString());
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiDramaInput.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiDramaInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Script";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_script.c_str(), allocator).Move(), allocator);
    }

    if (m_styleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Style";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_style.c_str(), allocator).Move(), allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ratio.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

}


string AiDramaInput::GetScript() const
{
    return m_script;
}

void AiDramaInput::SetScript(const string& _script)
{
    m_script = _script;
    m_scriptHasBeenSet = true;
}

bool AiDramaInput::ScriptHasBeenSet() const
{
    return m_scriptHasBeenSet;
}

string AiDramaInput::GetStyle() const
{
    return m_style;
}

void AiDramaInput::SetStyle(const string& _style)
{
    m_style = _style;
    m_styleHasBeenSet = true;
}

bool AiDramaInput::StyleHasBeenSet() const
{
    return m_styleHasBeenSet;
}

string AiDramaInput::GetRatio() const
{
    return m_ratio;
}

void AiDramaInput::SetRatio(const string& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool AiDramaInput::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

string AiDramaInput::GetResolution() const
{
    return m_resolution;
}

void AiDramaInput::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool AiDramaInput::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

