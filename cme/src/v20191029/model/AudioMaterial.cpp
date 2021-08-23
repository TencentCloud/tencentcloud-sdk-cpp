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

#include <tencentcloud/cme/v20191029/model/AudioMaterial.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

AudioMaterial::AudioMaterial() :
    m_metaDataHasBeenSet(false),
    m_materialUrlHasBeenSet(false),
    m_coverUrlHasBeenSet(false),
    m_materialStatusHasBeenSet(false),
    m_originalUrlHasBeenSet(false),
    m_vodFileIdHasBeenSet(false)
{
}

CoreInternalOutcome AudioMaterial::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMaterial.MetaData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metaData.Deserialize(value["MetaData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metaDataHasBeenSet = true;
    }

    if (value.HasMember("MaterialUrl") && !value["MaterialUrl"].IsNull())
    {
        if (!value["MaterialUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMaterial.MaterialUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_materialUrl = string(value["MaterialUrl"].GetString());
        m_materialUrlHasBeenSet = true;
    }

    if (value.HasMember("CoverUrl") && !value["CoverUrl"].IsNull())
    {
        if (!value["CoverUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMaterial.CoverUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverUrl = string(value["CoverUrl"].GetString());
        m_coverUrlHasBeenSet = true;
    }

    if (value.HasMember("MaterialStatus") && !value["MaterialStatus"].IsNull())
    {
        if (!value["MaterialStatus"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMaterial.MaterialStatus` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_materialStatus.Deserialize(value["MaterialStatus"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_materialStatusHasBeenSet = true;
    }

    if (value.HasMember("OriginalUrl") && !value["OriginalUrl"].IsNull())
    {
        if (!value["OriginalUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMaterial.OriginalUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalUrl = string(value["OriginalUrl"].GetString());
        m_originalUrlHasBeenSet = true;
    }

    if (value.HasMember("VodFileId") && !value["VodFileId"].IsNull())
    {
        if (!value["VodFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioMaterial.VodFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vodFileId = string(value["VodFileId"].GetString());
        m_vodFileIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioMaterial::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metaData.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_materialUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_materialUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_coverUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coverUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_materialStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaterialStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_materialStatus.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originalUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_vodFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vodFileId.c_str(), allocator).Move(), allocator);
    }

}


MediaMetaData AudioMaterial::GetMetaData() const
{
    return m_metaData;
}

void AudioMaterial::SetMetaData(const MediaMetaData& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool AudioMaterial::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

string AudioMaterial::GetMaterialUrl() const
{
    return m_materialUrl;
}

void AudioMaterial::SetMaterialUrl(const string& _materialUrl)
{
    m_materialUrl = _materialUrl;
    m_materialUrlHasBeenSet = true;
}

bool AudioMaterial::MaterialUrlHasBeenSet() const
{
    return m_materialUrlHasBeenSet;
}

string AudioMaterial::GetCoverUrl() const
{
    return m_coverUrl;
}

void AudioMaterial::SetCoverUrl(const string& _coverUrl)
{
    m_coverUrl = _coverUrl;
    m_coverUrlHasBeenSet = true;
}

bool AudioMaterial::CoverUrlHasBeenSet() const
{
    return m_coverUrlHasBeenSet;
}

MaterialStatus AudioMaterial::GetMaterialStatus() const
{
    return m_materialStatus;
}

void AudioMaterial::SetMaterialStatus(const MaterialStatus& _materialStatus)
{
    m_materialStatus = _materialStatus;
    m_materialStatusHasBeenSet = true;
}

bool AudioMaterial::MaterialStatusHasBeenSet() const
{
    return m_materialStatusHasBeenSet;
}

string AudioMaterial::GetOriginalUrl() const
{
    return m_originalUrl;
}

void AudioMaterial::SetOriginalUrl(const string& _originalUrl)
{
    m_originalUrl = _originalUrl;
    m_originalUrlHasBeenSet = true;
}

bool AudioMaterial::OriginalUrlHasBeenSet() const
{
    return m_originalUrlHasBeenSet;
}

string AudioMaterial::GetVodFileId() const
{
    return m_vodFileId;
}

void AudioMaterial::SetVodFileId(const string& _vodFileId)
{
    m_vodFileId = _vodFileId;
    m_vodFileIdHasBeenSet = true;
}

bool AudioMaterial::VodFileIdHasBeenSet() const
{
    return m_vodFileIdHasBeenSet;
}

