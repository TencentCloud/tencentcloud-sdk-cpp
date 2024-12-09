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

#include <tencentcloud/mps/v20190612/model/ImageEnhanceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ImageEnhanceConfig::ImageEnhanceConfig() :
    m_superResolutionHasBeenSet(false),
    m_colorEnhanceHasBeenSet(false),
    m_sharpEnhanceHasBeenSet(false),
    m_faceEnhanceHasBeenSet(false)
{
}

CoreInternalOutcome ImageEnhanceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SuperResolution") && !value["SuperResolution"].IsNull())
    {
        if (!value["SuperResolution"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageEnhanceConfig.SuperResolution` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_superResolution.Deserialize(value["SuperResolution"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_superResolutionHasBeenSet = true;
    }

    if (value.HasMember("ColorEnhance") && !value["ColorEnhance"].IsNull())
    {
        if (!value["ColorEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageEnhanceConfig.ColorEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_colorEnhance.Deserialize(value["ColorEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_colorEnhanceHasBeenSet = true;
    }

    if (value.HasMember("SharpEnhance") && !value["SharpEnhance"].IsNull())
    {
        if (!value["SharpEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageEnhanceConfig.SharpEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sharpEnhance.Deserialize(value["SharpEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sharpEnhanceHasBeenSet = true;
    }

    if (value.HasMember("FaceEnhance") && !value["FaceEnhance"].IsNull())
    {
        if (!value["FaceEnhance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageEnhanceConfig.FaceEnhance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceEnhance.Deserialize(value["FaceEnhance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceEnhanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageEnhanceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_superResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperResolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_superResolution.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_colorEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_colorEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sharpEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharpEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sharpEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_faceEnhanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceEnhance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceEnhance.ToJsonObject(value[key.c_str()], allocator);
    }

}


SuperResolutionConfig ImageEnhanceConfig::GetSuperResolution() const
{
    return m_superResolution;
}

void ImageEnhanceConfig::SetSuperResolution(const SuperResolutionConfig& _superResolution)
{
    m_superResolution = _superResolution;
    m_superResolutionHasBeenSet = true;
}

bool ImageEnhanceConfig::SuperResolutionHasBeenSet() const
{
    return m_superResolutionHasBeenSet;
}

ColorEnhanceConfig ImageEnhanceConfig::GetColorEnhance() const
{
    return m_colorEnhance;
}

void ImageEnhanceConfig::SetColorEnhance(const ColorEnhanceConfig& _colorEnhance)
{
    m_colorEnhance = _colorEnhance;
    m_colorEnhanceHasBeenSet = true;
}

bool ImageEnhanceConfig::ColorEnhanceHasBeenSet() const
{
    return m_colorEnhanceHasBeenSet;
}

SharpEnhanceConfig ImageEnhanceConfig::GetSharpEnhance() const
{
    return m_sharpEnhance;
}

void ImageEnhanceConfig::SetSharpEnhance(const SharpEnhanceConfig& _sharpEnhance)
{
    m_sharpEnhance = _sharpEnhance;
    m_sharpEnhanceHasBeenSet = true;
}

bool ImageEnhanceConfig::SharpEnhanceHasBeenSet() const
{
    return m_sharpEnhanceHasBeenSet;
}

FaceEnhanceConfig ImageEnhanceConfig::GetFaceEnhance() const
{
    return m_faceEnhance;
}

void ImageEnhanceConfig::SetFaceEnhance(const FaceEnhanceConfig& _faceEnhance)
{
    m_faceEnhance = _faceEnhance;
    m_faceEnhanceHasBeenSet = true;
}

bool ImageEnhanceConfig::FaceEnhanceHasBeenSet() const
{
    return m_faceEnhanceHasBeenSet;
}

