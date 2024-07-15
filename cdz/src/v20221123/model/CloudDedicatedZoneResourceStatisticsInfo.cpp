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

#include <tencentcloud/cdz/v20221123/model/CloudDedicatedZoneResourceStatisticsInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdz::V20221123::Model;
using namespace std;

CloudDedicatedZoneResourceStatisticsInfo::CloudDedicatedZoneResourceStatisticsInfo() :
    m_itemHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_usageRateHasBeenSet(false),
    m_remainHasBeenSet(false),
    m_remainRateHasBeenSet(false),
    m_thisMondayUsageRateHasBeenSet(false),
    m_thisMondayUsageGrowthRateHasBeenSet(false),
    m_lastMondayUsageGrowthRateHasBeenSet(false)
{
}

CoreInternalOutcome CloudDedicatedZoneResourceStatisticsInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneResourceStatisticsInfo.Item` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_item = string(value["Item"].GetString());
        m_itemHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneResourceStatisticsInfo.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneResourceStatisticsInfo.Total` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_total = string(value["Total"].GetString());
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneResourceStatisticsInfo.Usage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usage = string(value["Usage"].GetString());
        m_usageHasBeenSet = true;
    }

    if (value.HasMember("UsageRate") && !value["UsageRate"].IsNull())
    {
        if (!value["UsageRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneResourceStatisticsInfo.UsageRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageRate = string(value["UsageRate"].GetString());
        m_usageRateHasBeenSet = true;
    }

    if (value.HasMember("Remain") && !value["Remain"].IsNull())
    {
        if (!value["Remain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneResourceStatisticsInfo.Remain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remain = string(value["Remain"].GetString());
        m_remainHasBeenSet = true;
    }

    if (value.HasMember("RemainRate") && !value["RemainRate"].IsNull())
    {
        if (!value["RemainRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneResourceStatisticsInfo.RemainRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remainRate = string(value["RemainRate"].GetString());
        m_remainRateHasBeenSet = true;
    }

    if (value.HasMember("ThisMondayUsageRate") && !value["ThisMondayUsageRate"].IsNull())
    {
        if (!value["ThisMondayUsageRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneResourceStatisticsInfo.ThisMondayUsageRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thisMondayUsageRate = string(value["ThisMondayUsageRate"].GetString());
        m_thisMondayUsageRateHasBeenSet = true;
    }

    if (value.HasMember("ThisMondayUsageGrowthRate") && !value["ThisMondayUsageGrowthRate"].IsNull())
    {
        if (!value["ThisMondayUsageGrowthRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneResourceStatisticsInfo.ThisMondayUsageGrowthRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thisMondayUsageGrowthRate = string(value["ThisMondayUsageGrowthRate"].GetString());
        m_thisMondayUsageGrowthRateHasBeenSet = true;
    }

    if (value.HasMember("LastMondayUsageGrowthRate") && !value["LastMondayUsageGrowthRate"].IsNull())
    {
        if (!value["LastMondayUsageGrowthRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudDedicatedZoneResourceStatisticsInfo.LastMondayUsageGrowthRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastMondayUsageGrowthRate = string(value["LastMondayUsageGrowthRate"].GetString());
        m_lastMondayUsageGrowthRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudDedicatedZoneResourceStatisticsInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_item.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_total.c_str(), allocator).Move(), allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usage.c_str(), allocator).Move(), allocator);
    }

    if (m_usageRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usageRate.c_str(), allocator).Move(), allocator);
    }

    if (m_remainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remain.c_str(), allocator).Move(), allocator);
    }

    if (m_remainRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remainRate.c_str(), allocator).Move(), allocator);
    }

    if (m_thisMondayUsageRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThisMondayUsageRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thisMondayUsageRate.c_str(), allocator).Move(), allocator);
    }

    if (m_thisMondayUsageGrowthRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThisMondayUsageGrowthRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thisMondayUsageGrowthRate.c_str(), allocator).Move(), allocator);
    }

    if (m_lastMondayUsageGrowthRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastMondayUsageGrowthRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastMondayUsageGrowthRate.c_str(), allocator).Move(), allocator);
    }

}


string CloudDedicatedZoneResourceStatisticsInfo::GetItem() const
{
    return m_item;
}

