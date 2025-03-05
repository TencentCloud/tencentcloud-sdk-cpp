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

#include <tencentcloud/cdwpg/v20201230/model/ParamDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

ParamDetail::ParamDetail() :
    m_paramNameHasBeenSet(false),
    m_defaultValueHasBeenSet(false),
    m_needRestartHasBeenSet(false),
    m_runningValueHasBeenSet(false),
    m_valueRangeHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_shortDescHasBeenSet(false),
    m_parameterNameHasBeenSet(false)
{
}

CoreInternalOutcome ParamDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ParamName") && !value["ParamName"].IsNull())
    {
        if (!value["ParamName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.ParamName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramName = string(value["ParamName"].GetString());
        m_paramNameHasBeenSet = true;
    }

    if (value.HasMember("DefaultValue") && !value["DefaultValue"].IsNull())
    {
        if (!value["DefaultValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.DefaultValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultValue = string(value["DefaultValue"].GetString());
        m_defaultValueHasBeenSet = true;
    }

    if (value.HasMember("NeedRestart") && !value["NeedRestart"].IsNull())
    {
        if (!value["NeedRestart"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.NeedRestart` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needRestart = value["NeedRestart"].GetBool();
        m_needRestartHasBeenSet = true;
    }

    if (value.HasMember("RunningValue") && !value["RunningValue"].IsNull())
    {
        if (!value["RunningValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.RunningValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runningValue = string(value["RunningValue"].GetString());
        m_runningValueHasBeenSet = true;
    }

    if (value.HasMember("ValueRange") && !value["ValueRange"].IsNull())
    {
        if (!value["ValueRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.ValueRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_valueRange.Deserialize(value["ValueRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_valueRangeHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("ShortDesc") && !value["ShortDesc"].IsNull())
    {
        if (!value["ShortDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.ShortDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shortDesc = string(value["ShortDesc"].GetString());
        m_shortDescHasBeenSet = true;
    }

    if (value.HasMember("ParameterName") && !value["ParameterName"].IsNull())
    {
        if (!value["ParameterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.ParameterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameterName = string(value["ParameterName"].GetString());
        m_parameterNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_paramNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramName.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_needRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRestart";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needRestart, allocator);
    }

    if (m_runningValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runningValue.c_str(), allocator).Move(), allocator);
    }

    if (m_valueRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_valueRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_shortDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shortDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameterName.c_str(), allocator).Move(), allocator);
    }

}


string ParamDetail::GetParamName() const
{
    return m_paramName;
}

void ParamDetail::SetParamName(const string& _paramName)
{
    m_paramName = _paramName;
    m_paramNameHasBeenSet = true;
}

bool ParamDetail::ParamNameHasBeenSet() const
{
    return m_paramNameHasBeenSet;
}

string ParamDetail::GetDefaultValue() const
{
    return m_defaultValue;
}

void ParamDetail::SetDefaultValue(const string& _defaultValue)
{
    m_defaultValue = _defaultValue;
    m_defaultValueHasBeenSet = true;
}

bool ParamDetail::DefaultValueHasBeenSet() const
{
    return m_defaultValueHasBeenSet;
}

bool ParamDetail::GetNeedRestart() const
{
    return m_needRestart;
}

void ParamDetail::SetNeedRestart(const bool& _needRestart)
{
    m_needRestart = _needRestart;
    m_needRestartHasBeenSet = true;
}

bool ParamDetail::NeedRestartHasBeenSet() const
{
    return m_needRestartHasBeenSet;
}

string ParamDetail::GetRunningValue() const
{
    return m_runningValue;
}

void ParamDetail::SetRunningValue(const string& _runningValue)
{
    m_runningValue = _runningValue;
    m_runningValueHasBeenSet = true;
}

bool ParamDetail::RunningValueHasBeenSet() const
{
    return m_runningValueHasBeenSet;
}

ValueRange ParamDetail::GetValueRange() const
{
    return m_valueRange;
}

void ParamDetail::SetValueRange(const ValueRange& _valueRange)
{
    m_valueRange = _valueRange;
    m_valueRangeHasBeenSet = true;
}

bool ParamDetail::ValueRangeHasBeenSet() const
{
    return m_valueRangeHasBeenSet;
}

string ParamDetail::GetUnit() const
{
    return m_unit;
}

void ParamDetail::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool ParamDetail::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string ParamDetail::GetShortDesc() const
{
    return m_shortDesc;
}

void ParamDetail::SetShortDesc(const string& _shortDesc)
{
    m_shortDesc = _shortDesc;
    m_shortDescHasBeenSet = true;
}

bool ParamDetail::ShortDescHasBeenSet() const
{
    return m_shortDescHasBeenSet;
}

string ParamDetail::GetParameterName() const
{
    return m_parameterName;
}

void ParamDetail::SetParameterName(const string& _parameterName)
{
    m_parameterName = _parameterName;
    m_parameterNameHasBeenSet = true;
}

bool ParamDetail::ParameterNameHasBeenSet() const
{
    return m_parameterNameHasBeenSet;
}

