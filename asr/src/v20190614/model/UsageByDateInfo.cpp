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

#include <tencentcloud/asr/v20190614/model/UsageByDateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

UsageByDateInfo::UsageByDateInfo() :
    m_bizNameHasBeenSet(false),
    m_countHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

CoreInternalOutcome UsageByDateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BizName") && !value["BizName"].IsNull())
    {
        if (!value["BizName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsageByDateInfo.BizName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizName = string(value["BizName"].GetString());
        m_bizNameHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageByDateInfo.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsageByDateInfo.Duration` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetUint64();
        m_durationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsageByDateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bizNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizName.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

}


string UsageByDateInfo::GetBizName() const
{
    return m_bizName;
}

void UsageByDateInfo::SetBizName(const string& _bizName)
{
    m_bizName = _bizName;
    m_bizNameHasBeenSet = true;
}

bool UsageByDateInfo::BizNameHasBeenSet() const
{
    return m_bizNameHasBeenSet;
}

uint64_t UsageByDateInfo::GetCount() const
{
    return m_count;
}

void UsageByDateInfo::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool UsageByDateInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

uint64_t UsageByDateInfo::GetDuration() const
{
    return m_duration;
}

void UsageByDateInfo::SetDuration(const uint64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool UsageByDateInfo::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

