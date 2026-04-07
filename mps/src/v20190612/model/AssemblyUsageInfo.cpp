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

#include <tencentcloud/mps/v20190612/model/AssemblyUsageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AssemblyUsageInfo::AssemblyUsageInfo() :
    m_assemblyUsageDetailsHasBeenSet(false),
    m_sumBasicChannelDurationHasBeenSet(false),
    m_sumStandardChannelDurationHasBeenSet(false)
{
}

CoreInternalOutcome AssemblyUsageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AssemblyUsageDetails") && !value["AssemblyUsageDetails"].IsNull())
    {
        if (!value["AssemblyUsageDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssemblyUsageInfo.AssemblyUsageDetails` is not array type"));

        const rapidjson::Value &tmpValue = value["AssemblyUsageDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssemblyUsageDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assemblyUsageDetails.push_back(item);
        }
        m_assemblyUsageDetailsHasBeenSet = true;
    }

    if (value.HasMember("SumBasicChannelDuration") && !value["SumBasicChannelDuration"].IsNull())
    {
        if (!value["SumBasicChannelDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssemblyUsageInfo.SumBasicChannelDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sumBasicChannelDuration = value["SumBasicChannelDuration"].GetInt64();
        m_sumBasicChannelDurationHasBeenSet = true;
    }

    if (value.HasMember("SumStandardChannelDuration") && !value["SumStandardChannelDuration"].IsNull())
    {
        if (!value["SumStandardChannelDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssemblyUsageInfo.SumStandardChannelDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sumStandardChannelDuration = value["SumStandardChannelDuration"].GetInt64();
        m_sumStandardChannelDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssemblyUsageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_assemblyUsageDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssemblyUsageDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assemblyUsageDetails.begin(); itr != m_assemblyUsageDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sumBasicChannelDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumBasicChannelDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sumBasicChannelDuration, allocator);
    }

    if (m_sumStandardChannelDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SumStandardChannelDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sumStandardChannelDuration, allocator);
    }

}


vector<AssemblyUsageDetail> AssemblyUsageInfo::GetAssemblyUsageDetails() const
{
    return m_assemblyUsageDetails;
}

void AssemblyUsageInfo::SetAssemblyUsageDetails(const vector<AssemblyUsageDetail>& _assemblyUsageDetails)
{
    m_assemblyUsageDetails = _assemblyUsageDetails;
    m_assemblyUsageDetailsHasBeenSet = true;
}

bool AssemblyUsageInfo::AssemblyUsageDetailsHasBeenSet() const
{
    return m_assemblyUsageDetailsHasBeenSet;
}

int64_t AssemblyUsageInfo::GetSumBasicChannelDuration() const
{
    return m_sumBasicChannelDuration;
}

void AssemblyUsageInfo::SetSumBasicChannelDuration(const int64_t& _sumBasicChannelDuration)
{
    m_sumBasicChannelDuration = _sumBasicChannelDuration;
    m_sumBasicChannelDurationHasBeenSet = true;
}

bool AssemblyUsageInfo::SumBasicChannelDurationHasBeenSet() const
{
    return m_sumBasicChannelDurationHasBeenSet;
}

int64_t AssemblyUsageInfo::GetSumStandardChannelDuration() const
{
    return m_sumStandardChannelDuration;
}

void AssemblyUsageInfo::SetSumStandardChannelDuration(const int64_t& _sumStandardChannelDuration)
{
    m_sumStandardChannelDuration = _sumStandardChannelDuration;
    m_sumStandardChannelDurationHasBeenSet = true;
}

bool AssemblyUsageInfo::SumStandardChannelDurationHasBeenSet() const
{
    return m_sumStandardChannelDurationHasBeenSet;
}

