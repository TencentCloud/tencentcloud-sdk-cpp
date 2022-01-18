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

#include <tencentcloud/ses/v20201002/model/SendTaskData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ses::V20201002::Model;
using namespace std;

SendTaskData::SendTaskData() :
    m_taskIdHasBeenSet(false),
    m_fromEmailAddressHasBeenSet(false),
    m_receiverIdHasBeenSet(false),
    m_taskStatusHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_requestCountHasBeenSet(false),
    m_sendCountHasBeenSet(false),
    m_cacheCountHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_cycleParamHasBeenSet(false),
    m_timedParamHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_receiversNameHasBeenSet(false)
{
}

CoreInternalOutcome SendTaskData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("FromEmailAddress") && !value["FromEmailAddress"].IsNull())
    {
        if (!value["FromEmailAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.FromEmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fromEmailAddress = string(value["FromEmailAddress"].GetString());
        m_fromEmailAddressHasBeenSet = true;
    }

    if (value.HasMember("ReceiverId") && !value["ReceiverId"].IsNull())
    {
        if (!value["ReceiverId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.ReceiverId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_receiverId = value["ReceiverId"].GetUint64();
        m_receiverIdHasBeenSet = true;
    }

    if (value.HasMember("TaskStatus") && !value["TaskStatus"].IsNull())
    {
        if (!value["TaskStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.TaskStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskStatus = value["TaskStatus"].GetUint64();
        m_taskStatusHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.TaskType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = value["TaskType"].GetUint64();
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("RequestCount") && !value["RequestCount"].IsNull())
    {
        if (!value["RequestCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.RequestCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestCount = value["RequestCount"].GetUint64();
        m_requestCountHasBeenSet = true;
    }

    if (value.HasMember("SendCount") && !value["SendCount"].IsNull())
    {
        if (!value["SendCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.SendCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sendCount = value["SendCount"].GetUint64();
        m_sendCountHasBeenSet = true;
    }

    if (value.HasMember("CacheCount") && !value["CacheCount"].IsNull())
    {
        if (!value["CacheCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.CacheCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheCount = value["CacheCount"].GetUint64();
        m_cacheCountHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Subject") && !value["Subject"].IsNull())
    {
        if (!value["Subject"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.Subject` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subject = string(value["Subject"].GetString());
        m_subjectHasBeenSet = true;
    }

    if (value.HasMember("Template") && !value["Template"].IsNull())
    {
        if (!value["Template"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.Template` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_template.Deserialize(value["Template"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templateHasBeenSet = true;
    }

    if (value.HasMember("CycleParam") && !value["CycleParam"].IsNull())
    {
        if (!value["CycleParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.CycleParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cycleParam.Deserialize(value["CycleParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cycleParamHasBeenSet = true;
    }

    if (value.HasMember("TimedParam") && !value["TimedParam"].IsNull())
    {
        if (!value["TimedParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.TimedParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_timedParam.Deserialize(value["TimedParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_timedParamHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("ReceiversName") && !value["ReceiversName"].IsNull())
    {
        if (!value["ReceiversName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SendTaskData.ReceiversName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiversName = string(value["ReceiversName"].GetString());
        m_receiversNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SendTaskData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_fromEmailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromEmailAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fromEmailAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_receiverId, allocator);
    }

    if (m_taskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskStatus, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskType, allocator);
    }

    if (m_requestCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestCount, allocator);
    }

    if (m_sendCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sendCount, allocator);
    }

    if (m_cacheCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheCount, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_subjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subject.c_str(), allocator).Move(), allocator);
    }

    if (m_templateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_template.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cycleParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cycleParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timedParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimedParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_timedParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_receiversNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiversName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiversName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SendTaskData::GetTaskId() const
{
    return m_taskId;
}

void SendTaskData::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool SendTaskData::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string SendTaskData::GetFromEmailAddress() const
{
    return m_fromEmailAddress;
}

void SendTaskData::SetFromEmailAddress(const string& _fromEmailAddress)
{
    m_fromEmailAddress = _fromEmailAddress;
    m_fromEmailAddressHasBeenSet = true;
}

bool SendTaskData::FromEmailAddressHasBeenSet() const
{
    return m_fromEmailAddressHasBeenSet;
}

uint64_t SendTaskData::GetReceiverId() const
{
    return m_receiverId;
}

void SendTaskData::SetReceiverId(const uint64_t& _receiverId)
{
    m_receiverId = _receiverId;
    m_receiverIdHasBeenSet = true;
}

bool SendTaskData::ReceiverIdHasBeenSet() const
{
    return m_receiverIdHasBeenSet;
}

uint64_t SendTaskData::GetTaskStatus() const
{
    return m_taskStatus;
}

void SendTaskData::SetTaskStatus(const uint64_t& _taskStatus)
{
    m_taskStatus = _taskStatus;
    m_taskStatusHasBeenSet = true;
}

bool SendTaskData::TaskStatusHasBeenSet() const
{
    return m_taskStatusHasBeenSet;
}

uint64_t SendTaskData::GetTaskType() const
{
    return m_taskType;
}

void SendTaskData::SetTaskType(const uint64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool SendTaskData::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

uint64_t SendTaskData::GetRequestCount() const
{
    return m_requestCount;
}

void SendTaskData::SetRequestCount(const uint64_t& _requestCount)
{
    m_requestCount = _requestCount;
    m_requestCountHasBeenSet = true;
}

bool SendTaskData::RequestCountHasBeenSet() const
{
    return m_requestCountHasBeenSet;
}

uint64_t SendTaskData::GetSendCount() const
{
    return m_sendCount;
}

void SendTaskData::SetSendCount(const uint64_t& _sendCount)
{
    m_sendCount = _sendCount;
    m_sendCountHasBeenSet = true;
}

bool SendTaskData::SendCountHasBeenSet() const
{
    return m_sendCountHasBeenSet;
}

uint64_t SendTaskData::GetCacheCount() const
{
    return m_cacheCount;
}

void SendTaskData::SetCacheCount(const uint64_t& _cacheCount)
{
    m_cacheCount = _cacheCount;
    m_cacheCountHasBeenSet = true;
}

bool SendTaskData::CacheCountHasBeenSet() const
{
    return m_cacheCountHasBeenSet;
}

string SendTaskData::GetCreateTime() const
{
    return m_createTime;
}

void SendTaskData::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SendTaskData::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SendTaskData::GetUpdateTime() const
{
    return m_updateTime;
}

void SendTaskData::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SendTaskData::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string SendTaskData::GetSubject() const
{
    return m_subject;
}

void SendTaskData::SetSubject(const string& _subject)
{
    m_subject = _subject;
    m_subjectHasBeenSet = true;
}

bool SendTaskData::SubjectHasBeenSet() const
{
    return m_subjectHasBeenSet;
}

Template SendTaskData::GetTemplate() const
{
    return m_template;
}

void SendTaskData::SetTemplate(const Template& _template)
{
    m_template = _template;
    m_templateHasBeenSet = true;
}

bool SendTaskData::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

CycleEmailParam SendTaskData::GetCycleParam() const
{
    return m_cycleParam;
}

void SendTaskData::SetCycleParam(const CycleEmailParam& _cycleParam)
{
    m_cycleParam = _cycleParam;
    m_cycleParamHasBeenSet = true;
}

bool SendTaskData::CycleParamHasBeenSet() const
{
    return m_cycleParamHasBeenSet;
}

TimedEmailParam SendTaskData::GetTimedParam() const
{
    return m_timedParam;
}

void SendTaskData::SetTimedParam(const TimedEmailParam& _timedParam)
{
    m_timedParam = _timedParam;
    m_timedParamHasBeenSet = true;
}

bool SendTaskData::TimedParamHasBeenSet() const
{
    return m_timedParamHasBeenSet;
}

string SendTaskData::GetErrMsg() const
{
    return m_errMsg;
}

void SendTaskData::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool SendTaskData::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

string SendTaskData::GetReceiversName() const
{
    return m_receiversName;
}

void SendTaskData::SetReceiversName(const string& _receiversName)
{
    m_receiversName = _receiversName;
    m_receiversNameHasBeenSet = true;
}

bool SendTaskData::ReceiversNameHasBeenSet() const
{
    return m_receiversNameHasBeenSet;
}