void CloudDedicatedZoneResourceStatisticsInfo::SetItem(const string& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool CloudDedicatedZoneResourceStatisticsInfo::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

string CloudDedicatedZoneResourceStatisticsInfo::GetUnit() const
{
    return m_unit;
}

void CloudDedicatedZoneResourceStatisticsInfo::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool CloudDedicatedZoneResourceStatisticsInfo::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string CloudDedicatedZoneResourceStatisticsInfo::GetTotal() const
{
    return m_total;
}

void CloudDedicatedZoneResourceStatisticsInfo::SetTotal(const string& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool CloudDedicatedZoneResourceStatisticsInfo::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

string CloudDedicatedZoneResourceStatisticsInfo::GetUsage() const
{
    return m_usage;
}

void CloudDedicatedZoneResourceStatisticsInfo::SetUsage(const string& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool CloudDedicatedZoneResourceStatisticsInfo::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

string CloudDedicatedZoneResourceStatisticsInfo::GetUsageRate() const
{
    return m_usageRate;
}

void CloudDedicatedZoneResourceStatisticsInfo::SetUsageRate(const string& _usageRate)
{
    m_usageRate = _usageRate;
    m_usageRateHasBeenSet = true;
}

bool CloudDedicatedZoneResourceStatisticsInfo::UsageRateHasBeenSet() const
{
    return m_usageRateHasBeenSet;
}

string CloudDedicatedZoneResourceStatisticsInfo::GetRemain() const
{
    return m_remain;
}

void CloudDedicatedZoneResourceStatisticsInfo::SetRemain(const string& _remain)
{
    m_remain = _remain;
    m_remainHasBeenSet = true;
}

bool CloudDedicatedZoneResourceStatisticsInfo::RemainHasBeenSet() const
{
    return m_remainHasBeenSet;
}

string CloudDedicatedZoneResourceStatisticsInfo::GetRemainRate() const
{
    return m_remainRate;
}

void CloudDedicatedZoneResourceStatisticsInfo::SetRemainRate(const string& _remainRate)
{
    m_remainRate = _remainRate;
    m_remainRateHasBeenSet = true;
}

bool CloudDedicatedZoneResourceStatisticsInfo::RemainRateHasBeenSet() const
{
    return m_remainRateHasBeenSet;
}

string CloudDedicatedZoneResourceStatisticsInfo::GetThisMondayUsageRate() const
{
    return m_thisMondayUsageRate;
}

void CloudDedicatedZoneResourceStatisticsInfo::SetThisMondayUsageRate(const string& _thisMondayUsageRate)
{
    m_thisMondayUsageRate = _thisMondayUsageRate;
    m_thisMondayUsageRateHasBeenSet = true;
}

bool CloudDedicatedZoneResourceStatisticsInfo::ThisMondayUsageRateHasBeenSet() const
{
    return m_thisMondayUsageRateHasBeenSet;
}

string CloudDedicatedZoneResourceStatisticsInfo::GetThisMondayUsageGrowthRate() const
{
    return m_thisMondayUsageGrowthRate;
}

void CloudDedicatedZoneResourceStatisticsInfo::SetThisMondayUsageGrowthRate(const string& _thisMondayUsageGrowthRate)
{
    m_thisMondayUsageGrowthRate = _thisMondayUsageGrowthRate;
    m_thisMondayUsageGrowthRateHasBeenSet = true;
}

bool CloudDedicatedZoneResourceStatisticsInfo::ThisMondayUsageGrowthRateHasBeenSet() const
{
    return m_thisMondayUsageGrowthRateHasBeenSet;
}

string CloudDedicatedZoneResourceStatisticsInfo::GetLastMondayUsageGrowthRate() const
{
    return m_lastMondayUsageGrowthRate;
}

void CloudDedicatedZoneResourceStatisticsInfo::SetLastMondayUsageGrowthRate(const string& _lastMondayUsageGrowthRate)
{
    m_lastMondayUsageGrowthRate = _lastMondayUsageGrowthRate;
    m_lastMondayUsageGrowthRateHasBeenSet = true;
}

bool CloudDedicatedZoneResourceStatisticsInfo::LastMondayUsageGrowthRateHasBeenSet() const
{
    return m_lastMondayUsageGrowthRateHasBeenSet;
}

