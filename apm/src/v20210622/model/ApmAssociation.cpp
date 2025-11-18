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

#include <tencentcloud/apm/v20210622/model/ApmAssociation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ApmAssociation::ApmAssociation() :
    m_peerIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_topicHasBeenSet(false)
{
}

CoreInternalOutcome ApmAssociation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PeerId") && !value["PeerId"].IsNull())
    {
        if (!value["PeerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAssociation.PeerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_peerId = string(value["PeerId"].GetString());
        m_peerIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAssociation.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApmAssociation.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApmAssociation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_peerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_peerId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

}


string ApmAssociation::GetPeerId() const
{
    return m_peerId;
}

void ApmAssociation::SetPeerId(const string& _peerId)
{
    m_peerId = _peerId;
    m_peerIdHasBeenSet = true;
}

bool ApmAssociation::PeerIdHasBeenSet() const
{
    return m_peerIdHasBeenSet;
}

int64_t ApmAssociation::GetStatus() const
{
    return m_status;
}

void ApmAssociation::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ApmAssociation::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ApmAssociation::GetTopic() const
{
    return m_topic;
}

void ApmAssociation::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool ApmAssociation::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

