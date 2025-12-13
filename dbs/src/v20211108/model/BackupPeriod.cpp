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

#include <tencentcloud/dbs/v20211108/model/BackupPeriod.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

BackupPeriod::BackupPeriod() :
    m_periodTypeHasBeenSet(false),
    m_dayHasBeenSet(false)
{
}

CoreInternalOutcome BackupPeriod::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PeriodType") && !value["PeriodType"].IsNull())
    {
        if (!value["PeriodType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPeriod.PeriodType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodType = string(value["PeriodType"].GetString());
        m_periodTypeHasBeenSet = true;
    }

    if (value.HasMember("Day") && !value["Day"].IsNull())
    {
        if (!value["Day"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupPeriod.Day` is not array type"));

        const rapidjson::Value &tmpValue = value["Day"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_day.push_back((*itr).GetString());
        }
        m_dayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupPeriod::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_periodTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodType.c_str(), allocator).Move(), allocator);
    }

    if (m_dayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Day";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_day.begin(); itr != m_day.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string BackupPeriod::GetPeriodType() const
{
    return m_periodType;
}

void BackupPeriod::SetPeriodType(const string& _periodType)
{
    m_periodType = _periodType;
    m_periodTypeHasBeenSet = true;
}

bool BackupPeriod::PeriodTypeHasBeenSet() const
{
    return m_periodTypeHasBeenSet;
}

vector<string> BackupPeriod::GetDay() const
{
    return m_day;
}

void BackupPeriod::SetDay(const vector<string>& _day)
{
    m_day = _day;
    m_dayHasBeenSet = true;
}

bool BackupPeriod::DayHasBeenSet() const
{
    return m_dayHasBeenSet;
}

