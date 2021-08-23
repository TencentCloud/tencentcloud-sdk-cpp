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

#include <tencentcloud/vod/v20180717/model/ComposeMediaTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ComposeMediaTaskInput::ComposeMediaTaskInput() :
    m_tracksHasBeenSet(false),
    m_canvasHasBeenSet(false),
    m_outputHasBeenSet(false)
{
}

CoreInternalOutcome ComposeMediaTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tracks") && !value["Tracks"].IsNull())
    {
        if (!value["Tracks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComposeMediaTaskInput.Tracks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tracks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MediaTrack item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tracks.push_back(item);
        }
        m_tracksHasBeenSet = true;
    }

    if (value.HasMember("Canvas") && !value["Canvas"].IsNull())
    {
        if (!value["Canvas"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaTaskInput.Canvas` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_canvas.Deserialize(value["Canvas"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_canvasHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaTaskInput.Output` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_output.Deserialize(value["Output"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeMediaTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tracksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tracks";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tracks.begin(); itr != m_tracks.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_canvasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Canvas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_canvas.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<MediaTrack> ComposeMediaTaskInput::GetTracks() const
{
    return m_tracks;
}

void ComposeMediaTaskInput::SetTracks(const vector<MediaTrack>& _tracks)
{
    m_tracks = _tracks;
    m_tracksHasBeenSet = true;
}

bool ComposeMediaTaskInput::TracksHasBeenSet() const
{
    return m_tracksHasBeenSet;
}

Canvas ComposeMediaTaskInput::GetCanvas() const
{
    return m_canvas;
}

void ComposeMediaTaskInput::SetCanvas(const Canvas& _canvas)
{
    m_canvas = _canvas;
    m_canvasHasBeenSet = true;
}

bool ComposeMediaTaskInput::CanvasHasBeenSet() const
{
    return m_canvasHasBeenSet;
}

ComposeMediaOutput ComposeMediaTaskInput::GetOutput() const
{
    return m_output;
}

void ComposeMediaTaskInput::SetOutput(const ComposeMediaOutput& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool ComposeMediaTaskInput::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

