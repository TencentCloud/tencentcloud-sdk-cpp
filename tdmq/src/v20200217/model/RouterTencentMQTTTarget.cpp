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

#include <tencentcloud/tdmq/v20200217/model/RouterTencentMQTTTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RouterTencentMQTTTarget::RouterTencentMQTTTarget() :
    m_clusterIdHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_targetProduceConcurrentThreadCountHasBeenSet(false),
    m_filterFromTimestampMsHasBeenSet(false),
    m_endpointHasBeenSet(false)
{
}

CoreInternalOutcome RouterTencentMQTTTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTTarget.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTTarget.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("SourceRegion") && !value["SourceRegion"].IsNull())
    {
        if (!value["SourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTTarget.SourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceRegion = string(value["SourceRegion"].GetString());
        m_sourceRegionHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTTarget.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTTarget.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("TargetProduceConcurrentThreadCount") && !value["TargetProduceConcurrentThreadCount"].IsNull())
    {
        if (!value["TargetProduceConcurrentThreadCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTTarget.TargetProduceConcurrentThreadCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetProduceConcurrentThreadCount = value["TargetProduceConcurrentThreadCount"].GetInt64();
        m_targetProduceConcurrentThreadCountHasBeenSet = true;
    }

    if (value.HasMember("FilterFromTimestampMs") && !value["FilterFromTimestampMs"].IsNull())
    {
        if (!value["FilterFromTimestampMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTTarget.FilterFromTimestampMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_filterFromTimestampMs = value["FilterFromTimestampMs"].GetInt64();
        m_filterFromTimestampMsHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentMQTTTarget.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouterTencentMQTTTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_targetProduceConcurrentThreadCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetProduceConcurrentThreadCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetProduceConcurrentThreadCount, allocator);
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


string RouterTencentMQTTTarget::GetClusterId() const
{
    return m_clusterId;
}

void RouterTencentMQTTTarget::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RouterTencentMQTTTarget::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RouterTencentMQTTTarget::GetTopic() const
{
    return m_topic;
}

void RouterTencentMQTTTarget::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool RouterTencentMQTTTarget::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string RouterTencentMQTTTarget::GetSourceRegion() const
{
    return m_sourceRegion;
}

void RouterTencentMQTTTarget::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool RouterTencentMQTTTarget::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

string RouterTencentMQTTTarget::GetUserName() const
{
    return m_userName;
}

void RouterTencentMQTTTarget::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool RouterTencentMQTTTarget::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string RouterTencentMQTTTarget::GetPassword() const
{
    return m_password;
}

void RouterTencentMQTTTarget::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool RouterTencentMQTTTarget::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

int64_t RouterTencentMQTTTarget::GetTargetProduceConcurrentThreadCount() const
{
    return m_targetProduceConcurrentThreadCount;
}

void RouterTencentMQTTTarget::SetTargetProduceConcurrentThreadCount(const int64_t& _targetProduceConcurrentThreadCount)
{
    m_targetProduceConcurrentThreadCount = _targetProduceConcurrentThreadCount;
    m_targetProduceConcurrentThreadCountHasBeenSet = true;
}

bool RouterTencentMQTTTarget::TargetProduceConcurrentThreadCountHasBeenSet() const
{
    return m_targetProduceConcurrentThreadCountHasBeenSet;
}

int64_t RouterTencentMQTTTarget::GetFilterFromTimestampMs() const
{
    return m_filterFromTimestampMs;
}

void RouterTencentMQTTTarget::SetFilterFromTimestampMs(const int64_t& _filterFromTimestampMs)
{
    m_filterFromTimestampMs = _filterFromTimestampMs;
    m_filterFromTimestampMsHasBeenSet = true;
}

bool RouterTencentMQTTTarget::FilterFromTimestampMsHasBeenSet() const
{
    return m_filterFromTimestampMsHasBeenSet;
}

string RouterTencentMQTTTarget::GetEndpoint() const
{
    return m_endpoint;
}

void RouterTencentMQTTTarget::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool RouterTencentMQTTTarget::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

