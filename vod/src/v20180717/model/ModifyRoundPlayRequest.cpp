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

#include <tencentcloud/vod/v20180717/model/ModifyRoundPlayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ModifyRoundPlayRequest::ModifyRoundPlayRequest() :
    m_roundPlayIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_roundPlaylistHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_playBackModeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

string ModifyRoundPlayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roundPlayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundPlayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roundPlayId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_roundPlaylistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundPlaylist";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roundPlaylist.begin(); itr != m_roundPlaylist.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_playBackModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayBackMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playBackMode.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRoundPlayRequest::GetRoundPlayId() const
{
    return m_roundPlayId;
}

void ModifyRoundPlayRequest::SetRoundPlayId(const string& _roundPlayId)
{
    m_roundPlayId = _roundPlayId;
    m_roundPlayIdHasBeenSet = true;
}

bool ModifyRoundPlayRequest::RoundPlayIdHasBeenSet() const
{
    return m_roundPlayIdHasBeenSet;
}

uint64_t ModifyRoundPlayRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyRoundPlayRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyRoundPlayRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ModifyRoundPlayRequest::GetStartTime() const
{
    return m_startTime;
}

void ModifyRoundPlayRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool ModifyRoundPlayRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

vector<RoundPlayListItemInfo> ModifyRoundPlayRequest::GetRoundPlaylist() const
{
    return m_roundPlaylist;
}

void ModifyRoundPlayRequest::SetRoundPlaylist(const vector<RoundPlayListItemInfo>& _roundPlaylist)
{
    m_roundPlaylist = _roundPlaylist;
    m_roundPlaylistHasBeenSet = true;
}

bool ModifyRoundPlayRequest::RoundPlaylistHasBeenSet() const
{
    return m_roundPlaylistHasBeenSet;
}

string ModifyRoundPlayRequest::GetName() const
{
    return m_name;
}

void ModifyRoundPlayRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyRoundPlayRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyRoundPlayRequest::GetDesc() const
{
    return m_desc;
}

void ModifyRoundPlayRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ModifyRoundPlayRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string ModifyRoundPlayRequest::GetStatus() const
{
    return m_status;
}

void ModifyRoundPlayRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyRoundPlayRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyRoundPlayRequest::GetPlayBackMode() const
{
    return m_playBackMode;
}

void ModifyRoundPlayRequest::SetPlayBackMode(const string& _playBackMode)
{
    m_playBackMode = _playBackMode;
    m_playBackModeHasBeenSet = true;
}

bool ModifyRoundPlayRequest::PlayBackModeHasBeenSet() const
{
    return m_playBackModeHasBeenSet;
}

string ModifyRoundPlayRequest::GetExpiredTime() const
{
    return m_expiredTime;
}

void ModifyRoundPlayRequest::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool ModifyRoundPlayRequest::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}


