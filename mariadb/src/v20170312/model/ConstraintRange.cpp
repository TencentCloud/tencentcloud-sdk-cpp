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

#include <tencentcloud/mariadb/v20170312/model/ConstraintRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

ConstraintRange::ConstraintRange() :
    m_minHasBeenSet(false),
    m_maxHasBeenSet(false)
{
}

CoreInternalOutcome ConstraintRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConstraintRange.Min` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_min = string(value["Min"].GetString());
        m_minHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConstraintRange.Max` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_max = string(value["Max"].GetString());
        m_maxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConstraintRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_min.c_str(), allocator).Move(), allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_max.c_str(), allocator).Move(), allocator);
    }

}


string ConstraintRange::GetMin() const
{
    return m_min;
}

void ConstraintRange::SetMin(const string& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool ConstraintRange::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

string ConstraintRange::GetMax() const
{
    return m_max;
}

void ConstraintRange::SetMax(const string& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool ConstraintRange::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

