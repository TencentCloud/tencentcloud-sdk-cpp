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

#include <tencentcloud/hunyuan/v20230901/model/SongExt.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

SongExt::SongExt() :
    m_songIdHasBeenSet(false),
    m_songMidHasBeenSet(false),
    m_vipHasBeenSet(false)
{
}

CoreInternalOutcome SongExt::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SongId") && !value["SongId"].IsNull())
    {
        if (!value["SongId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SongExt.SongId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_songId = value["SongId"].GetInt64();
        m_songIdHasBeenSet = true;
    }

    if (value.HasMember("SongMid") && !value["SongMid"].IsNull())
    {
        if (!value["SongMid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SongExt.SongMid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_songMid = string(value["SongMid"].GetString());
        m_songMidHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SongExt.Vip` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vip = value["Vip"].GetInt64();
        m_vipHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SongExt::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_songIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SongId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_songId, allocator);
    }

    if (m_songMidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SongMid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_songMid.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vip, allocator);
    }

}


int64_t SongExt::GetSongId() const
{
    return m_songId;
}

void SongExt::SetSongId(const int64_t& _songId)
{
    m_songId = _songId;
    m_songIdHasBeenSet = true;
}

bool SongExt::SongIdHasBeenSet() const
{
    return m_songIdHasBeenSet;
}

string SongExt::GetSongMid() const
{
    return m_songMid;
}

void SongExt::SetSongMid(const string& _songMid)
{
    m_songMid = _songMid;
    m_songMidHasBeenSet = true;
}

bool SongExt::SongMidHasBeenSet() const
{
    return m_songMidHasBeenSet;
}

int64_t SongExt::GetVip() const
{
    return m_vip;
}

void SongExt::SetVip(const int64_t& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool SongExt::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

