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

#include <tencentcloud/ame/v20190916/model/Item.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace rapidjson;
using namespace std;

Item::Item() :
    m_itemIDHasBeenSet(false),
    m_dataInfoHasBeenSet(false),
    m_albumHasBeenSet(false),
    m_artistsHasBeenSet(false)
{
}

CoreInternalOutcome Item::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemID") && !value["ItemID"].IsNull())
    {
        if (!value["ItemID"].IsString())
        {
            return CoreInternalOutcome(Error("response `Item.ItemID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemID = string(value["ItemID"].GetString());
        m_itemIDHasBeenSet = true;
    }

    if (value.HasMember("DataInfo") && !value["DataInfo"].IsNull())
    {
        if (!value["DataInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Item.DataInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataInfo.Deserialize(value["DataInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataInfoHasBeenSet = true;
    }

    if (value.HasMember("Album") && !value["Album"].IsNull())
    {
        if (!value["Album"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Item.Album` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_album.Deserialize(value["Album"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_albumHasBeenSet = true;
    }

    if (value.HasMember("Artists") && !value["Artists"].IsNull())
    {
        if (!value["Artists"].IsArray())
            return CoreInternalOutcome(Error("response `Item.Artists` is not array type"));

        const Value &tmpValue = value["Artists"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Artist item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_artists.push_back(item);
        }
        m_artistsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Item::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_itemIDHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ItemID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_itemID.c_str(), allocator).Move(), allocator);
    }

    if (m_dataInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DataInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_dataInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_albumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Album";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_album.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_artistsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Artists";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_artists.begin(); itr != m_artists.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Item::GetItemID() const
{
    return m_itemID;
}

void Item::SetItemID(const string& _itemID)
{
    m_itemID = _itemID;
    m_itemIDHasBeenSet = true;
}

bool Item::ItemIDHasBeenSet() const
{
    return m_itemIDHasBeenSet;
}

DataInfo Item::GetDataInfo() const
{
    return m_dataInfo;
}

void Item::SetDataInfo(const DataInfo& _dataInfo)
{
    m_dataInfo = _dataInfo;
    m_dataInfoHasBeenSet = true;
}

bool Item::DataInfoHasBeenSet() const
{
    return m_dataInfoHasBeenSet;
}

Album Item::GetAlbum() const
{
    return m_album;
}

void Item::SetAlbum(const Album& _album)
{
    m_album = _album;
    m_albumHasBeenSet = true;
}

bool Item::AlbumHasBeenSet() const
{
    return m_albumHasBeenSet;
}

vector<Artist> Item::GetArtists() const
{
    return m_artists;
}

void Item::SetArtists(const vector<Artist>& _artists)
{
    m_artists = _artists;
    m_artistsHasBeenSet = true;
}

bool Item::ArtistsHasBeenSet() const
{
    return m_artistsHasBeenSet;
}

