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

#include <tencentcloud/tione/v20211111/model/MultiModalContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

MultiModalContent::MultiModalContent() :
    m_typeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_imageUrlHasBeenSet(false)
{
}

CoreInternalOutcome MultiModalContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiModalContent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiModalContent.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MultiModalContent.ImageUrl` is not object type").SetRequestId(requestId));
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

void MultiModalContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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


string MultiModalContent::GetType() const
{
    return m_type;
}

void MultiModalContent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MultiModalContent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string MultiModalContent::GetText() const
{
    return m_text;
}

void MultiModalContent::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool MultiModalContent::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

ImageUrl MultiModalContent::GetImageUrl() const
{
    return m_imageUrl;
}

void MultiModalContent::SetImageUrl(const ImageUrl& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool MultiModalContent::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

