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

#include <tencentcloud/cvd/v20201104/model/Partition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

Partition::Partition() :
    m_nameHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_usageHasBeenSet(false)
{
}

CoreInternalOutcome Partition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Partition.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Partition.Total` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetDouble();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Partition.Usage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usage = value["Usage"].GetDouble();
        m_usageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Partition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usage, allocator);
    }

}


string Partition::GetName() const
{
    return m_name;
}

void Partition::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Partition::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

double Partition::GetTotal() const
{
    return m_total;
}

void Partition::SetTotal(const double& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool Partition::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

double Partition::GetUsage() const
{
    return m_usage;
}

void Partition::SetUsage(const double& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool Partition::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

