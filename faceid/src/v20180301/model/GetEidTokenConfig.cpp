/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/faceid/v20180301/model/GetEidTokenConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetEidTokenConfig::GetEidTokenConfig() :
    m_inputTypeHasBeenSet(false),
    m_useIntentionVerifyHasBeenSet(false),
    m_intentionModeHasBeenSet(false),
    m_intentionVerifyTextHasBeenSet(false),
    m_intentionQuestionsHasBeenSet(false)
{
}

CoreInternalOutcome GetEidTokenConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetEidTokenConfig.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("UseIntentionVerify") && !value["UseIntentionVerify"].IsNull())
    {
        if (!value["UseIntentionVerify"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `GetEidTokenConfig.UseIntentionVerify` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_useIntentionVerify = value["UseIntentionVerify"].GetBool();
        m_useIntentionVerifyHasBeenSet = true;
    }

    if (value.HasMember("IntentionMode") && !value["IntentionMode"].IsNull())
    {
        if (!value["IntentionMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetEidTokenConfig.IntentionMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentionMode = string(value["IntentionMode"].GetString());
        m_intentionModeHasBeenSet = true;
    }

    if (value.HasMember("IntentionVerifyText") && !value["IntentionVerifyText"].IsNull())
    {
        if (!value["IntentionVerifyText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetEidTokenConfig.IntentionVerifyText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_intentionVerifyText = string(value["IntentionVerifyText"].GetString());
        m_intentionVerifyTextHasBeenSet = true;
    }

    if (value.HasMember("IntentionQuestions") && !value["IntentionQuestions"].IsNull())
    {
        if (!value["IntentionQuestions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GetEidTokenConfig.IntentionQuestions` is not array type"));

        const rapidjson::Value &tmpValue = value["IntentionQuestions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IntentionQuestion item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_intentionQuestions.push_back(item);
        }
        m_intentionQuestionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetEidTokenConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_useIntentionVerifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseIntentionVerify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useIntentionVerify, allocator);
    }

    if (m_intentionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intentionMode.c_str(), allocator).Move(), allocator);
    }

    if (m_intentionVerifyTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionVerifyText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_intentionVerifyText.c_str(), allocator).Move(), allocator);
    }

    if (m_intentionQuestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntentionQuestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_intentionQuestions.begin(); itr != m_intentionQuestions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GetEidTokenConfig::GetInputType() const
{
    return m_inputType;
}

void GetEidTokenConfig::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool GetEidTokenConfig::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

bool GetEidTokenConfig::GetUseIntentionVerify() const
{
    return m_useIntentionVerify;
}

void GetEidTokenConfig::SetUseIntentionVerify(const bool& _useIntentionVerify)
{
    m_useIntentionVerify = _useIntentionVerify;
    m_useIntentionVerifyHasBeenSet = true;
}

bool GetEidTokenConfig::UseIntentionVerifyHasBeenSet() const
{
    return m_useIntentionVerifyHasBeenSet;
}

string GetEidTokenConfig::GetIntentionMode() const
{
    return m_intentionMode;
}

void GetEidTokenConfig::SetIntentionMode(const string& _intentionMode)
{
    m_intentionMode = _intentionMode;
    m_intentionModeHasBeenSet = true;
}

bool GetEidTokenConfig::IntentionModeHasBeenSet() const
{
    return m_intentionModeHasBeenSet;
}

string GetEidTokenConfig::GetIntentionVerifyText() const
{
    return m_intentionVerifyText;
}

void GetEidTokenConfig::SetIntentionVerifyText(const string& _intentionVerifyText)
{
    m_intentionVerifyText = _intentionVerifyText;
    m_intentionVerifyTextHasBeenSet = true;
}

bool GetEidTokenConfig::IntentionVerifyTextHasBeenSet() const
{
    return m_intentionVerifyTextHasBeenSet;
}

vector<IntentionQuestion> GetEidTokenConfig::GetIntentionQuestions() const
{
    return m_intentionQuestions;
}

void GetEidTokenConfig::SetIntentionQuestions(const vector<IntentionQuestion>& _intentionQuestions)
{
    m_intentionQuestions = _intentionQuestions;
    m_intentionQuestionsHasBeenSet = true;
}

bool GetEidTokenConfig::IntentionQuestionsHasBeenSet() const
{
    return m_intentionQuestionsHasBeenSet;
}

