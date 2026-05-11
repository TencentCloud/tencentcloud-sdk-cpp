/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/live/v20180801/model/SceneVideoReferenceImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

SceneVideoReferenceImageInfo::SceneVideoReferenceImageInfo() :
    m_imageUrlHasBeenSet(false),
    m_textHasBeenSet(false),
    m_referenceTypeHasBeenSet(false)
{
}

CoreInternalOutcome SceneVideoReferenceImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoReferenceImageInfo.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoReferenceImageInfo.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("ReferenceType") && !value["ReferenceType"].IsNull())
    {
        if (!value["ReferenceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SceneVideoReferenceImageInfo.ReferenceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceType = string(value["ReferenceType"].GetString());
        m_referenceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SceneVideoReferenceImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceType.c_str(), allocator).Move(), allocator);
    }

}


string SceneVideoReferenceImageInfo::GetImageUrl() const
{
    return m_imageUrl;
}

void SceneVideoReferenceImageInfo::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool SceneVideoReferenceImageInfo::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string SceneVideoReferenceImageInfo::GetText() const
{
    return m_text;
}

void SceneVideoReferenceImageInfo::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SceneVideoReferenceImageInfo::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string SceneVideoReferenceImageInfo::GetReferenceType() const
{
    return m_referenceType;
}

void SceneVideoReferenceImageInfo::SetReferenceType(const string& _referenceType)
{
    m_referenceType = _referenceType;
    m_referenceTypeHasBeenSet = true;
}

bool SceneVideoReferenceImageInfo::ReferenceTypeHasBeenSet() const
{
    return m_referenceTypeHasBeenSet;
}

