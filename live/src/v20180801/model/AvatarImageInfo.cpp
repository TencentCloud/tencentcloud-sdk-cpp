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

#include <tencentcloud/live/v20180801/model/AvatarImageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

AvatarImageInfo::AvatarImageInfo() :
    m_originZoomHasBeenSet(false),
    m_avatarKeyHasBeenSet(false),
    m_resolutionHasBeenSet(false)
{
}

CoreInternalOutcome AvatarImageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OriginZoom") && !value["OriginZoom"].IsNull())
    {
        if (!value["OriginZoom"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarImageInfo.OriginZoom` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_originZoom = value["OriginZoom"].GetDouble();
        m_originZoomHasBeenSet = true;
    }

    if (value.HasMember("AvatarKey") && !value["AvatarKey"].IsNull())
    {
        if (!value["AvatarKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarImageInfo.AvatarKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avatarKey = string(value["AvatarKey"].GetString());
        m_avatarKeyHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AvatarImageInfo.Resolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = string(value["Resolution"].GetString());
        m_resolutionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AvatarImageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originZoomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginZoom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originZoom, allocator);
    }

    if (m_avatarKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvatarKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avatarKey.c_str(), allocator).Move(), allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resolution.c_str(), allocator).Move(), allocator);
    }

}


double AvatarImageInfo::GetOriginZoom() const
{
    return m_originZoom;
}

void AvatarImageInfo::SetOriginZoom(const double& _originZoom)
{
    m_originZoom = _originZoom;
    m_originZoomHasBeenSet = true;
}

bool AvatarImageInfo::OriginZoomHasBeenSet() const
{
    return m_originZoomHasBeenSet;
}

string AvatarImageInfo::GetAvatarKey() const
{
    return m_avatarKey;
}

void AvatarImageInfo::SetAvatarKey(const string& _avatarKey)
{
    m_avatarKey = _avatarKey;
    m_avatarKeyHasBeenSet = true;
}

bool AvatarImageInfo::AvatarKeyHasBeenSet() const
{
    return m_avatarKeyHasBeenSet;
}

string AvatarImageInfo::GetResolution() const
{
    return m_resolution;
}

void AvatarImageInfo::SetResolution(const string& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool AvatarImageInfo::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

