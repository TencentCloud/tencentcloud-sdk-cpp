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

#include <tencentcloud/mps/v20190612/model/AiFissionInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AiFissionInput::AiFissionInput() :
    m_imageUrlsHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

CoreInternalOutcome AiFissionInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageUrls") && !value["ImageUrls"].IsNull())
    {
        if (!value["ImageUrls"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AiFissionInput.ImageUrls` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageUrls"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageUrls.push_back((*itr).GetString());
        }
        m_imageUrlsHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AiFissionInput.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AiFissionInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageUrlsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageUrls.begin(); itr != m_imageUrls.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

}


vector<string> AiFissionInput::GetImageUrls() const
{
    return m_imageUrls;
}

void AiFissionInput::SetImageUrls(const vector<string>& _imageUrls)
{
    m_imageUrls = _imageUrls;
    m_imageUrlsHasBeenSet = true;
}

bool AiFissionInput::ImageUrlsHasBeenSet() const
{
    return m_imageUrlsHasBeenSet;
}

string AiFissionInput::GetText() const
{
    return m_text;
}

void AiFissionInput::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool AiFissionInput::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

