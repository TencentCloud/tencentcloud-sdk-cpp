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

#include <tencentcloud/tdid/v20210519/model/CptIssueRank.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

CptIssueRank::CptIssueRank() :
    m_cptNameHasBeenSet(false),
    m_rankHasBeenSet(false),
    m_countHasBeenSet(false),
    m_applyNameHasBeenSet(false),
    m_applyIdHasBeenSet(false)
{
}

CoreInternalOutcome CptIssueRank::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CptName") && !value["CptName"].IsNull())
    {
        if (!value["CptName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CptIssueRank.CptName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cptName = string(value["CptName"].GetString());
        m_cptNameHasBeenSet = true;
    }

    if (value.HasMember("Rank") && !value["Rank"].IsNull())
    {
        if (!value["Rank"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CptIssueRank.Rank` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rank = value["Rank"].GetInt64();
        m_rankHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CptIssueRank.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("ApplyName") && !value["ApplyName"].IsNull())
    {
        if (!value["ApplyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CptIssueRank.ApplyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyName = string(value["ApplyName"].GetString());
        m_applyNameHasBeenSet = true;
    }

    if (value.HasMember("ApplyId") && !value["ApplyId"].IsNull())
    {
        if (!value["ApplyId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CptIssueRank.ApplyId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_applyId = value["ApplyId"].GetUint64();
        m_applyIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CptIssueRank::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cptNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CptName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cptName.c_str(), allocator).Move(), allocator);
    }

    if (m_rankHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rank";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rank, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_applyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyName.c_str(), allocator).Move(), allocator);
    }

    if (m_applyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_applyId, allocator);
    }

}


string CptIssueRank::GetCptName() const
{
    return m_cptName;
}

void CptIssueRank::SetCptName(const string& _cptName)
{
    m_cptName = _cptName;
    m_cptNameHasBeenSet = true;
}

bool CptIssueRank::CptNameHasBeenSet() const
{
    return m_cptNameHasBeenSet;
}

int64_t CptIssueRank::GetRank() const
{
    return m_rank;
}

void CptIssueRank::SetRank(const int64_t& _rank)
{
    m_rank = _rank;
    m_rankHasBeenSet = true;
}

bool CptIssueRank::RankHasBeenSet() const
{
    return m_rankHasBeenSet;
}

int64_t CptIssueRank::GetCount() const
{
    return m_count;
}

void CptIssueRank::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CptIssueRank::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

string CptIssueRank::GetApplyName() const
{
    return m_applyName;
}

void CptIssueRank::SetApplyName(const string& _applyName)
{
    m_applyName = _applyName;
    m_applyNameHasBeenSet = true;
}

bool CptIssueRank::ApplyNameHasBeenSet() const
{
    return m_applyNameHasBeenSet;
}

uint64_t CptIssueRank::GetApplyId() const
{
    return m_applyId;
}

void CptIssueRank::SetApplyId(const uint64_t& _applyId)
{
    m_applyId = _applyId;
    m_applyIdHasBeenSet = true;
}

bool CptIssueRank::ApplyIdHasBeenSet() const
{
    return m_applyIdHasBeenSet;
}

