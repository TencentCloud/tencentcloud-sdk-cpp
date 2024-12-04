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

#include <tencentcloud/vod/v20180717/model/CreateRoundPlayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateRoundPlayRequest::CreateRoundPlayRequest() :
    m_startTimeHasBeenSet(false),
    m_roundPlaylistHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_playBackModeHasBeenSet(false),
    m_roundPlayIdHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

string CreateRoundPlayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
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

    if (m_playBackModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayBackMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playBackMode.c_str(), allocator).Move(), allocator);
    }

    if (m_roundPlayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundPlayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roundPlayId.c_str(), allocator).Move(), allocator);
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


string CreateRoundPlayRequest::GetStartTime() const
{
    return m_startTime;
}

void CreateRoundPlayRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CreateRoundPlayRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

vector<RoundPlayListItemInfo> CreateRoundPlayRequest::GetRoundPlaylist() const
{
    return m_roundPlaylist;
}

void CreateRoundPlayRequest::SetRoundPlaylist(const vector<RoundPlayListItemInfo>& _roundPlaylist)
{
    m_roundPlaylist = _roundPlaylist;
    m_roundPlaylistHasBeenSet = true;
}

bool CreateRoundPlayRequest::RoundPlaylistHasBeenSet() const
{
    return m_roundPlaylistHasBeenSet;
}

uint64_t CreateRoundPlayRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateRoundPlayRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateRoundPlayRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateRoundPlayRequest::GetName() const
{
    return m_name;
}

void CreateRoundPlayRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateRoundPlayRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateRoundPlayRequest::GetDesc() const
{
    return m_desc;
}

void CreateRoundPlayRequest::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool CreateRoundPlayRequest::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string CreateRoundPlayRequest::GetPlayBackMode() const
{
    return m_playBackMode;
}

void CreateRoundPlayRequest::SetPlayBackMode(const string& _playBackMode)
{
    m_playBackMode = _playBackMode;
    m_playBackModeHasBeenSet = true;
}

bool CreateRoundPlayRequest::PlayBackModeHasBeenSet() const
{
    return m_playBackModeHasBeenSet;
}

string CreateRoundPlayRequest::GetRoundPlayId() const
{
    return m_roundPlayId;
}

void CreateRoundPlayRequest::SetRoundPlayId(const string& _roundPlayId)
{
    m_roundPlayId = _roundPlayId;
    m_roundPlayIdHasBeenSet = true;
}

bool CreateRoundPlayRequest::RoundPlayIdHasBeenSet() const
{
    return m_roundPlayIdHasBeenSet;
}

string CreateRoundPlayRequest::GetExpiredTime() const
{
    return m_expiredTime;
}

void CreateRoundPlayRequest::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool CreateRoundPlayRequest::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}


