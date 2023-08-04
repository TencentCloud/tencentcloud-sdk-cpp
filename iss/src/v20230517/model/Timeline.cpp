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

#include <tencentcloud/iss/v20230517/model/Timeline.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

Timeline::Timeline() :
    m_beginHasBeenSet(false),
    m_endHasBeenSet(false)
{
}

CoreInternalOutcome Timeline::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Begin") && !value["Begin"].IsNull())
    {
        if (!value["Begin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Timeline.Begin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_begin = value["Begin"].GetInt64();
        m_beginHasBeenSet = true;
    }

    if (value.HasMember("End") && !value["End"].IsNull())
    {
        if (!value["End"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Timeline.End` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_end = value["End"].GetInt64();
        m_endHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Timeline::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_beginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Begin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_begin, allocator);
    }

    if (m_endHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "End";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_end, allocator);
    }

}


int64_t Timeline::GetBegin() const
{
    return m_begin;
}

void Timeline::SetBegin(const int64_t& _begin)
{
    m_begin = _begin;
    m_beginHasBeenSet = true;
}

bool Timeline::BeginHasBeenSet() const
{
    return m_beginHasBeenSet;
}

int64_t Timeline::GetEnd() const
{
    return m_end;
}

void Timeline::SetEnd(const int64_t& _end)
{
    m_end = _end;
    m_endHasBeenSet = true;
}

bool Timeline::EndHasBeenSet() const
{
    return m_endHasBeenSet;
}

