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

#include <tencentcloud/csip/v20221121/model/ImageScanAssetTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageScanAssetTarget::ImageScanAssetTarget() :
    m_modeHasBeenSet(false),
    m_excludeImagesHasBeenSet(false),
    m_imagesHasBeenSet(false),
    m_autoMatchHasBeenSet(false)
{
}

CoreInternalOutcome ImageScanAssetTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanAssetTarget.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("ExcludeImages") && !value["ExcludeImages"].IsNull())
    {
        if (!value["ExcludeImages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageScanAssetTarget.ExcludeImages` is not array type"));

        const rapidjson::Value &tmpValue = value["ExcludeImages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_excludeImages.push_back((*itr).GetString());
        }
        m_excludeImagesHasBeenSet = true;
    }

    if (value.HasMember("Images") && !value["Images"].IsNull())
    {
        if (!value["Images"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageScanAssetTarget.Images` is not array type"));

        const rapidjson::Value &tmpValue = value["Images"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_images.push_back((*itr).GetString());
        }
        m_imagesHasBeenSet = true;
    }

    if (value.HasMember("AutoMatch") && !value["AutoMatch"].IsNull())
    {
        if (!value["AutoMatch"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageScanAssetTarget.AutoMatch` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_autoMatch.Deserialize(value["AutoMatch"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_autoMatchHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageScanAssetTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_excludeImagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExcludeImages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludeImages.begin(); itr != m_excludeImages.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Images";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_images.begin(); itr != m_images.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoMatch.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ImageScanAssetTarget::GetMode() const
{
    return m_mode;
}

void ImageScanAssetTarget::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ImageScanAssetTarget::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<string> ImageScanAssetTarget::GetExcludeImages() const
{
    return m_excludeImages;
}

void ImageScanAssetTarget::SetExcludeImages(const vector<string>& _excludeImages)
{
    m_excludeImages = _excludeImages;
    m_excludeImagesHasBeenSet = true;
}

bool ImageScanAssetTarget::ExcludeImagesHasBeenSet() const
{
    return m_excludeImagesHasBeenSet;
}

vector<string> ImageScanAssetTarget::GetImages() const
{
    return m_images;
}

void ImageScanAssetTarget::SetImages(const vector<string>& _images)
{
    m_images = _images;
    m_imagesHasBeenSet = true;
}

bool ImageScanAssetTarget::ImagesHasBeenSet() const
{
    return m_imagesHasBeenSet;
}

ImageScanAutoMatchConfig ImageScanAssetTarget::GetAutoMatch() const
{
    return m_autoMatch;
}

void ImageScanAssetTarget::SetAutoMatch(const ImageScanAutoMatchConfig& _autoMatch)
{
    m_autoMatch = _autoMatch;
    m_autoMatchHasBeenSet = true;
}

bool ImageScanAssetTarget::AutoMatchHasBeenSet() const
{
    return m_autoMatchHasBeenSet;
}

