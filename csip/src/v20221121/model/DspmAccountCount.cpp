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

#include <tencentcloud/csip/v20221121/model/DspmAccountCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmAccountCount::DspmAccountCount() :
    m_uinAccountCountHasBeenSet(false),
    m_personCountHasBeenSet(false),
    m_uncontrolledAccountCountHasBeenSet(false),
    m_totalAccountCountHasBeenSet(false)
{
}

CoreInternalOutcome DspmAccountCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UinAccountCount") && !value["UinAccountCount"].IsNull())
    {
        if (!value["UinAccountCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccountCount.UinAccountCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uinAccountCount = value["UinAccountCount"].GetInt64();
        m_uinAccountCountHasBeenSet = true;
    }

    if (value.HasMember("PersonCount") && !value["PersonCount"].IsNull())
    {
        if (!value["PersonCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccountCount.PersonCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_personCount = value["PersonCount"].GetInt64();
        m_personCountHasBeenSet = true;
    }

    if (value.HasMember("UncontrolledAccountCount") && !value["UncontrolledAccountCount"].IsNull())
    {
        if (!value["UncontrolledAccountCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccountCount.UncontrolledAccountCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uncontrolledAccountCount = value["UncontrolledAccountCount"].GetInt64();
        m_uncontrolledAccountCountHasBeenSet = true;
    }

    if (value.HasMember("TotalAccountCount") && !value["TotalAccountCount"].IsNull())
    {
        if (!value["TotalAccountCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmAccountCount.TotalAccountCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAccountCount = value["TotalAccountCount"].GetInt64();
        m_totalAccountCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmAccountCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinAccountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UinAccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uinAccountCount, allocator);
    }

    if (m_personCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_personCount, allocator);
    }

    if (m_uncontrolledAccountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UncontrolledAccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uncontrolledAccountCount, allocator);
    }

    if (m_totalAccountCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAccountCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAccountCount, allocator);
    }

}


int64_t DspmAccountCount::GetUinAccountCount() const
{
    return m_uinAccountCount;
}

void DspmAccountCount::SetUinAccountCount(const int64_t& _uinAccountCount)
{
    m_uinAccountCount = _uinAccountCount;
    m_uinAccountCountHasBeenSet = true;
}

bool DspmAccountCount::UinAccountCountHasBeenSet() const
{
    return m_uinAccountCountHasBeenSet;
}

int64_t DspmAccountCount::GetPersonCount() const
{
    return m_personCount;
}

void DspmAccountCount::SetPersonCount(const int64_t& _personCount)
{
    m_personCount = _personCount;
    m_personCountHasBeenSet = true;
}

bool DspmAccountCount::PersonCountHasBeenSet() const
{
    return m_personCountHasBeenSet;
}

int64_t DspmAccountCount::GetUncontrolledAccountCount() const
{
    return m_uncontrolledAccountCount;
}

void DspmAccountCount::SetUncontrolledAccountCount(const int64_t& _uncontrolledAccountCount)
{
    m_uncontrolledAccountCount = _uncontrolledAccountCount;
    m_uncontrolledAccountCountHasBeenSet = true;
}

bool DspmAccountCount::UncontrolledAccountCountHasBeenSet() const
{
    return m_uncontrolledAccountCountHasBeenSet;
}

int64_t DspmAccountCount::GetTotalAccountCount() const
{
    return m_totalAccountCount;
}

void DspmAccountCount::SetTotalAccountCount(const int64_t& _totalAccountCount)
{
    m_totalAccountCount = _totalAccountCount;
    m_totalAccountCountHasBeenSet = true;
}

bool DspmAccountCount::TotalAccountCountHasBeenSet() const
{
    return m_totalAccountCountHasBeenSet;
}

