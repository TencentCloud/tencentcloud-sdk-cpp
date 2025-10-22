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

#include <tencentcloud/teo/v20220901/model/SessionRateControl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SessionRateControl::SessionRateControl() :
    m_enabledHasBeenSet(false),
    m_highRateSessionActionHasBeenSet(false),
    m_midRateSessionActionHasBeenSet(false),
    m_lowRateSessionActionHasBeenSet(false)
{
}

CoreInternalOutcome SessionRateControl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionRateControl.Enabled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = string(value["Enabled"].GetString());
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("HighRateSessionAction") && !value["HighRateSessionAction"].IsNull())
    {
        if (!value["HighRateSessionAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SessionRateControl.HighRateSessionAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_highRateSessionAction.Deserialize(value["HighRateSessionAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_highRateSessionActionHasBeenSet = true;
    }

    if (value.HasMember("MidRateSessionAction") && !value["MidRateSessionAction"].IsNull())
    {
        if (!value["MidRateSessionAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SessionRateControl.MidRateSessionAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_midRateSessionAction.Deserialize(value["MidRateSessionAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_midRateSessionActionHasBeenSet = true;
    }

    if (value.HasMember("LowRateSessionAction") && !value["LowRateSessionAction"].IsNull())
    {
        if (!value["LowRateSessionAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SessionRateControl.LowRateSessionAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lowRateSessionAction.Deserialize(value["LowRateSessionAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lowRateSessionActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionRateControl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enabled.c_str(), allocator).Move(), allocator);
    }

    if (m_highRateSessionActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRateSessionAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_highRateSessionAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_midRateSessionActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidRateSessionAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_midRateSessionAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lowRateSessionActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowRateSessionAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lowRateSessionAction.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SessionRateControl::GetEnabled() const
{
    return m_enabled;
}

void SessionRateControl::SetEnabled(const string& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool SessionRateControl::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

SecurityAction SessionRateControl::GetHighRateSessionAction() const
{
    return m_highRateSessionAction;
}

void SessionRateControl::SetHighRateSessionAction(const SecurityAction& _highRateSessionAction)
{
    m_highRateSessionAction = _highRateSessionAction;
    m_highRateSessionActionHasBeenSet = true;
}

bool SessionRateControl::HighRateSessionActionHasBeenSet() const
{
    return m_highRateSessionActionHasBeenSet;
}

SecurityAction SessionRateControl::GetMidRateSessionAction() const
{
    return m_midRateSessionAction;
}

void SessionRateControl::SetMidRateSessionAction(const SecurityAction& _midRateSessionAction)
{
    m_midRateSessionAction = _midRateSessionAction;
    m_midRateSessionActionHasBeenSet = true;
}

bool SessionRateControl::MidRateSessionActionHasBeenSet() const
{
    return m_midRateSessionActionHasBeenSet;
}

SecurityAction SessionRateControl::GetLowRateSessionAction() const
{
    return m_lowRateSessionAction;
}

void SessionRateControl::SetLowRateSessionAction(const SecurityAction& _lowRateSessionAction)
{
    m_lowRateSessionAction = _lowRateSessionAction;
    m_lowRateSessionActionHasBeenSet = true;
}

bool SessionRateControl::LowRateSessionActionHasBeenSet() const
{
    return m_lowRateSessionActionHasBeenSet;
}

