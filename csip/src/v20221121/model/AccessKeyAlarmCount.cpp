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

#include <tencentcloud/csip/v20221121/model/AccessKeyAlarmCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

AccessKeyAlarmCount::AccessKeyAlarmCount() :
    m_iDHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_alarmCountHasBeenSet(false)
{
}

CoreInternalOutcome AccessKeyAlarmCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarmCount.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarmCount.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("AlarmCount") && !value["AlarmCount"].IsNull())
    {
        if (!value["AlarmCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessKeyAlarmCount.AlarmCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmCount = value["AlarmCount"].GetInt64();
        m_alarmCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessKeyAlarmCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmCount, allocator);
    }

}


int64_t AccessKeyAlarmCount::GetID() const
{
    return m_iD;
}

void AccessKeyAlarmCount::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool AccessKeyAlarmCount::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string AccessKeyAlarmCount::GetAccessKey() const
{
    return m_accessKey;
}

void AccessKeyAlarmCount::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool AccessKeyAlarmCount::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

int64_t AccessKeyAlarmCount::GetAlarmCount() const
{
    return m_alarmCount;
}

void AccessKeyAlarmCount::SetAlarmCount(const int64_t& _alarmCount)
{
    m_alarmCount = _alarmCount;
    m_alarmCountHasBeenSet = true;
}

bool AccessKeyAlarmCount::AlarmCountHasBeenSet() const
{
    return m_alarmCountHasBeenSet;
}

