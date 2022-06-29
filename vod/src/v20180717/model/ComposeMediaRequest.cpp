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

#include <tencentcloud/vod/v20180717/model/ComposeMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ComposeMediaRequest::ComposeMediaRequest() :
    m_tracksHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_canvasHasBeenSet(false),
    m_sessionContextHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

string ComposeMediaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tracksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tracks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tracks.begin(); itr != m_tracks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_canvasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Canvas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_canvas.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sessionContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionContext";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionContext.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<MediaTrack> ComposeMediaRequest::GetTracks() const
{
    return m_tracks;
}

void ComposeMediaRequest::SetTracks(const vector<MediaTrack>& _tracks)
{
    m_tracks = _tracks;
    m_tracksHasBeenSet = true;
}

bool ComposeMediaRequest::TracksHasBeenSet() const
{
    return m_tracksHasBeenSet;
}

ComposeMediaOutput ComposeMediaRequest::GetOutput() const
{
    return m_output;
}

void ComposeMediaRequest::SetOutput(const ComposeMediaOutput& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool ComposeMediaRequest::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

uint64_t ComposeMediaRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ComposeMediaRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ComposeMediaRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

Canvas ComposeMediaRequest::GetCanvas() const
{
    return m_canvas;
}

void ComposeMediaRequest::SetCanvas(const Canvas& _canvas)
{
    m_canvas = _canvas;
    m_canvasHasBeenSet = true;
}

bool ComposeMediaRequest::CanvasHasBeenSet() const
{
    return m_canvasHasBeenSet;
}

string ComposeMediaRequest::GetSessionContext() const
{
    return m_sessionContext;
}

void ComposeMediaRequest::SetSessionContext(const string& _sessionContext)
{
    m_sessionContext = _sessionContext;
    m_sessionContextHasBeenSet = true;
}

bool ComposeMediaRequest::SessionContextHasBeenSet() const
{
    return m_sessionContextHasBeenSet;
}

string ComposeMediaRequest::GetSessionId() const
{
    return m_sessionId;
}

void ComposeMediaRequest::SetSessionId(const string& _sessionId)
{
    m_sessionId = _sessionId;
    m_sessionIdHasBeenSet = true;
}

bool ComposeMediaRequest::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}


