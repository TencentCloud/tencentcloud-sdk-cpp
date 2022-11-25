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

#include <tencentcloud/tcss/v20201101/model/CreateK8sApiAbnormalRuleInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateK8sApiAbnormalRuleInfoRequest::CreateK8sApiAbnormalRuleInfoRequest() :
    m_ruleInfoHasBeenSet(false),
    m_copySrcRuleIDHasBeenSet(false),
    m_eventIDHasBeenSet(false)
{
}

string CreateK8sApiAbnormalRuleInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ruleInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_copySrcRuleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopySrcRuleID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_copySrcRuleID.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


K8sApiAbnormalRuleInfo CreateK8sApiAbnormalRuleInfoRequest::GetRuleInfo() const
{
    return m_ruleInfo;
}

void CreateK8sApiAbnormalRuleInfoRequest::SetRuleInfo(const K8sApiAbnormalRuleInfo& _ruleInfo)
{
    m_ruleInfo = _ruleInfo;
    m_ruleInfoHasBeenSet = true;
}

bool CreateK8sApiAbnormalRuleInfoRequest::RuleInfoHasBeenSet() const
{
    return m_ruleInfoHasBeenSet;
}

string CreateK8sApiAbnormalRuleInfoRequest::GetCopySrcRuleID() const
{
    return m_copySrcRuleID;
}

void CreateK8sApiAbnormalRuleInfoRequest::SetCopySrcRuleID(const string& _copySrcRuleID)
{
    m_copySrcRuleID = _copySrcRuleID;
    m_copySrcRuleIDHasBeenSet = true;
}

bool CreateK8sApiAbnormalRuleInfoRequest::CopySrcRuleIDHasBeenSet() const
{
    return m_copySrcRuleIDHasBeenSet;
}

uint64_t CreateK8sApiAbnormalRuleInfoRequest::GetEventID() const
{
    return m_eventID;
}

void CreateK8sApiAbnormalRuleInfoRequest::SetEventID(const uint64_t& _eventID)
{
    m_eventID = _eventID;
    m_eventIDHasBeenSet = true;
}

bool CreateK8sApiAbnormalRuleInfoRequest::EventIDHasBeenSet() const
{
    return m_eventIDHasBeenSet;
}


