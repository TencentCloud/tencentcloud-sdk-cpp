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

#include <tencentcloud/cme/v20191029/model/VideoMaterial.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace rapidjson;
using namespace std;

VideoMaterial::VideoMaterial() :
    m_metaDataHasBeenSet(false),
    m_imageSpriteInfoHasBeenSet(false),
    m_materialUrlHasBeenSet(false),
    m_coverUrlHasBeenSet(false),
    m_resolutionHasBeenSet(false)
{
}

CoreInternalOutcome VideoMaterial::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `VideoMaterial.MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(value["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }

    if (value.HasMember("ImageSpriteInfo") && !value["ImageSpriteInfo"].IsNull())
    {
        if (!value["ImageSpriteInfo"].IsObject())
        {
            return CoreInternalOutcome(Error("response `VideoMaterial.ImageSpriteInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageSpriteInfo.Deserialize(value["ImageSpriteInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageSpriteInfoHasBeenSet = true;
    }

    if (value.HasMember("MaterialUrl") && !value["MaterialUrl"].IsNull())
    {
        if (!value["MaterialUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoMaterial.MaterialUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialUrl = string(value["MaterialUrl"].GetString());
        m_materialUrlHasBeenSet = true;
    }

    if (value.HasMember("CoverUrl") && !value["CoverUrl"].IsNull())
    {
        if (!value["CoverUrl"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoMaterial.CoverUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverUrl = string(value["CoverUrl"].GetString());
        m_coverUrlHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Error("response `VideoMaterial.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoMaterial::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_metaDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_metaData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageSpriteInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageSpriteInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_imageSpriteInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_materialUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaterialUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_materialUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_coverUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoverUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_coverUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

}


MediaMetaData VideoMaterial::GetMetaData() const
{
    return m_metaData;
}

void VideoMaterial::SetMetaData(const MediaMetaData& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool VideoMaterial::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

MediaImageSpriteInfo VideoMaterial::GetImageSpriteInfo() const
{
    return m_imageSpriteInfo;
}

void VideoMaterial::SetImageSpriteInfo(const MediaImageSpriteInfo& _imageSpriteInfo)
{
    m_imageSpriteInfo = _imageSpriteInfo;
    m_imageSpriteInfoHasBeenSet = true;
}

bool VideoMaterial::ImageSpriteInfoHasBeenSet() const
{
    return m_imageSpriteInfoHasBeenSet;
}

string VideoMaterial::GetMaterialUrl() const
{
    return m_materialUrl;
}

void VideoMaterial::SetMaterialUrl(const string& _materialUrl)
{
    m_materialUrl = _materialUrl;
    m_materialUrlHasBeenSet = true;
}

bool VideoMaterial::MaterialUrlHasBeenSet() const
{
    return m_materialUrlHasBeenSet;
}

string VideoMaterial::GetCoverUrl() const
{
    return m_coverUrl;
}

void VideoMaterial::SetCoverUrl(const string& _coverUrl)
{
    m_coverUrl = _coverUrl;
    m_coverUrlHasBeenSet = true;
}

bool VideoMaterial::CoverUrlHasBeenSet() const
{
    return m_coverUrlHasBeenSet;
}

string VideoMaterial::GetResolution() const
{
    return m_resolution;
}

void VideoMaterial::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool VideoMaterial::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

