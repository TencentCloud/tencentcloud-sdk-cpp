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

#include <tencentcloud/dsgc/v20190723/model/SensitiveLevel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

SensitiveLevel::SensitiveLevel() :
    m_levelIdHasBeenSet(false),
    m_levelCntHasBeenSet(false),
    m_levelRiskNameHasBeenSet(false),
    m_levelRiskScoreHasBeenSet(false)
{
}

CoreInternalOutcome SensitiveLevel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveLevel.LevelId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetInt64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("LevelCnt") && !value["LevelCnt"].IsNull())
    {
        if (!value["LevelCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveLevel.LevelCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelCnt = value["LevelCnt"].GetInt64();
        m_levelCntHasBeenSet = true;
    }

    if (value.HasMember("LevelRiskName") && !value["LevelRiskName"].IsNull())
    {
        if (!value["LevelRiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveLevel.LevelRiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelRiskName = string(value["LevelRiskName"].GetString());
        m_levelRiskNameHasBeenSet = true;
    }

    if (value.HasMember("LevelRiskScore") && !value["LevelRiskScore"].IsNull())
    {
        if (!value["LevelRiskScore"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveLevel.LevelRiskScore` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_levelRiskScore = value["LevelRiskScore"].GetInt64();
        m_levelRiskScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SensitiveLevel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelId, allocator);
    }

    if (m_levelCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelCnt, allocator);
    }

    if (m_levelRiskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelRiskName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelRiskScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelRiskScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelRiskScore, allocator);
    }

}


int64_t SensitiveLevel::GetLevelId() const
{
    return m_levelId;
}

void SensitiveLevel::SetLevelId(const int64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool SensitiveLevel::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

int64_t SensitiveLevel::GetLevelCnt() const
{
    return m_levelCnt;
}

void SensitiveLevel::SetLevelCnt(const int64_t& _levelCnt)
{
    m_levelCnt = _levelCnt;
    m_levelCntHasBeenSet = true;
}

bool SensitiveLevel::LevelCntHasBeenSet() const
{
    return m_levelCntHasBeenSet;
}

string SensitiveLevel::GetLevelRiskName() const
{
    return m_levelRiskName;
}

void SensitiveLevel::SetLevelRiskName(const string& _levelRiskName)
{
    m_levelRiskName = _levelRiskName;
    m_levelRiskNameHasBeenSet = true;
}

bool SensitiveLevel::LevelRiskNameHasBeenSet() const
{
    return m_levelRiskNameHasBeenSet;
}

int64_t SensitiveLevel::GetLevelRiskScore() const
{
    return m_levelRiskScore;
}

void SensitiveLevel::SetLevelRiskScore(const int64_t& _levelRiskScore)
{
    m_levelRiskScore = _levelRiskScore;
    m_levelRiskScoreHasBeenSet = true;
}

bool SensitiveLevel::LevelRiskScoreHasBeenSet() const
{
    return m_levelRiskScoreHasBeenSet;
}

