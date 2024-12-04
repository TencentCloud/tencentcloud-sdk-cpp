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

#include <tencentcloud/mps/v20190612/model/LiveStreamTaskNotifyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveStreamTaskNotifyConfig::LiveStreamTaskNotifyConfig() :
    m_notifyTypeHasBeenSet(false),
    m_notifyUrlHasBeenSet(false),
    m_cmqModelHasBeenSet(false),
    m_cmqRegionHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_notifyKeyHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamTaskNotifyConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NotifyType") && !value["NotifyType"].IsNull())
    {
        if (!value["NotifyType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTaskNotifyConfig.NotifyType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyType = string(value["NotifyType"].GetString());
        m_notifyTypeHasBeenSet = true;
    }

    if (value.HasMember("NotifyUrl") && !value["NotifyUrl"].IsNull())
    {
        if (!value["NotifyUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTaskNotifyConfig.NotifyUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyUrl = string(value["NotifyUrl"].GetString());
        m_notifyUrlHasBeenSet = true;
    }

    if (value.HasMember("CmqModel") && !value["CmqModel"].IsNull())
    {
        if (!value["CmqModel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTaskNotifyConfig.CmqModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmqModel = string(value["CmqModel"].GetString());
        m_cmqModelHasBeenSet = true;
    }

    if (value.HasMember("CmqRegion") && !value["CmqRegion"].IsNull())
    {
        if (!value["CmqRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTaskNotifyConfig.CmqRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmqRegion = string(value["CmqRegion"].GetString());
        m_cmqRegionHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTaskNotifyConfig.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTaskNotifyConfig.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("NotifyKey") && !value["NotifyKey"].IsNull())
    {
        if (!value["NotifyKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamTaskNotifyConfig.NotifyKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyKey = string(value["NotifyKey"].GetString());
        m_notifyKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamTaskNotifyConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_notifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_cmqModelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmqModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmqModel.c_str(), allocator).Move(), allocator);
    }

    if (m_cmqRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmqRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmqRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_notifyKey.c_str(), allocator).Move(), allocator);
    }

}


string LiveStreamTaskNotifyConfig::GetNotifyType() const
{
    return m_notifyType;
}

void LiveStreamTaskNotifyConfig::SetNotifyType(const string& _notifyType)
{
    m_notifyType = _notifyType;
    m_notifyTypeHasBeenSet = true;
}

bool LiveStreamTaskNotifyConfig::NotifyTypeHasBeenSet() const
{
    return m_notifyTypeHasBeenSet;
}

string LiveStreamTaskNotifyConfig::GetNotifyUrl() const
{
    return m_notifyUrl;
}

void LiveStreamTaskNotifyConfig::SetNotifyUrl(const string& _notifyUrl)
{
    m_notifyUrl = _notifyUrl;
    m_notifyUrlHasBeenSet = true;
}

bool LiveStreamTaskNotifyConfig::NotifyUrlHasBeenSet() const
{
    return m_notifyUrlHasBeenSet;
}

string LiveStreamTaskNotifyConfig::GetCmqModel() const
{
    return m_cmqModel;
}

void LiveStreamTaskNotifyConfig::SetCmqModel(const string& _cmqModel)
{
    m_cmqModel = _cmqModel;
    m_cmqModelHasBeenSet = true;
}

bool LiveStreamTaskNotifyConfig::CmqModelHasBeenSet() const
{
    return m_cmqModelHasBeenSet;
}

string LiveStreamTaskNotifyConfig::GetCmqRegion() const
{
    return m_cmqRegion;
}

void LiveStreamTaskNotifyConfig::SetCmqRegion(const string& _cmqRegion)
{
    m_cmqRegion = _cmqRegion;
    m_cmqRegionHasBeenSet = true;
}

bool LiveStreamTaskNotifyConfig::CmqRegionHasBeenSet() const
{
    return m_cmqRegionHasBeenSet;
}

string LiveStreamTaskNotifyConfig::GetQueueName() const
{
    return m_queueName;
}

void LiveStreamTaskNotifyConfig::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool LiveStreamTaskNotifyConfig::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string LiveStreamTaskNotifyConfig::GetTopicName() const
{
    return m_topicName;
}

void LiveStreamTaskNotifyConfig::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool LiveStreamTaskNotifyConfig::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string LiveStreamTaskNotifyConfig::GetNotifyKey() const
{
    return m_notifyKey;
}

void LiveStreamTaskNotifyConfig::SetNotifyKey(const string& _notifyKey)
{
    m_notifyKey = _notifyKey;
    m_notifyKeyHasBeenSet = true;
}

bool LiveStreamTaskNotifyConfig::NotifyKeyHasBeenSet() const
{
    return m_notifyKeyHasBeenSet;
}

