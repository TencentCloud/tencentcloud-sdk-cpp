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

#include <tencentcloud/vod/v20180717/model/PlayerConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

PlayerConfig::PlayerConfig() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_audioVideoTypeHasBeenSet(false),
    m_drmSwitchHasBeenSet(false),
    m_adaptiveDynamicStreamingDefinitionHasBeenSet(false),
    m_drmStreamingsInfoHasBeenSet(false),
    m_transcodeDefinitionHasBeenSet(false),
    m_imageSpriteDefinitionHasBeenSet(false),
    m_resolutionNameSetHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

CoreInternalOutcome PlayerConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AudioVideoType") && !value["AudioVideoType"].IsNull())
    {
        if (!value["AudioVideoType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.AudioVideoType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioVideoType = string(value["AudioVideoType"].GetString());
        m_audioVideoTypeHasBeenSet = true;
    }

    if (value.HasMember("DrmSwitch") && !value["DrmSwitch"].IsNull())
    {
        if (!value["DrmSwitch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.DrmSwitch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drmSwitch = string(value["DrmSwitch"].GetString());
        m_drmSwitchHasBeenSet = true;
    }

    if (value.HasMember("AdaptiveDynamicStreamingDefinition") && !value["AdaptiveDynamicStreamingDefinition"].IsNull())
    {
        if (!value["AdaptiveDynamicStreamingDefinition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.AdaptiveDynamicStreamingDefinition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_adaptiveDynamicStreamingDefinition = value["AdaptiveDynamicStreamingDefinition"].GetUint64();
        m_adaptiveDynamicStreamingDefinitionHasBeenSet = true;
    }

    if (value.HasMember("DrmStreamingsInfo") && !value["DrmStreamingsInfo"].IsNull())
    {
        if (!value["DrmStreamingsInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.DrmStreamingsInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_drmStreamingsInfo.Deserialize(value["DrmStreamingsInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_drmStreamingsInfoHasBeenSet = true;
    }

    if (value.HasMember("TranscodeDefinition") && !value["TranscodeDefinition"].IsNull())
    {
        if (!value["TranscodeDefinition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.TranscodeDefinition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transcodeDefinition = value["TranscodeDefinition"].GetUint64();
        m_transcodeDefinitionHasBeenSet = true;
    }

    if (value.HasMember("ImageSpriteDefinition") && !value["ImageSpriteDefinition"].IsNull())
    {
        if (!value["ImageSpriteDefinition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.ImageSpriteDefinition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageSpriteDefinition = value["ImageSpriteDefinition"].GetUint64();
        m_imageSpriteDefinitionHasBeenSet = true;
    }

    if (value.HasMember("ResolutionNameSet") && !value["ResolutionNameSet"].IsNull())
    {
        if (!value["ResolutionNameSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.ResolutionNameSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ResolutionNameSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResolutionNameInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resolutionNameSet.push_back(item);
        }
        m_resolutionNameSetHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Scheme") && !value["Scheme"].IsNull())
    {
        if (!value["Scheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.Scheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheme = string(value["Scheme"].GetString());
        m_schemeHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlayerConfig.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlayerConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_audioVideoTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioVideoType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioVideoType.c_str(), allocator).Move(), allocator);
    }

    if (m_drmSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrmSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drmSwitch.c_str(), allocator).Move(), allocator);
    }

    if (m_adaptiveDynamicStreamingDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdaptiveDynamicStreamingDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adaptiveDynamicStreamingDefinition, allocator);
    }

    if (m_drmStreamingsInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrmStreamingsInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_drmStreamingsInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_transcodeDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranscodeDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transcodeDefinition, allocator);
    }

    if (m_imageSpriteDefinitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageSpriteDefinition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageSpriteDefinition, allocator);
    }

    if (m_resolutionNameSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResolutionNameSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resolutionNameSet.begin(); itr != m_resolutionNameSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

}


string PlayerConfig::GetName() const
{
    return m_name;
}

void PlayerConfig::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PlayerConfig::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string PlayerConfig::GetType() const
{
    return m_type;
}

void PlayerConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PlayerConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string PlayerConfig::GetAudioVideoType() const
{
    return m_audioVideoType;
}

void PlayerConfig::SetAudioVideoType(const string& _audioVideoType)
{
    m_audioVideoType = _audioVideoType;
    m_audioVideoTypeHasBeenSet = true;
}

bool PlayerConfig::AudioVideoTypeHasBeenSet() const
{
    return m_audioVideoTypeHasBeenSet;
}

string PlayerConfig::GetDrmSwitch() const
{
    return m_drmSwitch;
}

void PlayerConfig::SetDrmSwitch(const string& _drmSwitch)
{
    m_drmSwitch = _drmSwitch;
    m_drmSwitchHasBeenSet = true;
}

bool PlayerConfig::DrmSwitchHasBeenSet() const
{
    return m_drmSwitchHasBeenSet;
}

uint64_t PlayerConfig::GetAdaptiveDynamicStreamingDefinition() const
{
    return m_adaptiveDynamicStreamingDefinition;
}

void PlayerConfig::SetAdaptiveDynamicStreamingDefinition(const uint64_t& _adaptiveDynamicStreamingDefinition)
{
    m_adaptiveDynamicStreamingDefinition = _adaptiveDynamicStreamingDefinition;
    m_adaptiveDynamicStreamingDefinitionHasBeenSet = true;
}

bool PlayerConfig::AdaptiveDynamicStreamingDefinitionHasBeenSet() const
{
    return m_adaptiveDynamicStreamingDefinitionHasBeenSet;
}

DrmStreamingsInfo PlayerConfig::GetDrmStreamingsInfo() const
{
    return m_drmStreamingsInfo;
}

void PlayerConfig::SetDrmStreamingsInfo(const DrmStreamingsInfo& _drmStreamingsInfo)
{
    m_drmStreamingsInfo = _drmStreamingsInfo;
    m_drmStreamingsInfoHasBeenSet = true;
}

bool PlayerConfig::DrmStreamingsInfoHasBeenSet() const
{
    return m_drmStreamingsInfoHasBeenSet;
}

uint64_t PlayerConfig::GetTranscodeDefinition() const
{
    return m_transcodeDefinition;
}

void PlayerConfig::SetTranscodeDefinition(const uint64_t& _transcodeDefinition)
{
    m_transcodeDefinition = _transcodeDefinition;
    m_transcodeDefinitionHasBeenSet = true;
}

bool PlayerConfig::TranscodeDefinitionHasBeenSet() const
{
    return m_transcodeDefinitionHasBeenSet;
}

uint64_t PlayerConfig::GetImageSpriteDefinition() const
{
    return m_imageSpriteDefinition;
}

void PlayerConfig::SetImageSpriteDefinition(const uint64_t& _imageSpriteDefinition)
{
    m_imageSpriteDefinition = _imageSpriteDefinition;
    m_imageSpriteDefinitionHasBeenSet = true;
}

bool PlayerConfig::ImageSpriteDefinitionHasBeenSet() const
{
    return m_imageSpriteDefinitionHasBeenSet;
}

vector<ResolutionNameInfo> PlayerConfig::GetResolutionNameSet() const
{
    return m_resolutionNameSet;
}

void PlayerConfig::SetResolutionNameSet(const vector<ResolutionNameInfo>& _resolutionNameSet)
{
    m_resolutionNameSet = _resolutionNameSet;
    m_resolutionNameSetHasBeenSet = true;
}

bool PlayerConfig::ResolutionNameSetHasBeenSet() const
{
    return m_resolutionNameSetHasBeenSet;
}

string PlayerConfig::GetCreateTime() const
{
    return m_createTime;
}

void PlayerConfig::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PlayerConfig::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string PlayerConfig::GetUpdateTime() const
{
    return m_updateTime;
}

void PlayerConfig::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PlayerConfig::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string PlayerConfig::GetDomain() const
{
    return m_domain;
}

void PlayerConfig::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool PlayerConfig::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string PlayerConfig::GetScheme() const
{
    return m_scheme;
}

void PlayerConfig::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool PlayerConfig::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

string PlayerConfig::GetComment() const
{
    return m_comment;
}

void PlayerConfig::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool PlayerConfig::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

