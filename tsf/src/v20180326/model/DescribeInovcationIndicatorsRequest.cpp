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

#include <tencentcloud/tsf/v20180326/model/DescribeInovcationIndicatorsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeInovcationIndicatorsRequest::DescribeInovcationIndicatorsRequest() :
    m_dimensionHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_callerServiceNameHasBeenSet(false),
    m_calleeServiceNameHasBeenSet(false),
    m_callerInterfaceNameHasBeenSet(false),
    m_calleeInterfaceNameHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

string DescribeInovcationIndicatorsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimension";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimension.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_callerServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallerServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callerServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_calleeServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalleeServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_calleeServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_callerInterfaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallerInterfaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callerInterfaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_calleeInterfaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalleeInterfaceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_calleeInterfaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeInovcationIndicatorsRequest::GetDimension() const
{
    return m_dimension;
}

void DescribeInovcationIndicatorsRequest::SetDimension(const string& _dimension)
{
    m_dimension = _dimension;
    m_dimensionHasBeenSet = true;
}

bool DescribeInovcationIndicatorsRequest::DimensionHasBeenSet() const
{
    return m_dimensionHasBeenSet;
}

string DescribeInovcationIndicatorsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeInovcationIndicatorsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeInovcationIndicatorsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeInovcationIndicatorsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeInovcationIndicatorsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeInovcationIndicatorsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeInovcationIndicatorsRequest::GetNamespaceId() const
{
    return m_namespaceId;
}

void DescribeInovcationIndicatorsRequest::SetNamespaceId(const string& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool DescribeInovcationIndicatorsRequest::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

string DescribeInovcationIndicatorsRequest::GetServiceId() const
{
    return m_serviceId;
}

void DescribeInovcationIndicatorsRequest::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool DescribeInovcationIndicatorsRequest::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string DescribeInovcationIndicatorsRequest::GetCallerServiceName() const
{
    return m_callerServiceName;
}

void DescribeInovcationIndicatorsRequest::SetCallerServiceName(const string& _callerServiceName)
{
    m_callerServiceName = _callerServiceName;
    m_callerServiceNameHasBeenSet = true;
}

bool DescribeInovcationIndicatorsRequest::CallerServiceNameHasBeenSet() const
{
    return m_callerServiceNameHasBeenSet;
}

string DescribeInovcationIndicatorsRequest::GetCalleeServiceName() const
{
    return m_calleeServiceName;
}

void DescribeInovcationIndicatorsRequest::SetCalleeServiceName(const string& _calleeServiceName)
{
    m_calleeServiceName = _calleeServiceName;
    m_calleeServiceNameHasBeenSet = true;
}

bool DescribeInovcationIndicatorsRequest::CalleeServiceNameHasBeenSet() const
{
    return m_calleeServiceNameHasBeenSet;
}

string DescribeInovcationIndicatorsRequest::GetCallerInterfaceName() const
{
    return m_callerInterfaceName;
}

void DescribeInovcationIndicatorsRequest::SetCallerInterfaceName(const string& _callerInterfaceName)
{
    m_callerInterfaceName = _callerInterfaceName;
    m_callerInterfaceNameHasBeenSet = true;
}

bool DescribeInovcationIndicatorsRequest::CallerInterfaceNameHasBeenSet() const
{
    return m_callerInterfaceNameHasBeenSet;
}

string DescribeInovcationIndicatorsRequest::GetCalleeInterfaceName() const
{
    return m_calleeInterfaceName;
}

void DescribeInovcationIndicatorsRequest::SetCalleeInterfaceName(const string& _calleeInterfaceName)
{
    m_calleeInterfaceName = _calleeInterfaceName;
    m_calleeInterfaceNameHasBeenSet = true;
}

bool DescribeInovcationIndicatorsRequest::CalleeInterfaceNameHasBeenSet() const
{
    return m_calleeInterfaceNameHasBeenSet;
}

string DescribeInovcationIndicatorsRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeInovcationIndicatorsRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeInovcationIndicatorsRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribeInovcationIndicatorsRequest::GetGroupId() const
{
    return m_groupId;
}

void DescribeInovcationIndicatorsRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeInovcationIndicatorsRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeInovcationIndicatorsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeInovcationIndicatorsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeInovcationIndicatorsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}


