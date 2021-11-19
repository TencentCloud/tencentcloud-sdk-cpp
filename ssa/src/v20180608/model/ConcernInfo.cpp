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

#include <tencentcloud/ssa/v20180608/model/ConcernInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

ConcernInfo::ConcernInfo() :
    m_concernTypeHasBeenSet(false),
    m_entityTypeHasBeenSet(false),
    m_concernHasBeenSet(false),
    m_statisticsCountHasBeenSet(false)
{
}

CoreInternalOutcome ConcernInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConcernType") && !value["ConcernType"].IsNull())
    {
        if (!value["ConcernType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.ConcernType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_concernType = value["ConcernType"].GetInt64();
        m_concernTypeHasBeenSet = true;
    }

    if (value.HasMember("EntityType") && !value["EntityType"].IsNull())
    {
        if (!value["EntityType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.EntityType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_entityType = value["EntityType"].GetInt64();
        m_entityTypeHasBeenSet = true;
    }

    if (value.HasMember("Concern") && !value["Concern"].IsNull())
    {
        if (!value["Concern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.Concern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_concern = string(value["Concern"].GetString());
        m_concernHasBeenSet = true;
    }

    if (value.HasMember("StatisticsCount") && !value["StatisticsCount"].IsNull())
    {
        if (!value["StatisticsCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConcernInfo.StatisticsCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_statisticsCount = value["StatisticsCount"].GetInt64();
        m_statisticsCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConcernInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_concernTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConcernType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_concernType, allocator);
    }

    if (m_entityTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_entityType, allocator);
    }

    if (m_concernHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Concern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_concern.c_str(), allocator).Move(), allocator);
    }

    if (m_statisticsCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticsCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statisticsCount, allocator);
    }

}


int64_t ConcernInfo::GetConcernType() const
{
    return m_concernType;
}

void ConcernInfo::SetConcernType(const int64_t& _concernType)
{
    m_concernType = _concernType;
    m_concernTypeHasBeenSet = true;
}

bool ConcernInfo::ConcernTypeHasBeenSet() const
{
    return m_concernTypeHasBeenSet;
}

int64_t ConcernInfo::GetEntityType() const
{
    return m_entityType;
}

void ConcernInfo::SetEntityType(const int64_t& _entityType)
{
    m_entityType = _entityType;
    m_entityTypeHasBeenSet = true;
}

bool ConcernInfo::EntityTypeHasBeenSet() const
{
    return m_entityTypeHasBeenSet;
}

string ConcernInfo::GetConcern() const
{
    return m_concern;
}

void ConcernInfo::SetConcern(const string& _concern)
{
    m_concern = _concern;
    m_concernHasBeenSet = true;
}

bool ConcernInfo::ConcernHasBeenSet() const
{
    return m_concernHasBeenSet;
}

int64_t ConcernInfo::GetStatisticsCount() const
{
    return m_statisticsCount;
}

void ConcernInfo::SetStatisticsCount(const int64_t& _statisticsCount)
{
    m_statisticsCount = _statisticsCount;
    m_statisticsCountHasBeenSet = true;
}

bool ConcernInfo::StatisticsCountHasBeenSet() const
{
    return m_statisticsCountHasBeenSet;
}

