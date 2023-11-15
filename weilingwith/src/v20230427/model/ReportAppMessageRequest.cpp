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

#include <tencentcloud/weilingwith/v20230427/model/ReportAppMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ReportAppMessageRequest::ReportAppMessageRequest() :
    m_workspaceIdHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_reportTsHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_eventSetHasBeenSet(false),
    m_serviceSetHasBeenSet(false),
    m_extendTwoHasBeenSet(false),
    m_echoHasBeenSet(false)
{
}

string ReportAppMessageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profile.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_reportTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reportTs, allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_eventSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventSet.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceSet.c_str(), allocator).Move(), allocator);
    }

    if (m_extendTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendTwo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extendTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_echoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Echo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_echo.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ReportAppMessageRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ReportAppMessageRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ReportAppMessageRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

MessageProfile ReportAppMessageRequest::GetProfile() const
{
    return m_profile;
}

void ReportAppMessageRequest::SetProfile(const MessageProfile& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool ReportAppMessageRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

int64_t ReportAppMessageRequest::GetReportTs() const
{
    return m_reportTs;
}

void ReportAppMessageRequest::SetReportTs(const int64_t& _reportTs)
{
    m_reportTs = _reportTs;
    m_reportTsHasBeenSet = true;
}

bool ReportAppMessageRequest::ReportTsHasBeenSet() const
{
    return m_reportTsHasBeenSet;
}

string ReportAppMessageRequest::GetProperties() const
{
    return m_properties;
}

void ReportAppMessageRequest::SetProperties(const string& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool ReportAppMessageRequest::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string ReportAppMessageRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void ReportAppMessageRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool ReportAppMessageRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

string ReportAppMessageRequest::GetEventSet() const
{
    return m_eventSet;
}

void ReportAppMessageRequest::SetEventSet(const string& _eventSet)
{
    m_eventSet = _eventSet;
    m_eventSetHasBeenSet = true;
}

bool ReportAppMessageRequest::EventSetHasBeenSet() const
{
    return m_eventSetHasBeenSet;
}

string ReportAppMessageRequest::GetServiceSet() const
{
    return m_serviceSet;
}

void ReportAppMessageRequest::SetServiceSet(const string& _serviceSet)
{
    m_serviceSet = _serviceSet;
    m_serviceSetHasBeenSet = true;
}

bool ReportAppMessageRequest::ServiceSetHasBeenSet() const
{
    return m_serviceSetHasBeenSet;
}

string ReportAppMessageRequest::GetExtendTwo() const
{
    return m_extendTwo;
}

void ReportAppMessageRequest::SetExtendTwo(const string& _extendTwo)
{
    m_extendTwo = _extendTwo;
    m_extendTwoHasBeenSet = true;
}

bool ReportAppMessageRequest::ExtendTwoHasBeenSet() const
{
    return m_extendTwoHasBeenSet;
}

string ReportAppMessageRequest::GetEcho() const
{
    return m_echo;
}

void ReportAppMessageRequest::SetEcho(const string& _echo)
{
    m_echo = _echo;
    m_echoHasBeenSet = true;
}

bool ReportAppMessageRequest::EchoHasBeenSet() const
{
    return m_echoHasBeenSet;
}


