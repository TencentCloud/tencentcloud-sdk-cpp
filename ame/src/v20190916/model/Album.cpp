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

#include <tencentcloud/ame/v20190916/model/Album.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ame::V20190916::Model;
using namespace std;

Album::Album() :
    m_albumNameHasBeenSet(false),
    m_imagePathMapHasBeenSet(false)
{
}

CoreInternalOutcome Album::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlbumName") && !value["AlbumName"].IsNull())
    {
        if (!value["AlbumName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Album.AlbumName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_albumName = string(value["AlbumName"].GetString());
        m_albumNameHasBeenSet = true;
    }

    if (value.HasMember("ImagePathMap") && !value["ImagePathMap"].IsNull())
    {
        if (!value["ImagePathMap"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Album.ImagePathMap` is not array type"));

        const rapidjson::Value &tmpValue = value["ImagePathMap"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImagePath item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imagePathMap.push_back(item);
        }
        m_imagePathMapHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Album::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_albumNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlbumName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_albumName.c_str(), allocator).Move(), allocator);
    }

    if (m_imagePathMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePathMap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imagePathMap.begin(); itr != m_imagePathMap.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Album::GetAlbumName() const
{
    return m_albumName;
}

void Album::SetAlbumName(const string& _albumName)
{
    m_albumName = _albumName;
    m_albumNameHasBeenSet = true;
}

bool Album::AlbumNameHasBeenSet() const
{
    return m_albumNameHasBeenSet;
}

vector<ImagePath> Album::GetImagePathMap() const
{
    return m_imagePathMap;
}

void Album::SetImagePathMap(const vector<ImagePath>& _imagePathMap)
{
    m_imagePathMap = _imagePathMap;
    m_imagePathMapHasBeenSet = true;
}

bool Album::ImagePathMapHasBeenSet() const
{
    return m_imagePathMapHasBeenSet;
}

