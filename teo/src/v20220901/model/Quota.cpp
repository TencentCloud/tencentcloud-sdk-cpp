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

#include <tencentcloud/teo/v20220901/model/Quota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

Quota::Quota() :
    m_batchHasBeenSet(false),
    m_dailyHasBeenSet(false),
    m_dailyAvailableHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome Quota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Batch") && !value["Batch"].IsNull())
    {
        if (!value["Batch"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.Batch` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_batch = value["Batch"].GetInt64();
        m_batchHasBeenSet = true;
    }

    if (value.HasMember("Daily") && !value["Daily"].IsNull())
    {
        if (!value["Daily"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.Daily` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_daily = value["Daily"].GetInt64();
        m_dailyHasBeenSet = true;
    }

    if (value.HasMember("DailyAvailable") && !value["DailyAvailable"].IsNull())
    {
        if (!value["DailyAvailable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.DailyAvailable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dailyAvailable = value["DailyAvailable"].GetInt64();
        m_dailyAvailableHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Quota.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Quota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_batchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Batch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batch, allocator);
    }

    if (m_dailyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Daily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_daily, allocator);
    }

    if (m_dailyAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DailyAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dailyAvailable, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


int64_t Quota::GetBatch() const
{
    return m_batch;
}

void Quota::SetBatch(const int64_t& _batch)
{
    m_batch = _batch;
    m_batchHasBeenSet = true;
}

bool Quota::BatchHasBeenSet() const
{
    return m_batchHasBeenSet;
}

int64_t Quota::GetDaily() const
{
    return m_daily;
}

void Quota::SetDaily(const int64_t& _daily)
{
    m_daily = _daily;
    m_dailyHasBeenSet = true;
}

bool Quota::DailyHasBeenSet() const
{
    return m_dailyHasBeenSet;
}

int64_t Quota::GetDailyAvailable() const
{
    return m_dailyAvailable;
}

void Quota::SetDailyAvailable(const int64_t& _dailyAvailable)
{
    m_dailyAvailable = _dailyAvailable;
    m_dailyAvailableHasBeenSet = true;
}

bool Quota::DailyAvailableHasBeenSet() const
{
    return m_dailyAvailableHasBeenSet;
}

string Quota::GetType() const
{
    return m_type;
}

void Quota::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Quota::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

