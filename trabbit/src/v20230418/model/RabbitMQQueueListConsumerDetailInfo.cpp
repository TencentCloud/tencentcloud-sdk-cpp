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

#include <tencentcloud/trabbit/v20230418/model/RabbitMQQueueListConsumerDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

RabbitMQQueueListConsumerDetailInfo::RabbitMQQueueListConsumerDetailInfo() :
    m_consumersNumberHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQQueueListConsumerDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsumersNumber") && !value["ConsumersNumber"].IsNull())
    {
        if (!value["ConsumersNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQQueueListConsumerDetailInfo.ConsumersNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_consumersNumber = value["ConsumersNumber"].GetInt64();
        m_consumersNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQQueueListConsumerDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consumersNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumersNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_consumersNumber, allocator);
    }

}


int64_t RabbitMQQueueListConsumerDetailInfo::GetConsumersNumber() const
{
    return m_consumersNumber;
}

void RabbitMQQueueListConsumerDetailInfo::SetConsumersNumber(const int64_t& _consumersNumber)
{
    m_consumersNumber = _consumersNumber;
    m_consumersNumberHasBeenSet = true;
}

bool RabbitMQQueueListConsumerDetailInfo::ConsumersNumberHasBeenSet() const
{
    return m_consumersNumberHasBeenSet;
}

