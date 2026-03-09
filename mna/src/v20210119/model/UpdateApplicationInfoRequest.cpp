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

#include <tencentcloud/mna/v20210119/model/UpdateApplicationInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

UpdateApplicationInfoRequest::UpdateApplicationInfoRequest() :
    m_mpApplicationIdHasBeenSet(false),
    m_mpApplicationNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_accessScopeHasBeenSet(false)
{
}

string UpdateApplicationInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mpApplicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MpApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mpApplicationId.c_str(), allocator).Move(), allocator);
    }

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


string UpdateApplicationInfoRequest::GetMpApplicationId() const
{
    return m_mpApplicationId;
}

void UpdateApplicationInfoRequest::SetMpApplicationId(const string& _mpApplicationId)
{
    m_mpApplicationId = _mpApplicationId;
    m_mpApplicationIdHasBeenSet = true;
}

bool UpdateApplicationInfoRequest::MpApplicationIdHasBeenSet() const
{
    return m_mpApplicationIdHasBeenSet;
}

string UpdateApplicationInfoRequest::GetMpApplicationName() const
{
    return m_mpApplicationName;
}

void UpdateApplicationInfoRequest::SetMpApplicationName(const string& _mpApplicationName)
{
    m_mpApplicationName = _mpApplicationName;
    m_mpApplicationNameHasBeenSet = true;
}

bool UpdateApplicationInfoRequest::MpApplicationNameHasBeenSet() const
{
    return m_mpApplicationNameHasBeenSet;
}

string UpdateApplicationInfoRequest::GetRemark() const
{
    return m_remark;
}

void UpdateApplicationInfoRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool UpdateApplicationInfoRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t UpdateApplicationInfoRequest::GetAccessScope() const
{
    return m_accessScope;
}

void UpdateApplicationInfoRequest::SetAccessScope(const int64_t& _accessScope)
{
    m_accessScope = _accessScope;
    m_accessScopeHasBeenSet = true;
}

bool UpdateApplicationInfoRequest::AccessScopeHasBeenSet() const
{
    return m_accessScopeHasBeenSet;
}


