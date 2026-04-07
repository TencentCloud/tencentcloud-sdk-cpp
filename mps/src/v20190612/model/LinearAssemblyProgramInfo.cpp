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

#include <tencentcloud/mps/v20190612/model/LinearAssemblyProgramInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LinearAssemblyProgramInfo::LinearAssemblyProgramInfo() :
    m_nameHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceLocationIdHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_attachedChannelHasBeenSet(false),
    m_playbackConfHasBeenSet(false),
    m_adBreaksHasBeenSet(false),
    m_idHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false)
{
}

CoreInternalOutcome LinearAssemblyProgramInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyProgramInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyProgramInfo.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceLocationId") && !value["SourceLocationId"].IsNull())
    {
        if (!value["SourceLocationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyProgramInfo.SourceLocationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceLocationId = string(value["SourceLocationId"].GetString());
        m_sourceLocationIdHasBeenSet = true;
    }

    if (value.HasMember("SourceId") && !value["SourceId"].IsNull())
    {
        if (!value["SourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyProgramInfo.SourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceId = string(value["SourceId"].GetString());
        m_sourceIdHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyProgramInfo.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("AttachedChannel") && !value["AttachedChannel"].IsNull())
    {
        if (!value["AttachedChannel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyProgramInfo.AttachedChannel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachedChannel = string(value["AttachedChannel"].GetString());
        m_attachedChannelHasBeenSet = true;
    }

    if (value.HasMember("PlaybackConf") && !value["PlaybackConf"].IsNull())
    {
        if (!value["PlaybackConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyProgramInfo.PlaybackConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_playbackConf.Deserialize(value["PlaybackConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_playbackConfHasBeenSet = true;
    }

    if (value.HasMember("AdBreaks") && !value["AdBreaks"].IsNull())
    {
        if (!value["AdBreaks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyProgramInfo.AdBreaks` is not array type"));

        const rapidjson::Value &tmpValue = value["AdBreaks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdBreakInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_adBreaks.push_back(item);
        }
        m_adBreaksHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyProgramInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyProgramInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("SourceLocationName") && !value["SourceLocationName"].IsNull())
    {
        if (!value["SourceLocationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LinearAssemblyProgramInfo.SourceLocationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceLocationName = string(value["SourceLocationName"].GetString());
        m_sourceLocationNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LinearAssemblyProgramInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceLocationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLocationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceLocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachedChannel.c_str(), allocator).Move(), allocator);
    }

    if (m_playbackConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaybackConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_playbackConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_adBreaksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdBreaks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_adBreaks.begin(); itr != m_adBreaks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceLocationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLocationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceLocationName.c_str(), allocator).Move(), allocator);
    }

}


string LinearAssemblyProgramInfo::GetName() const
{
    return m_name;
}

void LinearAssemblyProgramInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LinearAssemblyProgramInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string LinearAssemblyProgramInfo::GetSourceType() const
{
    return m_sourceType;
}

void LinearAssemblyProgramInfo::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool LinearAssemblyProgramInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string LinearAssemblyProgramInfo::GetSourceLocationId() const
{
    return m_sourceLocationId;
}

void LinearAssemblyProgramInfo::SetSourceLocationId(const string& _sourceLocationId)
{
    m_sourceLocationId = _sourceLocationId;
    m_sourceLocationIdHasBeenSet = true;
}

bool LinearAssemblyProgramInfo::SourceLocationIdHasBeenSet() const
{
    return m_sourceLocationIdHasBeenSet;
}

string LinearAssemblyProgramInfo::GetSourceId() const
{
    return m_sourceId;
}

void LinearAssemblyProgramInfo::SetSourceId(const string& _sourceId)
{
    m_sourceId = _sourceId;
    m_sourceIdHasBeenSet = true;
}

bool LinearAssemblyProgramInfo::SourceIdHasBeenSet() const
{
    return m_sourceIdHasBeenSet;
}

string LinearAssemblyProgramInfo::GetSourceName() const
{
    return m_sourceName;
}

void LinearAssemblyProgramInfo::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool LinearAssemblyProgramInfo::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string LinearAssemblyProgramInfo::GetAttachedChannel() const
{
    return m_attachedChannel;
}

void LinearAssemblyProgramInfo::SetAttachedChannel(const string& _attachedChannel)
{
    m_attachedChannel = _attachedChannel;
    m_attachedChannelHasBeenSet = true;
}

bool LinearAssemblyProgramInfo::AttachedChannelHasBeenSet() const
{
    return m_attachedChannelHasBeenSet;
}

PlaybackInfo LinearAssemblyProgramInfo::GetPlaybackConf() const
{
    return m_playbackConf;
}

void LinearAssemblyProgramInfo::SetPlaybackConf(const PlaybackInfo& _playbackConf)
{
    m_playbackConf = _playbackConf;
    m_playbackConfHasBeenSet = true;
}

bool LinearAssemblyProgramInfo::PlaybackConfHasBeenSet() const
{
    return m_playbackConfHasBeenSet;
}

vector<AdBreakInfo> LinearAssemblyProgramInfo::GetAdBreaks() const
{
    return m_adBreaks;
}

void LinearAssemblyProgramInfo::SetAdBreaks(const vector<AdBreakInfo>& _adBreaks)
{
    m_adBreaks = _adBreaks;
    m_adBreaksHasBeenSet = true;
}

bool LinearAssemblyProgramInfo::AdBreaksHasBeenSet() const
{
    return m_adBreaksHasBeenSet;
}

string LinearAssemblyProgramInfo::GetId() const
{
    return m_id;
}

void LinearAssemblyProgramInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LinearAssemblyProgramInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string LinearAssemblyProgramInfo::GetRegion() const
{
    return m_region;
}

void LinearAssemblyProgramInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool LinearAssemblyProgramInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string LinearAssemblyProgramInfo::GetSourceLocationName() const
{
    return m_sourceLocationName;
}

void LinearAssemblyProgramInfo::SetSourceLocationName(const string& _sourceLocationName)
{
    m_sourceLocationName = _sourceLocationName;
    m_sourceLocationNameHasBeenSet = true;
}

bool LinearAssemblyProgramInfo::SourceLocationNameHasBeenSet() const
{
    return m_sourceLocationNameHasBeenSet;
}

