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

#include <tencentcloud/vod/v20180717/model/MPSSmartSubtitlesTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSSmartSubtitlesTaskInput::MPSSmartSubtitlesTaskInput() :
    m_definitionHasBeenSet(false),
    m_rawParameterHasBeenSet(false)
{
}

CoreInternalOutcome MPSSmartSubtitlesTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitlesTaskInput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("RawParameter") && !value["RawParameter"].IsNull())
    {
        if (!value["RawParameter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MPSSmartSubtitlesTaskInput.RawParameter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rawParameter.Deserialize(value["RawParameter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rawParameterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSSmartSubtitlesTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_rawParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rawParameter.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t MPSSmartSubtitlesTaskInput::GetDefinition() const
{
    return m_definition;
}

void MPSSmartSubtitlesTaskInput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool MPSSmartSubtitlesTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

MPSRawSmartSubtitleParameter MPSSmartSubtitlesTaskInput::GetRawParameter() const
{
    return m_rawParameter;
}

void MPSSmartSubtitlesTaskInput::SetRawParameter(const MPSRawSmartSubtitleParameter& _rawParameter)
{
    m_rawParameter = _rawParameter;
    m_rawParameterHasBeenSet = true;
}

bool MPSSmartSubtitlesTaskInput::RawParameterHasBeenSet() const
{
    return m_rawParameterHasBeenSet;
}

