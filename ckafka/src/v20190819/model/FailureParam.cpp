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

#include <tencentcloud/ckafka/v20190819/model/FailureParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

FailureParam::FailureParam() :
    m_typeHasBeenSet(false),
    m_kafkaParamHasBeenSet(false),
    m_retryIntervalHasBeenSet(false),
    m_maxRetryAttemptsHasBeenSet(false),
    m_topicParamHasBeenSet(false),
    m_dlqTypeHasBeenSet(false)
{
}

CoreInternalOutcome FailureParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailureParam.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("KafkaParam") && !value["KafkaParam"].IsNull())
    {
        if (!value["KafkaParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FailureParam.KafkaParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kafkaParam.Deserialize(value["KafkaParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kafkaParamHasBeenSet = true;
    }

    if (value.HasMember("RetryInterval") && !value["RetryInterval"].IsNull())
    {
        if (!value["RetryInterval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FailureParam.RetryInterval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_retryInterval = value["RetryInterval"].GetUint64();
        m_retryIntervalHasBeenSet = true;
    }

    if (value.HasMember("MaxRetryAttempts") && !value["MaxRetryAttempts"].IsNull())
    {
        if (!value["MaxRetryAttempts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FailureParam.MaxRetryAttempts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetryAttempts = value["MaxRetryAttempts"].GetUint64();
        m_maxRetryAttemptsHasBeenSet = true;
    }

    if (value.HasMember("TopicParam") && !value["TopicParam"].IsNull())
    {
        if (!value["TopicParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FailureParam.TopicParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_topicParam.Deserialize(value["TopicParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_topicParamHasBeenSet = true;
    }

    if (value.HasMember("DlqType") && !value["DlqType"].IsNull())
    {
        if (!value["DlqType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailureParam.DlqType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dlqType = string(value["DlqType"].GetString());
        m_dlqTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FailureParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kafkaParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_retryIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RetryInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_retryInterval, allocator);
    }

    if (m_maxRetryAttemptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetryAttempts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetryAttempts, allocator);
    }

    if (m_topicParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_topicParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dlqTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlqType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dlqType.c_str(), allocator).Move(), allocator);
    }

}


string FailureParam::GetType() const
{
    return m_type;
}

void FailureParam::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool FailureParam::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

KafkaParam FailureParam::GetKafkaParam() const
{
    return m_kafkaParam;
}

void FailureParam::SetKafkaParam(const KafkaParam& _kafkaParam)
{
    m_kafkaParam = _kafkaParam;
    m_kafkaParamHasBeenSet = true;
}

bool FailureParam::KafkaParamHasBeenSet() const
{
    return m_kafkaParamHasBeenSet;
}

uint64_t FailureParam::GetRetryInterval() const
{
    return m_retryInterval;
}

void FailureParam::SetRetryInterval(const uint64_t& _retryInterval)
{
    m_retryInterval = _retryInterval;
    m_retryIntervalHasBeenSet = true;
}

bool FailureParam::RetryIntervalHasBeenSet() const
{
    return m_retryIntervalHasBeenSet;
}

uint64_t FailureParam::GetMaxRetryAttempts() const
{
    return m_maxRetryAttempts;
}

void FailureParam::SetMaxRetryAttempts(const uint64_t& _maxRetryAttempts)
{
    m_maxRetryAttempts = _maxRetryAttempts;
    m_maxRetryAttemptsHasBeenSet = true;
}

bool FailureParam::MaxRetryAttemptsHasBeenSet() const
{
    return m_maxRetryAttemptsHasBeenSet;
}

TopicParam FailureParam::GetTopicParam() const
{
    return m_topicParam;
}

void FailureParam::SetTopicParam(const TopicParam& _topicParam)
{
    m_topicParam = _topicParam;
    m_topicParamHasBeenSet = true;
}

bool FailureParam::TopicParamHasBeenSet() const
{
    return m_topicParamHasBeenSet;
}

string FailureParam::GetDlqType() const
{
    return m_dlqType;
}

void FailureParam::SetDlqType(const string& _dlqType)
{
    m_dlqType = _dlqType;
    m_dlqTypeHasBeenSet = true;
}

bool FailureParam::DlqTypeHasBeenSet() const
{
    return m_dlqTypeHasBeenSet;
}

