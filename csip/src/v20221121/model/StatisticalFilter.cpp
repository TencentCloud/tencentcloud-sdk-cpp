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

#include <tencentcloud/csip/v20221121/model/StatisticalFilter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

StatisticalFilter::StatisticalFilter() :
    m_operatorTypeHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome StatisticalFilter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OperatorType") && !value["OperatorType"].IsNull())
    {
        if (!value["OperatorType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticalFilter.OperatorType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operatorType = value["OperatorType"].GetInt64();
        m_operatorTypeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StatisticalFilter.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StatisticalFilter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operatorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operatorType, allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

}


int64_t StatisticalFilter::GetOperatorType() const
{
    return m_operatorType;
}

void StatisticalFilter::SetOperatorType(const int64_t& _operatorType)
{
    m_operatorType = _operatorType;
    m_operatorTypeHasBeenSet = true;
}

bool StatisticalFilter::OperatorTypeHasBeenSet() const
{
    return m_operatorTypeHasBeenSet;
}

double StatisticalFilter::GetValue() const
{
    return m_value;
}

void StatisticalFilter::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool StatisticalFilter::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

