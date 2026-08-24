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

#include <tencentcloud/iotexplorer/v20190423/model/SeeTaskFaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeTaskFaceInfo::SeeTaskFaceInfo() :
    m_cropImageURLHasBeenSet(false),
    m_faceIdHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_timestampMsHasBeenSet(false)
{
}

CoreInternalOutcome SeeTaskFaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CropImageURL") && !value["CropImageURL"].IsNull())
    {
        if (!value["CropImageURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskFaceInfo.CropImageURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cropImageURL = string(value["CropImageURL"].GetString());
        m_cropImageURLHasBeenSet = true;
    }

    if (value.HasMember("FaceId") && !value["FaceId"].IsNull())
    {
        if (!value["FaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskFaceInfo.FaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceId = string(value["FaceId"].GetString());
        m_faceIdHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskFaceInfo.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("TimestampMs") && !value["TimestampMs"].IsNull())
    {
        if (!value["TimestampMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeTaskFaceInfo.TimestampMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestampMs = value["TimestampMs"].GetInt64();
        m_timestampMsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeTaskFaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cropImageURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CropImageURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cropImageURL.c_str(), allocator).Move(), allocator);
    }

    if (m_faceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceId.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_timestampMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimestampMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestampMs, allocator);
    }

}


string SeeTaskFaceInfo::GetCropImageURL() const
{
    return m_cropImageURL;
}

void SeeTaskFaceInfo::SetCropImageURL(const string& _cropImageURL)
{
    m_cropImageURL = _cropImageURL;
    m_cropImageURLHasBeenSet = true;
}

bool SeeTaskFaceInfo::CropImageURLHasBeenSet() const
{
    return m_cropImageURLHasBeenSet;
}

string SeeTaskFaceInfo::GetFaceId() const
{
    return m_faceId;
}

void SeeTaskFaceInfo::SetFaceId(const string& _faceId)
{
    m_faceId = _faceId;
    m_faceIdHasBeenSet = true;
}

bool SeeTaskFaceInfo::FaceIdHasBeenSet() const
{
    return m_faceIdHasBeenSet;
}

string SeeTaskFaceInfo::GetPersonId() const
{
    return m_personId;
}

void SeeTaskFaceInfo::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool SeeTaskFaceInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

int64_t SeeTaskFaceInfo::GetTimestampMs() const
{
    return m_timestampMs;
}

void SeeTaskFaceInfo::SetTimestampMs(const int64_t& _timestampMs)
{
    m_timestampMs = _timestampMs;
    m_timestampMsHasBeenSet = true;
}

bool SeeTaskFaceInfo::TimestampMsHasBeenSet() const
{
    return m_timestampMsHasBeenSet;
}

