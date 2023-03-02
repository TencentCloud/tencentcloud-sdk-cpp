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

#include <tencentcloud/mrs/v20200910/model/BloodPressureBlock.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

BloodPressureBlock::BloodPressureBlock() :
    m_nameHasBeenSet(false),
    m_srcHasBeenSet(false),
    m_normHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_normDiastolicHasBeenSet(false),
    m_normSystolicHasBeenSet(false)
{
}

CoreInternalOutcome BloodPressureBlock::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureBlock.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureBlock.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }

    if (value.HasMember("Norm") && !value["Norm"].IsNull())
    {
        if (!value["Norm"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureBlock.Norm` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_norm = string(value["Norm"].GetString());
        m_normHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureBlock.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureBlock.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("NormDiastolic") && !value["NormDiastolic"].IsNull())
    {
        if (!value["NormDiastolic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureBlock.NormDiastolic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_normDiastolic = string(value["NormDiastolic"].GetString());
        m_normDiastolicHasBeenSet = true;
    }

    if (value.HasMember("NormSystolic") && !value["NormSystolic"].IsNull())
    {
        if (!value["NormSystolic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BloodPressureBlock.NormSystolic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_normSystolic = string(value["NormSystolic"].GetString());
        m_normSystolicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BloodPressureBlock::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

    if (m_normHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Norm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_norm.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_normDiastolicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormDiastolic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_normDiastolic.c_str(), allocator).Move(), allocator);
    }

    if (m_normSystolicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormSystolic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_normSystolic.c_str(), allocator).Move(), allocator);
    }

}


string BloodPressureBlock::GetName() const
{
    return m_name;
}

void BloodPressureBlock::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BloodPressureBlock::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string BloodPressureBlock::GetSrc() const
{
    return m_src;
}

void BloodPressureBlock::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool BloodPressureBlock::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

string BloodPressureBlock::GetNorm() const
{
    return m_norm;
}

void BloodPressureBlock::SetNorm(const string& _norm)
{
    m_norm = _norm;
    m_normHasBeenSet = true;
}

bool BloodPressureBlock::NormHasBeenSet() const
{
    return m_normHasBeenSet;
}

string BloodPressureBlock::GetUnit() const
{
    return m_unit;
}

void BloodPressureBlock::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool BloodPressureBlock::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string BloodPressureBlock::GetValue() const
{
    return m_value;
}

void BloodPressureBlock::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool BloodPressureBlock::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string BloodPressureBlock::GetNormDiastolic() const
{
    return m_normDiastolic;
}

void BloodPressureBlock::SetNormDiastolic(const string& _normDiastolic)
{
    m_normDiastolic = _normDiastolic;
    m_normDiastolicHasBeenSet = true;
}

bool BloodPressureBlock::NormDiastolicHasBeenSet() const
{
    return m_normDiastolicHasBeenSet;
}

string BloodPressureBlock::GetNormSystolic() const
{
    return m_normSystolic;
}

void BloodPressureBlock::SetNormSystolic(const string& _normSystolic)
{
    m_normSystolic = _normSystolic;
    m_normSystolicHasBeenSet = true;
}

bool BloodPressureBlock::NormSystolicHasBeenSet() const
{
    return m_normSystolicHasBeenSet;
}

