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

#include <tencentcloud/tdmq/v20200217/model/RouterMessageServiceTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RouterMessageServiceTarget::RouterMessageServiceTarget() :
    m_accessKeyHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_sendWithBase64HasBeenSet(false),
    m_targetProduceConcurrentThreadCountHasBeenSet(false),
    m_topicHasBeenSet(false)
{
}

CoreInternalOutcome RouterMessageServiceTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceTarget.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceTarget.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceTarget.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceTarget.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("SendWithBase64") && !value["SendWithBase64"].IsNull())
    {
        if (!value["SendWithBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceTarget.SendWithBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sendWithBase64 = string(value["SendWithBase64"].GetString());
        m_sendWithBase64HasBeenSet = true;
    }

    if (value.HasMember("TargetProduceConcurrentThreadCount") && !value["TargetProduceConcurrentThreadCount"].IsNull())
    {
        if (!value["TargetProduceConcurrentThreadCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceTarget.TargetProduceConcurrentThreadCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetProduceConcurrentThreadCount = value["TargetProduceConcurrentThreadCount"].GetInt64();
        m_targetProduceConcurrentThreadCountHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceTarget.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouterMessageServiceTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_sendWithBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendWithBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sendWithBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_targetProduceConcurrentThreadCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetProduceConcurrentThreadCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetProduceConcurrentThreadCount, allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

}


string RouterMessageServiceTarget::GetAccessKey() const
{
    return m_accessKey;
}

void RouterMessageServiceTarget::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool RouterMessageServiceTarget::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string RouterMessageServiceTarget::GetEndpoint() const
{
    return m_endpoint;
}

void RouterMessageServiceTarget::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool RouterMessageServiceTarget::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string RouterMessageServiceTarget::GetSecretKey() const
{
    return m_secretKey;
}

void RouterMessageServiceTarget::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool RouterMessageServiceTarget::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string RouterMessageServiceTarget::GetQueue() const
{
    return m_queue;
}

void RouterMessageServiceTarget::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool RouterMessageServiceTarget::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string RouterMessageServiceTarget::GetSendWithBase64() const
{
    return m_sendWithBase64;
}

void RouterMessageServiceTarget::SetSendWithBase64(const string& _sendWithBase64)
{
    m_sendWithBase64 = _sendWithBase64;
    m_sendWithBase64HasBeenSet = true;
}

bool RouterMessageServiceTarget::SendWithBase64HasBeenSet() const
{
    return m_sendWithBase64HasBeenSet;
}

int64_t RouterMessageServiceTarget::GetTargetProduceConcurrentThreadCount() const
{
    return m_targetProduceConcurrentThreadCount;
}

void RouterMessageServiceTarget::SetTargetProduceConcurrentThreadCount(const int64_t& _targetProduceConcurrentThreadCount)
{
    m_targetProduceConcurrentThreadCount = _targetProduceConcurrentThreadCount;
    m_targetProduceConcurrentThreadCountHasBeenSet = true;
}

bool RouterMessageServiceTarget::TargetProduceConcurrentThreadCountHasBeenSet() const
{
    return m_targetProduceConcurrentThreadCountHasBeenSet;
}

string RouterMessageServiceTarget::GetTopic() const
{
    return m_topic;
}

void RouterMessageServiceTarget::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool RouterMessageServiceTarget::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

