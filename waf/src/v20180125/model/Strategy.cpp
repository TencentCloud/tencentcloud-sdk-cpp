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

#include <tencentcloud/waf/v20180125/model/Strategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

Strategy::Strategy() :
    m_fieldHasBeenSet(false),
    m_compareFuncHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_argHasBeenSet(false),
    m_caseNotSensitiveHasBeenSet(false)
{
}

CoreInternalOutcome Strategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Field") && !value["Field"].IsNull())
    {
        if (!value["Field"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.Field` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_field = string(value["Field"].GetString());
        m_fieldHasBeenSet = true;
    }

    if (value.HasMember("CompareFunc") && !value["CompareFunc"].IsNull())
    {
        if (!value["CompareFunc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.CompareFunc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareFunc = string(value["CompareFunc"].GetString());
        m_compareFuncHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Arg") && !value["Arg"].IsNull())
    {
        if (!value["Arg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.Arg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_arg = string(value["Arg"].GetString());
        m_argHasBeenSet = true;
    }

    if (value.HasMember("CaseNotSensitive") && !value["CaseNotSensitive"].IsNull())
    {
        if (!value["CaseNotSensitive"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Strategy.CaseNotSensitive` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_caseNotSensitive = value["CaseNotSensitive"].GetUint64();
        m_caseNotSensitiveHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Strategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

    if (m_compareFuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareFunc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compareFunc.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_argHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Arg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_arg.c_str(), allocator).Move(), allocator);
    }

    if (m_caseNotSensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CaseNotSensitive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_caseNotSensitive, allocator);
    }

}


string Strategy::GetField() const
{
    return m_field;
}

void Strategy::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool Strategy::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

string Strategy::GetCompareFunc() const
{
    return m_compareFunc;
}

void Strategy::SetCompareFunc(const string& _compareFunc)
{
    m_compareFunc = _compareFunc;
    m_compareFuncHasBeenSet = true;
}

bool Strategy::CompareFuncHasBeenSet() const
{
    return m_compareFuncHasBeenSet;
}

string Strategy::GetContent() const
{
    return m_content;
}

void Strategy::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool Strategy::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string Strategy::GetArg() const
{
    return m_arg;
}

void Strategy::SetArg(const string& _arg)
{
    m_arg = _arg;
    m_argHasBeenSet = true;
}

bool Strategy::ArgHasBeenSet() const
{
    return m_argHasBeenSet;
}

uint64_t Strategy::GetCaseNotSensitive() const
{
    return m_caseNotSensitive;
}

void Strategy::SetCaseNotSensitive(const uint64_t& _caseNotSensitive)
{
    m_caseNotSensitive = _caseNotSensitive;
    m_caseNotSensitiveHasBeenSet = true;
}

bool Strategy::CaseNotSensitiveHasBeenSet() const
{
    return m_caseNotSensitiveHasBeenSet;
}

