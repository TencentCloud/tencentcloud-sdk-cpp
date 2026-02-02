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

#include <tencentcloud/vod/v20180717/model/AigcFaceIdentityInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

AigcFaceIdentityInfo::AigcFaceIdentityInfo() :
    m_faceIdHasBeenSet(false),
    m_faceImageHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome AigcFaceIdentityInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceId") && !value["FaceId"].IsNull())
    {
        if (!value["FaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcFaceIdentityInfo.FaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceId = string(value["FaceId"].GetString());
        m_faceIdHasBeenSet = true;
    }

    if (value.HasMember("FaceImage") && !value["FaceImage"].IsNull())
    {
        if (!value["FaceImage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AigcFaceIdentityInfo.FaceImage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceImage = string(value["FaceImage"].GetString());
        m_faceImageHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcFaceIdentityInfo.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AigcFaceIdentityInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AigcFaceIdentityInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_faceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceId.c_str(), allocator).Move(), allocator);
    }

    if (m_faceImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceImage.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

}


string AigcFaceIdentityInfo::GetFaceId() const
{
    return m_faceId;
}

void AigcFaceIdentityInfo::SetFaceId(const string& _faceId)
{
    m_faceId = _faceId;
    m_faceIdHasBeenSet = true;
}

bool AigcFaceIdentityInfo::FaceIdHasBeenSet() const
{
    return m_faceIdHasBeenSet;
}

string AigcFaceIdentityInfo::GetFaceImage() const
{
    return m_faceImage;
}

void AigcFaceIdentityInfo::SetFaceImage(const string& _faceImage)
{
    m_faceImage = _faceImage;
    m_faceImageHasBeenSet = true;
}

bool AigcFaceIdentityInfo::FaceImageHasBeenSet() const
{
    return m_faceImageHasBeenSet;
}

int64_t AigcFaceIdentityInfo::GetStartTime() const
{
    return m_startTime;
}

void AigcFaceIdentityInfo::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool AigcFaceIdentityInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t AigcFaceIdentityInfo::GetEndTime() const
{
    return m_endTime;
}

void AigcFaceIdentityInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool AigcFaceIdentityInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

