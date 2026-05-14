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

#include <tencentcloud/mps/v20190612/model/AddOnImageInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AddOnImageInput::AddOnImageInput() :
    m_typeHasBeenSet(false),
    m_imageHasBeenSet(false)
{
}

CoreInternalOutcome AddOnImageInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnImageInput.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AddOnImageInput.Image` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_image.Deserialize(value["Image"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddOnImageInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string AddOnImageInput::GetType() const
{
    return m_type;
}

void AddOnImageInput::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AddOnImageInput::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

MediaInputInfo AddOnImageInput::GetImage() const
{
    return m_image;
}

void AddOnImageInput::SetImage(const MediaInputInfo& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool AddOnImageInput::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

