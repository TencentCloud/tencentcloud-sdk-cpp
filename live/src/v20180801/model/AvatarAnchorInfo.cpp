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

#include <tencentcloud/live/v20180801/model/AvatarAnchorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AvatarAnchorInfo::AvatarAnchorInfo() :
    m_anchorNameHasBeenSet(false),
    m_anchorIdHasBeenSet(false),
    m_anchorGenderHasBeenSet(false),
    m_poseImageHasBeenSet(false),
    m_poseImageResolutionHasBeenSet(false),
    m_referenceVideoSegmentUrlHasBeenSet(false),
    m_horizontalAvatarHasBeenSet(false),
    m_verticalAvatarHasBeenSet(false),
    m_suggestTimbreKeyHasBeenSet(false)
{
}

CoreInternalOutcome AvatarAnchorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AnchorName") && !value["AnchorName"].IsNull())
    {
        if (!value["AnchorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarAnchorInfo.AnchorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anchorName = string(value["AnchorName"].GetString());
        m_anchorNameHasBeenSet = true;
    }

    if (value.HasMember("AnchorId") && !value["AnchorId"].IsNull())
    {
        if (!value["AnchorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarAnchorInfo.AnchorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anchorId = string(value["AnchorId"].GetString());
        m_anchorIdHasBeenSet = true;
    }

    if (value.HasMember("AnchorGender") && !value["AnchorGender"].IsNull())
    {
        if (!value["AnchorGender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarAnchorInfo.AnchorGender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anchorGender = string(value["AnchorGender"].GetString());
        m_anchorGenderHasBeenSet = true;
    }

    if (value.HasMember("PoseImage") && !value["PoseImage"].IsNull())
    {
        if (!value["PoseImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarAnchorInfo.PoseImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_poseImage = string(value["PoseImage"].GetString());
        m_poseImageHasBeenSet = true;
    }

    if (value.HasMember("PoseImageResolution") && !value["PoseImageResolution"].IsNull())
    {
        if (!value["PoseImageResolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarAnchorInfo.PoseImageResolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_poseImageResolution = string(value["PoseImageResolution"].GetString());
        m_poseImageResolutionHasBeenSet = true;
    }

    if (value.HasMember("ReferenceVideoSegmentUrl") && !value["ReferenceVideoSegmentUrl"].IsNull())
    {
        if (!value["ReferenceVideoSegmentUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarAnchorInfo.ReferenceVideoSegmentUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceVideoSegmentUrl = string(value["ReferenceVideoSegmentUrl"].GetString());
        m_referenceVideoSegmentUrlHasBeenSet = true;
    }

    if (value.HasMember("HorizontalAvatar") && !value["HorizontalAvatar"].IsNull())
    {
        if (!value["HorizontalAvatar"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarAnchorInfo.HorizontalAvatar` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_horizontalAvatar.Deserialize(value["HorizontalAvatar"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_horizontalAvatarHasBeenSet = true;
    }

    if (value.HasMember("VerticalAvatar") && !value["VerticalAvatar"].IsNull())
    {
        if (!value["VerticalAvatar"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarAnchorInfo.VerticalAvatar` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_verticalAvatar.Deserialize(value["VerticalAvatar"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_verticalAvatarHasBeenSet = true;
    }

    if (value.HasMember("SuggestTimbreKey") && !value["SuggestTimbreKey"].IsNull())
    {
        if (!value["SuggestTimbreKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarAnchorInfo.SuggestTimbreKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestTimbreKey = string(value["SuggestTimbreKey"].GetString());
        m_suggestTimbreKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvatarAnchorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_anchorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anchorName.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anchorId.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorGenderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorGender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anchorGender.c_str(), allocator).Move(), allocator);
    }

    if (m_poseImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoseImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_poseImage.c_str(), allocator).Move(), allocator);
    }

    if (m_poseImageResolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoseImageResolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_poseImageResolution.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceVideoSegmentUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceVideoSegmentUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceVideoSegmentUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_horizontalAvatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HorizontalAvatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_horizontalAvatar.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_verticalAvatarHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerticalAvatar";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_verticalAvatar.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_suggestTimbreKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestTimbreKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestTimbreKey.c_str(), allocator).Move(), allocator);
    }

}


string AvatarAnchorInfo::GetAnchorName() const
{
    return m_anchorName;
}

void AvatarAnchorInfo::SetAnchorName(const string& _anchorName)
{
    m_anchorName = _anchorName;
    m_anchorNameHasBeenSet = true;
}

bool AvatarAnchorInfo::AnchorNameHasBeenSet() const
{
    return m_anchorNameHasBeenSet;
}

string AvatarAnchorInfo::GetAnchorId() const
{
    return m_anchorId;
}

void AvatarAnchorInfo::SetAnchorId(const string& _anchorId)
{
    m_anchorId = _anchorId;
    m_anchorIdHasBeenSet = true;
}

bool AvatarAnchorInfo::AnchorIdHasBeenSet() const
{
    return m_anchorIdHasBeenSet;
}

string AvatarAnchorInfo::GetAnchorGender() const
{
    return m_anchorGender;
}

void AvatarAnchorInfo::SetAnchorGender(const string& _anchorGender)
{
    m_anchorGender = _anchorGender;
    m_anchorGenderHasBeenSet = true;
}

bool AvatarAnchorInfo::AnchorGenderHasBeenSet() const
{
    return m_anchorGenderHasBeenSet;
}

string AvatarAnchorInfo::GetPoseImage() const
{
    return m_poseImage;
}

void AvatarAnchorInfo::SetPoseImage(const string& _poseImage)
{
    m_poseImage = _poseImage;
    m_poseImageHasBeenSet = true;
}

bool AvatarAnchorInfo::PoseImageHasBeenSet() const
{
    return m_poseImageHasBeenSet;
}

string AvatarAnchorInfo::GetPoseImageResolution() const
{
    return m_poseImageResolution;
}

void AvatarAnchorInfo::SetPoseImageResolution(const string& _poseImageResolution)
{
    m_poseImageResolution = _poseImageResolution;
    m_poseImageResolutionHasBeenSet = true;
}

bool AvatarAnchorInfo::PoseImageResolutionHasBeenSet() const
{
    return m_poseImageResolutionHasBeenSet;
}

string AvatarAnchorInfo::GetReferenceVideoSegmentUrl() const
{
    return m_referenceVideoSegmentUrl;
}

void AvatarAnchorInfo::SetReferenceVideoSegmentUrl(const string& _referenceVideoSegmentUrl)
{
    m_referenceVideoSegmentUrl = _referenceVideoSegmentUrl;
    m_referenceVideoSegmentUrlHasBeenSet = true;
}

bool AvatarAnchorInfo::ReferenceVideoSegmentUrlHasBeenSet() const
{
    return m_referenceVideoSegmentUrlHasBeenSet;
}

AvatarImageInfo AvatarAnchorInfo::GetHorizontalAvatar() const
{
    return m_horizontalAvatar;
}

void AvatarAnchorInfo::SetHorizontalAvatar(const AvatarImageInfo& _horizontalAvatar)
{
    m_horizontalAvatar = _horizontalAvatar;
    m_horizontalAvatarHasBeenSet = true;
}

bool AvatarAnchorInfo::HorizontalAvatarHasBeenSet() const
{
    return m_horizontalAvatarHasBeenSet;
}

AvatarImageInfo AvatarAnchorInfo::GetVerticalAvatar() const
{
    return m_verticalAvatar;
}

void AvatarAnchorInfo::SetVerticalAvatar(const AvatarImageInfo& _verticalAvatar)
{
    m_verticalAvatar = _verticalAvatar;
    m_verticalAvatarHasBeenSet = true;
}

bool AvatarAnchorInfo::VerticalAvatarHasBeenSet() const
{
    return m_verticalAvatarHasBeenSet;
}

string AvatarAnchorInfo::GetSuggestTimbreKey() const
{
    return m_suggestTimbreKey;
}

void AvatarAnchorInfo::SetSuggestTimbreKey(const string& _suggestTimbreKey)
{
    m_suggestTimbreKey = _suggestTimbreKey;
    m_suggestTimbreKeyHasBeenSet = true;
}

bool AvatarAnchorInfo::SuggestTimbreKeyHasBeenSet() const
{
    return m_suggestTimbreKeyHasBeenSet;
}

