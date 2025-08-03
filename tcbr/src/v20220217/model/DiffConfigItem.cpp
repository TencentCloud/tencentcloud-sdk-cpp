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

#include <tencentcloud/tcbr/v20220217/model/DiffConfigItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

DiffConfigItem::DiffConfigItem() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_intValueHasBeenSet(false),
    m_boolValueHasBeenSet(false),
    m_floatValueHasBeenSet(false),
    m_arrayValueHasBeenSet(false),
    m_policyDetailsHasBeenSet(false),
    m_timerScaleHasBeenSet(false),
    m_vpcConfHasBeenSet(false)
{
}

CoreInternalOutcome DiffConfigItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffConfigItem.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DiffConfigItem.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("IntValue") && !value["IntValue"].IsNull())
    {
        if (!value["IntValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiffConfigItem.IntValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_intValue = value["IntValue"].GetInt64();
        m_intValueHasBeenSet = true;
    }

    if (value.HasMember("BoolValue") && !value["BoolValue"].IsNull())
    {
        if (!value["BoolValue"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DiffConfigItem.BoolValue` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_boolValue = value["BoolValue"].GetBool();
        m_boolValueHasBeenSet = true;
    }

    if (value.HasMember("FloatValue") && !value["FloatValue"].IsNull())
    {
        if (!value["FloatValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DiffConfigItem.FloatValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_floatValue = value["FloatValue"].GetDouble();
        m_floatValueHasBeenSet = true;
    }

    if (value.HasMember("ArrayValue") && !value["ArrayValue"].IsNull())
    {
        if (!value["ArrayValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiffConfigItem.ArrayValue` is not array type"));

        const rapidjson::Value &tmpValue = value["ArrayValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_arrayValue.push_back((*itr).GetString());
        }
        m_arrayValueHasBeenSet = true;
    }

    if (value.HasMember("PolicyDetails") && !value["PolicyDetails"].IsNull())
    {
        if (!value["PolicyDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiffConfigItem.PolicyDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["PolicyDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HpaPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_policyDetails.push_back(item);
        }
        m_policyDetailsHasBeenSet = true;
    }

    if (value.HasMember("TimerScale") && !value["TimerScale"].IsNull())
    {
        if (!value["TimerScale"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiffConfigItem.TimerScale` is not array type"));

        const rapidjson::Value &tmpValue = value["TimerScale"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TimerScale item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timerScale.push_back(item);
        }
        m_timerScaleHasBeenSet = true;
    }

    if (value.HasMember("VpcConf") && !value["VpcConf"].IsNull())
    {
        if (!value["VpcConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiffConfigItem.VpcConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vpcConf.Deserialize(value["VpcConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vpcConfHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiffConfigItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_intValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IntValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_intValue, allocator);
    }

    if (m_boolValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoolValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_boolValue, allocator);
    }

    if (m_floatValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FloatValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_floatValue, allocator);
    }

    if (m_arrayValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArrayValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_arrayValue.begin(); itr != m_arrayValue.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_policyDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_policyDetails.begin(); itr != m_policyDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timerScaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerScale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timerScale.begin(); itr != m_timerScale.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vpcConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcConf.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DiffConfigItem::GetKey() const
{
    return m_key;
}

void DiffConfigItem::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool DiffConfigItem::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string DiffConfigItem::GetValue() const
{
    return m_value;
}

void DiffConfigItem::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DiffConfigItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t DiffConfigItem::GetIntValue() const
{
    return m_intValue;
}

void DiffConfigItem::SetIntValue(const int64_t& _intValue)
{
    m_intValue = _intValue;
    m_intValueHasBeenSet = true;
}

bool DiffConfigItem::IntValueHasBeenSet() const
{
    return m_intValueHasBeenSet;
}

bool DiffConfigItem::GetBoolValue() const
{
    return m_boolValue;
}

void DiffConfigItem::SetBoolValue(const bool& _boolValue)
{
    m_boolValue = _boolValue;
    m_boolValueHasBeenSet = true;
}

bool DiffConfigItem::BoolValueHasBeenSet() const
{
    return m_boolValueHasBeenSet;
}

double DiffConfigItem::GetFloatValue() const
{
    return m_floatValue;
}

void DiffConfigItem::SetFloatValue(const double& _floatValue)
{
    m_floatValue = _floatValue;
    m_floatValueHasBeenSet = true;
}

bool DiffConfigItem::FloatValueHasBeenSet() const
{
    return m_floatValueHasBeenSet;
}

vector<string> DiffConfigItem::GetArrayValue() const
{
    return m_arrayValue;
}

void DiffConfigItem::SetArrayValue(const vector<string>& _arrayValue)
{
    m_arrayValue = _arrayValue;
    m_arrayValueHasBeenSet = true;
}

bool DiffConfigItem::ArrayValueHasBeenSet() const
{
    return m_arrayValueHasBeenSet;
}

vector<HpaPolicy> DiffConfigItem::GetPolicyDetails() const
{
    return m_policyDetails;
}

void DiffConfigItem::SetPolicyDetails(const vector<HpaPolicy>& _policyDetails)
{
    m_policyDetails = _policyDetails;
    m_policyDetailsHasBeenSet = true;
}

bool DiffConfigItem::PolicyDetailsHasBeenSet() const
{
    return m_policyDetailsHasBeenSet;
}

vector<TimerScale> DiffConfigItem::GetTimerScale() const
{
    return m_timerScale;
}

void DiffConfigItem::SetTimerScale(const vector<TimerScale>& _timerScale)
{
    m_timerScale = _timerScale;
    m_timerScaleHasBeenSet = true;
}

bool DiffConfigItem::TimerScaleHasBeenSet() const
{
    return m_timerScaleHasBeenSet;
}

VpcConf DiffConfigItem::GetVpcConf() const
{
    return m_vpcConf;
}

void DiffConfigItem::SetVpcConf(const VpcConf& _vpcConf)
{
    m_vpcConf = _vpcConf;
    m_vpcConfHasBeenSet = true;
}

bool DiffConfigItem::VpcConfHasBeenSet() const
{
    return m_vpcConfHasBeenSet;
}

