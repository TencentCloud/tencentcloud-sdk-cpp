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

#include <tencentcloud/tdmq/v20200217/model/CmqDeadLetterSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CmqDeadLetterSource::CmqDeadLetterSource() :
    m_queueIdHasBeenSet(false),
    m_queueNameHasBeenSet(false)
{
}

CoreInternalOutcome CmqDeadLetterSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QueueId") && !value["QueueId"].IsNull())
    {
        if (!value["QueueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqDeadLetterSource.QueueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueId = string(value["QueueId"].GetString());
        m_queueIdHasBeenSet = true;
    }

    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqDeadLetterSource.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CmqDeadLetterSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

}


string CmqDeadLetterSource::GetQueueId() const
{
    return m_queueId;
}

void CmqDeadLetterSource::SetQueueId(const string& _queueId)
{
    m_queueId = _queueId;
    m_queueIdHasBeenSet = true;
}

bool CmqDeadLetterSource::QueueIdHasBeenSet() const
{
    return m_queueIdHasBeenSet;
}

string CmqDeadLetterSource::GetQueueName() const
{
    return m_queueName;
}

void CmqDeadLetterSource::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool CmqDeadLetterSource::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

