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

#include <tencentcloud/cls/v20201016/model/DlcPartitionExtra.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DlcPartitionExtra::DlcPartitionExtra() :
    m_timeFormatHasBeenSet(false),
    m_timeZoneHasBeenSet(false)
{
}

CoreInternalOutcome DlcPartitionExtra::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeFormat") && !value["TimeFormat"].IsNull())
    {
        if (!value["TimeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcPartitionExtra.TimeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeFormat = string(value["TimeFormat"].GetString());
        m_timeFormatHasBeenSet = true;
    }

    if (value.HasMember("TimeZone") && !value["TimeZone"].IsNull())
    {
        if (!value["TimeZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DlcPartitionExtra.TimeZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = string(value["TimeZone"].GetString());
        m_timeZoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DlcPartitionExtra::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeZone.c_str(), allocator).Move(), allocator);
    }

}


string DlcPartitionExtra::GetTimeFormat() const
{
    return m_timeFormat;
}

void DlcPartitionExtra::SetTimeFormat(const string& _timeFormat)
{
    m_timeFormat = _timeFormat;
    m_timeFormatHasBeenSet = true;
}

bool DlcPartitionExtra::TimeFormatHasBeenSet() const
{
    return m_timeFormatHasBeenSet;
}

string DlcPartitionExtra::GetTimeZone() const
{
    return m_timeZone;
}

void DlcPartitionExtra::SetTimeZone(const string& _timeZone)
{
    m_timeZone = _timeZone;
    m_timeZoneHasBeenSet = true;
}

bool DlcPartitionExtra::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

