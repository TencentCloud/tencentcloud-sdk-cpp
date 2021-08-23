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

#include <tencentcloud/cme/v20191029/model/LinkMaterialInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

LinkMaterialInfo::LinkMaterialInfo() :
    m_basicInfoHasBeenSet(false),
    m_videoMaterialHasBeenSet(false),
    m_audioMaterialHasBeenSet(false),
    m_imageMaterialHasBeenSet(false)
{
}

CoreInternalOutcome LinkMaterialInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BasicInfo") && !value["BasicInfo"].IsNull())
    {
        if (!value["BasicInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LinkMaterialInfo.BasicInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicInfo.Deserialize(value["BasicInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicInfoHasBeenSet = true;
    }

    if (value.HasMember("VideoMaterial") && !value["VideoMaterial"].IsNull())
    {
        if (!value["VideoMaterial"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LinkMaterialInfo.VideoMaterial` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoMaterial.Deserialize(value["VideoMaterial"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoMaterialHasBeenSet = true;
    }

    if (value.HasMember("AudioMaterial") && !value["AudioMaterial"].IsNull())
    {
        if (!value["AudioMaterial"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LinkMaterialInfo.AudioMaterial` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioMaterial.Deserialize(value["AudioMaterial"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioMaterialHasBeenSet = true;
    }

    if (value.HasMember("ImageMaterial") && !value["ImageMaterial"].IsNull())
    {
        if (!value["ImageMaterial"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LinkMaterialInfo.ImageMaterial` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageMaterial.Deserialize(value["ImageMaterial"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageMaterialHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LinkMaterialInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_basicInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoMaterialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoMaterial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoMaterial.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_audioMaterialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioMaterial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioMaterial.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageMaterialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageMaterial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageMaterial.ToJsonObject(value[key.c_str()], allocator);
    }

}


MaterialBasicInfo LinkMaterialInfo::GetBasicInfo() const
{
    return m_basicInfo;
}

void LinkMaterialInfo::SetBasicInfo(const MaterialBasicInfo& _basicInfo)
{
    m_basicInfo = _basicInfo;
    m_basicInfoHasBeenSet = true;
}

bool LinkMaterialInfo::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}

VideoMaterial LinkMaterialInfo::GetVideoMaterial() const
{
    return m_videoMaterial;
}

void LinkMaterialInfo::SetVideoMaterial(const VideoMaterial& _videoMaterial)
{
    m_videoMaterial = _videoMaterial;
    m_videoMaterialHasBeenSet = true;
}

bool LinkMaterialInfo::VideoMaterialHasBeenSet() const
{
    return m_videoMaterialHasBeenSet;
}

AudioMaterial LinkMaterialInfo::GetAudioMaterial() const
{
    return m_audioMaterial;
}

void LinkMaterialInfo::SetAudioMaterial(const AudioMaterial& _audioMaterial)
{
    m_audioMaterial = _audioMaterial;
    m_audioMaterialHasBeenSet = true;
}

bool LinkMaterialInfo::AudioMaterialHasBeenSet() const
{
    return m_audioMaterialHasBeenSet;
}

ImageMaterial LinkMaterialInfo::GetImageMaterial() const
{
    return m_imageMaterial;
}

void LinkMaterialInfo::SetImageMaterial(const ImageMaterial& _imageMaterial)
{
    m_imageMaterial = _imageMaterial;
    m_imageMaterialHasBeenSet = true;
}

bool LinkMaterialInfo::ImageMaterialHasBeenSet() const
{
    return m_imageMaterialHasBeenSet;
}

