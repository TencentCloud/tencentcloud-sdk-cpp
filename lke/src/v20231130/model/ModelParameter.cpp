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

#include <tencentcloud/lke/v20231130/model/ModelParameter.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

ModelParameter::ModelParameter() :
    m_defaultHasBeenSet(false),
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false)
{
}

CoreInternalOutcome ModelParameter::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.Default` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_default = value["Default"].GetDouble();
        m_defaultHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.Min` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_min = value["Min"].GetDouble();
        m_minHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelParameter.Max` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetDouble();
        m_maxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelParameter::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_default, allocator);
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_min, allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

}


double ModelParameter::GetDefault() const
{
    return m_default;
}

void ModelParameter::SetDefault(const double& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool ModelParameter::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

double ModelParameter::GetMin() const
{
    return m_min;
}

void ModelParameter::SetMin(const double& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool ModelParameter::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

double ModelParameter::GetMax() const
{
    return m_max;
}

void ModelParameter::SetMax(const double& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool ModelParameter::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

