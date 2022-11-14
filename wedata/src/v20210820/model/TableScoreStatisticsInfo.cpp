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

#include <tencentcloud/wedata/v20210820/model/TableScoreStatisticsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

TableScoreStatisticsInfo::TableScoreStatisticsInfo() :
    m_levelHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_tableNumberHasBeenSet(false)
{
}

CoreInternalOutcome TableScoreStatisticsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableScoreStatisticsInfo.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Scale") && !value["Scale"].IsNull())
    {
        if (!value["Scale"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableScoreStatisticsInfo.Scale` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scale = value["Scale"].GetInt64();
        m_scaleHasBeenSet = true;
    }

    if (value.HasMember("TableNumber") && !value["TableNumber"].IsNull())
    {
        if (!value["TableNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TableScoreStatisticsInfo.TableNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tableNumber = value["TableNumber"].GetInt64();
        m_tableNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TableScoreStatisticsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_scaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scale, allocator);
    }

    if (m_tableNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableNumber, allocator);
    }

}


int64_t TableScoreStatisticsInfo::GetLevel() const
{
    return m_level;
}

void TableScoreStatisticsInfo::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool TableScoreStatisticsInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t TableScoreStatisticsInfo::GetScale() const
{
    return m_scale;
}

void TableScoreStatisticsInfo::SetScale(const int64_t& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool TableScoreStatisticsInfo::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}

int64_t TableScoreStatisticsInfo::GetTableNumber() const
{
    return m_tableNumber;
}

void TableScoreStatisticsInfo::SetTableNumber(const int64_t& _tableNumber)
{
    m_tableNumber = _tableNumber;
    m_tableNumberHasBeenSet = true;
}

bool TableScoreStatisticsInfo::TableNumberHasBeenSet() const
{
    return m_tableNumberHasBeenSet;
}

