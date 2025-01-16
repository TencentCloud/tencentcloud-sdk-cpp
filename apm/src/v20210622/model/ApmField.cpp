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

#include <tencentcloud/apm/v20210622/model/ApmField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ApmField::ApmField() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_compareValsHasBeenSet(false),
    m_lastPeriodValueHasBeenSet(false),
    m_compareValHasBeenSet(false)
{
}

CoreInternalOutcome ApmField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmField.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ApmField.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmField.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("CompareVals") && !value["CompareVals"].IsNull())
    {
        if (!value["CompareVals"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApmField.CompareVals` is not array type"));

        const rapidjson::Value &tmpValue = value["CompareVals"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            APMKVItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_compareVals.push_back(item);
        }
        m_compareValsHasBeenSet = true;
    }

    if (value.HasMember("LastPeriodValue") && !value["LastPeriodValue"].IsNull())
    {
        if (!value["LastPeriodValue"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApmField.LastPeriodValue` is not array type"));

        const rapidjson::Value &tmpValue = value["LastPeriodValue"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            APMKV item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lastPeriodValue.push_back(item);
        }
        m_lastPeriodValueHasBeenSet = true;
    }

    if (value.HasMember("CompareVal") && !value["CompareVal"].IsNull())
    {
        if (!value["CompareVal"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmField.CompareVal` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_compareVal = string(value["CompareVal"].GetString());
        m_compareValHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApmField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_compareValsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareVals";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_compareVals.begin(); itr != m_compareVals.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_lastPeriodValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastPeriodValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lastPeriodValue.begin(); itr != m_lastPeriodValue.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_compareValHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareVal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_compareVal.c_str(), allocator).Move(), allocator);
    }

}


string ApmField::GetKey() const
{
    return m_key;
}

void ApmField::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool ApmField::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

double ApmField::GetValue() const
{
    return m_value;
}

void ApmField::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ApmField::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string ApmField::GetUnit() const
{
    return m_unit;
}

void ApmField::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool ApmField::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

vector<APMKVItem> ApmField::GetCompareVals() const
{
    return m_compareVals;
}

void ApmField::SetCompareVals(const vector<APMKVItem>& _compareVals)
{
    m_compareVals = _compareVals;
    m_compareValsHasBeenSet = true;
}

bool ApmField::CompareValsHasBeenSet() const
{
    return m_compareValsHasBeenSet;
}

vector<APMKV> ApmField::GetLastPeriodValue() const
{
    return m_lastPeriodValue;
}

void ApmField::SetLastPeriodValue(const vector<APMKV>& _lastPeriodValue)
{
    m_lastPeriodValue = _lastPeriodValue;
    m_lastPeriodValueHasBeenSet = true;
}

bool ApmField::LastPeriodValueHasBeenSet() const
{
    return m_lastPeriodValueHasBeenSet;
}

string ApmField::GetCompareVal() const
{
    return m_compareVal;
}

void ApmField::SetCompareVal(const string& _compareVal)
{
    m_compareVal = _compareVal;
    m_compareValHasBeenSet = true;
}

bool ApmField::CompareValHasBeenSet() const
{
    return m_compareValHasBeenSet;
}

