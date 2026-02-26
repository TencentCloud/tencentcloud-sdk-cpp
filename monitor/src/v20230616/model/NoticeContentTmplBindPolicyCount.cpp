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

#include <tencentcloud/monitor/v20230616/model/NoticeContentTmplBindPolicyCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

NoticeContentTmplBindPolicyCount::NoticeContentTmplBindPolicyCount() :
    m_noticeContentTmplIDHasBeenSet(false),
    m_bindCountHasBeenSet(false)
{
}

CoreInternalOutcome NoticeContentTmplBindPolicyCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoticeContentTmplID") && !value["NoticeContentTmplID"].IsNull())
    {
        if (!value["NoticeContentTmplID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmplBindPolicyCount.NoticeContentTmplID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeContentTmplID = string(value["NoticeContentTmplID"].GetString());
        m_noticeContentTmplIDHasBeenSet = true;
    }

    if (value.HasMember("BindCount") && !value["BindCount"].IsNull())
    {
        if (!value["BindCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTmplBindPolicyCount.BindCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bindCount = value["BindCount"].GetUint64();
        m_bindCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NoticeContentTmplBindPolicyCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noticeContentTmplIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeContentTmplID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeContentTmplID.c_str(), allocator).Move(), allocator);
    }

    if (m_bindCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindCount, allocator);
    }

}


string NoticeContentTmplBindPolicyCount::GetNoticeContentTmplID() const
{
    return m_noticeContentTmplID;
}

void NoticeContentTmplBindPolicyCount::SetNoticeContentTmplID(const string& _noticeContentTmplID)
{
    m_noticeContentTmplID = _noticeContentTmplID;
    m_noticeContentTmplIDHasBeenSet = true;
}

bool NoticeContentTmplBindPolicyCount::NoticeContentTmplIDHasBeenSet() const
{
    return m_noticeContentTmplIDHasBeenSet;
}

uint64_t NoticeContentTmplBindPolicyCount::GetBindCount() const
{
    return m_bindCount;
}

void NoticeContentTmplBindPolicyCount::SetBindCount(const uint64_t& _bindCount)
{
    m_bindCount = _bindCount;
    m_bindCountHasBeenSet = true;
}

bool NoticeContentTmplBindPolicyCount::BindCountHasBeenSet() const
{
    return m_bindCountHasBeenSet;
}

