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

#include <tencentcloud/ump/v20200918/model/SearchResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ump::V20200918::Model;
using namespace std;

SearchResult::SearchResult() :
    m_imageHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_similarityHasBeenSet(false)
{
}

CoreInternalOutcome SearchResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("Similarity") && !value["Similarity"].IsNull())
    {
        if (!value["Similarity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SearchResult.Similarity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_similarity = value["Similarity"].GetDouble();
        m_similarityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
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


string SearchResult::GetImage() const
{
    return m_image;
}

void SearchResult::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool SearchResult::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string SearchResult::GetPersonId() const
{
    return m_personId;
}

void SearchResult::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool SearchResult::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

double SearchResult::GetSimilarity() const
{
    return m_similarity;
}

void SearchResult::SetSimilarity(const double& _similarity)
{
    m_similarity = _similarity;
    m_similarityHasBeenSet = true;
}

bool SearchResult::SimilarityHasBeenSet() const
{
    return m_similarityHasBeenSet;
}

