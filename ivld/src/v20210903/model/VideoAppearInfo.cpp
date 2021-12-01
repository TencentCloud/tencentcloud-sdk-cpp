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

#include <tencentcloud/ivld/v20210903/model/VideoAppearInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

VideoAppearInfo::VideoAppearInfo() :
    m_startTimeStampHasBeenSet(false),
    m_endTimeStampHasBeenSet(false),
    m_imageURLHasBeenSet(false)
{
}

CoreInternalOutcome VideoAppearInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTimeStamp") && !value["StartTimeStamp"].IsNull())
    {
        if (!value["StartTimeStamp"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoAppearInfo.StartTimeStamp` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeStamp = value["StartTimeStamp"].GetDouble();
        m_startTimeStampHasBeenSet = true;
    }

    if (value.HasMember("EndTimeStamp") && !value["EndTimeStamp"].IsNull())
    {
        if (!value["EndTimeStamp"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VideoAppearInfo.EndTimeStamp` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeStamp = value["EndTimeStamp"].GetDouble();
        m_endTimeStampHasBeenSet = true;
    }

    if (value.HasMember("ImageURL") && !value["ImageURL"].IsNull())
    {
        if (!value["ImageURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VideoAppearInfo.ImageURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageURL = string(value["ImageURL"].GetString());
        m_imageURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoAppearInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeStamp, allocator);
    }

    if (m_endTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeStamp, allocator);
    }

    if (m_imageURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageURL.c_str(), allocator).Move(), allocator);
    }

}


double VideoAppearInfo::GetStartTimeStamp() const
{
    return m_startTimeStamp;
}

void VideoAppearInfo::SetStartTimeStamp(const double& _startTimeStamp)
{
    m_startTimeStamp = _startTimeStamp;
    m_startTimeStampHasBeenSet = true;
}

bool VideoAppearInfo::StartTimeStampHasBeenSet() const
{
    return m_startTimeStampHasBeenSet;
}

double VideoAppearInfo::GetEndTimeStamp() const
{
    return m_endTimeStamp;
}

void VideoAppearInfo::SetEndTimeStamp(const double& _endTimeStamp)
{
    m_endTimeStamp = _endTimeStamp;
    m_endTimeStampHasBeenSet = true;
}

bool VideoAppearInfo::EndTimeStampHasBeenSet() const
{
    return m_endTimeStampHasBeenSet;
}

string VideoAppearInfo::GetImageURL() const
{
    return m_imageURL;
}

void VideoAppearInfo::SetImageURL(const string& _imageURL)
{
    m_imageURL = _imageURL;
    m_imageURLHasBeenSet = true;
}

bool VideoAppearInfo::ImageURLHasBeenSet() const
{
    return m_imageURLHasBeenSet;
}

