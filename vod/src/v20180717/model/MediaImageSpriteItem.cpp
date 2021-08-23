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

#include <tencentcloud/vod/v20180717/model/MediaImageSpriteItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaImageSpriteItem::MediaImageSpriteItem() :
    m_definitionHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_imageUrlSetHasBeenSet(false),
    m_webVttUrlHasBeenSet(false)
{
}

CoreInternalOutcome MediaImageSpriteItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaImageSpriteItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaImageSpriteItem.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaImageSpriteItem.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediaImageSpriteItem.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("ImageUrlSet") && !value["ImageUrlSet"].IsNull())
    {
        if (!value["ImageUrlSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaImageSpriteItem.ImageUrlSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageUrlSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageUrlSet.push_back((*itr).GetString());
        }
        m_imageUrlSetHasBeenSet = true;
    }

    if (value.HasMember("WebVttUrl") && !value["WebVttUrl"].IsNull())
    {
        if (!value["WebVttUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaImageSpriteItem.WebVttUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webVttUrl = string(value["WebVttUrl"].GetString());
        m_webVttUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaImageSpriteItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_imageUrlSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrlSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageUrlSet.begin(); itr != m_imageUrlSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_webVttUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebVttUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webVttUrl.c_str(), allocator).Move(), allocator);
    }

}


int64_t MediaImageSpriteItem::GetDefinition() const
{
    return m_definition;
}

void MediaImageSpriteItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool MediaImageSpriteItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

int64_t MediaImageSpriteItem::GetHeight() const
{
    return m_height;
}

void MediaImageSpriteItem::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool MediaImageSpriteItem::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t MediaImageSpriteItem::GetWidth() const
{
    return m_width;
}

void MediaImageSpriteItem::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool MediaImageSpriteItem::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t MediaImageSpriteItem::GetTotalCount() const
{
    return m_totalCount;
}

void MediaImageSpriteItem::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool MediaImageSpriteItem::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<string> MediaImageSpriteItem::GetImageUrlSet() const
{
    return m_imageUrlSet;
}

void MediaImageSpriteItem::SetImageUrlSet(const vector<string>& _imageUrlSet)
{
    m_imageUrlSet = _imageUrlSet;
    m_imageUrlSetHasBeenSet = true;
}

bool MediaImageSpriteItem::ImageUrlSetHasBeenSet() const
{
    return m_imageUrlSetHasBeenSet;
}

string MediaImageSpriteItem::GetWebVttUrl() const
{
    return m_webVttUrl;
}

void MediaImageSpriteItem::SetWebVttUrl(const string& _webVttUrl)
{
    m_webVttUrl = _webVttUrl;
    m_webVttUrlHasBeenSet = true;
}

bool MediaImageSpriteItem::WebVttUrlHasBeenSet() const
{
    return m_webVttUrlHasBeenSet;
}

