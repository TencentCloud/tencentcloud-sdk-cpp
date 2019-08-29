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

#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

TaskNotifyConfig::TaskNotifyConfig() :
    m_cmqModelHasBeenSet(false),
    m_cmqRegionHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_notifyModeHasBeenSet(false)
{
}

CoreInternalOutcome TaskNotifyConfig::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CmqModel") && !value["CmqModel"].IsNull())
    {
        if (!value["CmqModel"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskNotifyConfig.CmqModel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmqModel = string(value["CmqModel"].GetString());
        m_cmqModelHasBeenSet = true;
    }

    if (value.HasMember("CmqRegion") && !value["CmqRegion"].IsNull())
    {
        if (!value["CmqRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskNotifyConfig.CmqRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmqRegion = string(value["CmqRegion"].GetString());
        m_cmqRegionHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskNotifyConfig.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskNotifyConfig.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("NotifyMode") && !value["NotifyMode"].IsNull())
    {
        if (!value["NotifyMode"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskNotifyConfig.NotifyMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyMode = string(value["NotifyMode"].GetString());
        m_notifyModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskNotifyConfig::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_cmqModelHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CmqModel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cmqModel.c_str(), allocator).Move(), allocator);
    }

    if (m_cmqRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CmqRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_cmqRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotifyMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_notifyMode.c_str(), allocator).Move(), allocator);
    }

}


string TaskNotifyConfig::GetCmqModel() const
{
    return m_cmqModel;
}

void TaskNotifyConfig::SetCmqModel(const string& _cmqModel)
{
    m_cmqModel = _cmqModel;
    m_cmqModelHasBeenSet = true;
}

bool TaskNotifyConfig::CmqModelHasBeenSet() const
{
    return m_cmqModelHasBeenSet;
}

string TaskNotifyConfig::GetCmqRegion() const
{
    return m_cmqRegion;
}

void TaskNotifyConfig::SetCmqRegion(const string& _cmqRegion)
{
    m_cmqRegion = _cmqRegion;
    m_cmqRegionHasBeenSet = true;
}

bool TaskNotifyConfig::CmqRegionHasBeenSet() const
{
    return m_cmqRegionHasBeenSet;
}

string TaskNotifyConfig::GetQueueName() const
{
    return m_queueName;
}

void TaskNotifyConfig::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool TaskNotifyConfig::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string TaskNotifyConfig::GetTopicName() const
{
    return m_topicName;
}

void TaskNotifyConfig::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool TaskNotifyConfig::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string TaskNotifyConfig::GetNotifyMode() const
{
    return m_notifyMode;
}

void TaskNotifyConfig::SetNotifyMode(const string& _notifyMode)
{
    m_notifyMode = _notifyMode;
    m_notifyModeHasBeenSet = true;
}

bool TaskNotifyConfig::NotifyModeHasBeenSet() const
{
    return m_notifyModeHasBeenSet;
}

