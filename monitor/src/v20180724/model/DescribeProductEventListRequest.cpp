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

#include <tencentcloud/monitor/v20180724/model/DescribeProductEventListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeProductEventListRequest::DescribeProductEventListRequest() :
    m_moduleHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_regionListHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_isAlarmConfigHasBeenSet(false),
    m_timeOrderHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string DescribeProductEventListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productName.begin(); itr != m_productName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_eventNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventName.begin(); itr != m_eventName.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceId.begin(); itr != m_instanceId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dimensions.begin(); itr != m_dimensions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_regionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionList.begin(); itr != m_regionList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_type.begin(); itr != m_type.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_status.begin(); itr != m_status.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Project";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_project.begin(); itr != m_project.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isAlarmConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAlarmConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAlarmConfig, allocator);
    }

    if (m_timeOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeOrder.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeProductEventListRequest::GetModule() const
{
    return m_module;
}

void DescribeProductEventListRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribeProductEventListRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

vector<string> DescribeProductEventListRequest::GetProductName() const
{
    return m_productName;
}

void DescribeProductEventListRequest::SetProductName(const vector<string>& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool DescribeProductEventListRequest::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

vector<string> DescribeProductEventListRequest::GetEventName() const
{
    return m_eventName;
}

void DescribeProductEventListRequest::SetEventName(const vector<string>& _eventName)
{
    m_eventName = _eventName;
    m_eventNameHasBeenSet = true;
}

bool DescribeProductEventListRequest::EventNameHasBeenSet() const
{
    return m_eventNameHasBeenSet;
}

vector<string> DescribeProductEventListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeProductEventListRequest::SetInstanceId(const vector<string>& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeProductEventListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<DescribeProductEventListDimensions> DescribeProductEventListRequest::GetDimensions() const
{
    return m_dimensions;
}

void DescribeProductEventListRequest::SetDimensions(const vector<DescribeProductEventListDimensions>& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool DescribeProductEventListRequest::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

vector<string> DescribeProductEventListRequest::GetRegionList() const
{
    return m_regionList;
}

void DescribeProductEventListRequest::SetRegionList(const vector<string>& _regionList)
{
    m_regionList = _regionList;
    m_regionListHasBeenSet = true;
}

bool DescribeProductEventListRequest::RegionListHasBeenSet() const
{
    return m_regionListHasBeenSet;
}

vector<string> DescribeProductEventListRequest::GetType() const
{
    return m_type;
}

void DescribeProductEventListRequest::SetType(const vector<string>& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool DescribeProductEventListRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> DescribeProductEventListRequest::GetStatus() const
{
    return m_status;
}

void DescribeProductEventListRequest::SetStatus(const vector<string>& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeProductEventListRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeProductEventListRequest::GetProject() const
{
    return m_project;
}

void DescribeProductEventListRequest::SetProject(const vector<string>& _project)
{
    m_project = _project;
    m_projectHasBeenSet = true;
}

bool DescribeProductEventListRequest::ProjectHasBeenSet() const
{
    return m_projectHasBeenSet;
}

int64_t DescribeProductEventListRequest::GetIsAlarmConfig() const
{
    return m_isAlarmConfig;
}

void DescribeProductEventListRequest::SetIsAlarmConfig(const int64_t& _isAlarmConfig)
{
    m_isAlarmConfig = _isAlarmConfig;
    m_isAlarmConfigHasBeenSet = true;
}

bool DescribeProductEventListRequest::IsAlarmConfigHasBeenSet() const
{
    return m_isAlarmConfigHasBeenSet;
}

string DescribeProductEventListRequest::GetTimeOrder() const
{
    return m_timeOrder;
}

void DescribeProductEventListRequest::SetTimeOrder(const string& _timeOrder)
{
    m_timeOrder = _timeOrder;
    m_timeOrderHasBeenSet = true;
}

bool DescribeProductEventListRequest::TimeOrderHasBeenSet() const
{
    return m_timeOrderHasBeenSet;
}

int64_t DescribeProductEventListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeProductEventListRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeProductEventListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeProductEventListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeProductEventListRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeProductEventListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeProductEventListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeProductEventListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeProductEventListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeProductEventListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeProductEventListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeProductEventListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


