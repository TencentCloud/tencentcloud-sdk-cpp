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

#include <tencentcloud/cls/v20201016/model/AIAnalysis.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AIAnalysis::AIAnalysis() :
    m_enableHasBeenSet(false),
    m_hideProcessHasBeenSet(false),
    m_userPromptHasBeenSet(false),
    m_analysisDataScopeHasBeenSet(false)
{
}

CoreInternalOutcome AIAnalysis::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIAnalysis.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("HideProcess") && !value["HideProcess"].IsNull())
    {
        if (!value["HideProcess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIAnalysis.HideProcess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideProcess = value["HideProcess"].GetBool();
        m_hideProcessHasBeenSet = true;
    }

    if (value.HasMember("UserPrompt") && !value["UserPrompt"].IsNull())
    {
        if (!value["UserPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIAnalysis.UserPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userPrompt = string(value["UserPrompt"].GetString());
        m_userPromptHasBeenSet = true;
    }

    if (value.HasMember("AnalysisDataScope") && !value["AnalysisDataScope"].IsNull())
    {
        if (!value["AnalysisDataScope"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIAnalysis.AnalysisDataScope` is not array type"));

        const rapidjson::Value &tmpValue = value["AnalysisDataScope"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AIAnalysisDataScope item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_analysisDataScope.push_back(item);
        }
        m_analysisDataScopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIAnalysis::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_hideProcessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideProcess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideProcess, allocator);
    }

    if (m_userPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_analysisDataScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisDataScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_analysisDataScope.begin(); itr != m_analysisDataScope.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool AIAnalysis::GetEnable() const
{
    return m_enable;
}

void AIAnalysis::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool AIAnalysis::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

bool AIAnalysis::GetHideProcess() const
{
    return m_hideProcess;
}

void AIAnalysis::SetHideProcess(const bool& _hideProcess)
{
    m_hideProcess = _hideProcess;
    m_hideProcessHasBeenSet = true;
}

bool AIAnalysis::HideProcessHasBeenSet() const
{
    return m_hideProcessHasBeenSet;
}

string AIAnalysis::GetUserPrompt() const
{
    return m_userPrompt;
}

void AIAnalysis::SetUserPrompt(const string& _userPrompt)
{
    m_userPrompt = _userPrompt;
    m_userPromptHasBeenSet = true;
}

bool AIAnalysis::UserPromptHasBeenSet() const
{
    return m_userPromptHasBeenSet;
}

vector<AIAnalysisDataScope> AIAnalysis::GetAnalysisDataScope() const
{
    return m_analysisDataScope;
}

void AIAnalysis::SetAnalysisDataScope(const vector<AIAnalysisDataScope>& _analysisDataScope)
{
    m_analysisDataScope = _analysisDataScope;
    m_analysisDataScopeHasBeenSet = true;
}

bool AIAnalysis::AnalysisDataScopeHasBeenSet() const
{
    return m_analysisDataScopeHasBeenSet;
}

