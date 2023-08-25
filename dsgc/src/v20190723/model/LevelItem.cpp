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

#include <tencentcloud/dsgc/v20190723/model/LevelItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

LevelItem::LevelItem() :
    m_levelIdHasBeenSet(false),
    m_levelGroupIdHasBeenSet(false),
    m_levelRiskNameHasBeenSet(false),
    m_levelRiskScoreHasBeenSet(false)
{
}

CoreInternalOutcome LevelItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LevelItem.LevelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = value["LevelId"].GetUint64();
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("LevelGroupId") && !value["LevelGroupId"].IsNull())
    {
        if (!value["LevelGroupId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LevelItem.LevelGroupId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelGroupId = value["LevelGroupId"].GetUint64();
        m_levelGroupIdHasBeenSet = true;
    }

    if (value.HasMember("LevelRiskName") && !value["LevelRiskName"].IsNull())
    {
        if (!value["LevelRiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LevelItem.LevelRiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelRiskName = string(value["LevelRiskName"].GetString());
        m_levelRiskNameHasBeenSet = true;
    }

    if (value.HasMember("LevelRiskScore") && !value["LevelRiskScore"].IsNull())
    {
        if (!value["LevelRiskScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LevelItem.LevelRiskScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelRiskScore = value["LevelRiskScore"].GetUint64();
        m_levelRiskScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LevelItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelId, allocator);
    }

    if (m_levelGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelGroupId, allocator);
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


uint64_t LevelItem::GetLevelId() const
{
    return m_levelId;
}

void LevelItem::SetLevelId(const uint64_t& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool LevelItem::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

uint64_t LevelItem::GetLevelGroupId() const
{
    return m_levelGroupId;
}

void LevelItem::SetLevelGroupId(const uint64_t& _levelGroupId)
{
    m_levelGroupId = _levelGroupId;
    m_levelGroupIdHasBeenSet = true;
}

bool LevelItem::LevelGroupIdHasBeenSet() const
{
    return m_levelGroupIdHasBeenSet;
}

string LevelItem::GetLevelRiskName() const
{
    return m_levelRiskName;
}

void LevelItem::SetLevelRiskName(const string& _levelRiskName)
{
    m_levelRiskName = _levelRiskName;
    m_levelRiskNameHasBeenSet = true;
}

bool LevelItem::LevelRiskNameHasBeenSet() const
{
    return m_levelRiskNameHasBeenSet;
}

uint64_t LevelItem::GetLevelRiskScore() const
{
    return m_levelRiskScore;
}

void LevelItem::SetLevelRiskScore(const uint64_t& _levelRiskScore)
{
    m_levelRiskScore = _levelRiskScore;
    m_levelRiskScoreHasBeenSet = true;
}

bool LevelItem::LevelRiskScoreHasBeenSet() const
{
    return m_levelRiskScoreHasBeenSet;
}

