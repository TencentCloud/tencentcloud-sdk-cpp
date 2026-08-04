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

#include <tencentcloud/mqtt/v20240516/model/ModifyBlockRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

ModifyBlockRuleRequest::ModifyBlockRuleRequest() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_includeHasBeenSet(false),
    m_excludesHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyBlockRuleRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_includeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Include";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_include.c_str(), allocator).Move(), allocator);
    }

    if (m_excludesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Excludes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_excludes.begin(); itr != m_excludes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBlockRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyBlockRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyBlockRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyBlockRuleRequest::GetName() const
{
    return m_name;
}

void ModifyBlockRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyBlockRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyBlockRuleRequest::GetInclude() const
{
    return m_include;
}

void ModifyBlockRuleRequest::SetInclude(const string& _include)
{
    m_include = _include;
    m_includeHasBeenSet = true;
}

bool ModifyBlockRuleRequest::IncludeHasBeenSet() const
{
    return m_includeHasBeenSet;
}

vector<string> ModifyBlockRuleRequest::GetExcludes() const
{
    return m_excludes;
}

void ModifyBlockRuleRequest::SetExcludes(const vector<string>& _excludes)
{
    m_excludes = _excludes;
    m_excludesHasBeenSet = true;
}

bool ModifyBlockRuleRequest::ExcludesHasBeenSet() const
{
    return m_excludesHasBeenSet;
}

int64_t ModifyBlockRuleRequest::GetExpireTime() const
{
    return m_expireTime;
}

void ModifyBlockRuleRequest::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ModifyBlockRuleRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ModifyBlockRuleRequest::GetRemark() const
{
    return m_remark;
}

void ModifyBlockRuleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyBlockRuleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


