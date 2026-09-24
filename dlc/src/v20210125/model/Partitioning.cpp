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

#include <tencentcloud/dlc/v20210125/model/Partitioning.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

Partitioning::Partitioning() :
    m_strategyHasBeenSet(false),
    m_yearPartitioningHasBeenSet(false),
    m_monthPartitioningHasBeenSet(false),
    m_dayPartitioningHasBeenSet(false),
    m_hourPartitioningHasBeenSet(false),
    m_identityPartitioningHasBeenSet(false),
    m_listPartitioningHasBeenSet(false),
    m_rangePartitioningHasBeenSet(false),
    m_bucketPartitioningHasBeenSet(false),
    m_truncatePartitioningHasBeenSet(false)
{
}

CoreInternalOutcome Partitioning::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Strategy") && !value["Strategy"].IsNull())
    {
        if (!value["Strategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Partitioning.Strategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strategy = string(value["Strategy"].GetString());
        m_strategyHasBeenSet = true;
    }

    if (value.HasMember("YearPartitioning") && !value["YearPartitioning"].IsNull())
    {
        if (!value["YearPartitioning"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Partitioning.YearPartitioning` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_yearPartitioning.Deserialize(value["YearPartitioning"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_yearPartitioningHasBeenSet = true;
    }

    if (value.HasMember("MonthPartitioning") && !value["MonthPartitioning"].IsNull())
    {
        if (!value["MonthPartitioning"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Partitioning.MonthPartitioning` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_monthPartitioning.Deserialize(value["MonthPartitioning"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_monthPartitioningHasBeenSet = true;
    }

    if (value.HasMember("DayPartitioning") && !value["DayPartitioning"].IsNull())
    {
        if (!value["DayPartitioning"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Partitioning.DayPartitioning` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dayPartitioning.Deserialize(value["DayPartitioning"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dayPartitioningHasBeenSet = true;
    }

    if (value.HasMember("HourPartitioning") && !value["HourPartitioning"].IsNull())
    {
        if (!value["HourPartitioning"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Partitioning.HourPartitioning` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hourPartitioning.Deserialize(value["HourPartitioning"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hourPartitioningHasBeenSet = true;
    }

    if (value.HasMember("IdentityPartitioning") && !value["IdentityPartitioning"].IsNull())
    {
        if (!value["IdentityPartitioning"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Partitioning.IdentityPartitioning` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_identityPartitioning.Deserialize(value["IdentityPartitioning"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_identityPartitioningHasBeenSet = true;
    }

    if (value.HasMember("ListPartitioning") && !value["ListPartitioning"].IsNull())
    {
        if (!value["ListPartitioning"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Partitioning.ListPartitioning` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_listPartitioning.Deserialize(value["ListPartitioning"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_listPartitioningHasBeenSet = true;
    }

    if (value.HasMember("RangePartitioning") && !value["RangePartitioning"].IsNull())
    {
        if (!value["RangePartitioning"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Partitioning.RangePartitioning` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rangePartitioning.Deserialize(value["RangePartitioning"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rangePartitioningHasBeenSet = true;
    }

    if (value.HasMember("BucketPartitioning") && !value["BucketPartitioning"].IsNull())
    {
        if (!value["BucketPartitioning"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Partitioning.BucketPartitioning` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bucketPartitioning.Deserialize(value["BucketPartitioning"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bucketPartitioningHasBeenSet = true;
    }

    if (value.HasMember("TruncatePartitioning") && !value["TruncatePartitioning"].IsNull())
    {
        if (!value["TruncatePartitioning"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Partitioning.TruncatePartitioning` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_truncatePartitioning.Deserialize(value["TruncatePartitioning"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_truncatePartitioningHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Partitioning::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strategy.c_str(), allocator).Move(), allocator);
    }

    if (m_yearPartitioningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "YearPartitioning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_yearPartitioning.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_monthPartitioningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonthPartitioning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_monthPartitioning.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dayPartitioningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DayPartitioning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dayPartitioning.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hourPartitioningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HourPartitioning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hourPartitioning.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_identityPartitioningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityPartitioning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_identityPartitioning.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_listPartitioningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListPartitioning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_listPartitioning.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rangePartitioningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangePartitioning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rangePartitioning.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bucketPartitioningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketPartitioning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bucketPartitioning.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_truncatePartitioningHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TruncatePartitioning";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_truncatePartitioning.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Partitioning::GetStrategy() const
{
    return m_strategy;
}

void Partitioning::SetStrategy(const string& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool Partitioning::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}

SingleFieldPartitioning Partitioning::GetYearPartitioning() const
{
    return m_yearPartitioning;
}

void Partitioning::SetYearPartitioning(const SingleFieldPartitioning& _yearPartitioning)
{
    m_yearPartitioning = _yearPartitioning;
    m_yearPartitioningHasBeenSet = true;
}

bool Partitioning::YearPartitioningHasBeenSet() const
{
    return m_yearPartitioningHasBeenSet;
}

SingleFieldPartitioning Partitioning::GetMonthPartitioning() const
{
    return m_monthPartitioning;
}

void Partitioning::SetMonthPartitioning(const SingleFieldPartitioning& _monthPartitioning)
{
    m_monthPartitioning = _monthPartitioning;
    m_monthPartitioningHasBeenSet = true;
}

bool Partitioning::MonthPartitioningHasBeenSet() const
{
    return m_monthPartitioningHasBeenSet;
}

SingleFieldPartitioning Partitioning::GetDayPartitioning() const
{
    return m_dayPartitioning;
}

void Partitioning::SetDayPartitioning(const SingleFieldPartitioning& _dayPartitioning)
{
    m_dayPartitioning = _dayPartitioning;
    m_dayPartitioningHasBeenSet = true;
}

bool Partitioning::DayPartitioningHasBeenSet() const
{
    return m_dayPartitioningHasBeenSet;
}

SingleFieldPartitioning Partitioning::GetHourPartitioning() const
{
    return m_hourPartitioning;
}

void Partitioning::SetHourPartitioning(const SingleFieldPartitioning& _hourPartitioning)
{
    m_hourPartitioning = _hourPartitioning;
    m_hourPartitioningHasBeenSet = true;
}

bool Partitioning::HourPartitioningHasBeenSet() const
{
    return m_hourPartitioningHasBeenSet;
}

SingleFieldPartitioning Partitioning::GetIdentityPartitioning() const
{
    return m_identityPartitioning;
}

void Partitioning::SetIdentityPartitioning(const SingleFieldPartitioning& _identityPartitioning)
{
    m_identityPartitioning = _identityPartitioning;
    m_identityPartitioningHasBeenSet = true;
}

bool Partitioning::IdentityPartitioningHasBeenSet() const
{
    return m_identityPartitioningHasBeenSet;
}

ListPartitioning Partitioning::GetListPartitioning() const
{
    return m_listPartitioning;
}

void Partitioning::SetListPartitioning(const ListPartitioning& _listPartitioning)
{
    m_listPartitioning = _listPartitioning;
    m_listPartitioningHasBeenSet = true;
}

bool Partitioning::ListPartitioningHasBeenSet() const
{
    return m_listPartitioningHasBeenSet;
}

RangePartitioning Partitioning::GetRangePartitioning() const
{
    return m_rangePartitioning;
}

void Partitioning::SetRangePartitioning(const RangePartitioning& _rangePartitioning)
{
    m_rangePartitioning = _rangePartitioning;
    m_rangePartitioningHasBeenSet = true;
}

bool Partitioning::RangePartitioningHasBeenSet() const
{
    return m_rangePartitioningHasBeenSet;
}

BucketPartitioning Partitioning::GetBucketPartitioning() const
{
    return m_bucketPartitioning;
}

void Partitioning::SetBucketPartitioning(const BucketPartitioning& _bucketPartitioning)
{
    m_bucketPartitioning = _bucketPartitioning;
    m_bucketPartitioningHasBeenSet = true;
}

bool Partitioning::BucketPartitioningHasBeenSet() const
{
    return m_bucketPartitioningHasBeenSet;
}

TruncatePartitioning Partitioning::GetTruncatePartitioning() const
{
    return m_truncatePartitioning;
}

void Partitioning::SetTruncatePartitioning(const TruncatePartitioning& _truncatePartitioning)
{
    m_truncatePartitioning = _truncatePartitioning;
    m_truncatePartitioningHasBeenSet = true;
}

bool Partitioning::TruncatePartitioningHasBeenSet() const
{
    return m_truncatePartitioningHasBeenSet;
}

