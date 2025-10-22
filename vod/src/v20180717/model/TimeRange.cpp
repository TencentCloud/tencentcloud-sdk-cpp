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

#include <tencentcloud/vod/v20180717/model/TimeRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

TimeRange::TimeRange() :
    m_afterHasBeenSet(false),
    m_beforeHasBeenSet(false)
{
}

CoreInternalOutcome TimeRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("After") && !value["After"].IsNull())
    {
        if (!value["After"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeRange.After` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_after = string(value["After"].GetString());
        m_afterHasBeenSet = true;
    }

    if (value.HasMember("Before") && !value["Before"].IsNull())
    {
        if (!value["Before"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeRange.Before` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_before = string(value["Before"].GetString());
        m_beforeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TimeRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_afterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "After";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_after.c_str(), allocator).Move(), allocator);
    }

    if (m_beforeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Before";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_before.c_str(), allocator).Move(), allocator);
    }

}


string TimeRange::GetAfter() const
{
    return m_after;
}

void TimeRange::SetAfter(const string& _after)
{
    m_after = _after;
    m_afterHasBeenSet = true;
}

bool TimeRange::AfterHasBeenSet() const
{
    return m_afterHasBeenSet;
}

string TimeRange::GetBefore() const
{
    return m_before;
}

void TimeRange::SetBefore(const string& _before)
{
    m_before = _before;
    m_beforeHasBeenSet = true;
}

bool TimeRange::BeforeHasBeenSet() const
{
    return m_beforeHasBeenSet;
}

