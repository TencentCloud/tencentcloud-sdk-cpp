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

#include <tencentcloud/waf/v20180125/model/InOutputUCBRuleEntry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

InOutputUCBRuleEntry::InOutputUCBRuleEntry() :
    m_keyHasBeenSet(false),
    m_opHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_opOpHasBeenSet(false),
    m_opArgHasBeenSet(false),
    m_opValueHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_areasHasBeenSet(false),
    m_langHasBeenSet(false),
    m_paramCompareListHasBeenSet(false)
{
}

CoreInternalOutcome InOutputUCBRuleEntry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputUCBRuleEntry.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Op") && !value["Op"].IsNull())
    {
        if (!value["Op"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputUCBRuleEntry.Op` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_op = string(value["Op"].GetString());
        m_opHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputUCBRuleEntry.Value` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_value.Deserialize(value["Value"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_valueHasBeenSet = true;
    }

    if (value.HasMember("OpOp") && !value["OpOp"].IsNull())
    {
        if (!value["OpOp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputUCBRuleEntry.OpOp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_opOp = string(value["OpOp"].GetString());
        m_opOpHasBeenSet = true;
    }

    if (value.HasMember("OpArg") && !value["OpArg"].IsNull())
    {
        if (!value["OpArg"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InOutputUCBRuleEntry.OpArg` is not array type"));

        const rapidjson::Value &tmpValue = value["OpArg"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_opArg.push_back((*itr).GetString());
        }
        m_opArgHasBeenSet = true;
    }

    if (value.HasMember("OpValue") && !value["OpValue"].IsNull())
    {
        if (!value["OpValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputUCBRuleEntry.OpValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_opValue = value["OpValue"].GetDouble();
        m_opValueHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputUCBRuleEntry.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Areas") && !value["Areas"].IsNull())
    {
        if (!value["Areas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InOutputUCBRuleEntry.Areas` is not array type"));

        const rapidjson::Value &tmpValue = value["Areas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Area item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_areas.push_back(item);
        }
        m_areasHasBeenSet = true;
    }

    if (value.HasMember("Lang") && !value["Lang"].IsNull())
    {
        if (!value["Lang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InOutputUCBRuleEntry.Lang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lang = string(value["Lang"].GetString());
        m_langHasBeenSet = true;
    }

    if (value.HasMember("ParamCompareList") && !value["ParamCompareList"].IsNull())
    {
        if (!value["ParamCompareList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InOutputUCBRuleEntry.ParamCompareList` is not array type"));

        const rapidjson::Value &tmpValue = value["ParamCompareList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ParamCompareList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paramCompareList.push_back(item);
        }
        m_paramCompareListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InOutputUCBRuleEntry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_opHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Op";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_op.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_value.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_opOpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpOp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_opOp.c_str(), allocator).Move(), allocator);
    }

    if (m_opArgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpArg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_opArg.begin(); itr != m_opArg.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_opValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opValue, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_areasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Areas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_areas.begin(); itr != m_areas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_langHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Lang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lang.c_str(), allocator).Move(), allocator);
    }

    if (m_paramCompareListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamCompareList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paramCompareList.begin(); itr != m_paramCompareList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InOutputUCBRuleEntry::GetKey() const
{
    return m_key;
}

void InOutputUCBRuleEntry::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool InOutputUCBRuleEntry::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string InOutputUCBRuleEntry::GetOp() const
{
    return m_op;
}

void InOutputUCBRuleEntry::SetOp(const string& _op)
{
    m_op = _op;
    m_opHasBeenSet = true;
}

bool InOutputUCBRuleEntry::OpHasBeenSet() const
{
    return m_opHasBeenSet;
}

UCBEntryValue InOutputUCBRuleEntry::GetValue() const
{
    return m_value;
}

void InOutputUCBRuleEntry::SetValue(const UCBEntryValue& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool InOutputUCBRuleEntry::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string InOutputUCBRuleEntry::GetOpOp() const
{
    return m_opOp;
}

void InOutputUCBRuleEntry::SetOpOp(const string& _opOp)
{
    m_opOp = _opOp;
    m_opOpHasBeenSet = true;
}

bool InOutputUCBRuleEntry::OpOpHasBeenSet() const
{
    return m_opOpHasBeenSet;
}

vector<string> InOutputUCBRuleEntry::GetOpArg() const
{
    return m_opArg;
}

void InOutputUCBRuleEntry::SetOpArg(const vector<string>& _opArg)
{
    m_opArg = _opArg;
    m_opArgHasBeenSet = true;
}

bool InOutputUCBRuleEntry::OpArgHasBeenSet() const
{
    return m_opArgHasBeenSet;
}

double InOutputUCBRuleEntry::GetOpValue() const
{
    return m_opValue;
}

void InOutputUCBRuleEntry::SetOpValue(const double& _opValue)
{
    m_opValue = _opValue;
    m_opValueHasBeenSet = true;
}

bool InOutputUCBRuleEntry::OpValueHasBeenSet() const
{
    return m_opValueHasBeenSet;
}

string InOutputUCBRuleEntry::GetName() const
{
    return m_name;
}

void InOutputUCBRuleEntry::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool InOutputUCBRuleEntry::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<Area> InOutputUCBRuleEntry::GetAreas() const
{
    return m_areas;
}

void InOutputUCBRuleEntry::SetAreas(const vector<Area>& _areas)
{
    m_areas = _areas;
    m_areasHasBeenSet = true;
}

bool InOutputUCBRuleEntry::AreasHasBeenSet() const
{
    return m_areasHasBeenSet;
}

string InOutputUCBRuleEntry::GetLang() const
{
    return m_lang;
}

void InOutputUCBRuleEntry::SetLang(const string& _lang)
{
    m_lang = _lang;
    m_langHasBeenSet = true;
}

bool InOutputUCBRuleEntry::LangHasBeenSet() const
{
    return m_langHasBeenSet;
}

vector<ParamCompareList> InOutputUCBRuleEntry::GetParamCompareList() const
{
    return m_paramCompareList;
}

void InOutputUCBRuleEntry::SetParamCompareList(const vector<ParamCompareList>& _paramCompareList)
{
    m_paramCompareList = _paramCompareList;
    m_paramCompareListHasBeenSet = true;
}

bool InOutputUCBRuleEntry::ParamCompareListHasBeenSet() const
{
    return m_paramCompareListHasBeenSet;
}

