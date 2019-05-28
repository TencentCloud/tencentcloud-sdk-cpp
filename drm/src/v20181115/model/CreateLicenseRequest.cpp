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

#include <tencentcloud/drm/v20181115/model/CreateLicenseRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Drm::V20181115::Model;
using namespace rapidjson;
using namespace std;

CreateLicenseRequest::CreateLicenseRequest() :
    m_drmTypeHasBeenSet(false),
    m_licenseRequestHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_tracksHasBeenSet(false),
    m_playbackPolicyHasBeenSet(false)
{
}

string CreateLicenseRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_drmTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DrmType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_drmType.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseRequestHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LicenseRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_licenseRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_tracksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tracks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tracks.begin(); itr != m_tracks.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_playbackPolicyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlaybackPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_playbackPolicy.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLicenseRequest::GetDrmType() const
{
    return m_drmType;
}

void CreateLicenseRequest::SetDrmType(const string& _drmType)
{
    m_drmType = _drmType;
    m_drmTypeHasBeenSet = true;
}

bool CreateLicenseRequest::DrmTypeHasBeenSet() const
{
    return m_drmTypeHasBeenSet;
}

string CreateLicenseRequest::GetLicenseRequest() const
{
    return m_licenseRequest;
}

void CreateLicenseRequest::SetLicenseRequest(const string& _licenseRequest)
{
    m_licenseRequest = _licenseRequest;
    m_licenseRequestHasBeenSet = true;
}

bool CreateLicenseRequest::LicenseRequestHasBeenSet() const
{
    return m_licenseRequestHasBeenSet;
}

string CreateLicenseRequest::GetContentType() const
{
    return m_contentType;
}

void CreateLicenseRequest::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool CreateLicenseRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

vector<string> CreateLicenseRequest::GetTracks() const
{
    return m_tracks;
}

void CreateLicenseRequest::SetTracks(const vector<string>& _tracks)
{
    m_tracks = _tracks;
    m_tracksHasBeenSet = true;
}

bool CreateLicenseRequest::TracksHasBeenSet() const
{
    return m_tracksHasBeenSet;
}

PlaybackPolicy CreateLicenseRequest::GetPlaybackPolicy() const
{
    return m_playbackPolicy;
}

void CreateLicenseRequest::SetPlaybackPolicy(const PlaybackPolicy& _playbackPolicy)
{
    m_playbackPolicy = _playbackPolicy;
    m_playbackPolicyHasBeenSet = true;
}

bool CreateLicenseRequest::PlaybackPolicyHasBeenSet() const
{
    return m_playbackPolicyHasBeenSet;
}


