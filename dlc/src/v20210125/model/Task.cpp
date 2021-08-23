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

#include <tencentcloud/dlc/v20210125/model/Task.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

Task::Task() :
    m_sQLTaskHasBeenSet(false),
    m_sparkSQLTaskHasBeenSet(false)
{
}

CoreInternalOutcome Task::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SQLTask") && !value["SQLTask"].IsNull())
    {
        if (!value["SQLTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.SQLTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sQLTask.Deserialize(value["SQLTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sQLTaskHasBeenSet = true;
    }

    if (value.HasMember("SparkSQLTask") && !value["SparkSQLTask"].IsNull())
    {
        if (!value["SparkSQLTask"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Task.SparkSQLTask` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sparkSQLTask.Deserialize(value["SparkSQLTask"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sparkSQLTaskHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Task::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sQLTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sQLTask.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sparkSQLTaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkSQLTask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sparkSQLTask.ToJsonObject(value[key.c_str()], allocator);
    }

}


SQLTask Task::GetSQLTask() const
{
    return m_sQLTask;
}

void Task::SetSQLTask(const SQLTask& _sQLTask)
{
    m_sQLTask = _sQLTask;
    m_sQLTaskHasBeenSet = true;
}

bool Task::SQLTaskHasBeenSet() const
{
    return m_sQLTaskHasBeenSet;
}

SQLTask Task::GetSparkSQLTask() const
{
    return m_sparkSQLTask;
}

void Task::SetSparkSQLTask(const SQLTask& _sparkSQLTask)
{
    m_sparkSQLTask = _sparkSQLTask;
    m_sparkSQLTaskHasBeenSet = true;
}

bool Task::SparkSQLTaskHasBeenSet() const
{
    return m_sparkSQLTaskHasBeenSet;
}

