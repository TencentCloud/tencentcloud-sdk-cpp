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

#include <tencentcloud/weilingwith/v20230427/model/ReportAppMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

ReportAppMessage::ReportAppMessage() :
    m_workspaceIdHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_reportTsHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_eventSetHasBeenSet(false),
    m_serviceSetHasBeenSet(false),
    m_extendTwoHasBeenSet(false),
    m_echoHasBeenSet(false)
{
}

CoreInternalOutcome ReportAppMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WorkspaceId") && !value["WorkspaceId"].IsNull())
    {
        if (!value["WorkspaceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportAppMessage.WorkspaceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_workspaceId = value["WorkspaceId"].GetInt64();
        m_workspaceIdHasBeenSet = true;
    }

    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReportAppMessage.Profile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_profile.Deserialize(value["Profile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_profileHasBeenSet = true;
    }

    if (value.HasMember("ReportTs") && !value["ReportTs"].IsNull())
    {
        if (!value["ReportTs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportAppMessage.ReportTs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportTs = value["ReportTs"].GetInt64();
        m_reportTsHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportAppMessage.Properties` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_properties = string(value["Properties"].GetString());
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("EventSet") && !value["EventSet"].IsNull())
    {
        if (!value["EventSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportAppMessage.EventSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventSet = string(value["EventSet"].GetString());
        m_eventSetHasBeenSet = true;
    }

    if (value.HasMember("ServiceSet") && !value["ServiceSet"].IsNull())
    {
        if (!value["ServiceSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportAppMessage.ServiceSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceSet = string(value["ServiceSet"].GetString());
        m_serviceSetHasBeenSet = true;
    }

    if (value.HasMember("ExtendTwo") && !value["ExtendTwo"].IsNull())
    {
        if (!value["ExtendTwo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportAppMessage.ExtendTwo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extendTwo = string(value["ExtendTwo"].GetString());
        m_extendTwoHasBeenSet = true;
    }

    if (value.HasMember("Echo") && !value["Echo"].IsNull())
    {
        if (!value["Echo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReportAppMessage.Echo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_echo = string(value["Echo"].GetString());
        m_echoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReportAppMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_reportTsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportTs, allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_properties.c_str(), allocator).Move(), allocator);
    }

    if (m_eventSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventSet.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceSet.c_str(), allocator).Move(), allocator);
    }

    if (m_extendTwoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtendTwo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extendTwo.c_str(), allocator).Move(), allocator);
    }

    if (m_echoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Echo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_echo.c_str(), allocator).Move(), allocator);
    }

}


int64_t ReportAppMessage::GetWorkspaceId() const
{
    return m_workspaceId;
}

void ReportAppMessage::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool ReportAppMessage::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

MessageProfile ReportAppMessage::GetProfile() const
{
    return m_profile;
}

void ReportAppMessage::SetProfile(const MessageProfile& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool ReportAppMessage::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

int64_t ReportAppMessage::GetReportTs() const
{
    return m_reportTs;
}

void ReportAppMessage::SetReportTs(const int64_t& _reportTs)
{
    m_reportTs = _reportTs;
    m_reportTsHasBeenSet = true;
}

bool ReportAppMessage::ReportTsHasBeenSet() const
{
    return m_reportTsHasBeenSet;
}

string ReportAppMessage::GetProperties() const
{
    return m_properties;
}

void ReportAppMessage::SetProperties(const string& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool ReportAppMessage::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

string ReportAppMessage::GetEventSet() const
{
    return m_eventSet;
}

void ReportAppMessage::SetEventSet(const string& _eventSet)
{
    m_eventSet = _eventSet;
    m_eventSetHasBeenSet = true;
}

bool ReportAppMessage::EventSetHasBeenSet() const
{
    return m_eventSetHasBeenSet;
}

string ReportAppMessage::GetServiceSet() const
{
    return m_serviceSet;
}

void ReportAppMessage::SetServiceSet(const string& _serviceSet)
{
    m_serviceSet = _serviceSet;
    m_serviceSetHasBeenSet = true;
}

bool ReportAppMessage::ServiceSetHasBeenSet() const
{
    return m_serviceSetHasBeenSet;
}

string ReportAppMessage::GetExtendTwo() const
{
    return m_extendTwo;
}

void ReportAppMessage::SetExtendTwo(const string& _extendTwo)
{
    m_extendTwo = _extendTwo;
    m_extendTwoHasBeenSet = true;
}

bool ReportAppMessage::ExtendTwoHasBeenSet() const
{
    return m_extendTwoHasBeenSet;
}

string ReportAppMessage::GetEcho() const
{
    return m_echo;
}

void ReportAppMessage::SetEcho(const string& _echo)
{
    m_echo = _echo;
    m_echoHasBeenSet = true;
}

bool ReportAppMessage::EchoHasBeenSet() const
{
    return m_echoHasBeenSet;
}

