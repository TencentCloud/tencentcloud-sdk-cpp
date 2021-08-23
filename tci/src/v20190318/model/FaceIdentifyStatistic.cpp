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

#include <tencentcloud/tci/v20190318/model/FaceIdentifyStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

FaceIdentifyStatistic::FaceIdentifyStatistic() :
    m_durationHasBeenSet(false),
    m_endTsHasBeenSet(false),
    m_personIdHasBeenSet(false),
    m_similarityHasBeenSet(false),
    m_startTsHasBeenSet(false)
{
}

CoreInternalOutcome FaceIdentifyStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdentifyStatistic.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("EndTs") && !value["EndTs"].IsNull())
    {
        if (!value["EndTs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdentifyStatistic.EndTs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTs = value["EndTs"].GetInt64();
        m_endTsHasBeenSet = true;
    }

    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdentifyStatistic.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("Similarity") && !value["Similarity"].IsNull())
    {
        if (!value["Similarity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdentifyStatistic.Similarity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_similarity = value["Similarity"].GetDouble();
        m_similarityHasBeenSet = true;
    }

    if (value.HasMember("StartTs") && !value["StartTs"].IsNull())
    {
        if (!value["StartTs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdentifyStatistic.StartTs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTs = value["StartTs"].GetInt64();
        m_startTsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceIdentifyStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_endTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTs, allocator);
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

    if (m_startTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTs, allocator);
    }

}


int64_t FaceIdentifyStatistic::GetDuration() const
{
    return m_duration;
}

void FaceIdentifyStatistic::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool FaceIdentifyStatistic::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t FaceIdentifyStatistic::GetEndTs() const
{
    return m_endTs;
}

void FaceIdentifyStatistic::SetEndTs(const int64_t& _endTs)
{
    m_endTs = _endTs;
    m_endTsHasBeenSet = true;
}

bool FaceIdentifyStatistic::EndTsHasBeenSet() const
{
    return m_endTsHasBeenSet;
}

string FaceIdentifyStatistic::GetPersonId() const
{
    return m_personId;
}

void FaceIdentifyStatistic::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool FaceIdentifyStatistic::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

double FaceIdentifyStatistic::GetSimilarity() const
{
    return m_similarity;
}

void FaceIdentifyStatistic::SetSimilarity(const double& _similarity)
{
    m_similarity = _similarity;
    m_similarityHasBeenSet = true;
}

bool FaceIdentifyStatistic::SimilarityHasBeenSet() const
{
    return m_similarityHasBeenSet;
}

int64_t FaceIdentifyStatistic::GetStartTs() const
{
    return m_startTs;
}

void FaceIdentifyStatistic::SetStartTs(const int64_t& _startTs)
{
    m_startTs = _startTs;
    m_startTsHasBeenSet = true;
}

bool FaceIdentifyStatistic::StartTsHasBeenSet() const
{
    return m_startTsHasBeenSet;
}

