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

#include <tencentcloud/cme/v20191029/model/MaterialInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

MaterialInfo::MaterialInfo() :
    m_basicInfoHasBeenSet(false),
    m_videoMaterialHasBeenSet(false),
    m_audioMaterialHasBeenSet(false),
    m_imageMaterialHasBeenSet(false),
    m_linkMaterialHasBeenSet(false),
    m_videoEditTemplateMaterialHasBeenSet(false),
    m_otherMaterialHasBeenSet(false)
{
}

CoreInternalOutcome MaterialInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BasicInfo") && !value["BasicInfo"].IsNull())
    {
        if (!value["BasicInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.BasicInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.VideoMaterial` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.AudioMaterial` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.ImageMaterial` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageMaterial.Deserialize(value["ImageMaterial"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageMaterialHasBeenSet = true;
    }

    if (value.HasMember("LinkMaterial") && !value["LinkMaterial"].IsNull())
    {
        if (!value["LinkMaterial"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.LinkMaterial` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_linkMaterial.Deserialize(value["LinkMaterial"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_linkMaterialHasBeenSet = true;
    }

    if (value.HasMember("VideoEditTemplateMaterial") && !value["VideoEditTemplateMaterial"].IsNull())
    {
        if (!value["VideoEditTemplateMaterial"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.VideoEditTemplateMaterial` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_videoEditTemplateMaterial.Deserialize(value["VideoEditTemplateMaterial"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoEditTemplateMaterialHasBeenSet = true;
    }

    if (value.HasMember("OtherMaterial") && !value["OtherMaterial"].IsNull())
    {
        if (!value["OtherMaterial"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MaterialInfo.OtherMaterial` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_otherMaterial.Deserialize(value["OtherMaterial"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_otherMaterialHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MaterialInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_linkMaterialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkMaterial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_linkMaterial.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_videoEditTemplateMaterialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoEditTemplateMaterial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_videoEditTemplateMaterial.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_otherMaterialHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherMaterial";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_otherMaterial.ToJsonObject(value[key.c_str()], allocator);
    }

}


MaterialBasicInfo MaterialInfo::GetBasicInfo() const
{
    return m_basicInfo;
}

void MaterialInfo::SetBasicInfo(const MaterialBasicInfo& _basicInfo)
{
    m_basicInfo = _basicInfo;
    m_basicInfoHasBeenSet = true;
}

bool MaterialInfo::BasicInfoHasBeenSet() const
{
    return m_basicInfoHasBeenSet;
}

VideoMaterial MaterialInfo::GetVideoMaterial() const
{
    return m_videoMaterial;
}

void MaterialInfo::SetVideoMaterial(const VideoMaterial& _videoMaterial)
{
    m_videoMaterial = _videoMaterial;
    m_videoMaterialHasBeenSet = true;
}

bool MaterialInfo::VideoMaterialHasBeenSet() const
{
    return m_videoMaterialHasBeenSet;
}

AudioMaterial MaterialInfo::GetAudioMaterial() const
{
    return m_audioMaterial;
}

void MaterialInfo::SetAudioMaterial(const AudioMaterial& _audioMaterial)
{
    m_audioMaterial = _audioMaterial;
    m_audioMaterialHasBeenSet = true;
}

bool MaterialInfo::AudioMaterialHasBeenSet() const
{
    return m_audioMaterialHasBeenSet;
}

ImageMaterial MaterialInfo::GetImageMaterial() const
{
    return m_imageMaterial;
}

void MaterialInfo::SetImageMaterial(const ImageMaterial& _imageMaterial)
{
    m_imageMaterial = _imageMaterial;
    m_imageMaterialHasBeenSet = true;
}

bool MaterialInfo::ImageMaterialHasBeenSet() const
{
    return m_imageMaterialHasBeenSet;
}

LinkMaterial MaterialInfo::GetLinkMaterial() const
{
    return m_linkMaterial;
}

void MaterialInfo::SetLinkMaterial(const LinkMaterial& _linkMaterial)
{
    m_linkMaterial = _linkMaterial;
    m_linkMaterialHasBeenSet = true;
}

bool MaterialInfo::LinkMaterialHasBeenSet() const
{
    return m_linkMaterialHasBeenSet;
}

VideoEditTemplateMaterial MaterialInfo::GetVideoEditTemplateMaterial() const
{
    return m_videoEditTemplateMaterial;
}

void MaterialInfo::SetVideoEditTemplateMaterial(const VideoEditTemplateMaterial& _videoEditTemplateMaterial)
{
    m_videoEditTemplateMaterial = _videoEditTemplateMaterial;
    m_videoEditTemplateMaterialHasBeenSet = true;
}

bool MaterialInfo::VideoEditTemplateMaterialHasBeenSet() const
{
    return m_videoEditTemplateMaterialHasBeenSet;
}

OtherMaterial MaterialInfo::GetOtherMaterial() const
{
    return m_otherMaterial;
}

void MaterialInfo::SetOtherMaterial(const OtherMaterial& _otherMaterial)
{
    m_otherMaterial = _otherMaterial;
    m_otherMaterialHasBeenSet = true;
}

bool MaterialInfo::OtherMaterialHasBeenSet() const
{
    return m_otherMaterialHasBeenSet;
}

