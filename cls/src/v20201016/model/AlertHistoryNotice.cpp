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

#include <tencentcloud/cls/v20201016/model/AlertHistoryNotice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

AlertHistoryNotice::AlertHistoryNotice() :
    m_nameHasBeenSet(false),
    m_alarmNoticeIdHasBeenSet(false)
{
}

CoreInternalOutcome AlertHistoryNotice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryNotice.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AlarmNoticeId") && !value["AlarmNoticeId"].IsNull())
    {
        if (!value["AlarmNoticeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AlertHistoryNotice.AlarmNoticeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmNoticeId = string(value["AlarmNoticeId"].GetString());
        m_alarmNoticeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AlertHistoryNotice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmNoticeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNoticeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmNoticeId.c_str(), allocator).Move(), allocator);
    }

}


string AlertHistoryNotice::GetName() const
{
    return m_name;
}

void AlertHistoryNotice::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AlertHistoryNotice::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AlertHistoryNotice::GetAlarmNoticeId() const
{
    return m_alarmNoticeId;
}

void AlertHistoryNotice::SetAlarmNoticeId(const string& _alarmNoticeId)
{
    m_alarmNoticeId = _alarmNoticeId;
    m_alarmNoticeIdHasBeenSet = true;
}

bool AlertHistoryNotice::AlarmNoticeIdHasBeenSet() const
{
    return m_alarmNoticeIdHasBeenSet;
}

