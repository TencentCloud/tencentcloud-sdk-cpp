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

#include <tencentcloud/hunyuan/v20230901/model/Content.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

Content::Content() :
    m_typeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_imageUrlHasBeenSet(false)
{
}

CoreInternalOutcome Content::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Content.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Content.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Content.ImageUrl` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageUrl.Deserialize(value["ImageUrl"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Content::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageUrl.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Content::GetType() const
{
    return m_type;
}

void Content::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Content::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Content::GetText() const
{
    return m_text;
}

void Content::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Content::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

ImageUrl Content::GetImageUrl() const
{
    return m_imageUrl;
}

void Content::SetImageUrl(const ImageUrl& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool Content::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

