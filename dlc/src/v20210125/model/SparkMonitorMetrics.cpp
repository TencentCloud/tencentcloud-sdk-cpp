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

#include <tencentcloud/dlc/v20210125/model/SparkMonitorMetrics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SparkMonitorMetrics::SparkMonitorMetrics() :
    m_shuffleWriteBytesCosHasBeenSet(false),
    m_shuffleWriteBytesTotalHasBeenSet(false)
{
}

CoreInternalOutcome SparkMonitorMetrics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShuffleWriteBytesCos") && !value["ShuffleWriteBytesCos"].IsNull())
    {
        if (!value["ShuffleWriteBytesCos"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkMonitorMetrics.ShuffleWriteBytesCos` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shuffleWriteBytesCos = value["ShuffleWriteBytesCos"].GetInt64();
        m_shuffleWriteBytesCosHasBeenSet = true;
    }

    if (value.HasMember("ShuffleWriteBytesTotal") && !value["ShuffleWriteBytesTotal"].IsNull())
    {
        if (!value["ShuffleWriteBytesTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkMonitorMetrics.ShuffleWriteBytesTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shuffleWriteBytesTotal = value["ShuffleWriteBytesTotal"].GetInt64();
        m_shuffleWriteBytesTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SparkMonitorMetrics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shuffleWriteBytesCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShuffleWriteBytesCos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shuffleWriteBytesCos, allocator);
    }

    if (m_shuffleWriteBytesTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShuffleWriteBytesTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shuffleWriteBytesTotal, allocator);
    }

}


int64_t SparkMonitorMetrics::GetShuffleWriteBytesCos() const
{
    return m_shuffleWriteBytesCos;
}

void SparkMonitorMetrics::SetShuffleWriteBytesCos(const int64_t& _shuffleWriteBytesCos)
{
    m_shuffleWriteBytesCos = _shuffleWriteBytesCos;
    m_shuffleWriteBytesCosHasBeenSet = true;
}

bool SparkMonitorMetrics::ShuffleWriteBytesCosHasBeenSet() const
{
    return m_shuffleWriteBytesCosHasBeenSet;
}

int64_t SparkMonitorMetrics::GetShuffleWriteBytesTotal() const
{
    return m_shuffleWriteBytesTotal;
}

void SparkMonitorMetrics::SetShuffleWriteBytesTotal(const int64_t& _shuffleWriteBytesTotal)
{
    m_shuffleWriteBytesTotal = _shuffleWriteBytesTotal;
    m_shuffleWriteBytesTotalHasBeenSet = true;
}

bool SparkMonitorMetrics::ShuffleWriteBytesTotalHasBeenSet() const
{
    return m_shuffleWriteBytesTotalHasBeenSet;
}

