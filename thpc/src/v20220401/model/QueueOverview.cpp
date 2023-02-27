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

#include <tencentcloud/thpc/v20220401/model/QueueOverview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20220401::Model;
using namespace std;

QueueOverview::QueueOverview() :
    m_queueNameHasBeenSet(false)
{
}

CoreInternalOutcome QueueOverview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("QueueName") && !value["QueueName"].IsNull())
    {
        if (!value["QueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueueOverview.QueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_queueName = string(value["QueueName"].GetString());
        m_queueNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueueOverview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

}


string QueueOverview::GetQueueName() const
{
    return m_queueName;
}

void QueueOverview::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool QueueOverview::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

