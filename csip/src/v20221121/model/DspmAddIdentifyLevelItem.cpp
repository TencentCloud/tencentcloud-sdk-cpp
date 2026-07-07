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

#include <tencentcloud/csip/v20221121/model/DspmAddIdentifyLevelItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAddIdentifyLevelItem::DspmAddIdentifyLevelItem() :
    m_levelNameHasBeenSet(false),
    m_levelScoreHasBeenSet(false)
{
}

CoreInternalOutcome DspmAddIdentifyLevelItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LevelName") && !value["LevelName"].IsNull())
    {
        if (!value["LevelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAddIdentifyLevelItem.LevelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelName = string(value["LevelName"].GetString());
        m_levelNameHasBeenSet = true;
    }

    if (value.HasMember("LevelScore") && !value["LevelScore"].IsNull())
    {
        if (!value["LevelScore"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAddIdentifyLevelItem.LevelScore` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_levelScore = value["LevelScore"].GetUint64();
        m_levelScoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAddIdentifyLevelItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_levelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelName.c_str(), allocator).Move(), allocator);
    }

    if (m_levelScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_levelScore, allocator);
    }

}


string DspmAddIdentifyLevelItem::GetLevelName() const
{
    return m_levelName;
}

void DspmAddIdentifyLevelItem::SetLevelName(const string& _levelName)
{
    m_levelName = _levelName;
    m_levelNameHasBeenSet = true;
}

bool DspmAddIdentifyLevelItem::LevelNameHasBeenSet() const
{
    return m_levelNameHasBeenSet;
}

uint64_t DspmAddIdentifyLevelItem::GetLevelScore() const
{
    return m_levelScore;
}

void DspmAddIdentifyLevelItem::SetLevelScore(const uint64_t& _levelScore)
{
    m_levelScore = _levelScore;
    m_levelScoreHasBeenSet = true;
}

bool DspmAddIdentifyLevelItem::LevelScoreHasBeenSet() const
{
    return m_levelScoreHasBeenSet;
}

