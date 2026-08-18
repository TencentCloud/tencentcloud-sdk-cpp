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

#include <tencentcloud/adp/v20260520/model/MetricOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

MetricOverview::MetricOverview() :
    m_keyHasBeenSet(false),
    m_momHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome MetricOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricOverview.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Mom") && !value["Mom"].IsNull())
    {
        if (!value["Mom"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricOverview.Mom` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_mom = value["Mom"].GetDouble();
        m_momHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MetricOverview.Unit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_unit = value["Unit"].GetInt64();
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricOverview.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_momHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mom, allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unit, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

}


string MetricOverview::GetKey() const
{
    return m_key;
}

void MetricOverview::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool MetricOverview::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

double MetricOverview::GetMom() const
{
    return m_mom;
}

void MetricOverview::SetMom(const double& _mom)
{
    m_mom = _mom;
    m_momHasBeenSet = true;
}

bool MetricOverview::MomHasBeenSet() const
{
    return m_momHasBeenSet;
}

int64_t MetricOverview::GetUnit() const
{
    return m_unit;
}

void MetricOverview::SetUnit(const int64_t& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool MetricOverview::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

double MetricOverview::GetValue() const
{
    return m_value;
}

void MetricOverview::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool MetricOverview::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

