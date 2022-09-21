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

#include <tencentcloud/ivld/v20210903/model/ImageOcr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

ImageOcr::ImageOcr() :
    m_contentHasBeenSet(false),
    m_appearRectHasBeenSet(false)
{
}

CoreInternalOutcome ImageOcr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageOcr.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("AppearRect") && !value["AppearRect"].IsNull())
    {
        if (!value["AppearRect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageOcr.AppearRect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appearRect.Deserialize(value["AppearRect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appearRectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageOcr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_appearRectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppearRect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appearRect.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ImageOcr::GetContent() const
{
    return m_content;
}

void ImageOcr::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ImageOcr::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

Rectf ImageOcr::GetAppearRect() const
{
    return m_appearRect;
}

void ImageOcr::SetAppearRect(const Rectf& _appearRect)
{
    m_appearRect = _appearRect;
    m_appearRectHasBeenSet = true;
}

bool ImageOcr::AppearRectHasBeenSet() const
{
    return m_appearRectHasBeenSet;
}

