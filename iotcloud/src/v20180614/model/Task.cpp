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

#include <tencentcloud/iotcloud/v20180614/model/Task.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

Task::Task() :
    m_updateShadowTaskHasBeenSet(false),
    m_publishMessageTaskHasBeenSet(false)
{
}

CoreInternalOutcome Task::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UpdateShadowTask") && !value["UpdateShadowTask"].IsNull())
    {
        if (!value["UpdateShadowTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.UpdateShadowTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_updateShadowTask.Deserialize(value["UpdateShadowTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_updateShadowTaskHasBeenSet = true;
    }

    if (value.HasMember("PublishMessageTask") && !value["PublishMessageTask"].IsNull())
    {
        if (!value["PublishMessageTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.PublishMessageTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_publishMessageTask.Deserialize(value["PublishMessageTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_publishMessageTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Task::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_updateShadowTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateShadowTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateShadowTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_publishMessageTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishMessageTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_publishMessageTask.ToJsonObject(value[key.c_str()], allocator);
    }

}


BatchUpdateShadow Task::GetUpdateShadowTask() const
{
    return m_updateShadowTask;
}

void Task::SetUpdateShadowTask(const BatchUpdateShadow& _updateShadowTask)
{
    m_updateShadowTask = _updateShadowTask;
    m_updateShadowTaskHasBeenSet = true;
}

bool Task::UpdateShadowTaskHasBeenSet() const
{
    return m_updateShadowTaskHasBeenSet;
}

BatchPublishMessage Task::GetPublishMessageTask() const
{
    return m_publishMessageTask;
}

void Task::SetPublishMessageTask(const BatchPublishMessage& _publishMessageTask)
{
    m_publishMessageTask = _publishMessageTask;
    m_publishMessageTaskHasBeenSet = true;
}

bool Task::PublishMessageTaskHasBeenSet() const
{
    return m_publishMessageTaskHasBeenSet;
}

