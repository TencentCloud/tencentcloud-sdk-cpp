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

#include <tencentcloud/ckafka/v20190819/model/ConsumerGroupSpeed.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ConsumerGroupSpeed::ConsumerGroupSpeed() :
    m_consumerGroupNameHasBeenSet(false),
    m_speedHasBeenSet(false)
{
}

CoreInternalOutcome ConsumerGroupSpeed::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsumerGroupName") && !value["ConsumerGroupName"].IsNull())
    {
        if (!value["ConsumerGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerGroupSpeed.ConsumerGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupName = string(value["ConsumerGroupName"].GetString());
        m_consumerGroupNameHasBeenSet = true;
    }

    if (value.HasMember("Speed") && !value["Speed"].IsNull())
    {
        if (!value["Speed"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerGroupSpeed.Speed` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_speed = value["Speed"].GetUint64();
        m_speedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumerGroupSpeed::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consumerGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_speedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Speed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_speed, allocator);
    }

}


string ConsumerGroupSpeed::GetConsumerGroupName() const
{
    return m_consumerGroupName;
}

void ConsumerGroupSpeed::SetConsumerGroupName(const string& _consumerGroupName)
{
    m_consumerGroupName = _consumerGroupName;
    m_consumerGroupNameHasBeenSet = true;
}

bool ConsumerGroupSpeed::ConsumerGroupNameHasBeenSet() const
{
    return m_consumerGroupNameHasBeenSet;
}

uint64_t ConsumerGroupSpeed::GetSpeed() const
{
    return m_speed;
}

void ConsumerGroupSpeed::SetSpeed(const uint64_t& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool ConsumerGroupSpeed::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

