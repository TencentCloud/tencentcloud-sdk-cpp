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

#include <tencentcloud/dcdb/v20180411/model/ParamDesc.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace rapidjson;
using namespace std;

ParamDesc::ParamDesc() :
    m_paramHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_setValueHasBeenSet(false),
    m_defaultHasBeenSet(false),
    m_constraintHasBeenSet(false),
    m_haveSetValueHasBeenSet(false)
{
}

CoreInternalOutcome ParamDesc::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Param") && !value["Param"].IsNull())
    {
        if (!value["Param"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParamDesc.Param` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_param = string(value["Param"].GetString());
        m_paramHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParamDesc.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("SetValue") && !value["SetValue"].IsNull())
    {
        if (!value["SetValue"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParamDesc.SetValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_setValue = string(value["SetValue"].GetString());
        m_setValueHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsString())
        {
            return CoreInternalOutcome(Error("response `ParamDesc.Default` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_default = string(value["Default"].GetString());
        m_defaultHasBeenSet = true;
    }

    if (value.HasMember("Constraint") && !value["Constraint"].IsNull())
    {
        if (!value["Constraint"].IsObject())
        {
            return CoreInternalOutcome(Error("response `ParamDesc.Constraint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_constraint.Deserialize(value["Constraint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_constraintHasBeenSet = true;
    }

    if (value.HasMember("HaveSetValue") && !value["HaveSetValue"].IsNull())
    {
        if (!value["HaveSetValue"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ParamDesc.HaveSetValue` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_haveSetValue = value["HaveSetValue"].GetBool();
        m_haveSetValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamDesc::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_paramHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Param";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_param.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_setValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SetValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_setValue.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_default.c_str(), allocator).Move(), allocator);
    }

    if (m_constraintHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Constraint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_constraint.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_haveSetValueHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HaveSetValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_haveSetValue, allocator);
    }

}


string ParamDesc::GetParam() const
{
    return m_param;
}

void ParamDesc::SetParam(const string& _param)
{
    m_param = _param;
    m_paramHasBeenSet = true;
}

bool ParamDesc::ParamHasBeenSet() const
{
    return m_paramHasBeenSet;
}

string ParamDesc::GetValue() const
{
    return m_value;
}

void ParamDesc::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ParamDesc::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string ParamDesc::GetSetValue() const
{
    return m_setValue;
}

void ParamDesc::SetSetValue(const string& _setValue)
{
    m_setValue = _setValue;
    m_setValueHasBeenSet = true;
}

bool ParamDesc::SetValueHasBeenSet() const
{
    return m_setValueHasBeenSet;
}

string ParamDesc::GetDefault() const
{
    return m_default;
}

void ParamDesc::SetDefault(const string& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool ParamDesc::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

ParamConstraint ParamDesc::GetConstraint() const
{
    return m_constraint;
}

void ParamDesc::SetConstraint(const ParamConstraint& _constraint)
{
    m_constraint = _constraint;
    m_constraintHasBeenSet = true;
}

bool ParamDesc::ConstraintHasBeenSet() const
{
    return m_constraintHasBeenSet;
}

bool ParamDesc::GetHaveSetValue() const
{
    return m_haveSetValue;
}

void ParamDesc::SetHaveSetValue(const bool& _haveSetValue)
{
    m_haveSetValue = _haveSetValue;
    m_haveSetValueHasBeenSet = true;
}

bool ParamDesc::HaveSetValueHasBeenSet() const
{
    return m_haveSetValueHasBeenSet;
}

