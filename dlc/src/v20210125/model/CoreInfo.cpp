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

#include <tencentcloud/dlc/v20210125/model/CoreInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CoreInfo::CoreInfo() :
    m_timestampHasBeenSet(false),
    m_coreUsageHasBeenSet(false)
{
}

CoreInternalOutcome CoreInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CoreInfo.Timestamp` is not array type"));

        const rapidjson::Value &tmpValue = value["Timestamp"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_timestamp.push_back((*itr).GetInt64());
        }
        m_timestampHasBeenSet = true;
    }

    if (value.HasMember("CoreUsage") && !value["CoreUsage"].IsNull())
    {
        if (!value["CoreUsage"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CoreInfo.CoreUsage` is not array type"));

        const rapidjson::Value &tmpValue = value["CoreUsage"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_coreUsage.push_back((*itr).GetInt64());
        }
        m_coreUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CoreInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_timestamp.begin(); itr != m_timestamp.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_coreUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoreUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_coreUsage.begin(); itr != m_coreUsage.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


vector<int64_t> CoreInfo::GetTimestamp() const
{
    return m_timestamp;
}

void CoreInfo::SetTimestamp(const vector<int64_t>& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool CoreInfo::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

vector<int64_t> CoreInfo::GetCoreUsage() const
{
    return m_coreUsage;
}

void CoreInfo::SetCoreUsage(const vector<int64_t>& _coreUsage)
{
    m_coreUsage = _coreUsage;
    m_coreUsageHasBeenSet = true;
}

bool CoreInfo::CoreUsageHasBeenSet() const
{
    return m_coreUsageHasBeenSet;
}

