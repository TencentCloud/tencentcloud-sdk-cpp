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

#include <tencentcloud/chdfs/v20201112/model/ModifyPathProtectionRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

ModifyPathProtectionRuleRequest::ModifyPathProtectionRuleRequest() :
    m_pathProtectionRuleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyPathProtectionRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pathProtectionRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathProtectionRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pathProtectionRuleId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyPathProtectionRuleRequest::GetPathProtectionRuleId() const
{
    return m_pathProtectionRuleId;
}

void ModifyPathProtectionRuleRequest::SetPathProtectionRuleId(const uint64_t& _pathProtectionRuleId)
{
    m_pathProtectionRuleId = _pathProtectionRuleId;
    m_pathProtectionRuleIdHasBeenSet = true;
}

bool ModifyPathProtectionRuleRequest::PathProtectionRuleIdHasBeenSet() const
{
    return m_pathProtectionRuleIdHasBeenSet;
}

string ModifyPathProtectionRuleRequest::GetName() const
{
    return m_name;
}

void ModifyPathProtectionRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyPathProtectionRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyPathProtectionRuleRequest::GetPath() const
{
    return m_path;
}

void ModifyPathProtectionRuleRequest::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ModifyPathProtectionRuleRequest::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

uint64_t ModifyPathProtectionRuleRequest::GetStatus() const
{
    return m_status;
}

void ModifyPathProtectionRuleRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyPathProtectionRuleRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


