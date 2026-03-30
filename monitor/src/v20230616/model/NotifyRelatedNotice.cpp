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

#include <tencentcloud/monitor/v20230616/model/NotifyRelatedNotice.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

NotifyRelatedNotice::NotifyRelatedNotice() :
    m_noticeIdHasBeenSet(false),
    m_noticeNameHasBeenSet(false)
{
}

CoreInternalOutcome NotifyRelatedNotice::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoticeId") && !value["NoticeId"].IsNull())
    {
        if (!value["NoticeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotifyRelatedNotice.NoticeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeId = string(value["NoticeId"].GetString());
        m_noticeIdHasBeenSet = true;
    }

    if (value.HasMember("NoticeName") && !value["NoticeName"].IsNull())
    {
        if (!value["NoticeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NotifyRelatedNotice.NoticeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeName = string(value["NoticeName"].GetString());
        m_noticeNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NotifyRelatedNotice::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noticeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeId.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeName.c_str(), allocator).Move(), allocator);
    }

}


string NotifyRelatedNotice::GetNoticeId() const
{
    return m_noticeId;
}

void NotifyRelatedNotice::SetNoticeId(const string& _noticeId)
{
    m_noticeId = _noticeId;
    m_noticeIdHasBeenSet = true;
}

bool NotifyRelatedNotice::NoticeIdHasBeenSet() const
{
    return m_noticeIdHasBeenSet;
}

string NotifyRelatedNotice::GetNoticeName() const
{
    return m_noticeName;
}

void NotifyRelatedNotice::SetNoticeName(const string& _noticeName)
{
    m_noticeName = _noticeName;
    m_noticeNameHasBeenSet = true;
}

bool NotifyRelatedNotice::NoticeNameHasBeenSet() const
{
    return m_noticeNameHasBeenSet;
}

