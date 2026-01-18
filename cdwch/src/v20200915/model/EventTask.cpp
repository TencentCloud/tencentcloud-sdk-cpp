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

#include <tencentcloud/cdwch/v20200915/model/EventTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

EventTask::EventTask() :
    m_instanceIdHasBeenSet(false),
    m_eventTaskIdHasBeenSet(false),
    m_handleUserHasBeenSet(false),
    m_eventCodeHasBeenSet(false),
    m_repairIdHasBeenSet(false),
    m_eventNameDescribeHasBeenSet(false),
    m_eventPriorityHasBeenSet(false),
    m_eventDetailHasBeenSet(false),
    m_iPHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_needAuthorizationHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_operationGuideHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

CoreInternalOutcome EventTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("EventTaskId") && !value["EventTaskId"].IsNull())
    {
        if (!value["EventTaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.EventTaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventTaskId = value["EventTaskId"].GetInt64();
        m_eventTaskIdHasBeenSet = true;
    }

    if (value.HasMember("HandleUser") && !value["HandleUser"].IsNull())
    {
        if (!value["HandleUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.HandleUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_handleUser = string(value["HandleUser"].GetString());
        m_handleUserHasBeenSet = true;
    }

    if (value.HasMember("EventCode") && !value["EventCode"].IsNull())
    {
        if (!value["EventCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.EventCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventCode = string(value["EventCode"].GetString());
        m_eventCodeHasBeenSet = true;
    }

    if (value.HasMember("RepairId") && !value["RepairId"].IsNull())
    {
        if (!value["RepairId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.RepairId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repairId = string(value["RepairId"].GetString());
        m_repairIdHasBeenSet = true;
    }

    if (value.HasMember("EventNameDescribe") && !value["EventNameDescribe"].IsNull())
    {
        if (!value["EventNameDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.EventNameDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventNameDescribe = string(value["EventNameDescribe"].GetString());
        m_eventNameDescribeHasBeenSet = true;
    }

    if (value.HasMember("EventPriority") && !value["EventPriority"].IsNull())
    {
        if (!value["EventPriority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.EventPriority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventPriority = value["EventPriority"].GetInt64();
        m_eventPriorityHasBeenSet = true;
    }

    if (value.HasMember("EventDetail") && !value["EventDetail"].IsNull())
    {
        if (!value["EventDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.EventDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventDetail = string(value["EventDetail"].GetString());
        m_eventDetailHasBeenSet = true;
    }

    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("NeedAuthorization") && !value["NeedAuthorization"].IsNull())
    {
        if (!value["NeedAuthorization"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.NeedAuthorization` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_needAuthorization = value["NeedAuthorization"].GetInt64();
        m_needAuthorizationHasBeenSet = true;
    }

    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventTask.OperationType` is not array type"));

        const rapidjson::Value &tmpValue = value["OperationType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_operationType.push_back((*itr).GetString());
        }
        m_operationTypeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("OperationGuide") && !value["OperationGuide"].IsNull())
    {
        if (!value["OperationGuide"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.OperationGuide` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationGuide = string(value["OperationGuide"].GetString());
        m_operationGuideHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventTask.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventTaskId, allocator);
    }

    if (m_handleUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_handleUser.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventCode.c_str(), allocator).Move(), allocator);
    }

    if (m_repairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepairId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repairId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventNameDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventNameDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_eventPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventPriority, allocator);
    }

    if (m_eventDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_needAuthorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedAuthorization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needAuthorization, allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_operationType.begin(); itr != m_operationType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operationGuideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationGuide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationGuide.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

}


string EventTask::GetInstanceId() const
{
    return m_instanceId;
}

void EventTask::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool EventTask::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t EventTask::GetEventTaskId() const
{
    return m_eventTaskId;
}

void EventTask::SetEventTaskId(const int64_t& _eventTaskId)
{
    m_eventTaskId = _eventTaskId;
    m_eventTaskIdHasBeenSet = true;
}

bool EventTask::EventTaskIdHasBeenSet() const
{
    return m_eventTaskIdHasBeenSet;
}

string EventTask::GetHandleUser() const
{
    return m_handleUser;
}

void EventTask::SetHandleUser(const string& _handleUser)
{
    m_handleUser = _handleUser;
    m_handleUserHasBeenSet = true;
}

bool EventTask::HandleUserHasBeenSet() const
{
    return m_handleUserHasBeenSet;
}

string EventTask::GetEventCode() const
{
    return m_eventCode;
}

void EventTask::SetEventCode(const string& _eventCode)
{
    m_eventCode = _eventCode;
    m_eventCodeHasBeenSet = true;
}

bool EventTask::EventCodeHasBeenSet() const
{
    return m_eventCodeHasBeenSet;
}

string EventTask::GetRepairId() const
{
    return m_repairId;
}

void EventTask::SetRepairId(const string& _repairId)
{
    m_repairId = _repairId;
    m_repairIdHasBeenSet = true;
}

bool EventTask::RepairIdHasBeenSet() const
{
    return m_repairIdHasBeenSet;
}

string EventTask::GetEventNameDescribe() const
{
    return m_eventNameDescribe;
}

void EventTask::SetEventNameDescribe(const string& _eventNameDescribe)
{
    m_eventNameDescribe = _eventNameDescribe;
    m_eventNameDescribeHasBeenSet = true;
}

bool EventTask::EventNameDescribeHasBeenSet() const
{
    return m_eventNameDescribeHasBeenSet;
}

int64_t EventTask::GetEventPriority() const
{
    return m_eventPriority;
}

void EventTask::SetEventPriority(const int64_t& _eventPriority)
{
    m_eventPriority = _eventPriority;
    m_eventPriorityHasBeenSet = true;
}

bool EventTask::EventPriorityHasBeenSet() const
{
    return m_eventPriorityHasBeenSet;
}

string EventTask::GetEventDetail() const
{
    return m_eventDetail;
}

void EventTask::SetEventDetail(const string& _eventDetail)
{
    m_eventDetail = _eventDetail;
    m_eventDetailHasBeenSet = true;
}

bool EventTask::EventDetailHasBeenSet() const
{
    return m_eventDetailHasBeenSet;
}

string EventTask::GetIP() const
{
    return m_iP;
}

void EventTask::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool EventTask::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string EventTask::GetCreateTime() const
{
    return m_createTime;
}

void EventTask::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool EventTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t EventTask::GetStatus() const
{
    return m_status;
}

void EventTask::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EventTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t EventTask::GetNeedAuthorization() const
{
    return m_needAuthorization;
}

void EventTask::SetNeedAuthorization(const int64_t& _needAuthorization)
{
    m_needAuthorization = _needAuthorization;
    m_needAuthorizationHasBeenSet = true;
}

bool EventTask::NeedAuthorizationHasBeenSet() const
{
    return m_needAuthorizationHasBeenSet;
}

vector<string> EventTask::GetOperationType() const
{
    return m_operationType;
}

void EventTask::SetOperationType(const vector<string>& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool EventTask::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

string EventTask::GetFinishTime() const
{
    return m_finishTime;
}

void EventTask::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool EventTask::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

string EventTask::GetOperationGuide() const
{
    return m_operationGuide;
}

void EventTask::SetOperationGuide(const string& _operationGuide)
{
    m_operationGuide = _operationGuide;
    m_operationGuideHasBeenSet = true;
}

bool EventTask::OperationGuideHasBeenSet() const
{
    return m_operationGuideHasBeenSet;
}

string EventTask::GetResourceId() const
{
    return m_resourceId;
}

void EventTask::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool EventTask::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

