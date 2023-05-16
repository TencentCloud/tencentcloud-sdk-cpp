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

#include <tencentcloud/tke/v20180525/model/KubeJarvisStateStatistic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

KubeJarvisStateStatistic::KubeJarvisStateStatistic() :
    m_healthyLevelHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome KubeJarvisStateStatistic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HealthyLevel") && !value["HealthyLevel"].IsNull())
    {
        if (!value["HealthyLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateStatistic.HealthyLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthyLevel = string(value["HealthyLevel"].GetString());
        m_healthyLevelHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KubeJarvisStateStatistic.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KubeJarvisStateStatistic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_healthyLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthyLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthyLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string KubeJarvisStateStatistic::GetHealthyLevel() const
{
    return m_healthyLevel;
}

void KubeJarvisStateStatistic::SetHealthyLevel(const string& _healthyLevel)
{
    m_healthyLevel = _healthyLevel;
    m_healthyLevelHasBeenSet = true;
}

bool KubeJarvisStateStatistic::HealthyLevelHasBeenSet() const
{
    return m_healthyLevelHasBeenSet;
}

int64_t KubeJarvisStateStatistic::GetCount() const
{
    return m_count;
}

void KubeJarvisStateStatistic::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool KubeJarvisStateStatistic::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

