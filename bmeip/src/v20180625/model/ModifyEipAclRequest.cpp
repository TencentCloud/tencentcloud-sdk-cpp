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

#include <tencentcloud/bmeip/v20180625/model/ModifyEipAclRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmeip::V20180625::Model;
using namespace rapidjson;
using namespace std;

ModifyEipAclRequest::ModifyEipAclRequest() :
    m_aclIdHasBeenSet(false),
    m_aclNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

string ModifyEipAclRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_aclIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AclId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_aclId.c_str(), allocator).Move(), allocator);
    }

    if (m_aclNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AclName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_aclName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_rulesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyEipAclRequest::GetAclId() const
{
    return m_aclId;
}

void ModifyEipAclRequest::SetAclId(const string& _aclId)
{
    m_aclId = _aclId;
    m_aclIdHasBeenSet = true;
}

bool ModifyEipAclRequest::AclIdHasBeenSet() const
{
    return m_aclIdHasBeenSet;
}

string ModifyEipAclRequest::GetAclName() const
{
    return m_aclName;
}

void ModifyEipAclRequest::SetAclName(const string& _aclName)
{
    m_aclName = _aclName;
    m_aclNameHasBeenSet = true;
}

bool ModifyEipAclRequest::AclNameHasBeenSet() const
{
    return m_aclNameHasBeenSet;
}

int64_t ModifyEipAclRequest::GetStatus() const
{
    return m_status;
}

void ModifyEipAclRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyEipAclRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyEipAclRequest::GetType() const
{
    return m_type;
}

void ModifyEipAclRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyEipAclRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<EipAclRule> ModifyEipAclRequest::GetRules() const
{
    return m_rules;
}

void ModifyEipAclRequest::SetRules(const vector<EipAclRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool ModifyEipAclRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}


