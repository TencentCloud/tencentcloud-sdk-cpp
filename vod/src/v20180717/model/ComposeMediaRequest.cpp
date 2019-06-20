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
using namespace rapidjson;
using namespace std;

ComposeMediaRequest::ComposeMediaRequest() :
    m_tracksHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_canvasHasBeenSet(false)
{
}

string ComposeMediaRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tracksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tracks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tracks.begin(); itr != m_tracks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_outputHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_output.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_canvasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Canvas";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_canvas.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


