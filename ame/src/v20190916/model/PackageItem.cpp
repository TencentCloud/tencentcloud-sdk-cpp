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

#include <tencentcloud/ame/v20190916/model/PackageItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

PackageItem::PackageItem() :
    m_orderIdHasBeenSet(false),
    m_trackNameHasBeenSet(false),
    m_itemIDHasBeenSet(false),
    m_imgHasBeenSet(false),
    m_artistNameHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_authorizedAreaHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome PackageItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageItem.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("TrackName") && !value["TrackName"].IsNull())
    {
        if (!value["TrackName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageItem.TrackName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trackName = string(value["TrackName"].GetString());
        m_trackNameHasBeenSet = true;
    }

    if (value.HasMember("ItemID") && !value["ItemID"].IsNull())
    {
        if (!value["ItemID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageItem.ItemID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemID = string(value["ItemID"].GetString());
        m_itemIDHasBeenSet = true;
    }

    if (value.HasMember("Img") && !value["Img"].IsNull())
    {
        if (!value["Img"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageItem.Img` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_img = string(value["Img"].GetString());
        m_imgHasBeenSet = true;
    }

    if (value.HasMember("ArtistName") && !value["ArtistName"].IsNull())
    {
        if (!value["ArtistName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageItem.ArtistName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_artistName = string(value["ArtistName"].GetString());
        m_artistNameHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageItem.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("AuthorizedArea") && !value["AuthorizedArea"].IsNull())
    {
        if (!value["AuthorizedArea"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PackageItem.AuthorizedArea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizedArea = string(value["AuthorizedArea"].GetString());
        m_authorizedAreaHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PackageItem.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PackageItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_trackNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trackName.c_str(), allocator).Move(), allocator);
    }

    if (m_itemIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemID.c_str(), allocator).Move(), allocator);
    }

    if (m_imgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Img";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_img.c_str(), allocator).Move(), allocator);
    }

    if (m_artistNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArtistName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_artistName.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizedArea.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string PackageItem::GetOrderId() const
{
    return m_orderId;
}

void PackageItem::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool PackageItem::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string PackageItem::GetTrackName() const
{
    return m_trackName;
}

void PackageItem::SetTrackName(const string& _trackName)
{
    m_trackName = _trackName;
    m_trackNameHasBeenSet = true;
}

bool PackageItem::TrackNameHasBeenSet() const
{
    return m_trackNameHasBeenSet;
}

string PackageItem::GetItemID() const
{
    return m_itemID;
}

void PackageItem::SetItemID(const string& _itemID)
{
    m_itemID = _itemID;
    m_itemIDHasBeenSet = true;
}

bool PackageItem::ItemIDHasBeenSet() const
{
    return m_itemIDHasBeenSet;
}

string PackageItem::GetImg() const
{
    return m_img;
}

void PackageItem::SetImg(const string& _img)
{
    m_img = _img;
    m_imgHasBeenSet = true;
}

bool PackageItem::ImgHasBeenSet() const
{
    return m_imgHasBeenSet;
}

string PackageItem::GetArtistName() const
{
    return m_artistName;
}

void PackageItem::SetArtistName(const string& _artistName)
{
    m_artistName = _artistName;
    m_artistNameHasBeenSet = true;
}

bool PackageItem::ArtistNameHasBeenSet() const
{
    return m_artistNameHasBeenSet;
}

string PackageItem::GetDuration() const
{
    return m_duration;
}

void PackageItem::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool PackageItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string PackageItem::GetAuthorizedArea() const
{
    return m_authorizedArea;
}

void PackageItem::SetAuthorizedArea(const string& _authorizedArea)
{
    m_authorizedArea = _authorizedArea;
    m_authorizedAreaHasBeenSet = true;
}

bool PackageItem::AuthorizedAreaHasBeenSet() const
{
    return m_authorizedAreaHasBeenSet;
}

vector<string> PackageItem::GetTags() const
{
    return m_tags;
}

void PackageItem::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool PackageItem::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

