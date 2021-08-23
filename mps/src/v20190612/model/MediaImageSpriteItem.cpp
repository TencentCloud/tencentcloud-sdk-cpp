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

#include <tencentcloud/mps/v20190612/model/MediaImageSpriteItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

MediaImageSpriteItem::MediaImageSpriteItem() :
    m_definitionHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_imagePathSetHasBeenSet(false),
    m_webVttPathHasBeenSet(false),
    m_storageHasBeenSet(false)
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

    if (value.HasMember("ImagePathSet") && !value["ImagePathSet"].IsNull())
    {
        if (!value["ImagePathSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaImageSpriteItem.ImagePathSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImagePathSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imagePathSet.push_back((*itr).GetString());
        }
        m_imagePathSetHasBeenSet = true;
    }

    if (value.HasMember("WebVttPath") && !value["WebVttPath"].IsNull())
    {
        if (!value["WebVttPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaImageSpriteItem.WebVttPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webVttPath = string(value["WebVttPath"].GetString());
        m_webVttPathHasBeenSet = true;
    }

    if (value.HasMember("Storage") && !value["Storage"].IsNull())
    {
        if (!value["Storage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaImageSpriteItem.Storage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storage.Deserialize(value["Storage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageHasBeenSet = true;
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

    if (m_imagePathSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImagePathSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imagePathSet.begin(); itr != m_imagePathSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_webVttPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebVttPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webVttPath.c_str(), allocator).Move(), allocator);
    }

    if (m_storageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Storage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storage.ToJsonObject(value[key.c_str()], allocator);
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

vector<string> MediaImageSpriteItem::GetImagePathSet() const
{
    return m_imagePathSet;
}

void MediaImageSpriteItem::SetImagePathSet(const vector<string>& _imagePathSet)
{
    m_imagePathSet = _imagePathSet;
    m_imagePathSetHasBeenSet = true;
}

bool MediaImageSpriteItem::ImagePathSetHasBeenSet() const
{
    return m_imagePathSetHasBeenSet;
}

string MediaImageSpriteItem::GetWebVttPath() const
{
    return m_webVttPath;
}

void MediaImageSpriteItem::SetWebVttPath(const string& _webVttPath)
{
    m_webVttPath = _webVttPath;
    m_webVttPathHasBeenSet = true;
}

bool MediaImageSpriteItem::WebVttPathHasBeenSet() const
{
    return m_webVttPathHasBeenSet;
}

TaskOutputStorage MediaImageSpriteItem::GetStorage() const
{
    return m_storage;
}

void MediaImageSpriteItem::SetStorage(const TaskOutputStorage& _storage)
{
    m_storage = _storage;
    m_storageHasBeenSet = true;
}

bool MediaImageSpriteItem::StorageHasBeenSet() const
{
    return m_storageHasBeenSet;
}

