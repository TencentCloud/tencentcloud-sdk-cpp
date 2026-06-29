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

#include <tencentcloud/csip/v20221121/model/LogValueInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LogValueInfo::LogValueInfo() :
    m_typeHasBeenSet(false),
    m_tokenizerHasBeenSet(false),
    m_sqlFlagHasBeenSet(false),
    m_containZHHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
}

CoreInternalOutcome LogValueInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogValueInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Tokenizer") && !value["Tokenizer"].IsNull())
    {
        if (!value["Tokenizer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogValueInfo.Tokenizer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenizer = string(value["Tokenizer"].GetString());
        m_tokenizerHasBeenSet = true;
    }

    if (value.HasMember("SqlFlag") && !value["SqlFlag"].IsNull())
    {
        if (!value["SqlFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogValueInfo.SqlFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sqlFlag = value["SqlFlag"].GetBool();
        m_sqlFlagHasBeenSet = true;
    }

    if (value.HasMember("ContainZH") && !value["ContainZH"].IsNull())
    {
        if (!value["ContainZH"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LogValueInfo.ContainZH` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_containZH = value["ContainZH"].GetBool();
        m_containZHHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogValueInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogValueInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenizerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tokenizer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenizer.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sqlFlag, allocator);
    }

    if (m_containZHHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainZH";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containZH, allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

}


string LogValueInfo::GetType() const
{
    return m_type;
}

void LogValueInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool LogValueInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string LogValueInfo::GetTokenizer() const
{
    return m_tokenizer;
}

void LogValueInfo::SetTokenizer(const string& _tokenizer)
{
    m_tokenizer = _tokenizer;
    m_tokenizerHasBeenSet = true;
}

bool LogValueInfo::TokenizerHasBeenSet() const
{
    return m_tokenizerHasBeenSet;
}

bool LogValueInfo::GetSqlFlag() const
{
    return m_sqlFlag;
}

void LogValueInfo::SetSqlFlag(const bool& _sqlFlag)
{
    m_sqlFlag = _sqlFlag;
    m_sqlFlagHasBeenSet = true;
}

bool LogValueInfo::SqlFlagHasBeenSet() const
{
    return m_sqlFlagHasBeenSet;
}

bool LogValueInfo::GetContainZH() const
{
    return m_containZH;
}

void LogValueInfo::SetContainZH(const bool& _containZH)
{
    m_containZH = _containZH;
    m_containZHHasBeenSet = true;
}

bool LogValueInfo::ContainZHHasBeenSet() const
{
    return m_containZHHasBeenSet;
}

string LogValueInfo::GetAlias() const
{
    return m_alias;
}

void LogValueInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool LogValueInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

