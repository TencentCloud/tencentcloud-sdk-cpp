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

#include <tencentcloud/cwp/v20180228/model/ScreenBaselineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ScreenBaselineInfo::ScreenBaselineInfo() :
    m_nameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_baselineFailCountHasBeenSet(false),
    m_uuidHasBeenSet(false)
{
}

CoreInternalOutcome ScreenBaselineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenBaselineInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenBaselineInfo.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenBaselineInfo.CategoryId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetUint64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenBaselineInfo.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("BaselineFailCount") && !value["BaselineFailCount"].IsNull())
    {
        if (!value["BaselineFailCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenBaselineInfo.BaselineFailCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineFailCount = value["BaselineFailCount"].GetUint64();
        m_baselineFailCountHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ScreenBaselineInfo.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ScreenBaselineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_baselineFailCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineFailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineFailCount, allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

}


string ScreenBaselineInfo::GetName() const
{
    return m_name;
}

void ScreenBaselineInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ScreenBaselineInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ScreenBaselineInfo::GetLevel() const
{
    return m_level;
}

void ScreenBaselineInfo::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ScreenBaselineInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t ScreenBaselineInfo::GetCategoryId() const
{
    return m_categoryId;
}

void ScreenBaselineInfo::SetCategoryId(const uint64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool ScreenBaselineInfo::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string ScreenBaselineInfo::GetLastScanTime() const
{
    return m_lastScanTime;
}

void ScreenBaselineInfo::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool ScreenBaselineInfo::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

uint64_t ScreenBaselineInfo::GetBaselineFailCount() const
{
    return m_baselineFailCount;
}

void ScreenBaselineInfo::SetBaselineFailCount(const uint64_t& _baselineFailCount)
{
    m_baselineFailCount = _baselineFailCount;
    m_baselineFailCountHasBeenSet = true;
}

bool ScreenBaselineInfo::BaselineFailCountHasBeenSet() const
{
    return m_baselineFailCountHasBeenSet;
}

string ScreenBaselineInfo::GetUuid() const
{
    return m_uuid;
}

void ScreenBaselineInfo::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool ScreenBaselineInfo::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

