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

#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListEvents.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeProductEventListEvents::DescribeProductEventListEvents() :
    m_eventIdHasBeenSet(false),
    m_eventCNameHasBeenSet(false),
    m_eventENameHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_productCNameHasBeenSet(false),
    m_productENameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_supportAlarmHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_additionMsgHasBeenSet(false),
    m_isAlarmConfigHasBeenSet(false),
    m_groupInfoHasBeenSet(false),
    m_viewNameHasBeenSet(false)
{
}

CoreInternalOutcome DescribeProductEventListEvents::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventId") && !value["EventId"].IsNull())
    {
        if (!value["EventId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.EventId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventId = value["EventId"].GetInt64();
        m_eventIdHasBeenSet = true;
    }

    if (value.HasMember("EventCName") && !value["EventCName"].IsNull())
    {
        if (!value["EventCName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.EventCName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventCName = string(value["EventCName"].GetString());
        m_eventCNameHasBeenSet = true;
    }

    if (value.HasMember("EventEName") && !value["EventEName"].IsNull())
    {
        if (!value["EventEName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.EventEName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventEName = string(value["EventEName"].GetString());
        m_eventENameHasBeenSet = true;
    }

    if (value.HasMember("EventName") && !value["EventName"].IsNull())
    {
        if (!value["EventName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.EventName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventName = string(value["EventName"].GetString());
        m_eventNameHasBeenSet = true;
    }

    if (value.HasMember("ProductCName") && !value["ProductCName"].IsNull())
    {
        if (!value["ProductCName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.ProductCName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCName = string(value["ProductCName"].GetString());
        m_productCNameHasBeenSet = true;
    }

    if (value.HasMember("ProductEName") && !value["ProductEName"].IsNull())
    {
        if (!value["ProductEName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.ProductEName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productEName = string(value["ProductEName"].GetString());
        m_productENameHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SupportAlarm") && !value["SupportAlarm"].IsNull())
    {
        if (!value["SupportAlarm"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.SupportAlarm` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportAlarm = value["SupportAlarm"].GetInt64();
        m_supportAlarmHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Dimensions") && !value["Dimensions"].IsNull())
    {
        if (!value["Dimensions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.Dimensions` is not array type"));

        const rapidjson::Value &tmpValue = value["Dimensions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeProductEventListEventsDimensions item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dimensions.push_back(item);
        }
        m_dimensionsHasBeenSet = true;
    }

    if (value.HasMember("AdditionMsg") && !value["AdditionMsg"].IsNull())
    {
        if (!value["AdditionMsg"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.AdditionMsg` is not array type"));

        const rapidjson::Value &tmpValue = value["AdditionMsg"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeProductEventListEventsDimensions item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_additionMsg.push_back(item);
        }
        m_additionMsgHasBeenSet = true;
    }

    if (value.HasMember("IsAlarmConfig") && !value["IsAlarmConfig"].IsNull())
    {
        if (!value["IsAlarmConfig"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.IsAlarmConfig` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAlarmConfig = value["IsAlarmConfig"].GetInt64();
        m_isAlarmConfigHasBeenSet = true;
    }

    if (value.HasMember("GroupInfo") && !value["GroupInfo"].IsNull())
    {
        if (!value["GroupInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.GroupInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeProductEventListEventsGroupInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupInfo.push_back(item);
        }
        m_groupInfoHasBeenSet = true;
    }

    if (value.HasMember("ViewName") && !value["ViewName"].IsNull())
    {
        if (!value["ViewName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProductEventListEvents.ViewName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_viewName = string(value["ViewName"].GetString());
        m_viewNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeProductEventListEvents::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventId, allocator);
    }

    if (m_eventCNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventCName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventENameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventEName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventEName.c_str(), allocator).Move(), allocator);
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventName.c_str(), allocator).Move(), allocator);
    }

    if (m_productCNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCName.c_str(), allocator).Move(), allocator);
    }

    if (m_productENameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductEName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productEName.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_supportAlarmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportAlarm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportAlarm, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dimensions.begin(); itr != m_dimensions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_additionMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_additionMsg.begin(); itr != m_additionMsg.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isAlarmConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAlarmConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAlarmConfig, allocator);
    }

    if (m_groupInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupInfo.begin(); itr != m_groupInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_viewNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_viewName.c_str(), allocator).Move(), allocator);
    }

}


int64_t DescribeProductEventListEvents::GetEventId() const
{
    return m_eventId;
}

void DescribeProductEventListEvents::SetEventId(const int64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool DescribeProductEventListEvents::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string DescribeProductEventListEvents::GetEventCName() const
{
    return m_eventCName;
}

void DescribeProductEventListEvents::SetEventCName(const string& _eventCName)
{
    m_eventCName = _eventCName;
    m_eventCNameHasBeenSet = true;
}

bool DescribeProductEventListEvents::EventCNameHasBeenSet() const
{
    return m_eventCNameHasBeenSet;
}

string DescribeProductEventListEvents::GetEventEName() const
{
    return m_eventEName;
}

void DescribeProductEventListEvents::SetEventEName(const string& _eventEName)
{
    m_eventEName = _eventEName;
    m_eventENameHasBeenSet = true;
}

bool DescribeProductEventListEvents::EventENameHasBeenSet() const
{
    return m_eventENameHasBeenSet;
}

string DescribeProductEventListEvents::GetEventName() const
{
    return m_eventName;
}

void DescribeProductEventListEvents::SetEventName(const string& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool DescribeProductEventListEvents::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

string DescribeProductEventListEvents::GetProductCName() const
{
    return m_productCName;
}

void DescribeProductEventListEvents::SetProductCName(const string& _productCName)
{
    m_productCName = _productCName;
    m_productCNameHasBeenSet = true;
}

bool DescribeProductEventListEvents::ProductCNameHasBeenSet() const
{
    return m_productCNameHasBeenSet;
}

string DescribeProductEventListEvents::GetProductEName() const
{
    return m_productEName;
}

void DescribeProductEventListEvents::SetProductEName(const string& _productEName)
{
    m_productEName = _productEName;
    m_productENameHasBeenSet = true;
}

bool DescribeProductEventListEvents::ProductENameHasBeenSet() const
{
    return m_productENameHasBeenSet;
}

string DescribeProductEventListEvents::GetProductName() const
{
    return m_productName;
}

void DescribeProductEventListEvents::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool DescribeProductEventListEvents::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string DescribeProductEventListEvents::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeProductEventListEvents::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeProductEventListEvents::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeProductEventListEvents::GetInstanceName() const
{
    return m_instanceName;
}

void DescribeProductEventListEvents::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DescribeProductEventListEvents::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribeProductEventListEvents::GetProjectId() const
{
    return m_projectId;
}

void DescribeProductEventListEvents::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeProductEventListEvents::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeProductEventListEvents::GetRegion() const
{
    return m_region;
}

void DescribeProductEventListEvents::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DescribeProductEventListEvents::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeProductEventListEvents::GetStatus() const
{
    return m_status;
}

void DescribeProductEventListEvents::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeProductEventListEvents::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeProductEventListEvents::GetSupportAlarm() const
{
    return m_supportAlarm;
}

void DescribeProductEventListEvents::SetSupportAlarm(const int64_t& _supportAlarm)
{
    m_supportAlarm = _supportAlarm;
    m_supportAlarmHasBeenSet = true;
}

bool DescribeProductEventListEvents::SupportAlarmHasBeenSet() const
{
    return m_supportAlarmHasBeenSet;
}

string DescribeProductEventListEvents::GetType() const
{
    return m_type;
}

void DescribeProductEventListEvents::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeProductEventListEvents::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t DescribeProductEventListEvents::GetStartTime() const
{
    return m_startTime;
}

void DescribeProductEventListEvents::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeProductEventListEvents::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeProductEventListEvents::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribeProductEventListEvents::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribeProductEventListEvents::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<DescribeProductEventListEventsDimensions> DescribeProductEventListEvents::GetDimensions() const
{
    return m_dimensions;
}

void DescribeProductEventListEvents::SetDimensions(const vector<DescribeProductEventListEventsDimensions>& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool DescribeProductEventListEvents::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

vector<DescribeProductEventListEventsDimensions> DescribeProductEventListEvents::GetAdditionMsg() const
{
    return m_additionMsg;
}

void DescribeProductEventListEvents::SetAdditionMsg(const vector<DescribeProductEventListEventsDimensions>& _additionMsg)
{
    m_additionMsg = _additionMsg;
    m_additionMsgHasBeenSet = true;
}

bool DescribeProductEventListEvents::AdditionMsgHasBeenSet() const
{
    return m_additionMsgHasBeenSet;
}

int64_t DescribeProductEventListEvents::GetIsAlarmConfig() const
{
    return m_isAlarmConfig;
}

void DescribeProductEventListEvents::SetIsAlarmConfig(const int64_t& _isAlarmConfig)
{
    m_isAlarmConfig = _isAlarmConfig;
    m_isAlarmConfigHasBeenSet = true;
}

bool DescribeProductEventListEvents::IsAlarmConfigHasBeenSet() const
{
    return m_isAlarmConfigHasBeenSet;
}

vector<DescribeProductEventListEventsGroupInfo> DescribeProductEventListEvents::GetGroupInfo() const
{
    return m_groupInfo;
}

void DescribeProductEventListEvents::SetGroupInfo(const vector<DescribeProductEventListEventsGroupInfo>& _groupInfo)
{
    m_groupInfo = _groupInfo;
    m_groupInfoHasBeenSet = true;
}

bool DescribeProductEventListEvents::GroupInfoHasBeenSet() const
{
    return m_groupInfoHasBeenSet;
}

string DescribeProductEventListEvents::GetViewName() const
{
    return m_viewName;
}

void DescribeProductEventListEvents::SetViewName(const string& _viewName)
{
    m_viewName = _viewName;
    m_viewNameHasBeenSet = true;
}

bool DescribeProductEventListEvents::ViewNameHasBeenSet() const
{
    return m_viewNameHasBeenSet;
}

