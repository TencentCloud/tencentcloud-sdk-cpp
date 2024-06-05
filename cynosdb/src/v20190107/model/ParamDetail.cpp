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

#include <tencentcloud/cynosdb/v20190107/model/ParamDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ParamDetail::ParamDetail() :
    m_paramNameHasBeenSet(false),
    m_paramTypeHasBeenSet(false),
    m_supportFuncHasBeenSet(false),
    m_defaultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_currentValueHasBeenSet(false),
    m_needRebootHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_minHasBeenSet(false),
    m_enumValueHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_matchTypeHasBeenSet(false),
    m_matchValueHasBeenSet(false),
    m_isFuncHasBeenSet(false),
    m_funcHasBeenSet(false),
    m_modifiableInfoHasBeenSet(false),
    m_funcPatternHasBeenSet(false)
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

    if (value.HasMember("ParamType") && !value["ParamType"].IsNull())
    {
        if (!value["ParamType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.ParamType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramType = string(value["ParamType"].GetString());
        m_paramTypeHasBeenSet = true;
    }

    if (value.HasMember("SupportFunc") && !value["SupportFunc"].IsNull())
    {
        if (!value["SupportFunc"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.SupportFunc` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_supportFunc = value["SupportFunc"].GetBool();
        m_supportFuncHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.Default` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_default = string(value["Default"].GetString());
        m_defaultHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CurrentValue") && !value["CurrentValue"].IsNull())
    {
        if (!value["CurrentValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.CurrentValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentValue = string(value["CurrentValue"].GetString());
        m_currentValueHasBeenSet = true;
    }

    if (value.HasMember("NeedReboot") && !value["NeedReboot"].IsNull())
    {
        if (!value["NeedReboot"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.NeedReboot` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needReboot = value["NeedReboot"].GetInt64();
        m_needRebootHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.Max` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_max = string(value["Max"].GetString());
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.Min` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_min = string(value["Min"].GetString());
        m_minHasBeenSet = true;
    }

    if (value.HasMember("EnumValue") && !value["EnumValue"].IsNull())
    {
        if (!value["EnumValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParamDetail.EnumValue` is not array type"));

        const rapidjson::Value &tmpValue = value["EnumValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enumValue.push_back((*itr).GetString());
        }
        m_enumValueHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.IsGlobal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetInt64();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("MatchType") && !value["MatchType"].IsNull())
    {
        if (!value["MatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.MatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType = string(value["MatchType"].GetString());
        m_matchTypeHasBeenSet = true;
    }

    if (value.HasMember("MatchValue") && !value["MatchValue"].IsNull())
    {
        if (!value["MatchValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.MatchValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchValue = string(value["MatchValue"].GetString());
        m_matchValueHasBeenSet = true;
    }

    if (value.HasMember("IsFunc") && !value["IsFunc"].IsNull())
    {
        if (!value["IsFunc"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.IsFunc` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFunc = value["IsFunc"].GetBool();
        m_isFuncHasBeenSet = true;
    }

    if (value.HasMember("Func") && !value["Func"].IsNull())
    {
        if (!value["Func"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.Func` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_func = string(value["Func"].GetString());
        m_funcHasBeenSet = true;
    }

    if (value.HasMember("ModifiableInfo") && !value["ModifiableInfo"].IsNull())
    {
        if (!value["ModifiableInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.ModifiableInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifiableInfo.Deserialize(value["ModifiableInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifiableInfoHasBeenSet = true;
    }

    if (value.HasMember("FuncPattern") && !value["FuncPattern"].IsNull())
    {
        if (!value["FuncPattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamDetail.FuncPattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_funcPattern = string(value["FuncPattern"].GetString());
        m_funcPatternHasBeenSet = true;
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

    if (m_paramTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramType.c_str(), allocator).Move(), allocator);
    }

    if (m_supportFuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportFunc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportFunc, allocator);
    }

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_default.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_currentValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentValue.c_str(), allocator).Move(), allocator);
    }

    if (m_needRebootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedReboot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needReboot, allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_max.c_str(), allocator).Move(), allocator);
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_min.c_str(), allocator).Move(), allocator);
    }

    if (m_enumValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnumValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enumValue.begin(); itr != m_enumValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_matchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchType.c_str(), allocator).Move(), allocator);
    }

    if (m_matchValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchValue.c_str(), allocator).Move(), allocator);
    }

    if (m_isFuncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFunc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFunc, allocator);
    }

    if (m_funcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Func";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_func.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiableInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiableInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifiableInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_funcPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuncPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_funcPattern.c_str(), allocator).Move(), allocator);
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

string ParamDetail::GetParamType() const
{
    return m_paramType;
}

void ParamDetail::SetParamType(const string& _paramType)
{
    m_paramType = _paramType;
    m_paramTypeHasBeenSet = true;
}

bool ParamDetail::ParamTypeHasBeenSet() const
{
    return m_paramTypeHasBeenSet;
}

bool ParamDetail::GetSupportFunc() const
{
    return m_supportFunc;
}

void ParamDetail::SetSupportFunc(const bool& _supportFunc)
{
    m_supportFunc = _supportFunc;
    m_supportFuncHasBeenSet = true;
}

bool ParamDetail::SupportFuncHasBeenSet() const
{
    return m_supportFuncHasBeenSet;
}

string ParamDetail::GetDefault() const
{
    return m_default;
}

void ParamDetail::SetDefault(const string& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool ParamDetail::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

string ParamDetail::GetDescription() const
{
    return m_description;
}

void ParamDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ParamDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ParamDetail::GetCurrentValue() const
{
    return m_currentValue;
}

void ParamDetail::SetCurrentValue(const string& _currentValue)
{
    m_currentValue = _currentValue;
    m_currentValueHasBeenSet = true;
}

bool ParamDetail::CurrentValueHasBeenSet() const
{
    return m_currentValueHasBeenSet;
}

int64_t ParamDetail::GetNeedReboot() const
{
    return m_needReboot;
}

void ParamDetail::SetNeedReboot(const int64_t& _needReboot)
{
    m_needReboot = _needReboot;
    m_needRebootHasBeenSet = true;
}

bool ParamDetail::NeedRebootHasBeenSet() const
{
    return m_needRebootHasBeenSet;
}

string ParamDetail::GetMax() const
{
    return m_max;
}

void ParamDetail::SetMax(const string& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool ParamDetail::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

string ParamDetail::GetMin() const
{
    return m_min;
}

void ParamDetail::SetMin(const string& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool ParamDetail::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

vector<string> ParamDetail::GetEnumValue() const
{
    return m_enumValue;
}

void ParamDetail::SetEnumValue(const vector<string>& _enumValue)
{
    m_enumValue = _enumValue;
    m_enumValueHasBeenSet = true;
}

bool ParamDetail::EnumValueHasBeenSet() const
{
    return m_enumValueHasBeenSet;
}

int64_t ParamDetail::GetIsGlobal() const
{
    return m_isGlobal;
}

void ParamDetail::SetIsGlobal(const int64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool ParamDetail::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

string ParamDetail::GetMatchType() const
{
    return m_matchType;
}

void ParamDetail::SetMatchType(const string& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool ParamDetail::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}

string ParamDetail::GetMatchValue() const
{
    return m_matchValue;
}

void ParamDetail::SetMatchValue(const string& _matchValue)
{
    m_matchValue = _matchValue;
    m_matchValueHasBeenSet = true;
}

bool ParamDetail::MatchValueHasBeenSet() const
{
    return m_matchValueHasBeenSet;
}

bool ParamDetail::GetIsFunc() const
{
    return m_isFunc;
}

void ParamDetail::SetIsFunc(const bool& _isFunc)
{
    m_isFunc = _isFunc;
    m_isFuncHasBeenSet = true;
}

bool ParamDetail::IsFuncHasBeenSet() const
{
    return m_isFuncHasBeenSet;
}

string ParamDetail::GetFunc() const
{
    return m_func;
}

void ParamDetail::SetFunc(const string& _func)
{
    m_func = _func;
    m_funcHasBeenSet = true;
}

bool ParamDetail::FuncHasBeenSet() const
{
    return m_funcHasBeenSet;
}

ModifiableInfo ParamDetail::GetModifiableInfo() const
{
    return m_modifiableInfo;
}

void ParamDetail::SetModifiableInfo(const ModifiableInfo& _modifiableInfo)
{
    m_modifiableInfo = _modifiableInfo;
    m_modifiableInfoHasBeenSet = true;
}

bool ParamDetail::ModifiableInfoHasBeenSet() const
{
    return m_modifiableInfoHasBeenSet;
}

string ParamDetail::GetFuncPattern() const
{
    return m_funcPattern;
}

void ParamDetail::SetFuncPattern(const string& _funcPattern)
{
    m_funcPattern = _funcPattern;
    m_funcPatternHasBeenSet = true;
}

bool ParamDetail::FuncPatternHasBeenSet() const
{
    return m_funcPatternHasBeenSet;
}

