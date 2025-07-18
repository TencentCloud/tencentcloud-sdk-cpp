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

#include <tencentcloud/drm/v20181115/model/GenerateTDRMKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Drm::V20181115::Model;
using namespace std;

GenerateTDRMKeyRequest::GenerateTDRMKeyRequest() :
    m_drmTypeHasBeenSet(false),
    m_tracksHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_contentTypeHasBeenSet(false)
{
}

string GenerateTDRMKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_drmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrmType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drmType.c_str(), allocator).Move(), allocator);
    }

    if (m_tracksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tracks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tracks.begin(); itr != m_tracks.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_contentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GenerateTDRMKeyRequest::GetDrmType() const
{
    return m_drmType;
}

void GenerateTDRMKeyRequest::SetDrmType(const string& _drmType)
{
    m_drmType = _drmType;
    m_drmTypeHasBeenSet = true;
}

bool GenerateTDRMKeyRequest::DrmTypeHasBeenSet() const
{
    return m_drmTypeHasBeenSet;
}

vector<string> GenerateTDRMKeyRequest::GetTracks() const
{
    return m_tracks;
}

void GenerateTDRMKeyRequest::SetTracks(const vector<string>& _tracks)
{
    m_tracks = _tracks;
    m_tracksHasBeenSet = true;
}

bool GenerateTDRMKeyRequest::TracksHasBeenSet() const
{
    return m_tracksHasBeenSet;
}

string GenerateTDRMKeyRequest::GetContentId() const
{
    return m_contentId;
}

void GenerateTDRMKeyRequest::SetContentId(const string& _contentId)
{
    m_contentId = _contentId;
    m_contentIdHasBeenSet = true;
}

bool GenerateTDRMKeyRequest::ContentIdHasBeenSet() const
{
    return m_contentIdHasBeenSet;
}

string GenerateTDRMKeyRequest::GetContentType() const
{
    return m_contentType;
}

void GenerateTDRMKeyRequest::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool GenerateTDRMKeyRequest::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}


