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

#include <tencentcloud/tiia/v20190529/model/ImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

ImageInfo::ImageInfo() :
    m_entityIdHasBeenSet(false),
    m_customContentHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_picNameHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome ImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EntityId") && !value["EntityId"].IsNull())
    {
        if (!value["EntityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.EntityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityId = string(value["EntityId"].GetString());
        m_entityIdHasBeenSet = true;
    }

    if (value.HasMember("CustomContent") && !value["CustomContent"].IsNull())
    {
        if (!value["CustomContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.CustomContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customContent = string(value["CustomContent"].GetString());
        m_customContentHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("PicName") && !value["PicName"].IsNull())
    {
        if (!value["PicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.PicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_picName = string(value["PicName"].GetString());
        m_picNameHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageInfo.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_customContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customContent.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_picNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_picName.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

}


string ImageInfo::GetEntityId() const
{
    return m_entityId;
}

void ImageInfo::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool ImageInfo::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

string ImageInfo::GetCustomContent() const
{
    return m_customContent;
}

void ImageInfo::SetCustomContent(const string& _customContent)
{
    m_customContent = _customContent;
    m_customContentHasBeenSet = true;
}

bool ImageInfo::CustomContentHasBeenSet() const
{
    return m_customContentHasBeenSet;
}

string ImageInfo::GetTags() const
{
    return m_tags;
}

void ImageInfo::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ImageInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ImageInfo::GetPicName() const
{
    return m_picName;
}

void ImageInfo::SetPicName(const string& _picName)
{
    m_picName = _picName;
    m_picNameHasBeenSet = true;
}

bool ImageInfo::PicNameHasBeenSet() const
{
    return m_picNameHasBeenSet;
}

int64_t ImageInfo::GetScore() const
{
    return m_score;
}

void ImageInfo::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ImageInfo::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

