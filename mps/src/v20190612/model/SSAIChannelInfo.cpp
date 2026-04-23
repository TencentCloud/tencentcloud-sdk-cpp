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

#include <tencentcloud/mps/v20190612/model/SSAIChannelInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SSAIChannelInfo::SSAIChannelInfo() :
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contentSourceHasBeenSet(false),
    m_playbackPrefixHasBeenSet(false),
    m_hlsPlaybackPrefixHasBeenSet(false),
    m_dashPlaybackPrefixHasBeenSet(false),
    m_sSAIInfoHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_sessionInitPrefixHasBeenSet(false)
{
}

CoreInternalOutcome SSAIChannelInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIChannelInfo.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIChannelInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ContentSource") && !value["ContentSource"].IsNull())
    {
        if (!value["ContentSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIChannelInfo.ContentSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentSource = string(value["ContentSource"].GetString());
        m_contentSourceHasBeenSet = true;
    }

    if (value.HasMember("PlaybackPrefix") && !value["PlaybackPrefix"].IsNull())
    {
        if (!value["PlaybackPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIChannelInfo.PlaybackPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playbackPrefix = string(value["PlaybackPrefix"].GetString());
        m_playbackPrefixHasBeenSet = true;
    }

    if (value.HasMember("HlsPlaybackPrefix") && !value["HlsPlaybackPrefix"].IsNull())
    {
        if (!value["HlsPlaybackPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIChannelInfo.HlsPlaybackPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hlsPlaybackPrefix = string(value["HlsPlaybackPrefix"].GetString());
        m_hlsPlaybackPrefixHasBeenSet = true;
    }

    if (value.HasMember("DashPlaybackPrefix") && !value["DashPlaybackPrefix"].IsNull())
    {
        if (!value["DashPlaybackPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIChannelInfo.DashPlaybackPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dashPlaybackPrefix = string(value["DashPlaybackPrefix"].GetString());
        m_dashPlaybackPrefixHasBeenSet = true;
    }

    if (value.HasMember("SSAIInfo") && !value["SSAIInfo"].IsNull())
    {
        if (!value["SSAIInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIChannelInfo.SSAIInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sSAIInfo.Deserialize(value["SSAIInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sSAIInfoHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIChannelInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("SessionInitPrefix") && !value["SessionInitPrefix"].IsNull())
    {
        if (!value["SessionInitPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSAIChannelInfo.SessionInitPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionInitPrefix = string(value["SessionInitPrefix"].GetString());
        m_sessionInitPrefixHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SSAIChannelInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_contentSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentSource.c_str(), allocator).Move(), allocator);
    }

    if (m_playbackPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaybackPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playbackPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_hlsPlaybackPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsPlaybackPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hlsPlaybackPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_dashPlaybackPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashPlaybackPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dashPlaybackPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_sSAIInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSAIInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sSAIInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionInitPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionInitPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionInitPrefix.c_str(), allocator).Move(), allocator);
    }

}


string SSAIChannelInfo::GetID() const
{
    return m_iD;
}

void SSAIChannelInfo::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool SSAIChannelInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string SSAIChannelInfo::GetName() const
{
    return m_name;
}

void SSAIChannelInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SSAIChannelInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SSAIChannelInfo::GetContentSource() const
{
    return m_contentSource;
}

void SSAIChannelInfo::SetContentSource(const string& _contentSource)
{
    m_contentSource = _contentSource;
    m_contentSourceHasBeenSet = true;
}

bool SSAIChannelInfo::ContentSourceHasBeenSet() const
{
    return m_contentSourceHasBeenSet;
}

string SSAIChannelInfo::GetPlaybackPrefix() const
{
    return m_playbackPrefix;
}

void SSAIChannelInfo::SetPlaybackPrefix(const string& _playbackPrefix)
{
    m_playbackPrefix = _playbackPrefix;
    m_playbackPrefixHasBeenSet = true;
}

bool SSAIChannelInfo::PlaybackPrefixHasBeenSet() const
{
    return m_playbackPrefixHasBeenSet;
}

string SSAIChannelInfo::GetHlsPlaybackPrefix() const
{
    return m_hlsPlaybackPrefix;
}

void SSAIChannelInfo::SetHlsPlaybackPrefix(const string& _hlsPlaybackPrefix)
{
    m_hlsPlaybackPrefix = _hlsPlaybackPrefix;
    m_hlsPlaybackPrefixHasBeenSet = true;
}

bool SSAIChannelInfo::HlsPlaybackPrefixHasBeenSet() const
{
    return m_hlsPlaybackPrefixHasBeenSet;
}

string SSAIChannelInfo::GetDashPlaybackPrefix() const
{
    return m_dashPlaybackPrefix;
}

void SSAIChannelInfo::SetDashPlaybackPrefix(const string& _dashPlaybackPrefix)
{
    m_dashPlaybackPrefix = _dashPlaybackPrefix;
    m_dashPlaybackPrefixHasBeenSet = true;
}

bool SSAIChannelInfo::DashPlaybackPrefixHasBeenSet() const
{
    return m_dashPlaybackPrefixHasBeenSet;
}

SSAIConf SSAIChannelInfo::GetSSAIInfo() const
{
    return m_sSAIInfo;
}

void SSAIChannelInfo::SetSSAIInfo(const SSAIConf& _sSAIInfo)
{
    m_sSAIInfo = _sSAIInfo;
    m_sSAIInfoHasBeenSet = true;
}

bool SSAIChannelInfo::SSAIInfoHasBeenSet() const
{
    return m_sSAIInfoHasBeenSet;
}

string SSAIChannelInfo::GetRegion() const
{
    return m_region;
}

void SSAIChannelInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SSAIChannelInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string SSAIChannelInfo::GetSessionInitPrefix() const
{
    return m_sessionInitPrefix;
}

void SSAIChannelInfo::SetSessionInitPrefix(const string& _sessionInitPrefix)
{
    m_sessionInitPrefix = _sessionInitPrefix;
    m_sessionInitPrefixHasBeenSet = true;
}

bool SSAIChannelInfo::SessionInitPrefixHasBeenSet() const
{
    return m_sessionInitPrefixHasBeenSet;
}

