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

#include <tencentcloud/taf/v20200210/model/InputSendTrafficSecuritySmsMsg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace std;

InputSendTrafficSecuritySmsMsg::InputSendTrafficSecuritySmsMsg() :
    m_taskIdHasBeenSet(false),
    m_mobilesHasBeenSet(false)
{
}

CoreInternalOutcome InputSendTrafficSecuritySmsMsg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `InputSendTrafficSecuritySmsMsg.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Mobiles") && !value["Mobiles"].IsNull())
    {
        if (!value["Mobiles"].IsArray())
            return CoreInternalOutcome(Error("response `InputSendTrafficSecuritySmsMsg.Mobiles` is not array type"));

        const rapidjson::Value &tmpValue = value["Mobiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mobiles.push_back((*itr).GetString());
        }
        m_mobilesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputSendTrafficSecuritySmsMsg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_mobilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mobiles.begin(); itr != m_mobiles.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string InputSendTrafficSecuritySmsMsg::GetTaskId() const
{
    return m_taskId;
}

void InputSendTrafficSecuritySmsMsg::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InputSendTrafficSecuritySmsMsg::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<string> InputSendTrafficSecuritySmsMsg::GetMobiles() const
{
    return m_mobiles;
}

void InputSendTrafficSecuritySmsMsg::SetMobiles(const vector<string>& _mobiles)
{
    m_mobiles = _mobiles;
    m_mobilesHasBeenSet = true;
}

bool InputSendTrafficSecuritySmsMsg::MobilesHasBeenSet() const
{
    return m_mobilesHasBeenSet;
}

