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

#include <tencentcloud/ckafka/v20190819/model/BatchModifyTopicResultDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

BatchModifyTopicResultDTO::BatchModifyTopicResultDTO() :
    m_instanceIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_returnCodeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome BatchModifyTopicResultDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicResultDTO.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicResultDTO.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("ReturnCode") && !value["ReturnCode"].IsNull())
    {
        if (!value["ReturnCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicResultDTO.ReturnCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_returnCode = string(value["ReturnCode"].GetString());
        m_returnCodeHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchModifyTopicResultDTO.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BatchModifyTopicResultDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_returnCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReturnCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_returnCode.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string BatchModifyTopicResultDTO::GetInstanceId() const
{
    return m_instanceId;
}

void BatchModifyTopicResultDTO::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BatchModifyTopicResultDTO::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string BatchModifyTopicResultDTO::GetTopicName() const
{
    return m_topicName;
}

void BatchModifyTopicResultDTO::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool BatchModifyTopicResultDTO::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string BatchModifyTopicResultDTO::GetReturnCode() const
{
    return m_returnCode;
}

void BatchModifyTopicResultDTO::SetReturnCode(const string& _returnCode)
{
    m_returnCode = _returnCode;
    m_returnCodeHasBeenSet = true;
}

bool BatchModifyTopicResultDTO::ReturnCodeHasBeenSet() const
{
    return m_returnCodeHasBeenSet;
}

string BatchModifyTopicResultDTO::GetMessage() const
{
    return m_message;
}

void BatchModifyTopicResultDTO::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool BatchModifyTopicResultDTO::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

