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

#include <tencentcloud/ivld/v20210903/model/ImageLogo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

ImageLogo::ImageLogo() :
    m_logoHasBeenSet(false),
    m_appearRectHasBeenSet(false)
{
}

CoreInternalOutcome ImageLogo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Logo") && !value["Logo"].IsNull())
    {
        if (!value["Logo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLogo.Logo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logo = string(value["Logo"].GetString());
        m_logoHasBeenSet = true;
    }

    if (value.HasMember("AppearRect") && !value["AppearRect"].IsNull())
    {
        if (!value["AppearRect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLogo.AppearRect` is not object type").SetRequestId(requestId));
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

void ImageLogo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logo.c_str(), allocator).Move(), allocator);
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


string ImageLogo::GetLogo() const
{
    return m_logo;
}

void ImageLogo::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool ImageLogo::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

Rectf ImageLogo::GetAppearRect() const
{
    return m_appearRect;
}

void ImageLogo::SetAppearRect(const Rectf& _appearRect)
{
    m_appearRect = _appearRect;
    m_appearRectHasBeenSet = true;
}

bool ImageLogo::AppearRectHasBeenSet() const
{
    return m_appearRectHasBeenSet;
}

