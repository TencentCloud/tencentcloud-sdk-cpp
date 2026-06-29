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

#include <tencentcloud/csip/v20221121/model/LogFullTextInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LogFullTextInfo::LogFullTextInfo() :
    m_caseSensitiveHasBeenSet(false),
    m_tokenizerHasBeenSet(false),
    m_containZHHasBeenSet(false)
{
}

CoreInternalOutcome LogFullTextInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CaseSensitive") && !value["CaseSensitive"].IsNull())
    {
        if (!value["CaseSensitive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogFullTextInfo.CaseSensitive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_caseSensitive = value["CaseSensitive"].GetBool();
        m_caseSensitiveHasBeenSet = true;
    }

    if (value.HasMember("Tokenizer") && !value["Tokenizer"].IsNull())
    {
        if (!value["Tokenizer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogFullTextInfo.Tokenizer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenizer = string(value["Tokenizer"].GetString());
        m_tokenizerHasBeenSet = true;
    }

    if (value.HasMember("ContainZH") && !value["ContainZH"].IsNull())
    {
        if (!value["ContainZH"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogFullTextInfo.ContainZH` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_containZH = value["ContainZH"].GetBool();
        m_containZHHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogFullTextInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_caseSensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseSensitive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_caseSensitive, allocator);
    }

    if (m_tokenizerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tokenizer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenizer.c_str(), allocator).Move(), allocator);
    }

    if (m_containZHHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainZH";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containZH, allocator);
    }

}


bool LogFullTextInfo::GetCaseSensitive() const
{
    return m_caseSensitive;
}

void LogFullTextInfo::SetCaseSensitive(const bool& _caseSensitive)
{
    m_caseSensitive = _caseSensitive;
    m_caseSensitiveHasBeenSet = true;
}

bool LogFullTextInfo::CaseSensitiveHasBeenSet() const
{
    return m_caseSensitiveHasBeenSet;
}

string LogFullTextInfo::GetTokenizer() const
{
    return m_tokenizer;
}

void LogFullTextInfo::SetTokenizer(const string& _tokenizer)
{
    m_tokenizer = _tokenizer;
    m_tokenizerHasBeenSet = true;
}

bool LogFullTextInfo::TokenizerHasBeenSet() const
{
    return m_tokenizerHasBeenSet;
}

bool LogFullTextInfo::GetContainZH() const
{
    return m_containZH;
}

void LogFullTextInfo::SetContainZH(const bool& _containZH)
{
    m_containZH = _containZH;
    m_containZHHasBeenSet = true;
}

bool LogFullTextInfo::ContainZHHasBeenSet() const
{
    return m_containZHHasBeenSet;
}

