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

#include <tencentcloud/monitor/v20180724/model/UpdatePrometheusAlertGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

UpdatePrometheusAlertGroupRequest::UpdatePrometheusAlertGroupRequest() :
    m_instanceIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupStateHasBeenSet(false),
    m_aMPReceiversHasBeenSet(false),
    m_customReceiverHasBeenSet(false),
    m_repeatIntervalHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

string UpdatePrometheusAlertGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupState, allocator);
    }

    if (m_aMPReceiversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AMPReceivers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aMPReceivers.begin(); itr != m_aMPReceivers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customReceiverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomReceiver";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customReceiver.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_repeatIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepeatInterval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_repeatInterval.c_str(), allocator).Move(), allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdatePrometheusAlertGroupRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdatePrometheusAlertGroupRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdatePrometheusAlertGroupRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpdatePrometheusAlertGroupRequest::GetGroupId() const
{
    return m_groupId;
}

void UpdatePrometheusAlertGroupRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool UpdatePrometheusAlertGroupRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string UpdatePrometheusAlertGroupRequest::GetGroupName() const
{
    return m_groupName;
}

void UpdatePrometheusAlertGroupRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool UpdatePrometheusAlertGroupRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t UpdatePrometheusAlertGroupRequest::GetGroupState() const
{
    return m_groupState;
}

void UpdatePrometheusAlertGroupRequest::SetGroupState(const int64_t& _groupState)
{
    m_groupState = _groupState;
    m_groupStateHasBeenSet = true;
}

bool UpdatePrometheusAlertGroupRequest::GroupStateHasBeenSet() const
{
    return m_groupStateHasBeenSet;
}

vector<string> UpdatePrometheusAlertGroupRequest::GetAMPReceivers() const
{
    return m_aMPReceivers;
}

void UpdatePrometheusAlertGroupRequest::SetAMPReceivers(const vector<string>& _aMPReceivers)
{
    m_aMPReceivers = _aMPReceivers;
    m_aMPReceiversHasBeenSet = true;
}

bool UpdatePrometheusAlertGroupRequest::AMPReceiversHasBeenSet() const
{
    return m_aMPReceiversHasBeenSet;
}

PrometheusAlertCustomReceiver UpdatePrometheusAlertGroupRequest::GetCustomReceiver() const
{
    return m_customReceiver;
}

void UpdatePrometheusAlertGroupRequest::SetCustomReceiver(const PrometheusAlertCustomReceiver& _customReceiver)
{
    m_customReceiver = _customReceiver;
    m_customReceiverHasBeenSet = true;
}

bool UpdatePrometheusAlertGroupRequest::CustomReceiverHasBeenSet() const
{
    return m_customReceiverHasBeenSet;
}

string UpdatePrometheusAlertGroupRequest::GetRepeatInterval() const
{
    return m_repeatInterval;
}

void UpdatePrometheusAlertGroupRequest::SetRepeatInterval(const string& _repeatInterval)
{
    m_repeatInterval = _repeatInterval;
    m_repeatIntervalHasBeenSet = true;
}

bool UpdatePrometheusAlertGroupRequest::RepeatIntervalHasBeenSet() const
{
    return m_repeatIntervalHasBeenSet;
}

vector<PrometheusAlertGroupRuleSet> UpdatePrometheusAlertGroupRequest::GetRules() const
{
    return m_rules;
}

void UpdatePrometheusAlertGroupRequest::SetRules(const vector<PrometheusAlertGroupRuleSet>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool UpdatePrometheusAlertGroupRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}


