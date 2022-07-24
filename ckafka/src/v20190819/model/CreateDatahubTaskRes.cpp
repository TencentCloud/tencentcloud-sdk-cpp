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

#include <tencentcloud/ckafka/v20190819/model/CreateDatahubTaskRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateDatahubTaskRes::CreateDatahubTaskRes() :
    m_taskIdHasBeenSet(false),
    m_datahubIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateDatahubTaskRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDatahubTaskRes.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("DatahubId") && !value["DatahubId"].IsNull())
    {
        if (!value["DatahubId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateDatahubTaskRes.DatahubId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datahubId = string(value["DatahubId"].GetString());
        m_datahubIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateDatahubTaskRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_datahubIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatahubId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datahubId.c_str(), allocator).Move(), allocator);
    }

}


string CreateDatahubTaskRes::GetTaskId() const
{
    return m_taskId;
}

void CreateDatahubTaskRes::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateDatahubTaskRes::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CreateDatahubTaskRes::GetDatahubId() const
{
    return m_datahubId;
}

void CreateDatahubTaskRes::SetDatahubId(const string& _datahubId)
{
    m_datahubId = _datahubId;
    m_datahubIdHasBeenSet = true;
}

bool CreateDatahubTaskRes::DatahubIdHasBeenSet() const
{
    return m_datahubIdHasBeenSet;
}

