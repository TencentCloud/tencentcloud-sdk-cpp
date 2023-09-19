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

#include <tencentcloud/mps/v20190612/model/ComposeVideoItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeVideoItem::ComposeVideoItem() :
    m_sourceMediaHasBeenSet(false),
    m_trackTimeHasBeenSet(false),
    m_xPosHasBeenSet(false),
    m_yPosHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_imageOperationsHasBeenSet(false),
    m_audioOperationsHasBeenSet(false)
{
}

CoreInternalOutcome ComposeVideoItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceMedia") && !value["SourceMedia"].IsNull())
    {
        if (!value["SourceMedia"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeVideoItem.SourceMedia` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceMedia.Deserialize(value["SourceMedia"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceMediaHasBeenSet = true;
    }

    if (value.HasMember("TrackTime") && !value["TrackTime"].IsNull())
    {
        if (!value["TrackTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeVideoItem.TrackTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trackTime.Deserialize(value["TrackTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trackTimeHasBeenSet = true;
    }

    if (value.HasMember("XPos") && !value["XPos"].IsNull())
    {
        if (!value["XPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeVideoItem.XPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xPos = string(value["XPos"].GetString());
        m_xPosHasBeenSet = true;
    }

    if (value.HasMember("YPos") && !value["YPos"].IsNull())
    {
        if (!value["YPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeVideoItem.YPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yPos = string(value["YPos"].GetString());
        m_yPosHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeVideoItem.Width` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_width = string(value["Width"].GetString());
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeVideoItem.Height` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_height = string(value["Height"].GetString());
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("ImageOperations") && !value["ImageOperations"].IsNull())
    {
        if (!value["ImageOperations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComposeVideoItem.ImageOperations` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageOperations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComposeImageOperation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageOperations.push_back(item);
        }
        m_imageOperationsHasBeenSet = true;
    }

    if (value.HasMember("AudioOperations") && !value["AudioOperations"].IsNull())
    {
        if (!value["AudioOperations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComposeVideoItem.AudioOperations` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioOperations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComposeAudioOperation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioOperations.push_back(item);
        }
        m_audioOperationsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeVideoItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceMediaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceMedia";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceMedia.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_trackTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrackTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trackTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_xPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "XPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_xPos.c_str(), allocator).Move(), allocator);
    }

    if (m_yPosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YPos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_yPos.c_str(), allocator).Move(), allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_width.c_str(), allocator).Move(), allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_height.c_str(), allocator).Move(), allocator);
    }

    if (m_imageOperationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageOperations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageOperations.begin(); itr != m_imageOperations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_audioOperationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioOperations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioOperations.begin(); itr != m_audioOperations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


ComposeSourceMedia ComposeVideoItem::GetSourceMedia() const
{
    return m_sourceMedia;
}

void ComposeVideoItem::SetSourceMedia(const ComposeSourceMedia& _sourceMedia)
{
    m_sourceMedia = _sourceMedia;
    m_sourceMediaHasBeenSet = true;
}

bool ComposeVideoItem::SourceMediaHasBeenSet() const
{
    return m_sourceMediaHasBeenSet;
}

ComposeTrackTime ComposeVideoItem::GetTrackTime() const
{
    return m_trackTime;
}

void ComposeVideoItem::SetTrackTime(const ComposeTrackTime& _trackTime)
{
    m_trackTime = _trackTime;
    m_trackTimeHasBeenSet = true;
}

bool ComposeVideoItem::TrackTimeHasBeenSet() const
{
    return m_trackTimeHasBeenSet;
}

string ComposeVideoItem::GetXPos() const
{
    return m_xPos;
}

void ComposeVideoItem::SetXPos(const string& _xPos)
{
    m_xPos = _xPos;
    m_xPosHasBeenSet = true;
}

bool ComposeVideoItem::XPosHasBeenSet() const
{
    return m_xPosHasBeenSet;
}

string ComposeVideoItem::GetYPos() const
{
    return m_yPos;
}

void ComposeVideoItem::SetYPos(const string& _yPos)
{
    m_yPos = _yPos;
    m_yPosHasBeenSet = true;
}

bool ComposeVideoItem::YPosHasBeenSet() const
{
    return m_yPosHasBeenSet;
}

string ComposeVideoItem::GetWidth() const
{
    return m_width;
}

void ComposeVideoItem::SetWidth(const string& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool ComposeVideoItem::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

string ComposeVideoItem::GetHeight() const
{
    return m_height;
}

void ComposeVideoItem::SetHeight(const string& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool ComposeVideoItem::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

vector<ComposeImageOperation> ComposeVideoItem::GetImageOperations() const
{
    return m_imageOperations;
}

void ComposeVideoItem::SetImageOperations(const vector<ComposeImageOperation>& _imageOperations)
{
    m_imageOperations = _imageOperations;
    m_imageOperationsHasBeenSet = true;
}

bool ComposeVideoItem::ImageOperationsHasBeenSet() const
{
    return m_imageOperationsHasBeenSet;
}

vector<ComposeAudioOperation> ComposeVideoItem::GetAudioOperations() const
{
    return m_audioOperations;
}

void ComposeVideoItem::SetAudioOperations(const vector<ComposeAudioOperation>& _audioOperations)
{
    m_audioOperations = _audioOperations;
    m_audioOperationsHasBeenSet = true;
}

bool ComposeVideoItem::AudioOperationsHasBeenSet() const
{
    return m_audioOperationsHasBeenSet;
}

