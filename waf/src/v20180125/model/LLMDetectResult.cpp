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

#include <tencentcloud/waf/v20180125/model/LLMDetectResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

LLMDetectResult::LLMDetectResult() :
    m_sensitiveResultHasBeenSet(false),
    m_keyWordsResultHasBeenSet(false),
    m_dataCategoryResultHasBeenSet(false),
    m_promptInjectionResultHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_payloadHasBeenSet(false),
    m_imageResultHasBeenSet(false)
{
}

CoreInternalOutcome LLMDetectResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SensitiveResult") && !value["SensitiveResult"].IsNull())
    {
        if (!value["SensitiveResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMDetectResult.SensitiveResult` is not array type"));

        const rapidjson::Value &tmpValue = value["SensitiveResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LLMSensitiveValueLevel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sensitiveResult.push_back(item);
        }
        m_sensitiveResultHasBeenSet = true;
    }

    if (value.HasMember("KeyWordsResult") && !value["KeyWordsResult"].IsNull())
    {
        if (!value["KeyWordsResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMDetectResult.KeyWordsResult` is not array type"));

        const rapidjson::Value &tmpValue = value["KeyWordsResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyWordInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_keyWordsResult.push_back(item);
        }
        m_keyWordsResultHasBeenSet = true;
    }

    if (value.HasMember("DataCategoryResult") && !value["DataCategoryResult"].IsNull())
    {
        if (!value["DataCategoryResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMDetectResult.DataCategoryResult` is not array type"));

        const rapidjson::Value &tmpValue = value["DataCategoryResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_dataCategoryResult.push_back((*itr).GetString());
        }
        m_dataCategoryResultHasBeenSet = true;
    }

    if (value.HasMember("PromptInjectionResult") && !value["PromptInjectionResult"].IsNull())
    {
        if (!value["PromptInjectionResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDetectResult.PromptInjectionResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_promptInjectionResult.Deserialize(value["PromptInjectionResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_promptInjectionResultHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDetectResult.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDetectResult.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDetectResult.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Payload") && !value["Payload"].IsNull())
    {
        if (!value["Payload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LLMDetectResult.Payload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payload = string(value["Payload"].GetString());
        m_payloadHasBeenSet = true;
    }

    if (value.HasMember("ImageResult") && !value["ImageResult"].IsNull())
    {
        if (!value["ImageResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LLMDetectResult.ImageResult` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageResult.push_back(item);
        }
        m_imageResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LLMDetectResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sensitiveResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sensitiveResult.begin(); itr != m_sensitiveResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_keyWordsResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyWordsResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_keyWordsResult.begin(); itr != m_keyWordsResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dataCategoryResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataCategoryResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataCategoryResult.begin(); itr != m_dataCategoryResult.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_promptInjectionResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptInjectionResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_promptInjectionResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_payloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Payload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payload.c_str(), allocator).Move(), allocator);
    }

    if (m_imageResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageResult.begin(); itr != m_imageResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<LLMSensitiveValueLevel> LLMDetectResult::GetSensitiveResult() const
{
    return m_sensitiveResult;
}

void LLMDetectResult::SetSensitiveResult(const vector<LLMSensitiveValueLevel>& _sensitiveResult)
{
    m_sensitiveResult = _sensitiveResult;
    m_sensitiveResultHasBeenSet = true;
}

bool LLMDetectResult::SensitiveResultHasBeenSet() const
{
    return m_sensitiveResultHasBeenSet;
}

vector<KeyWordInfo> LLMDetectResult::GetKeyWordsResult() const
{
    return m_keyWordsResult;
}

void LLMDetectResult::SetKeyWordsResult(const vector<KeyWordInfo>& _keyWordsResult)
{
    m_keyWordsResult = _keyWordsResult;
    m_keyWordsResultHasBeenSet = true;
}

bool LLMDetectResult::KeyWordsResultHasBeenSet() const
{
    return m_keyWordsResultHasBeenSet;
}

vector<string> LLMDetectResult::GetDataCategoryResult() const
{
    return m_dataCategoryResult;
}

void LLMDetectResult::SetDataCategoryResult(const vector<string>& _dataCategoryResult)
{
    m_dataCategoryResult = _dataCategoryResult;
    m_dataCategoryResultHasBeenSet = true;
}

bool LLMDetectResult::DataCategoryResultHasBeenSet() const
{
    return m_dataCategoryResultHasBeenSet;
}

PromptDetectResult LLMDetectResult::GetPromptInjectionResult() const
{
    return m_promptInjectionResult;
}

void LLMDetectResult::SetPromptInjectionResult(const PromptDetectResult& _promptInjectionResult)
{
    m_promptInjectionResult = _promptInjectionResult;
    m_promptInjectionResultHasBeenSet = true;
}

bool LLMDetectResult::PromptInjectionResultHasBeenSet() const
{
    return m_promptInjectionResultHasBeenSet;
}

string LLMDetectResult::GetRuleId() const
{
    return m_ruleId;
}

void LLMDetectResult::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool LLMDetectResult::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string LLMDetectResult::GetRuleName() const
{
    return m_ruleName;
}

void LLMDetectResult::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool LLMDetectResult::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string LLMDetectResult::GetAction() const
{
    return m_action;
}

void LLMDetectResult::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool LLMDetectResult::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string LLMDetectResult::GetPayload() const
{
    return m_payload;
}

void LLMDetectResult::SetPayload(const string& _payload)
{
    m_payload = _payload;
    m_payloadHasBeenSet = true;
}

bool LLMDetectResult::PayloadHasBeenSet() const
{
    return m_payloadHasBeenSet;
}

vector<ImageResult> LLMDetectResult::GetImageResult() const
{
    return m_imageResult;
}

void LLMDetectResult::SetImageResult(const vector<ImageResult>& _imageResult)
{
    m_imageResult = _imageResult;
    m_imageResultHasBeenSet = true;
}

bool LLMDetectResult::ImageResultHasBeenSet() const
{
    return m_imageResultHasBeenSet;
}

