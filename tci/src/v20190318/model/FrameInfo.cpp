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

#include <tencentcloud/tci/v20190318/model/FrameInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

FrameInfo::FrameInfo() :
    m_similarityHasBeenSet(false),
    m_snapshotUrlHasBeenSet(false),
    m_tsHasBeenSet(false)
{
}

CoreInternalOutcome FrameInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Similarity") && !value["Similarity"].IsNull())
    {
        if (!value["Similarity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FrameInfo.Similarity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_similarity = value["Similarity"].GetDouble();
        m_similarityHasBeenSet = true;
    }

    if (value.HasMember("SnapshotUrl") && !value["SnapshotUrl"].IsNull())
    {
        if (!value["SnapshotUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FrameInfo.SnapshotUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotUrl = string(value["SnapshotUrl"].GetString());
        m_snapshotUrlHasBeenSet = true;
    }

    if (value.HasMember("Ts") && !value["Ts"].IsNull())
    {
        if (!value["Ts"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FrameInfo.Ts` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ts = value["Ts"].GetInt64();
        m_tsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FrameInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_similarityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Similarity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_similarity, allocator);
    }

    if (m_snapshotUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_tsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ts, allocator);
    }

}


double FrameInfo::GetSimilarity() const
{
    return m_similarity;
}

void FrameInfo::SetSimilarity(const double& _similarity)
{
    m_similarity = _similarity;
    m_similarityHasBeenSet = true;
}

bool FrameInfo::SimilarityHasBeenSet() const
{
    return m_similarityHasBeenSet;
}

string FrameInfo::GetSnapshotUrl() const
{
    return m_snapshotUrl;
}

void FrameInfo::SetSnapshotUrl(const string& _snapshotUrl)
{
    m_snapshotUrl = _snapshotUrl;
    m_snapshotUrlHasBeenSet = true;
}

bool FrameInfo::SnapshotUrlHasBeenSet() const
{
    return m_snapshotUrlHasBeenSet;
}

int64_t FrameInfo::GetTs() const
{
    return m_ts;
}

void FrameInfo::SetTs(const int64_t& _ts)
{
    m_ts = _ts;
    m_tsHasBeenSet = true;
}

bool FrameInfo::TsHasBeenSet() const
{
    return m_tsHasBeenSet;
}

