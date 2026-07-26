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

#include <tencentcloud/mps/v20190612/model/CloneViralContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

CloneViralContent::CloneViralContent() :
    m_userPromptHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_marketHasBeenSet(false),
    m_fissionLevelHasBeenSet(false)
{
}

CoreInternalOutcome CloneViralContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserPrompt") && !value["UserPrompt"].IsNull())
    {
        if (!value["UserPrompt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneViralContent.UserPrompt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userPrompt = string(value["UserPrompt"].GetString());
        m_userPromptHasBeenSet = true;
    }

    if (value.HasMember("Language") && !value["Language"].IsNull())
    {
        if (!value["Language"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneViralContent.Language` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_language = string(value["Language"].GetString());
        m_languageHasBeenSet = true;
    }

    if (value.HasMember("Market") && !value["Market"].IsNull())
    {
        if (!value["Market"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneViralContent.Market` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_market = string(value["Market"].GetString());
        m_marketHasBeenSet = true;
    }

    if (value.HasMember("FissionLevel") && !value["FissionLevel"].IsNull())
    {
        if (!value["FissionLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloneViralContent.FissionLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fissionLevel = string(value["FissionLevel"].GetString());
        m_fissionLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloneViralContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userPromptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserPrompt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userPrompt.c_str(), allocator).Move(), allocator);
    }

    if (m_languageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Language";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_language.c_str(), allocator).Move(), allocator);
    }

    if (m_marketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Market";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_market.c_str(), allocator).Move(), allocator);
    }

    if (m_fissionLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FissionLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fissionLevel.c_str(), allocator).Move(), allocator);
    }

}


string CloneViralContent::GetUserPrompt() const
{
    return m_userPrompt;
}

void CloneViralContent::SetUserPrompt(const string& _userPrompt)
{
    m_userPrompt = _userPrompt;
    m_userPromptHasBeenSet = true;
}

bool CloneViralContent::UserPromptHasBeenSet() const
{
    return m_userPromptHasBeenSet;
}

string CloneViralContent::GetLanguage() const
{
    return m_language;
}

void CloneViralContent::SetLanguage(const string& _language)
{
    m_language = _language;
    m_languageHasBeenSet = true;
}

bool CloneViralContent::LanguageHasBeenSet() const
{
    return m_languageHasBeenSet;
}

string CloneViralContent::GetMarket() const
{
    return m_market;
}

void CloneViralContent::SetMarket(const string& _market)
{
    m_market = _market;
    m_marketHasBeenSet = true;
}

bool CloneViralContent::MarketHasBeenSet() const
{
    return m_marketHasBeenSet;
}

string CloneViralContent::GetFissionLevel() const
{
    return m_fissionLevel;
}

void CloneViralContent::SetFissionLevel(const string& _fissionLevel)
{
    m_fissionLevel = _fissionLevel;
    m_fissionLevelHasBeenSet = true;
}

bool CloneViralContent::FissionLevelHasBeenSet() const
{
    return m_fissionLevelHasBeenSet;
}

