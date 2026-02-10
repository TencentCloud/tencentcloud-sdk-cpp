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

#include <tencentcloud/vod/v20180717/model/LLMComprehendSummaryForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

LLMComprehendSummaryForUpdate::LLMComprehendSummaryForUpdate() :
    m_switchHasBeenSet(false),
    m_extendedParameterHasBeenSet(false)
{
}

CoreInternalOutcome LLMComprehendSummaryForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMComprehendSummaryForUpdate.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("ExtendedParameter") && !value["ExtendedParameter"].IsNull())
    {
        if (!value["ExtendedParameter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMComprehendSummaryForUpdate.ExtendedParameter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendedParameter = string(value["ExtendedParameter"].GetString());
        m_extendedParameterHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMComprehendSummaryForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_extendedParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendedParameter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendedParameter.c_str(), allocator).Move(), allocator);
    }

}


string LLMComprehendSummaryForUpdate::GetSwitch() const
{
    return m_switch;
}

void LLMComprehendSummaryForUpdate::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool LLMComprehendSummaryForUpdate::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string LLMComprehendSummaryForUpdate::GetExtendedParameter() const
{
    return m_extendedParameter;
}

void LLMComprehendSummaryForUpdate::SetExtendedParameter(const string& _extendedParameter)
{
    m_extendedParameter = _extendedParameter;
    m_extendedParameterHasBeenSet = true;
}

bool LLMComprehendSummaryForUpdate::ExtendedParameterHasBeenSet() const
{
    return m_extendedParameterHasBeenSet;
}

