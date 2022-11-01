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

#include <tencentcloud/vod/v20180717/model/VideoTrackItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

VideoTrackItem::VideoTrackItem() :
    m_sourceMediaHasBeenSet(false),
    m_sourceMediaStartTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_targetDurationHasBeenSet(false),
    m_coordinateOriginHasBeenSet(false),
    m_xPosHasBeenSet(false),
    m_yPosHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_audioOperationsHasBeenSet(false),
    m_imageOperationsHasBeenSet(false)
{
}

CoreInternalOutcome VideoTrackItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceMedia") && !value["SourceMedia"].IsNull())
    {
        if (!value["SourceMedia"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTrackItem.SourceMedia` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceMedia = string(value["SourceMedia"].GetString());
        m_sourceMediaHasBeenSet = true;
    }

    if (value.HasMember("SourceMediaStartTime") && !value["SourceMediaStartTime"].IsNull())
    {
        if (!value["SourceMediaStartTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTrackItem.SourceMediaStartTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sourceMediaStartTime = value["SourceMediaStartTime"].GetDouble();
        m_sourceMediaStartTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTrackItem.Duration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetDouble();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("TargetDuration") && !value["TargetDuration"].IsNull())
    {
        if (!value["TargetDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTrackItem.TargetDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_targetDuration = value["TargetDuration"].GetDouble();
        m_targetDurationHasBeenSet = true;
    }

    if (value.HasMember("CoordinateOrigin") && !value["CoordinateOrigin"].IsNull())
    {
        if (!value["CoordinateOrigin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTrackItem.CoordinateOrigin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coordinateOrigin = string(value["CoordinateOrigin"].GetString());
        m_coordinateOriginHasBeenSet = true;
    }

    if (value.HasMember("XPos") && !value["XPos"].IsNull())
    {
        if (!value["XPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTrackItem.XPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_xPos = string(value["XPos"].GetString());
        m_xPosHasBeenSet = true;
    }

    if (value.HasMember("YPos") && !value["YPos"].IsNull())
    {
        if (!value["YPos"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTrackItem.YPos` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_yPos = string(value["YPos"].GetString());
        m_yPosHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTrackItem.Width` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_width = string(value["Width"].GetString());
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoTrackItem.Height` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_height = string(value["Height"].GetString());
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("AudioOperations") && !value["AudioOperations"].IsNull())
    {
        if (!value["AudioOperations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoTrackItem.AudioOperations` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioOperations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioTransform item;
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

    if (value.HasMember("ImageOperations") && !value["ImageOperations"].IsNull())
    {
        if (!value["ImageOperations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoTrackItem.ImageOperations` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageOperations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageTransform item;
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


    return CoreInternalOutcome(true);
}

void VideoTrackItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceMediaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceMedia";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceMedia.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceMediaStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceMediaStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceMediaStartTime, allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_targetDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetDuration, allocator);
    }

    if (m_coordinateOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoordinateOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coordinateOrigin.c_str(), allocator).Move(), allocator);
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

}


string VideoTrackItem::GetSourceMedia() const
{
    return m_sourceMedia;
}

void VideoTrackItem::SetSourceMedia(const string& _sourceMedia)
{
    m_sourceMedia = _sourceMedia;
    m_sourceMediaHasBeenSet = true;
}

bool VideoTrackItem::SourceMediaHasBeenSet() const
{
    return m_sourceMediaHasBeenSet;
}

double VideoTrackItem::GetSourceMediaStartTime() const
{
    return m_sourceMediaStartTime;
}

void VideoTrackItem::SetSourceMediaStartTime(const double& _sourceMediaStartTime)
{
    m_sourceMediaStartTime = _sourceMediaStartTime;
    m_sourceMediaStartTimeHasBeenSet = true;
}

bool VideoTrackItem::SourceMediaStartTimeHasBeenSet() const
{
    return m_sourceMediaStartTimeHasBeenSet;
}

double VideoTrackItem::GetDuration() const
{
    return m_duration;
}

void VideoTrackItem::SetDuration(const double& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool VideoTrackItem::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

double VideoTrackItem::GetTargetDuration() const
{
    return m_targetDuration;
}

void VideoTrackItem::SetTargetDuration(const double& _targetDuration)
{
    m_targetDuration = _targetDuration;
    m_targetDurationHasBeenSet = true;
}

bool VideoTrackItem::TargetDurationHasBeenSet() const
{
    return m_targetDurationHasBeenSet;
}

string VideoTrackItem::GetCoordinateOrigin() const
{
    return m_coordinateOrigin;
}

void VideoTrackItem::SetCoordinateOrigin(const string& _coordinateOrigin)
{
    m_coordinateOrigin = _coordinateOrigin;
    m_coordinateOriginHasBeenSet = true;
}

bool VideoTrackItem::CoordinateOriginHasBeenSet() const
{
    return m_coordinateOriginHasBeenSet;
}

string VideoTrackItem::GetXPos() const
{
    return m_xPos;
}

void VideoTrackItem::SetXPos(const string& _xPos)
{
    m_xPos = _xPos;
    m_xPosHasBeenSet = true;
}

bool VideoTrackItem::XPosHasBeenSet() const
{
    return m_xPosHasBeenSet;
}

string VideoTrackItem::GetYPos() const
{
    return m_yPos;
}

void VideoTrackItem::SetYPos(const string& _yPos)
{
    m_yPos = _yPos;
    m_yPosHasBeenSet = true;
}

bool VideoTrackItem::YPosHasBeenSet() const
{
    return m_yPosHasBeenSet;
}

string VideoTrackItem::GetWidth() const
{
    return m_width;
}

void VideoTrackItem::SetWidth(const string& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool VideoTrackItem::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

string VideoTrackItem::GetHeight() const
{
    return m_height;
}

void VideoTrackItem::SetHeight(const string& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool VideoTrackItem::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

vector<AudioTransform> VideoTrackItem::GetAudioOperations() const
{
    return m_audioOperations;
}

void VideoTrackItem::SetAudioOperations(const vector<AudioTransform>& _audioOperations)
{
    m_audioOperations = _audioOperations;
    m_audioOperationsHasBeenSet = true;
}

bool VideoTrackItem::AudioOperationsHasBeenSet() const
{
    return m_audioOperationsHasBeenSet;
}

vector<ImageTransform> VideoTrackItem::GetImageOperations() const
{
    return m_imageOperations;
}

void VideoTrackItem::SetImageOperations(const vector<ImageTransform>& _imageOperations)
{
    m_imageOperations = _imageOperations;
    m_imageOperationsHasBeenSet = true;
}

bool VideoTrackItem::ImageOperationsHasBeenSet() const
{
    return m_imageOperationsHasBeenSet;
}

