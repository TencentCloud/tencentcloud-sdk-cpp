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

#include <tencentcloud/cdb/v20170320/model/CreateAuditPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace rapidjson;
using namespace std;

CreateAuditPolicyRequest::CreateAuditPolicyRequest() :
    m_nameHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_logExpireDayHasBeenSet(false)
{
}

string CreateAuditPolicyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_logExpireDayHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logExpireDay, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAuditPolicyRequest::GetName() const
{
    return m_name;
}

void CreateAuditPolicyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAuditPolicyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAuditPolicyRequest::GetRuleId() const
{
    return m_ruleId;
}

void CreateAuditPolicyRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CreateAuditPolicyRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string CreateAuditPolicyRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateAuditPolicyRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateAuditPolicyRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t CreateAuditPolicyRequest::GetLogExpireDay() const
{
    return m_logExpireDay;
}

void CreateAuditPolicyRequest::SetLogExpireDay(const int64_t& _logExpireDay)
{
    m_logExpireDay = _logExpireDay;
    m_logExpireDayHasBeenSet = true;
}

bool CreateAuditPolicyRequest::LogExpireDayHasBeenSet() const
{
    return m_logExpireDayHasBeenSet;
}


