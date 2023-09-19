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

#include <tencentcloud/mps/v20190612/model/ComposeMediaConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeMediaConfig::ComposeMediaConfig() :
    m_targetInfoHasBeenSet(false),
    m_canvasHasBeenSet(false),
    m_stylesHasBeenSet(false),
    m_tracksHasBeenSet(false)
{
}

CoreInternalOutcome ComposeMediaConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetInfo") && !value["TargetInfo"].IsNull())
    {
        if (!value["TargetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaConfig.TargetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetInfo.Deserialize(value["TargetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetInfoHasBeenSet = true;
    }

    if (value.HasMember("Canvas") && !value["Canvas"].IsNull())
    {
        if (!value["Canvas"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeMediaConfig.Canvas` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_canvas.Deserialize(value["Canvas"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_canvasHasBeenSet = true;
    }

    if (value.HasMember("Styles") && !value["Styles"].IsNull())
    {
        if (!value["Styles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComposeMediaConfig.Styles` is not array type"));

        const rapidjson::Value &tmpValue = value["Styles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComposeStyles item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_styles.push_back(item);
        }
        m_stylesHasBeenSet = true;
    }

    if (value.HasMember("Tracks") && !value["Tracks"].IsNull())
    {
        if (!value["Tracks"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComposeMediaConfig.Tracks` is not array type"));

        const rapidjson::Value &tmpValue = value["Tracks"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComposeMediaTrack item;
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


    return CoreInternalOutcome(true);
}

void ComposeMediaConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_canvasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Canvas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_canvas.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stylesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Styles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_styles.begin(); itr != m_styles.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

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

}


ComposeTargetInfo ComposeMediaConfig::GetTargetInfo() const
{
    return m_targetInfo;
}

void ComposeMediaConfig::SetTargetInfo(const ComposeTargetInfo& _targetInfo)
{
    m_targetInfo = _targetInfo;
    m_targetInfoHasBeenSet = true;
}

bool ComposeMediaConfig::TargetInfoHasBeenSet() const
{
    return m_targetInfoHasBeenSet;
}

ComposeCanvas ComposeMediaConfig::GetCanvas() const
{
    return m_canvas;
}

void ComposeMediaConfig::SetCanvas(const ComposeCanvas& _canvas)
{
    m_canvas = _canvas;
    m_canvasHasBeenSet = true;
}

bool ComposeMediaConfig::CanvasHasBeenSet() const
{
    return m_canvasHasBeenSet;
}

vector<ComposeStyles> ComposeMediaConfig::GetStyles() const
{
    return m_styles;
}

void ComposeMediaConfig::SetStyles(const vector<ComposeStyles>& _styles)
{
    m_styles = _styles;
    m_stylesHasBeenSet = true;
}

bool ComposeMediaConfig::StylesHasBeenSet() const
{
    return m_stylesHasBeenSet;
}

vector<ComposeMediaTrack> ComposeMediaConfig::GetTracks() const
{
    return m_tracks;
}

void ComposeMediaConfig::SetTracks(const vector<ComposeMediaTrack>& _tracks)
{
    m_tracks = _tracks;
    m_tracksHasBeenSet = true;
}

bool ComposeMediaConfig::TracksHasBeenSet() const
{
    return m_tracksHasBeenSet;
}

