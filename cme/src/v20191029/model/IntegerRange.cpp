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

#include <tencentcloud/cme/v20191029/model/IntegerRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

IntegerRange::IntegerRange() :
    m_lowerBoundHasBeenSet(false),
    m_upperBoundHasBeenSet(false)
{
}

CoreInternalOutcome IntegerRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LowerBound") && !value["LowerBound"].IsNull())
    {
        if (!value["LowerBound"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegerRange.LowerBound` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lowerBound = value["LowerBound"].GetInt64();
        m_lowerBoundHasBeenSet = true;
    }

    if (value.HasMember("UpperBound") && !value["UpperBound"].IsNull())
    {
        if (!value["UpperBound"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegerRange.UpperBound` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upperBound = value["UpperBound"].GetInt64();
        m_upperBoundHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegerRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lowerBoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowerBound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowerBound, allocator);
    }

    if (m_upperBoundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpperBound";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upperBound, allocator);
    }

}


int64_t IntegerRange::GetLowerBound() const
{
    return m_lowerBound;
}

void IntegerRange::SetLowerBound(const int64_t& _lowerBound)
{
    m_lowerBound = _lowerBound;
    m_lowerBoundHasBeenSet = true;
}

bool IntegerRange::LowerBoundHasBeenSet() const
{
    return m_lowerBoundHasBeenSet;
}

int64_t IntegerRange::GetUpperBound() const
{
    return m_upperBound;
}

void IntegerRange::SetUpperBound(const int64_t& _upperBound)
{
    m_upperBound = _upperBound;
    m_upperBoundHasBeenSet = true;
}

bool IntegerRange::UpperBoundHasBeenSet() const
{
    return m_upperBoundHasBeenSet;
}

