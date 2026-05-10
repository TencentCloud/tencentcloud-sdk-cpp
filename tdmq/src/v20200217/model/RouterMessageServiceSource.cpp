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

#include <tencentcloud/tdmq/v20200217/model/RouterMessageServiceSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RouterMessageServiceSource::RouterMessageServiceSource() :
    m_accessKeyHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_enableDecodeBodyHasBeenSet(false),
    m_sourceConsumeConcurrentThreadCountHasBeenSet(false),
    m_filterFromTimestampMsHasBeenSet(false)
{
}

CoreInternalOutcome RouterMessageServiceSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceSource.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceSource.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("Queue") && !value["Queue"].IsNull())
    {
        if (!value["Queue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceSource.Queue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queue = string(value["Queue"].GetString());
        m_queueHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceSource.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("EnableDecodeBody") && !value["EnableDecodeBody"].IsNull())
    {
        if (!value["EnableDecodeBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceSource.EnableDecodeBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enableDecodeBody = string(value["EnableDecodeBody"].GetString());
        m_enableDecodeBodyHasBeenSet = true;
    }

    if (value.HasMember("SourceConsumeConcurrentThreadCount") && !value["SourceConsumeConcurrentThreadCount"].IsNull())
    {
        if (!value["SourceConsumeConcurrentThreadCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceSource.SourceConsumeConcurrentThreadCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceConsumeConcurrentThreadCount = value["SourceConsumeConcurrentThreadCount"].GetInt64();
        m_sourceConsumeConcurrentThreadCountHasBeenSet = true;
    }

    if (value.HasMember("FilterFromTimestampMs") && !value["FilterFromTimestampMs"].IsNull())
    {
        if (!value["FilterFromTimestampMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterMessageServiceSource.FilterFromTimestampMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_filterFromTimestampMs = value["FilterFromTimestampMs"].GetInt64();
        m_filterFromTimestampMsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouterMessageServiceSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDecodeBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDecodeBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enableDecodeBody.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceConsumeConcurrentThreadCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceConsumeConcurrentThreadCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceConsumeConcurrentThreadCount, allocator);
    }

    if (m_filterFromTimestampMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterFromTimestampMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterFromTimestampMs, allocator);
    }

}


string RouterMessageServiceSource::GetAccessKey() const
{
    return m_accessKey;
}

void RouterMessageServiceSource::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool RouterMessageServiceSource::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string RouterMessageServiceSource::GetEndpoint() const
{
    return m_endpoint;
}

void RouterMessageServiceSource::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool RouterMessageServiceSource::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string RouterMessageServiceSource::GetQueue() const
{
    return m_queue;
}

void RouterMessageServiceSource::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool RouterMessageServiceSource::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string RouterMessageServiceSource::GetSecretKey() const
{
    return m_secretKey;
}

void RouterMessageServiceSource::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool RouterMessageServiceSource::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string RouterMessageServiceSource::GetEnableDecodeBody() const
{
    return m_enableDecodeBody;
}

void RouterMessageServiceSource::SetEnableDecodeBody(const string& _enableDecodeBody)
{
    m_enableDecodeBody = _enableDecodeBody;
    m_enableDecodeBodyHasBeenSet = true;
}

bool RouterMessageServiceSource::EnableDecodeBodyHasBeenSet() const
{
    return m_enableDecodeBodyHasBeenSet;
}

int64_t RouterMessageServiceSource::GetSourceConsumeConcurrentThreadCount() const
{
    return m_sourceConsumeConcurrentThreadCount;
}

void RouterMessageServiceSource::SetSourceConsumeConcurrentThreadCount(const int64_t& _sourceConsumeConcurrentThreadCount)
{
    m_sourceConsumeConcurrentThreadCount = _sourceConsumeConcurrentThreadCount;
    m_sourceConsumeConcurrentThreadCountHasBeenSet = true;
}

bool RouterMessageServiceSource::SourceConsumeConcurrentThreadCountHasBeenSet() const
{
    return m_sourceConsumeConcurrentThreadCountHasBeenSet;
}

int64_t RouterMessageServiceSource::GetFilterFromTimestampMs() const
{
    return m_filterFromTimestampMs;
}

void RouterMessageServiceSource::SetFilterFromTimestampMs(const int64_t& _filterFromTimestampMs)
{
    m_filterFromTimestampMs = _filterFromTimestampMs;
    m_filterFromTimestampMsHasBeenSet = true;
}

bool RouterMessageServiceSource::FilterFromTimestampMsHasBeenSet() const
{
    return m_filterFromTimestampMsHasBeenSet;
}

