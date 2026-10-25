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

#include <tencentcloud/rum/v20210622/model/FunnelStepInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

FunnelStepInput::FunnelStepInput() :
    m_stepNameHasBeenSet(false),
    m_pagePatternHasBeenSet(false),
    m_pageMatchModeHasBeenSet(false),
    m_selectorHasBeenSet(false),
    m_actionTypeHasBeenSet(false),
    m_visualNameHasBeenSet(false)
{
}

CoreInternalOutcome FunnelStepInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StepName") && !value["StepName"].IsNull())
    {
        if (!value["StepName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunnelStepInput.StepName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepName = string(value["StepName"].GetString());
        m_stepNameHasBeenSet = true;
    }

    if (value.HasMember("PagePattern") && !value["PagePattern"].IsNull())
    {
        if (!value["PagePattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunnelStepInput.PagePattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pagePattern = string(value["PagePattern"].GetString());
        m_pagePatternHasBeenSet = true;
    }

    if (value.HasMember("PageMatchMode") && !value["PageMatchMode"].IsNull())
    {
        if (!value["PageMatchMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunnelStepInput.PageMatchMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pageMatchMode = string(value["PageMatchMode"].GetString());
        m_pageMatchModeHasBeenSet = true;
    }

    if (value.HasMember("Selector") && !value["Selector"].IsNull())
    {
        if (!value["Selector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunnelStepInput.Selector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_selector = string(value["Selector"].GetString());
        m_selectorHasBeenSet = true;
    }

    if (value.HasMember("ActionType") && !value["ActionType"].IsNull())
    {
        if (!value["ActionType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunnelStepInput.ActionType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionType = string(value["ActionType"].GetString());
        m_actionTypeHasBeenSet = true;
    }

    if (value.HasMember("VisualName") && !value["VisualName"].IsNull())
    {
        if (!value["VisualName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FunnelStepInput.VisualName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_visualName = string(value["VisualName"].GetString());
        m_visualNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FunnelStepInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stepNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepName.c_str(), allocator).Move(), allocator);
    }

    if (m_pagePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PagePattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pagePattern.c_str(), allocator).Move(), allocator);
    }

    if (m_pageMatchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageMatchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pageMatchMode.c_str(), allocator).Move(), allocator);
    }

    if (m_selectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Selector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_selector.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionType.c_str(), allocator).Move(), allocator);
    }

    if (m_visualNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisualName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_visualName.c_str(), allocator).Move(), allocator);
    }

}


string FunnelStepInput::GetStepName() const
{
    return m_stepName;
}

void FunnelStepInput::SetStepName(const string& _stepName)
{
    m_stepName = _stepName;
    m_stepNameHasBeenSet = true;
}

bool FunnelStepInput::StepNameHasBeenSet() const
{
    return m_stepNameHasBeenSet;
}

string FunnelStepInput::GetPagePattern() const
{
    return m_pagePattern;
}

void FunnelStepInput::SetPagePattern(const string& _pagePattern)
{
    m_pagePattern = _pagePattern;
    m_pagePatternHasBeenSet = true;
}

bool FunnelStepInput::PagePatternHasBeenSet() const
{
    return m_pagePatternHasBeenSet;
}

string FunnelStepInput::GetPageMatchMode() const
{
    return m_pageMatchMode;
}

void FunnelStepInput::SetPageMatchMode(const string& _pageMatchMode)
{
    m_pageMatchMode = _pageMatchMode;
    m_pageMatchModeHasBeenSet = true;
}

bool FunnelStepInput::PageMatchModeHasBeenSet() const
{
    return m_pageMatchModeHasBeenSet;
}

string FunnelStepInput::GetSelector() const
{
    return m_selector;
}

void FunnelStepInput::SetSelector(const string& _selector)
{
    m_selector = _selector;
    m_selectorHasBeenSet = true;
}

bool FunnelStepInput::SelectorHasBeenSet() const
{
    return m_selectorHasBeenSet;
}

string FunnelStepInput::GetActionType() const
{
    return m_actionType;
}

void FunnelStepInput::SetActionType(const string& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool FunnelStepInput::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}

string FunnelStepInput::GetVisualName() const
{
    return m_visualName;
}

void FunnelStepInput::SetVisualName(const string& _visualName)
{
    m_visualName = _visualName;
    m_visualNameHasBeenSet = true;
}

bool FunnelStepInput::VisualNameHasBeenSet() const
{
    return m_visualNameHasBeenSet;
}

