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

#include <tencentcloud/eb/v20210416/model/CkafkaDeliveryParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

CkafkaDeliveryParams::CkafkaDeliveryParams() :
    m_topicNameHasBeenSet(false),
    m_resourceDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome CkafkaDeliveryParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CkafkaDeliveryParams.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceDescription") && !value["ResourceDescription"].IsNull())
    {
        if (!value["ResourceDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CkafkaDeliveryParams.ResourceDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceDescription = string(value["ResourceDescription"].GetString());
        m_resourceDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CkafkaDeliveryParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceDescription.c_str(), allocator).Move(), allocator);
    }

}


string CkafkaDeliveryParams::GetTopicName() const
{
    return m_topicName;
}

void CkafkaDeliveryParams::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CkafkaDeliveryParams::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string CkafkaDeliveryParams::GetResourceDescription() const
{
    return m_resourceDescription;
}

void CkafkaDeliveryParams::SetResourceDescription(const string& _resourceDescription)
{
    m_resourceDescription = _resourceDescription;
    m_resourceDescriptionHasBeenSet = true;
}

bool CkafkaDeliveryParams::ResourceDescriptionHasBeenSet() const
{
    return m_resourceDescriptionHasBeenSet;
}

