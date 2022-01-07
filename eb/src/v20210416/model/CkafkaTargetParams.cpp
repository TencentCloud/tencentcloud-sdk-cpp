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

#include <tencentcloud/eb/v20210416/model/CkafkaTargetParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

CkafkaTargetParams::CkafkaTargetParams() :
    m_topicNameHasBeenSet(false),
    m_retryPolicyHasBeenSet(false)
{
}

CoreInternalOutcome CkafkaTargetParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CkafkaTargetParams.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("RetryPolicy") && !value["RetryPolicy"].IsNull())
    {
        if (!value["RetryPolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CkafkaTargetParams.RetryPolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_retryPolicy.Deserialize(value["RetryPolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_retryPolicyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CkafkaTargetParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_retryPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_retryPolicy.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CkafkaTargetParams::GetTopicName() const
{
    return m_topicName;
}

void CkafkaTargetParams::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CkafkaTargetParams::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

RetryPolicy CkafkaTargetParams::GetRetryPolicy() const
{
    return m_retryPolicy;
}

void CkafkaTargetParams::SetRetryPolicy(const RetryPolicy& _retryPolicy)
{
    m_retryPolicy = _retryPolicy;
    m_retryPolicyHasBeenSet = true;
}

bool CkafkaTargetParams::RetryPolicyHasBeenSet() const
{
    return m_retryPolicyHasBeenSet;
}

