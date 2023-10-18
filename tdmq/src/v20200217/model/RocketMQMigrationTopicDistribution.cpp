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

#include <tencentcloud/tdmq/v20200217/model/RocketMQMigrationTopicDistribution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQMigrationTopicDistribution::RocketMQMigrationTopicDistribution() :
    m_stageHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQMigrationTopicDistribution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Stage") && !value["Stage"].IsNull())
    {
        if (!value["Stage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMigrationTopicDistribution.Stage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stage = string(value["Stage"].GetString());
        m_stageHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQMigrationTopicDistribution.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQMigrationTopicDistribution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stage.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string RocketMQMigrationTopicDistribution::GetStage() const
{
    return m_stage;
}

void RocketMQMigrationTopicDistribution::SetStage(const string& _stage)
{
    m_stage = _stage;
    m_stageHasBeenSet = true;
}

bool RocketMQMigrationTopicDistribution::StageHasBeenSet() const
{
    return m_stageHasBeenSet;
}

int64_t RocketMQMigrationTopicDistribution::GetCount() const
{
    return m_count;
}

void RocketMQMigrationTopicDistribution::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool RocketMQMigrationTopicDistribution::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

