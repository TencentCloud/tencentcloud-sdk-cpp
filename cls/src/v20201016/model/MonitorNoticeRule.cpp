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

#include <tencentcloud/cls/v20201016/model/MonitorNoticeRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

MonitorNoticeRule::MonitorNoticeRule() :
    m_noticeIdHasBeenSet(false),
    m_contentTmplIdHasBeenSet(false),
    m_alarmLevelsHasBeenSet(false)
{
}

CoreInternalOutcome MonitorNoticeRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoticeId") && !value["NoticeId"].IsNull())
    {
        if (!value["NoticeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorNoticeRule.NoticeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeId = string(value["NoticeId"].GetString());
        m_noticeIdHasBeenSet = true;
    }

    if (value.HasMember("ContentTmplId") && !value["ContentTmplId"].IsNull())
    {
        if (!value["ContentTmplId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorNoticeRule.ContentTmplId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentTmplId = string(value["ContentTmplId"].GetString());
        m_contentTmplIdHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevels") && !value["AlarmLevels"].IsNull())
    {
        if (!value["AlarmLevels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MonitorNoticeRule.AlarmLevels` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmLevels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmLevels.push_back((*itr).GetUint64());
        }
        m_alarmLevelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MonitorNoticeRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noticeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTmplIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentTmplId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentTmplId.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmLevelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmLevels.begin(); itr != m_alarmLevels.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

}


string MonitorNoticeRule::GetNoticeId() const
{
    return m_noticeId;
}

void MonitorNoticeRule::SetNoticeId(const string& _noticeId)
{
    m_noticeId = _noticeId;
    m_noticeIdHasBeenSet = true;
}

bool MonitorNoticeRule::NoticeIdHasBeenSet() const
{
    return m_noticeIdHasBeenSet;
}

string MonitorNoticeRule::GetContentTmplId() const
{
    return m_contentTmplId;
}

void MonitorNoticeRule::SetContentTmplId(const string& _contentTmplId)
{
    m_contentTmplId = _contentTmplId;
    m_contentTmplIdHasBeenSet = true;
}

bool MonitorNoticeRule::ContentTmplIdHasBeenSet() const
{
    return m_contentTmplIdHasBeenSet;
}

vector<uint64_t> MonitorNoticeRule::GetAlarmLevels() const
{
    return m_alarmLevels;
}

void MonitorNoticeRule::SetAlarmLevels(const vector<uint64_t>& _alarmLevels)
{
    m_alarmLevels = _alarmLevels;
    m_alarmLevelsHasBeenSet = true;
}

bool MonitorNoticeRule::AlarmLevelsHasBeenSet() const
{
    return m_alarmLevelsHasBeenSet;
}

