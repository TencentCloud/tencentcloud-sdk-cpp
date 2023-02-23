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

#include <tencentcloud/ckafka/v20190819/model/ValueParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ValueParam::ValueParam() :
    m_typeHasBeenSet(false),
    m_replaceHasBeenSet(false),
    m_substrHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_regexReplaceHasBeenSet(false),
    m_splitHasBeenSet(false),
    m_kVHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_jsonPathReplaceHasBeenSet(false),
    m_urlDecodeHasBeenSet(false),
    m_lowercaseHasBeenSet(false)
{
}

CoreInternalOutcome ValueParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueParam.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Replace") && !value["Replace"].IsNull())
    {
        if (!value["Replace"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueParam.Replace` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_replace.Deserialize(value["Replace"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_replaceHasBeenSet = true;
    }

    if (value.HasMember("Substr") && !value["Substr"].IsNull())
    {
        if (!value["Substr"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueParam.Substr` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_substr.Deserialize(value["Substr"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_substrHasBeenSet = true;
    }

    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueParam.Date` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_date.Deserialize(value["Date"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dateHasBeenSet = true;
    }

    if (value.HasMember("RegexReplace") && !value["RegexReplace"].IsNull())
    {
        if (!value["RegexReplace"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueParam.RegexReplace` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regexReplace.Deserialize(value["RegexReplace"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regexReplaceHasBeenSet = true;
    }

    if (value.HasMember("Split") && !value["Split"].IsNull())
    {
        if (!value["Split"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueParam.Split` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_split.Deserialize(value["Split"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_splitHasBeenSet = true;
    }

    if (value.HasMember("KV") && !value["KV"].IsNull())
    {
        if (!value["KV"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueParam.KV` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kV.Deserialize(value["KV"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kVHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ValueParam.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("JsonPathReplace") && !value["JsonPathReplace"].IsNull())
    {
        if (!value["JsonPathReplace"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueParam.JsonPathReplace` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_jsonPathReplace.Deserialize(value["JsonPathReplace"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_jsonPathReplaceHasBeenSet = true;
    }

    if (value.HasMember("UrlDecode") && !value["UrlDecode"].IsNull())
    {
        if (!value["UrlDecode"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueParam.UrlDecode` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_urlDecode.Deserialize(value["UrlDecode"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_urlDecodeHasBeenSet = true;
    }

    if (value.HasMember("Lowercase") && !value["Lowercase"].IsNull())
    {
        if (!value["Lowercase"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ValueParam.Lowercase` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lowercase.Deserialize(value["Lowercase"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lowercaseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ValueParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_replaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_replace.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_substrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Substr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_substr.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_date.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_regexReplaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegexReplace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regexReplace.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_splitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Split";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_split.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_kVHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KV";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kV.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_jsonPathReplaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsonPathReplace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_jsonPathReplace.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_urlDecodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlDecode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_urlDecode.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_lowercaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lowercase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lowercase.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ValueParam::GetType() const
{
    return m_type;
}

void ValueParam::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ValueParam::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

ReplaceParam ValueParam::GetReplace() const
{
    return m_replace;
}

void ValueParam::SetReplace(const ReplaceParam& _replace)
{
    m_replace = _replace;
    m_replaceHasBeenSet = true;
}

bool ValueParam::ReplaceHasBeenSet() const
{
    return m_replaceHasBeenSet;
}

SubstrParam ValueParam::GetSubstr() const
{
    return m_substr;
}

void ValueParam::SetSubstr(const SubstrParam& _substr)
{
    m_substr = _substr;
    m_substrHasBeenSet = true;
}

bool ValueParam::SubstrHasBeenSet() const
{
    return m_substrHasBeenSet;
}

DateParam ValueParam::GetDate() const
{
    return m_date;
}

void ValueParam::SetDate(const DateParam& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool ValueParam::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

RegexReplaceParam ValueParam::GetRegexReplace() const
{
    return m_regexReplace;
}

void ValueParam::SetRegexReplace(const RegexReplaceParam& _regexReplace)
{
    m_regexReplace = _regexReplace;
    m_regexReplaceHasBeenSet = true;
}

bool ValueParam::RegexReplaceHasBeenSet() const
{
    return m_regexReplaceHasBeenSet;
}

SplitParam ValueParam::GetSplit() const
{
    return m_split;
}

void ValueParam::SetSplit(const SplitParam& _split)
{
    m_split = _split;
    m_splitHasBeenSet = true;
}

bool ValueParam::SplitHasBeenSet() const
{
    return m_splitHasBeenSet;
}

KVParam ValueParam::GetKV() const
{
    return m_kV;
}

void ValueParam::SetKV(const KVParam& _kV)
{
    m_kV = _kV;
    m_kVHasBeenSet = true;
}

bool ValueParam::KVHasBeenSet() const
{
    return m_kVHasBeenSet;
}

string ValueParam::GetResult() const
{
    return m_result;
}

void ValueParam::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ValueParam::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

JsonPathReplaceParam ValueParam::GetJsonPathReplace() const
{
    return m_jsonPathReplace;
}

void ValueParam::SetJsonPathReplace(const JsonPathReplaceParam& _jsonPathReplace)
{
    m_jsonPathReplace = _jsonPathReplace;
    m_jsonPathReplaceHasBeenSet = true;
}

bool ValueParam::JsonPathReplaceHasBeenSet() const
{
    return m_jsonPathReplaceHasBeenSet;
}

UrlDecodeParam ValueParam::GetUrlDecode() const
{
    return m_urlDecode;
}

void ValueParam::SetUrlDecode(const UrlDecodeParam& _urlDecode)
{
    m_urlDecode = _urlDecode;
    m_urlDecodeHasBeenSet = true;
}

bool ValueParam::UrlDecodeHasBeenSet() const
{
    return m_urlDecodeHasBeenSet;
}

LowercaseParam ValueParam::GetLowercase() const
{
    return m_lowercase;
}

void ValueParam::SetLowercase(const LowercaseParam& _lowercase)
{
    m_lowercase = _lowercase;
    m_lowercaseHasBeenSet = true;
}

bool ValueParam::LowercaseHasBeenSet() const
{
    return m_lowercaseHasBeenSet;
}

