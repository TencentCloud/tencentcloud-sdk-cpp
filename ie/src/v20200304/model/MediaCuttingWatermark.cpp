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

#include <tencentcloud/ie/v20200304/model/MediaCuttingWatermark.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaCuttingWatermark::MediaCuttingWatermark() :
    m_typeHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

CoreInternalOutcome MediaCuttingWatermark::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermark.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermark.Image` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_image.Deserialize(value["Image"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaCuttingWatermark.Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(value["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaCuttingWatermark::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_image.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MediaCuttingWatermark::GetType() const
{
    return m_type;
}

void MediaCuttingWatermark::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MediaCuttingWatermark::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

MediaCuttingWatermarkImage MediaCuttingWatermark::GetImage() const
{
    return m_image;
}

void MediaCuttingWatermark::SetImage(const MediaCuttingWatermarkImage& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool MediaCuttingWatermark::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

MediaCuttingWatermarkText MediaCuttingWatermark::GetText() const
{
    return m_text;
}

void MediaCuttingWatermark::SetText(const MediaCuttingWatermarkText& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool MediaCuttingWatermark::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

