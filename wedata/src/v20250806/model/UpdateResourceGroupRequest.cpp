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

#include <tencentcloud/wedata/v20250806/model/UpdateResourceGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

UpdateResourceGroupRequest::UpdateResourceGroupRequest() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_purchasePeriodHasBeenSet(false),
    m_numberHasBeenSet(false),
    m_autoRenewEnabledHasBeenSet(false)
{
}

string UpdateResourceGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_purchasePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PurchasePeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_purchasePeriod, allocator);
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_number.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoRenewEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewEnabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewEnabled, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateResourceGroupRequest::GetId() const
{
    return m_id;
}

void UpdateResourceGroupRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UpdateResourceGroupRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UpdateResourceGroupRequest::GetType() const
{
    return m_type;
}

void UpdateResourceGroupRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UpdateResourceGroupRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t UpdateResourceGroupRequest::GetPurchasePeriod() const
{
    return m_purchasePeriod;
}

void UpdateResourceGroupRequest::SetPurchasePeriod(const int64_t& _purchasePeriod)
{
    m_purchasePeriod = _purchasePeriod;
    m_purchasePeriodHasBeenSet = true;
}

bool UpdateResourceGroupRequest::PurchasePeriodHasBeenSet() const
{
    return m_purchasePeriodHasBeenSet;
}

ResourceNumber UpdateResourceGroupRequest::GetNumber() const
{
    return m_number;
}

void UpdateResourceGroupRequest::SetNumber(const ResourceNumber& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool UpdateResourceGroupRequest::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}

bool UpdateResourceGroupRequest::GetAutoRenewEnabled() const
{
    return m_autoRenewEnabled;
}

void UpdateResourceGroupRequest::SetAutoRenewEnabled(const bool& _autoRenewEnabled)
{
    m_autoRenewEnabled = _autoRenewEnabled;
    m_autoRenewEnabledHasBeenSet = true;
}

bool UpdateResourceGroupRequest::AutoRenewEnabledHasBeenSet() const
{
    return m_autoRenewEnabledHasBeenSet;
}


