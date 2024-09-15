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

#include <tencentcloud/cfw/v20190904/model/EnterpriseSecurityGroupRuleBetaInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

EnterpriseSecurityGroupRuleBetaInfo::EnterpriseSecurityGroupRuleBetaInfo() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_lastTimeHasBeenSet(false)
{
}

CoreInternalOutcome EnterpriseSecurityGroupRuleBetaInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleBetaInfo.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleBetaInfo.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnterpriseSecurityGroupRuleBetaInfo.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnterpriseSecurityGroupRuleBetaInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t EnterpriseSecurityGroupRuleBetaInfo::GetTaskId() const
{
    return m_taskId;
}

void EnterpriseSecurityGroupRuleBetaInfo::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleBetaInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string EnterpriseSecurityGroupRuleBetaInfo::GetTaskName() const
{
    return m_taskName;
}

void EnterpriseSecurityGroupRuleBetaInfo::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleBetaInfo::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string EnterpriseSecurityGroupRuleBetaInfo::GetLastTime() const
{
    return m_lastTime;
}

void EnterpriseSecurityGroupRuleBetaInfo::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool EnterpriseSecurityGroupRuleBetaInfo::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

