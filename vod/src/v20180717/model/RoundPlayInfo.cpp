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

#include <tencentcloud/vod/v20180717/model/RoundPlayInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

RoundPlayInfo::RoundPlayInfo() :
    m_roundPlayIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_roundPlaylistHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_playBackModeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false)
{
}

CoreInternalOutcome RoundPlayInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoundPlayId") && !value["RoundPlayId"].IsNull())
    {
        if (!value["RoundPlayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayInfo.RoundPlayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roundPlayId = string(value["RoundPlayId"].GetString());
        m_roundPlayIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayInfo.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("RoundPlaylist") && !value["RoundPlaylist"].IsNull())
    {
        if (!value["RoundPlaylist"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoundPlayInfo.RoundPlaylist` is not array type"));

        const rapidjson::Value &tmpValue = value["RoundPlaylist"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RoundPlayListItemInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_roundPlaylist.push_back(item);
        }
        m_roundPlaylistHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayInfo.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PlayBackMode") && !value["PlayBackMode"].IsNull())
    {
        if (!value["PlayBackMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayInfo.PlayBackMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playBackMode = string(value["PlayBackMode"].GetString());
        m_playBackModeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayInfo.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoundPlayInfo.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoundPlayInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roundPlayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundPlayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roundPlayId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_roundPlaylistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoundPlaylist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_roundPlaylist.begin(); itr != m_roundPlaylist.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_playBackModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayBackMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playBackMode.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

}


string RoundPlayInfo::GetRoundPlayId() const
{
    return m_roundPlayId;
}

void RoundPlayInfo::SetRoundPlayId(const string& _roundPlayId)
{
    m_roundPlayId = _roundPlayId;
    m_roundPlayIdHasBeenSet = true;
}

bool RoundPlayInfo::RoundPlayIdHasBeenSet() const
{
    return m_roundPlayIdHasBeenSet;
}

string RoundPlayInfo::GetStartTime() const
{
    return m_startTime;
}

void RoundPlayInfo::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RoundPlayInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

vector<RoundPlayListItemInfo> RoundPlayInfo::GetRoundPlaylist() const
{
    return m_roundPlaylist;
}

void RoundPlayInfo::SetRoundPlaylist(const vector<RoundPlayListItemInfo>& _roundPlaylist)
{
    m_roundPlaylist = _roundPlaylist;
    m_roundPlaylistHasBeenSet = true;
}

bool RoundPlayInfo::RoundPlaylistHasBeenSet() const
{
    return m_roundPlaylistHasBeenSet;
}

string RoundPlayInfo::GetName() const
{
    return m_name;
}

void RoundPlayInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RoundPlayInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RoundPlayInfo::GetDesc() const
{
    return m_desc;
}

void RoundPlayInfo::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool RoundPlayInfo::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string RoundPlayInfo::GetStatus() const
{
    return m_status;
}

void RoundPlayInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RoundPlayInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RoundPlayInfo::GetPlayBackMode() const
{
    return m_playBackMode;
}

void RoundPlayInfo::SetPlayBackMode(const string& _playBackMode)
{
    m_playBackMode = _playBackMode;
    m_playBackModeHasBeenSet = true;
}

bool RoundPlayInfo::PlayBackModeHasBeenSet() const
{
    return m_playBackModeHasBeenSet;
}

string RoundPlayInfo::GetUrl() const
{
    return m_url;
}

void RoundPlayInfo::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool RoundPlayInfo::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string RoundPlayInfo::GetCreateTime() const
{
    return m_createTime;
}

void RoundPlayInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RoundPlayInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RoundPlayInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void RoundPlayInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RoundPlayInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RoundPlayInfo::GetExpiredTime() const
{
    return m_expiredTime;
}

void RoundPlayInfo::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool RoundPlayInfo::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

