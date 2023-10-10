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

#include <tencentcloud/cwp/v20180228/model/FieldValueRatioInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

FieldValueRatioInfo::FieldValueRatioInfo() :
    m_countHasBeenSet(false),
    m_ratioHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome FieldValueRatioInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldValueRatioInfo.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FieldValueRatioInfo.Ratio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetDouble();
        m_ratioHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldValueRatioInfo.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldValueRatioInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratio, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


int64_t FieldValueRatioInfo::GetCount() const
{
    return m_count;
}

void FieldValueRatioInfo::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool FieldValueRatioInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

double FieldValueRatioInfo::GetRatio() const
{
    return m_ratio;
}

void FieldValueRatioInfo::SetRatio(const double& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool FieldValueRatioInfo::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

string FieldValueRatioInfo::GetValue() const
{
    return m_value;
}

void FieldValueRatioInfo::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool FieldValueRatioInfo::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

