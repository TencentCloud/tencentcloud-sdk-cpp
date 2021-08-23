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

#include <tencentcloud/ckafka/v20190819/model/ConsumerGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

ConsumerGroup::ConsumerGroup() :
    m_consumerGroupNameHasBeenSet(false),
    m_subscribedInfoHasBeenSet(false)
{
}

CoreInternalOutcome ConsumerGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConsumerGroupName") && !value["ConsumerGroupName"].IsNull())
    {
        if (!value["ConsumerGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerGroup.ConsumerGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consumerGroupName = string(value["ConsumerGroupName"].GetString());
        m_consumerGroupNameHasBeenSet = true;
    }

    if (value.HasMember("SubscribedInfo") && !value["SubscribedInfo"].IsNull())
    {
        if (!value["SubscribedInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumerGroup.SubscribedInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["SubscribedInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubscribedInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subscribedInfo.push_back(item);
        }
        m_subscribedInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumerGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_consumerGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsumerGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consumerGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribedInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribedInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subscribedInfo.begin(); itr != m_subscribedInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ConsumerGroup::GetConsumerGroupName() const
{
    return m_consumerGroupName;
}

void ConsumerGroup::SetConsumerGroupName(const string& _consumerGroupName)
{
    m_consumerGroupName = _consumerGroupName;
    m_consumerGroupNameHasBeenSet = true;
}

bool ConsumerGroup::ConsumerGroupNameHasBeenSet() const
{
    return m_consumerGroupNameHasBeenSet;
}

vector<SubscribedInfo> ConsumerGroup::GetSubscribedInfo() const
{
    return m_subscribedInfo;
}

void ConsumerGroup::SetSubscribedInfo(const vector<SubscribedInfo>& _subscribedInfo)
{
    m_subscribedInfo = _subscribedInfo;
    m_subscribedInfoHasBeenSet = true;
}

bool ConsumerGroup::SubscribedInfoHasBeenSet() const
{
    return m_subscribedInfoHasBeenSet;
}

