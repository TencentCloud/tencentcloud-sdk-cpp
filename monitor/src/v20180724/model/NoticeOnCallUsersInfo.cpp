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

#include <tencentcloud/monitor/v20180724/model/NoticeOnCallUsersInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

NoticeOnCallUsersInfo::NoticeOnCallUsersInfo() :
    m_noticeIdHasBeenSet(false),
    m_sendGroupsHasBeenSet(false)
{
}

CoreInternalOutcome NoticeOnCallUsersInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoticeId") && !value["NoticeId"].IsNull())
    {
        if (!value["NoticeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeOnCallUsersInfo.NoticeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeId = string(value["NoticeId"].GetString());
        m_noticeIdHasBeenSet = true;
    }

    if (value.HasMember("SendGroups") && !value["SendGroups"].IsNull())
    {
        if (!value["SendGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoticeOnCallUsersInfo.SendGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["SendGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NoticeSendGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sendGroups.push_back(item);
        }
        m_sendGroupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NoticeOnCallUsersInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noticeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeId.c_str(), allocator).Move(), allocator);
    }

    if (m_sendGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sendGroups.begin(); itr != m_sendGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string NoticeOnCallUsersInfo::GetNoticeId() const
{
    return m_noticeId;
}

void NoticeOnCallUsersInfo::SetNoticeId(const string& _noticeId)
{
    m_noticeId = _noticeId;
    m_noticeIdHasBeenSet = true;
}

bool NoticeOnCallUsersInfo::NoticeIdHasBeenSet() const
{
    return m_noticeIdHasBeenSet;
}

vector<NoticeSendGroup> NoticeOnCallUsersInfo::GetSendGroups() const
{
    return m_sendGroups;
}

void NoticeOnCallUsersInfo::SetSendGroups(const vector<NoticeSendGroup>& _sendGroups)
{
    m_sendGroups = _sendGroups;
    m_sendGroupsHasBeenSet = true;
}

bool NoticeOnCallUsersInfo::SendGroupsHasBeenSet() const
{
    return m_sendGroupsHasBeenSet;
}

