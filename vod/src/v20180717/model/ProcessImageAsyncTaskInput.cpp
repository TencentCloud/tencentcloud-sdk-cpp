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

#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ProcessImageAsyncTaskInput::ProcessImageAsyncTaskInput() :
    m_definitionHasBeenSet(false),
    m_extendedParameterHasBeenSet(false)
{
}

CoreInternalOutcome ProcessImageAsyncTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessImageAsyncTaskInput.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("ExtendedParameter") && !value["ExtendedParameter"].IsNull())
    {
        if (!value["ExtendedParameter"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessImageAsyncTaskInput.ExtendedParameter` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_extendedParameter.Deserialize(value["ExtendedParameter"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_extendedParameterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessImageAsyncTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_extendedParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendedParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_extendedParameter.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t ProcessImageAsyncTaskInput::GetDefinition() const
{
    return m_definition;
}

void ProcessImageAsyncTaskInput::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ProcessImageAsyncTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

ProcessImageAsyncInputExtendedParameter ProcessImageAsyncTaskInput::GetExtendedParameter() const
{
    return m_extendedParameter;
}

void ProcessImageAsyncTaskInput::SetExtendedParameter(const ProcessImageAsyncInputExtendedParameter& _extendedParameter)
{
    m_extendedParameter = _extendedParameter;
    m_extendedParameterHasBeenSet = true;
}

bool ProcessImageAsyncTaskInput::ExtendedParameterHasBeenSet() const
{
    return m_extendedParameterHasBeenSet;
}

