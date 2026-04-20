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

#include <tencentcloud/mps/v20190612/model/ModifyStreamPackageLinearAssemblyProgramRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifyStreamPackageLinearAssemblyProgramRequest::ModifyStreamPackageLinearAssemblyProgramRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceLocationIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_playbackConfHasBeenSet(false),
    m_adBreaksHasBeenSet(false),
    m_vodAcquisitionMethodHasBeenSet(false)
{
}

string ModifyStreamPackageLinearAssemblyProgramRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceLocationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLocationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceLocationId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_playbackConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlaybackConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_playbackConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_adBreaksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdBreaks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_adBreaks.begin(); itr != m_adBreaks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vodAcquisitionMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VodAcquisitionMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vodAcquisitionMethod.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyStreamPackageLinearAssemblyProgramRequest::GetId() const
{
    return m_id;
}

void ModifyStreamPackageLinearAssemblyProgramRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyProgramRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyStreamPackageLinearAssemblyProgramRequest::GetName() const
{
    return m_name;
}

void ModifyStreamPackageLinearAssemblyProgramRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyProgramRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyStreamPackageLinearAssemblyProgramRequest::GetSourceType() const
{
    return m_sourceType;
}

void ModifyStreamPackageLinearAssemblyProgramRequest::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyProgramRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string ModifyStreamPackageLinearAssemblyProgramRequest::GetSourceLocationId() const
{
    return m_sourceLocationId;
}

void ModifyStreamPackageLinearAssemblyProgramRequest::SetSourceLocationId(const string& _sourceLocationId)
{
    m_sourceLocationId = _sourceLocationId;
    m_sourceLocationIdHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyProgramRequest::SourceLocationIdHasBeenSet() const
{
    return m_sourceLocationIdHasBeenSet;
}

string ModifyStreamPackageLinearAssemblyProgramRequest::GetSourceName() const
{
    return m_sourceName;
}

void ModifyStreamPackageLinearAssemblyProgramRequest::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyProgramRequest::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

PlaybackInfoReq ModifyStreamPackageLinearAssemblyProgramRequest::GetPlaybackConf() const
{
    return m_playbackConf;
}

void ModifyStreamPackageLinearAssemblyProgramRequest::SetPlaybackConf(const PlaybackInfoReq& _playbackConf)
{
    m_playbackConf = _playbackConf;
    m_playbackConfHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyProgramRequest::PlaybackConfHasBeenSet() const
{
    return m_playbackConfHasBeenSet;
}

vector<AdBreakInfo> ModifyStreamPackageLinearAssemblyProgramRequest::GetAdBreaks() const
{
    return m_adBreaks;
}

void ModifyStreamPackageLinearAssemblyProgramRequest::SetAdBreaks(const vector<AdBreakInfo>& _adBreaks)
{
    m_adBreaks = _adBreaks;
    m_adBreaksHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyProgramRequest::AdBreaksHasBeenSet() const
{
    return m_adBreaksHasBeenSet;
}

string ModifyStreamPackageLinearAssemblyProgramRequest::GetVodAcquisitionMethod() const
{
    return m_vodAcquisitionMethod;
}

void ModifyStreamPackageLinearAssemblyProgramRequest::SetVodAcquisitionMethod(const string& _vodAcquisitionMethod)
{
    m_vodAcquisitionMethod = _vodAcquisitionMethod;
    m_vodAcquisitionMethodHasBeenSet = true;
}

bool ModifyStreamPackageLinearAssemblyProgramRequest::VodAcquisitionMethodHasBeenSet() const
{
    return m_vodAcquisitionMethodHasBeenSet;
}


