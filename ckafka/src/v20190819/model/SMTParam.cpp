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

#include <tencentcloud/ckafka/v20190819/model/SMTParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

SMTParam::SMTParam() :
    m_keyHasBeenSet(false),
    m_operateHasBeenSet(false),
    m_schemeTypeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_valueOperateHasBeenSet(false),
    m_originalValueHasBeenSet(false),
    m_valueOperatesHasBeenSet(false)
{
}

CoreInternalOutcome SMTParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMTParam.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Operate") && !value["Operate"].IsNull())
    {
        if (!value["Operate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMTParam.Operate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operate = string(value["Operate"].GetString());
        m_operateHasBeenSet = true;
    }

    if (value.HasMember("SchemeType") && !value["SchemeType"].IsNull())
    {
        if (!value["SchemeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMTParam.SchemeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemeType = string(value["SchemeType"].GetString());
        m_schemeTypeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMTParam.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("ValueOperate") && !value["ValueOperate"].IsNull())
    {
        if (!value["ValueOperate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SMTParam.ValueOperate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_valueOperate.Deserialize(value["ValueOperate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_valueOperateHasBeenSet = true;
    }

    if (value.HasMember("OriginalValue") && !value["OriginalValue"].IsNull())
    {
        if (!value["OriginalValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SMTParam.OriginalValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalValue = string(value["OriginalValue"].GetString());
        m_originalValueHasBeenSet = true;
    }

    if (value.HasMember("ValueOperates") && !value["ValueOperates"].IsNull())
    {
        if (!value["ValueOperates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SMTParam.ValueOperates` is not array type"));

        const rapidjson::Value &tmpValue = value["ValueOperates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ValueParam item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_valueOperates.push_back(item);
        }
        m_valueOperatesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SMTParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_operateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operate.c_str(), allocator).Move(), allocator);
    }

    if (m_schemeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemeType.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_valueOperateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueOperate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_valueOperate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originalValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalValue.c_str(), allocator).Move(), allocator);
    }

    if (m_valueOperatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueOperates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_valueOperates.begin(); itr != m_valueOperates.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SMTParam::GetKey() const
{
    return m_key;
}

void SMTParam::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool SMTParam::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string SMTParam::GetOperate() const
{
    return m_operate;
}

void SMTParam::SetOperate(const string& _operate)
{
    m_operate = _operate;
    m_operateHasBeenSet = true;
}

bool SMTParam::OperateHasBeenSet() const
{
    return m_operateHasBeenSet;
}

string SMTParam::GetSchemeType() const
{
    return m_schemeType;
}

void SMTParam::SetSchemeType(const string& _schemeType)
{
    m_schemeType = _schemeType;
    m_schemeTypeHasBeenSet = true;
}

bool SMTParam::SchemeTypeHasBeenSet() const
{
    return m_schemeTypeHasBeenSet;
}

string SMTParam::GetValue() const
{
    return m_value;
}

void SMTParam::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool SMTParam::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

ValueParam SMTParam::GetValueOperate() const
{
    return m_valueOperate;
}

void SMTParam::SetValueOperate(const ValueParam& _valueOperate)
{
    m_valueOperate = _valueOperate;
    m_valueOperateHasBeenSet = true;
}

bool SMTParam::ValueOperateHasBeenSet() const
{
    return m_valueOperateHasBeenSet;
}

string SMTParam::GetOriginalValue() const
{
    return m_originalValue;
}

void SMTParam::SetOriginalValue(const string& _originalValue)
{
    m_originalValue = _originalValue;
    m_originalValueHasBeenSet = true;
}

bool SMTParam::OriginalValueHasBeenSet() const
{
    return m_originalValueHasBeenSet;
}

vector<ValueParam> SMTParam::GetValueOperates() const
{
    return m_valueOperates;
}

void SMTParam::SetValueOperates(const vector<ValueParam>& _valueOperates)
{
    m_valueOperates = _valueOperates;
    m_valueOperatesHasBeenSet = true;
}

bool SMTParam::ValueOperatesHasBeenSet() const
{
    return m_valueOperatesHasBeenSet;
}

