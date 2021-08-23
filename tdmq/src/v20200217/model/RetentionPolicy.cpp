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

#include <tencentcloud/tdmq/v20200217/model/RetentionPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RetentionPolicy::RetentionPolicy() :
    m_timeInMinutesHasBeenSet(false),
    m_sizeInMBHasBeenSet(false)
{
}

CoreInternalOutcome RetentionPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeInMinutes") && !value["TimeInMinutes"].IsNull())
    {
        if (!value["TimeInMinutes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionPolicy.TimeInMinutes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeInMinutes = value["TimeInMinutes"].GetInt64();
        m_timeInMinutesHasBeenSet = true;
    }

    if (value.HasMember("SizeInMB") && !value["SizeInMB"].IsNull())
    {
        if (!value["SizeInMB"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RetentionPolicy.SizeInMB` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeInMB = value["SizeInMB"].GetInt64();
        m_sizeInMBHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RetentionPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeInMinutesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeInMinutes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeInMinutes, allocator);
    }

    if (m_sizeInMBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeInMB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeInMB, allocator);
    }

}


int64_t RetentionPolicy::GetTimeInMinutes() const
{
    return m_timeInMinutes;
}

void RetentionPolicy::SetTimeInMinutes(const int64_t& _timeInMinutes)
{
    m_timeInMinutes = _timeInMinutes;
    m_timeInMinutesHasBeenSet = true;
}

bool RetentionPolicy::TimeInMinutesHasBeenSet() const
{
    return m_timeInMinutesHasBeenSet;
}

int64_t RetentionPolicy::GetSizeInMB() const
{
    return m_sizeInMB;
}

void RetentionPolicy::SetSizeInMB(const int64_t& _sizeInMB)
{
    m_sizeInMB = _sizeInMB;
    m_sizeInMBHasBeenSet = true;
}

bool RetentionPolicy::SizeInMBHasBeenSet() const
{
    return m_sizeInMBHasBeenSet;
}

