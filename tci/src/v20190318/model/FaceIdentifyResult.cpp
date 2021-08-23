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

#include <tencentcloud/tci/v20190318/model/FaceIdentifyResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

FaceIdentifyResult::FaceIdentifyResult() :
    m_faceIdHasBeenSet(false),
    m_libraryIdHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_similarityHasBeenSet(false)
{
}

CoreInternalOutcome FaceIdentifyResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FaceId") && !value["FaceId"].IsNull())
    {
        if (!value["FaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdentifyResult.FaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceId = string(value["FaceId"].GetString());
        m_faceIdHasBeenSet = true;
    }

    if (value.HasMember("LibraryId") && !value["LibraryId"].IsNull())
    {
        if (!value["LibraryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdentifyResult.LibraryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraryId = string(value["LibraryId"].GetString());
        m_libraryIdHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdentifyResult.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("Similarity") && !value["Similarity"].IsNull())
    {
        if (!value["Similarity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdentifyResult.Similarity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_similarity = value["Similarity"].GetDouble();
        m_similarityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceIdentifyResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_faceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceId.c_str(), allocator).Move(), allocator);
    }

    if (m_libraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_similarityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Similarity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_similarity, allocator);
    }

}


string FaceIdentifyResult::GetFaceId() const
{
    return m_faceId;
}

void FaceIdentifyResult::SetFaceId(const string& _faceId)
{
    m_faceId = _faceId;
    m_faceIdHasBeenSet = true;
}

bool FaceIdentifyResult::FaceIdHasBeenSet() const
{
    return m_faceIdHasBeenSet;
}

string FaceIdentifyResult::GetLibraryId() const
{
    return m_libraryId;
}

void FaceIdentifyResult::SetLibraryId(const string& _libraryId)
{
    m_libraryId = _libraryId;
    m_libraryIdHasBeenSet = true;
}

bool FaceIdentifyResult::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

string FaceIdentifyResult::GetPersonId() const
{
    return m_personId;
}

void FaceIdentifyResult::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool FaceIdentifyResult::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

double FaceIdentifyResult::GetSimilarity() const
{
    return m_similarity;
}

void FaceIdentifyResult::SetSimilarity(const double& _similarity)
{
    m_similarity = _similarity;
    m_similarityHasBeenSet = true;
}

bool FaceIdentifyResult::SimilarityHasBeenSet() const
{
    return m_similarityHasBeenSet;
}

