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

#include <tencentcloud/csip/v20221121/model/DetectTypeCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DetectTypeCount::DetectTypeCount() :
    m_detectTypeHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome DetectTypeCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectType") && !value["DetectType"].IsNull())
    {
        if (!value["DetectType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTypeCount.DetectType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detectType = value["DetectType"].GetInt64();
        m_detectTypeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DetectTypeCount.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DetectTypeCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectType, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


int64_t DetectTypeCount::GetDetectType() const
{
    return m_detectType;
}

void DetectTypeCount::SetDetectType(const int64_t& _detectType)
{
    m_detectType = _detectType;
    m_detectTypeHasBeenSet = true;
}

bool DetectTypeCount::DetectTypeHasBeenSet() const
{
    return m_detectTypeHasBeenSet;
}

int64_t DetectTypeCount::GetCount() const
{
    return m_count;
}

void DetectTypeCount::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DetectTypeCount::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

