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

#include <tencentcloud/cls/v20201016/model/ValueInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ValueInfo::ValueInfo() :
    m_typeHasBeenSet(false),
    m_tokenizerHasBeenSet(false),
    m_sqlFlagHasBeenSet(false),
    m_containZHHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_openIndexForChildOnlyHasBeenSet(false),
    m_childNodeHasBeenSet(false)
{
}

CoreInternalOutcome ValueInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Tokenizer") && !value["Tokenizer"].IsNull())
    {
        if (!value["Tokenizer"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueInfo.Tokenizer` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenizer = string(value["Tokenizer"].GetString());
        m_tokenizerHasBeenSet = true;
    }

    if (value.HasMember("SqlFlag") && !value["SqlFlag"].IsNull())
    {
        if (!value["SqlFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ValueInfo.SqlFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sqlFlag = value["SqlFlag"].GetBool();
        m_sqlFlagHasBeenSet = true;
    }

    if (value.HasMember("ContainZH") && !value["ContainZH"].IsNull())
    {
        if (!value["ContainZH"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ValueInfo.ContainZH` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_containZH = value["ContainZH"].GetBool();
        m_containZHHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("OpenIndexForChildOnly") && !value["OpenIndexForChildOnly"].IsNull())
    {
        if (!value["OpenIndexForChildOnly"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ValueInfo.OpenIndexForChildOnly` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_openIndexForChildOnly = value["OpenIndexForChildOnly"].GetBool();
        m_openIndexForChildOnlyHasBeenSet = true;
    }

    if (value.HasMember("ChildNode") && !value["ChildNode"].IsNull())
    {
        if (!value["ChildNode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ValueInfo.ChildNode` is not array type"));

        const rapidjson::Value &tmpValue = value["ChildNode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_childNode.push_back(item);
        }
        m_childNodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ValueInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_openIndexForChildOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenIndexForChildOnly";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openIndexForChildOnly, allocator);
    }

    if (m_childNodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildNode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_childNode.begin(); itr != m_childNode.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ValueInfo::GetType() const
{
    return m_type;
}

void ValueInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ValueInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ValueInfo::GetTokenizer() const
{
    return m_tokenizer;
}

void ValueInfo::SetTokenizer(const string& _tokenizer)
{
    m_tokenizer = _tokenizer;
    m_tokenizerHasBeenSet = true;
}

bool ValueInfo::TokenizerHasBeenSet() const
{
    return m_tokenizerHasBeenSet;
}

bool ValueInfo::GetSqlFlag() const
{
    return m_sqlFlag;
}

void ValueInfo::SetSqlFlag(const bool& _sqlFlag)
{
    m_sqlFlag = _sqlFlag;
    m_sqlFlagHasBeenSet = true;
}

bool ValueInfo::SqlFlagHasBeenSet() const
{
    return m_sqlFlagHasBeenSet;
}

bool ValueInfo::GetContainZH() const
{
    return m_containZH;
}

void ValueInfo::SetContainZH(const bool& _containZH)
{
    m_containZH = _containZH;
    m_containZHHasBeenSet = true;
}

bool ValueInfo::ContainZHHasBeenSet() const
{
    return m_containZHHasBeenSet;
}

string ValueInfo::GetAlias() const
{
    return m_alias;
}

void ValueInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool ValueInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

bool ValueInfo::GetOpenIndexForChildOnly() const
{
    return m_openIndexForChildOnly;
}

void ValueInfo::SetOpenIndexForChildOnly(const bool& _openIndexForChildOnly)
{
    m_openIndexForChildOnly = _openIndexForChildOnly;
    m_openIndexForChildOnlyHasBeenSet = true;
}

bool ValueInfo::OpenIndexForChildOnlyHasBeenSet() const
{
    return m_openIndexForChildOnlyHasBeenSet;
}

vector<KeyValueInfo> ValueInfo::GetChildNode() const
{
    return m_childNode;
}

void ValueInfo::SetChildNode(const vector<KeyValueInfo>& _childNode)
{
    m_childNode = _childNode;
    m_childNodeHasBeenSet = true;
}

bool ValueInfo::ChildNodeHasBeenSet() const
{
    return m_childNodeHasBeenSet;
}

