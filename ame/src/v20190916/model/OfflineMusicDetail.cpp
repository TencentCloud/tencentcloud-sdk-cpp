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

#include <tencentcloud/ame/v20190916/model/OfflineMusicDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

OfflineMusicDetail::OfflineMusicDetail() :
    m_itemIdHasBeenSet(false),
    m_musicNameHasBeenSet(false),
    m_offRemarkHasBeenSet(false),
    m_offTimeHasBeenSet(false)
{
}

CoreInternalOutcome OfflineMusicDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineMusicDetail.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("MusicName") && !value["MusicName"].IsNull())
    {
        if (!value["MusicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineMusicDetail.MusicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_musicName = string(value["MusicName"].GetString());
        m_musicNameHasBeenSet = true;
    }

    if (value.HasMember("OffRemark") && !value["OffRemark"].IsNull())
    {
        if (!value["OffRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineMusicDetail.OffRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offRemark = string(value["OffRemark"].GetString());
        m_offRemarkHasBeenSet = true;
    }

    if (value.HasMember("OffTime") && !value["OffTime"].IsNull())
    {
        if (!value["OffTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineMusicDetail.OffTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offTime = string(value["OffTime"].GetString());
        m_offTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OfflineMusicDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_musicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MusicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_musicName.c_str(), allocator).Move(), allocator);
    }

    if (m_offRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_offTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offTime.c_str(), allocator).Move(), allocator);
    }

}


string OfflineMusicDetail::GetItemId() const
{
    return m_itemId;
}

void OfflineMusicDetail::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool OfflineMusicDetail::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string OfflineMusicDetail::GetMusicName() const
{
    return m_musicName;
}

void OfflineMusicDetail::SetMusicName(const string& _musicName)
{
    m_musicName = _musicName;
    m_musicNameHasBeenSet = true;
}

bool OfflineMusicDetail::MusicNameHasBeenSet() const
{
    return m_musicNameHasBeenSet;
}

string OfflineMusicDetail::GetOffRemark() const
{
    return m_offRemark;
}

void OfflineMusicDetail::SetOffRemark(const string& _offRemark)
{
    m_offRemark = _offRemark;
    m_offRemarkHasBeenSet = true;
}

bool OfflineMusicDetail::OffRemarkHasBeenSet() const
{
    return m_offRemarkHasBeenSet;
}

string OfflineMusicDetail::GetOffTime() const
{
    return m_offTime;
}

void OfflineMusicDetail::SetOffTime(const string& _offTime)
{
    m_offTime = _offTime;
    m_offTimeHasBeenSet = true;
}

bool OfflineMusicDetail::OffTimeHasBeenSet() const
{
    return m_offTimeHasBeenSet;
}

