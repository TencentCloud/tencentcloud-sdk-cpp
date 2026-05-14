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

#include <tencentcloud/wedata/v20210820/model/LastOperateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

LastOperateInfo::LastOperateInfo() :
    m_taskEventHasBeenSet(false),
    m_operateIdHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false)
{
}

CoreInternalOutcome LastOperateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskEvent") && !value["TaskEvent"].IsNull())
    {
        if (!value["TaskEvent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastOperateInfo.TaskEvent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskEvent = string(value["TaskEvent"].GetString());
        m_taskEventHasBeenSet = true;
    }

    if (value.HasMember("OperateId") && !value["OperateId"].IsNull())
    {
        if (!value["OperateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastOperateInfo.OperateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateId = string(value["OperateId"].GetString());
        m_operateIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastOperateInfo.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastOperateInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastOperateInfo.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LastOperateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskEventHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskEvent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskEvent.c_str(), allocator).Move(), allocator);
    }

    if (m_operateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

}


string LastOperateInfo::GetTaskEvent() const
{
    return m_taskEvent;
}

void LastOperateInfo::SetTaskEvent(const string& _taskEvent)
{
    m_taskEvent = _taskEvent;
    m_taskEventHasBeenSet = true;
}

bool LastOperateInfo::TaskEventHasBeenSet() const
{
    return m_taskEventHasBeenSet;
}

string LastOperateInfo::GetOperateId() const
{
    return m_operateId;
}

void LastOperateInfo::SetOperateId(const string& _operateId)
{
    m_operateId = _operateId;
    m_operateIdHasBeenSet = true;
}

bool LastOperateInfo::OperateIdHasBeenSet() const
{
    return m_operateIdHasBeenSet;
}

string LastOperateInfo::GetErrorMsg() const
{
    return m_errorMsg;
}

void LastOperateInfo::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool LastOperateInfo::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

string LastOperateInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void LastOperateInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool LastOperateInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string LastOperateInfo::GetUpdatedTime() const
{
    return m_updatedTime;
}

void LastOperateInfo::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool LastOperateInfo::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

