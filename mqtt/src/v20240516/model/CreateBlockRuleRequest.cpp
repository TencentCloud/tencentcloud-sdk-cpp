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

#include <tencentcloud/mqtt/v20240516/model/CreateBlockRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

CreateBlockRuleRequest::CreateBlockRuleRequest() :
    m_instanceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_includeHasBeenSet(false),
    m_excludesHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateBlockRuleRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
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


string CreateBlockRuleRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateBlockRuleRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateBlockRuleRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CreateBlockRuleRequest::GetName() const
{
    return m_name;
}

void CreateBlockRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateBlockRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CreateBlockRuleRequest::GetType() const
{
    return m_type;
}

void CreateBlockRuleRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateBlockRuleRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateBlockRuleRequest::GetInclude() const
{
    return m_include;
}

void CreateBlockRuleRequest::SetInclude(const string& _include)
{
    m_include = _include;
    m_includeHasBeenSet = true;
}

bool CreateBlockRuleRequest::IncludeHasBeenSet() const
{
    return m_includeHasBeenSet;
}

vector<string> CreateBlockRuleRequest::GetExcludes() const
{
    return m_excludes;
}

void CreateBlockRuleRequest::SetExcludes(const vector<string>& _excludes)
{
    m_excludes = _excludes;
    m_excludesHasBeenSet = true;
}

bool CreateBlockRuleRequest::ExcludesHasBeenSet() const
{
    return m_excludesHasBeenSet;
}

int64_t CreateBlockRuleRequest::GetExpireTime() const
{
    return m_expireTime;
}

void CreateBlockRuleRequest::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CreateBlockRuleRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string CreateBlockRuleRequest::GetRemark() const
{
    return m_remark;
}

void CreateBlockRuleRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateBlockRuleRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


