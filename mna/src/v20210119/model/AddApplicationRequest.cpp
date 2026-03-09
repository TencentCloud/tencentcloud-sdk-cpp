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

#include <tencentcloud/mna/v20210119/model/AddApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

AddApplicationRequest::AddApplicationRequest() :
    m_mpApplicationNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_mpApplicationKeyHasBeenSet(false),
    m_accessScopeHasBeenSet(false)
{
}

string AddApplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mpApplicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpApplicationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mpApplicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_mpApplicationKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpApplicationKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mpApplicationKey.c_str(), allocator).Move(), allocator);
    }

    if (m_accessScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessScope, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddApplicationRequest::GetMpApplicationName() const
{
    return m_mpApplicationName;
}

void AddApplicationRequest::SetMpApplicationName(const string& _mpApplicationName)
{
    m_mpApplicationName = _mpApplicationName;
    m_mpApplicationNameHasBeenSet = true;
}

bool AddApplicationRequest::MpApplicationNameHasBeenSet() const
{
    return m_mpApplicationNameHasBeenSet;
}

string AddApplicationRequest::GetRemark() const
{
    return m_remark;
}

void AddApplicationRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AddApplicationRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string AddApplicationRequest::GetMpApplicationKey() const
{
    return m_mpApplicationKey;
}

void AddApplicationRequest::SetMpApplicationKey(const string& _mpApplicationKey)
{
    m_mpApplicationKey = _mpApplicationKey;
    m_mpApplicationKeyHasBeenSet = true;
}

bool AddApplicationRequest::MpApplicationKeyHasBeenSet() const
{
    return m_mpApplicationKeyHasBeenSet;
}

int64_t AddApplicationRequest::GetAccessScope() const
{
    return m_accessScope;
}

void AddApplicationRequest::SetAccessScope(const int64_t& _accessScope)
{
    m_accessScope = _accessScope;
    m_accessScopeHasBeenSet = true;
}

bool AddApplicationRequest::AccessScopeHasBeenSet() const
{
    return m_accessScopeHasBeenSet;
}


