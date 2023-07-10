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

#include <tencentcloud/tse/v20201207/model/QpsThreshold.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

QpsThreshold::QpsThreshold() :
    m_unitHasBeenSet(false),
    m_maxHasBeenSet(false)
{
}

CoreInternalOutcome QpsThreshold::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QpsThreshold.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QpsThreshold.Max` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_max = value["Max"].GetInt64();
        m_maxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QpsThreshold::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_max, allocator);
    }

}


string QpsThreshold::GetUnit() const
{
    return m_unit;
}

void QpsThreshold::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool QpsThreshold::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

int64_t QpsThreshold::GetMax() const
{
    return m_max;
}

void QpsThreshold::SetMax(const int64_t& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool QpsThreshold::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

