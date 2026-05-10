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

#include <tencentcloud/tdmq/v20200217/model/RouterTencentMQTTSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RouterTencentMQTTSource::RouterTencentMQTTSource() :
    m_clusterIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_sourceConsumeConcurrentThreadCountHasBeenSet(false),
    m_filterFromTimestampMsHasBeenSet(false),
    m_endpointHasBeenSet(false)
{
}

CoreInternalOutcome RouterTencentMQTTSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTSource.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTSource.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("SourceRegion") && !value["SourceRegion"].IsNull())
    {
        if (!value["SourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTSource.SourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceRegion = string(value["SourceRegion"].GetString());
        m_sourceRegionHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTSource.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTSource.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("SourceConsumeConcurrentThreadCount") && !value["SourceConsumeConcurrentThreadCount"].IsNull())
    {
        if (!value["SourceConsumeConcurrentThreadCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTSource.SourceConsumeConcurrentThreadCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceConsumeConcurrentThreadCount = value["SourceConsumeConcurrentThreadCount"].GetInt64();
        m_sourceConsumeConcurrentThreadCountHasBeenSet = true;
    }

    if (value.HasMember("FilterFromTimestampMs") && !value["FilterFromTimestampMs"].IsNull())
    {
        if (!value["FilterFromTimestampMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTSource.FilterFromTimestampMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_filterFromTimestampMs = value["FilterFromTimestampMs"].GetInt64();
        m_filterFromTimestampMsHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTSource.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouterTencentMQTTSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
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

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

}


string RouterTencentMQTTSource::GetClusterId() const
{
    return m_clusterId;
}

void RouterTencentMQTTSource::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RouterTencentMQTTSource::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RouterTencentMQTTSource::GetTopic() const
{
    return m_topic;
}

void RouterTencentMQTTSource::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool RouterTencentMQTTSource::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string RouterTencentMQTTSource::GetSourceRegion() const
{
    return m_sourceRegion;
}

void RouterTencentMQTTSource::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool RouterTencentMQTTSource::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

string RouterTencentMQTTSource::GetUserName() const
{
    return m_userName;
}

void RouterTencentMQTTSource::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool RouterTencentMQTTSource::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string RouterTencentMQTTSource::GetPassword() const
{
    return m_password;
}

void RouterTencentMQTTSource::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool RouterTencentMQTTSource::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

int64_t RouterTencentMQTTSource::GetSourceConsumeConcurrentThreadCount() const
{
    return m_sourceConsumeConcurrentThreadCount;
}

void RouterTencentMQTTSource::SetSourceConsumeConcurrentThreadCount(const int64_t& _sourceConsumeConcurrentThreadCount)
{
    m_sourceConsumeConcurrentThreadCount = _sourceConsumeConcurrentThreadCount;
    m_sourceConsumeConcurrentThreadCountHasBeenSet = true;
}

bool RouterTencentMQTTSource::SourceConsumeConcurrentThreadCountHasBeenSet() const
{
    return m_sourceConsumeConcurrentThreadCountHasBeenSet;
}

int64_t RouterTencentMQTTSource::GetFilterFromTimestampMs() const
{
    return m_filterFromTimestampMs;
}

void RouterTencentMQTTSource::SetFilterFromTimestampMs(const int64_t& _filterFromTimestampMs)
{
    m_filterFromTimestampMs = _filterFromTimestampMs;
    m_filterFromTimestampMsHasBeenSet = true;
}

bool RouterTencentMQTTSource::FilterFromTimestampMsHasBeenSet() const
{
    return m_filterFromTimestampMsHasBeenSet;
}

string RouterTencentMQTTSource::GetEndpoint() const
{
    return m_endpoint;
}

void RouterTencentMQTTSource::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool RouterTencentMQTTSource::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

