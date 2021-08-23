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

#include <tencentcloud/tsf/v20180326/model/QuantileEntity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

QuantileEntity::QuantileEntity() :
    m_maxValueHasBeenSet(false),
    m_minValueHasBeenSet(false),
    m_fifthPositionValueHasBeenSet(false),
    m_ninthPositionValueHasBeenSet(false)
{
}

CoreInternalOutcome QuantileEntity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxValue") && !value["MaxValue"].IsNull())
    {
        if (!value["MaxValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuantileEntity.MaxValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maxValue = string(value["MaxValue"].GetString());
        m_maxValueHasBeenSet = true;
    }

    if (value.HasMember("MinValue") && !value["MinValue"].IsNull())
    {
        if (!value["MinValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuantileEntity.MinValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_minValue = string(value["MinValue"].GetString());
        m_minValueHasBeenSet = true;
    }

    if (value.HasMember("FifthPositionValue") && !value["FifthPositionValue"].IsNull())
    {
        if (!value["FifthPositionValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuantileEntity.FifthPositionValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fifthPositionValue = string(value["FifthPositionValue"].GetString());
        m_fifthPositionValueHasBeenSet = true;
    }

    if (value.HasMember("NinthPositionValue") && !value["NinthPositionValue"].IsNull())
    {
        if (!value["NinthPositionValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuantileEntity.NinthPositionValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ninthPositionValue = string(value["NinthPositionValue"].GetString());
        m_ninthPositionValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuantileEntity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maxValue.c_str(), allocator).Move(), allocator);
    }

    if (m_minValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_minValue.c_str(), allocator).Move(), allocator);
    }

    if (m_fifthPositionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FifthPositionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fifthPositionValue.c_str(), allocator).Move(), allocator);
    }

    if (m_ninthPositionValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NinthPositionValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ninthPositionValue.c_str(), allocator).Move(), allocator);
    }

}


string QuantileEntity::GetMaxValue() const
{
    return m_maxValue;
}

void QuantileEntity::SetMaxValue(const string& _maxValue)
{
    m_maxValue = _maxValue;
    m_maxValueHasBeenSet = true;
}

bool QuantileEntity::MaxValueHasBeenSet() const
{
    return m_maxValueHasBeenSet;
}

string QuantileEntity::GetMinValue() const
{
    return m_minValue;
}

void QuantileEntity::SetMinValue(const string& _minValue)
{
    m_minValue = _minValue;
    m_minValueHasBeenSet = true;
}

bool QuantileEntity::MinValueHasBeenSet() const
{
    return m_minValueHasBeenSet;
}

string QuantileEntity::GetFifthPositionValue() const
{
    return m_fifthPositionValue;
}

void QuantileEntity::SetFifthPositionValue(const string& _fifthPositionValue)
{
    m_fifthPositionValue = _fifthPositionValue;
    m_fifthPositionValueHasBeenSet = true;
}

bool QuantileEntity::FifthPositionValueHasBeenSet() const
{
    return m_fifthPositionValueHasBeenSet;
}

string QuantileEntity::GetNinthPositionValue() const
{
    return m_ninthPositionValue;
}

void QuantileEntity::SetNinthPositionValue(const string& _ninthPositionValue)
{
    m_ninthPositionValue = _ninthPositionValue;
    m_ninthPositionValueHasBeenSet = true;
}

bool QuantileEntity::NinthPositionValueHasBeenSet() const
{
    return m_ninthPositionValueHasBeenSet;
}

