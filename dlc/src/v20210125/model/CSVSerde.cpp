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

#include <tencentcloud/dlc/v20210125/model/CSVSerde.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CSVSerde::CSVSerde() :
    m_escapeHasBeenSet(false),
    m_quoteHasBeenSet(false),
    m_separatorHasBeenSet(false)
{
}

CoreInternalOutcome CSVSerde::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Escape") && !value["Escape"].IsNull())
    {
        if (!value["Escape"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSVSerde.Escape` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_escape = string(value["Escape"].GetString());
        m_escapeHasBeenSet = true;
    }

    if (value.HasMember("Quote") && !value["Quote"].IsNull())
    {
        if (!value["Quote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSVSerde.Quote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quote = string(value["Quote"].GetString());
        m_quoteHasBeenSet = true;
    }

    if (value.HasMember("Separator") && !value["Separator"].IsNull())
    {
        if (!value["Separator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSVSerde.Separator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_separator = string(value["Separator"].GetString());
        m_separatorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CSVSerde::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_escapeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Escape";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_escape.c_str(), allocator).Move(), allocator);
    }

    if (m_quoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quote.c_str(), allocator).Move(), allocator);
    }

    if (m_separatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Separator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_separator.c_str(), allocator).Move(), allocator);
    }

}


string CSVSerde::GetEscape() const
{
    return m_escape;
}

void CSVSerde::SetEscape(const string& _escape)
{
    m_escape = _escape;
    m_escapeHasBeenSet = true;
}

bool CSVSerde::EscapeHasBeenSet() const
{
    return m_escapeHasBeenSet;
}

string CSVSerde::GetQuote() const
{
    return m_quote;
}

void CSVSerde::SetQuote(const string& _quote)
{
    m_quote = _quote;
    m_quoteHasBeenSet = true;
}

bool CSVSerde::QuoteHasBeenSet() const
{
    return m_quoteHasBeenSet;
}

string CSVSerde::GetSeparator() const
{
    return m_separator;
}

void CSVSerde::SetSeparator(const string& _separator)
{
    m_separator = _separator;
    m_separatorHasBeenSet = true;
}

bool CSVSerde::SeparatorHasBeenSet() const
{
    return m_separatorHasBeenSet;
}

