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

#include <tencentcloud/iotexplorer/v20190423/model/SeeFaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeFaceInfo::SeeFaceInfo() :
    m_boundingBoxHasBeenSet(false),
    m_faceIdHasBeenSet(false),
    m_cropImageURLHasBeenSet(false),
    m_isPrototypeHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_timestampMsHasBeenSet(false)
{
}

CoreInternalOutcome SeeFaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BoundingBox") && !value["BoundingBox"].IsNull())
    {
        if (!value["BoundingBox"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeFaceInfo.BoundingBox` is not array type"));

        const rapidjson::Value &tmpValue = value["BoundingBox"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_boundingBox.push_back((*itr).GetDouble());
        }
        m_boundingBoxHasBeenSet = true;
    }

    if (value.HasMember("FaceId") && !value["FaceId"].IsNull())
    {
        if (!value["FaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeFaceInfo.FaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceId = string(value["FaceId"].GetString());
        m_faceIdHasBeenSet = true;
    }

    if (value.HasMember("CropImageURL") && !value["CropImageURL"].IsNull())
    {
        if (!value["CropImageURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeFaceInfo.CropImageURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cropImageURL = string(value["CropImageURL"].GetString());
        m_cropImageURLHasBeenSet = true;
    }

    if (value.HasMember("IsPrototype") && !value["IsPrototype"].IsNull())
    {
        if (!value["IsPrototype"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SeeFaceInfo.IsPrototype` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPrototype = value["IsPrototype"].GetBool();
        m_isPrototypeHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeFaceInfo.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeFaceInfo.Source` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetUint64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("TimestampMs") && !value["TimestampMs"].IsNull())
    {
        if (!value["TimestampMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeFaceInfo.TimestampMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestampMs = value["TimestampMs"].GetInt64();
        m_timestampMsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeFaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_boundingBoxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundingBox";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_boundingBox.begin(); itr != m_boundingBox.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_faceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceId.c_str(), allocator).Move(), allocator);
    }

    if (m_cropImageURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CropImageURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cropImageURL.c_str(), allocator).Move(), allocator);
    }

    if (m_isPrototypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPrototype";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPrototype, allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_timestampMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimestampMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestampMs, allocator);
    }

}


vector<double> SeeFaceInfo::GetBoundingBox() const
{
    return m_boundingBox;
}

void SeeFaceInfo::SetBoundingBox(const vector<double>& _boundingBox)
{
    m_boundingBox = _boundingBox;
    m_boundingBoxHasBeenSet = true;
}

bool SeeFaceInfo::BoundingBoxHasBeenSet() const
{
    return m_boundingBoxHasBeenSet;
}

string SeeFaceInfo::GetFaceId() const
{
    return m_faceId;
}

void SeeFaceInfo::SetFaceId(const string& _faceId)
{
    m_faceId = _faceId;
    m_faceIdHasBeenSet = true;
}

bool SeeFaceInfo::FaceIdHasBeenSet() const
{
    return m_faceIdHasBeenSet;
}

string SeeFaceInfo::GetCropImageURL() const
{
    return m_cropImageURL;
}

void SeeFaceInfo::SetCropImageURL(const string& _cropImageURL)
{
    m_cropImageURL = _cropImageURL;
    m_cropImageURLHasBeenSet = true;
}

bool SeeFaceInfo::CropImageURLHasBeenSet() const
{
    return m_cropImageURLHasBeenSet;
}

bool SeeFaceInfo::GetIsPrototype() const
{
    return m_isPrototype;
}

void SeeFaceInfo::SetIsPrototype(const bool& _isPrototype)
{
    m_isPrototype = _isPrototype;
    m_isPrototypeHasBeenSet = true;
}

bool SeeFaceInfo::IsPrototypeHasBeenSet() const
{
    return m_isPrototypeHasBeenSet;
}

string SeeFaceInfo::GetPersonId() const
{
    return m_personId;
}

void SeeFaceInfo::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool SeeFaceInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

uint64_t SeeFaceInfo::GetSource() const
{
    return m_source;
}

void SeeFaceInfo::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool SeeFaceInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

int64_t SeeFaceInfo::GetTimestampMs() const
{
    return m_timestampMs;
}

void SeeFaceInfo::SetTimestampMs(const int64_t& _timestampMs)
{
    m_timestampMs = _timestampMs;
    m_timestampMsHasBeenSet = true;
}

bool SeeFaceInfo::TimestampMsHasBeenSet() const
{
    return m_timestampMsHasBeenSet;
}

