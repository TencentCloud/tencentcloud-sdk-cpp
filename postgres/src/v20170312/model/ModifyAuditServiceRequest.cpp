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

#include <tencentcloud/postgres/v20170312/model/ModifyAuditServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

ModifyAuditServiceRequest::ModifyAuditServiceRequest() :
    m_instanceIdHasBeenSet(false),
    m_logExpireDayHasBeenSet(false),
    m_hotLogExpireDayHasBeenSet(false),
    m_auditTypeHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string ModifyAuditServiceRequest::ToJsonString() const
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

    if (m_logExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logExpireDay, allocator);
    }

    if (m_hotLogExpireDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HotLogExpireDay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hotLogExpireDay, allocator);
    }

    if (m_auditTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_auditType.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAuditServiceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyAuditServiceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyAuditServiceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t ModifyAuditServiceRequest::GetLogExpireDay() const
{
    return m_logExpireDay;
}

void ModifyAuditServiceRequest::SetLogExpireDay(const uint64_t& _logExpireDay)
{
    m_logExpireDay = _logExpireDay;
    m_logExpireDayHasBeenSet = true;
}

bool ModifyAuditServiceRequest::LogExpireDayHasBeenSet() const
{
    return m_logExpireDayHasBeenSet;
}

uint64_t ModifyAuditServiceRequest::GetHotLogExpireDay() const
{
    return m_hotLogExpireDay;
}

void ModifyAuditServiceRequest::SetHotLogExpireDay(const uint64_t& _hotLogExpireDay)
{
    m_hotLogExpireDay = _hotLogExpireDay;
    m_hotLogExpireDayHasBeenSet = true;
}

bool ModifyAuditServiceRequest::HotLogExpireDayHasBeenSet() const
{
    return m_hotLogExpireDayHasBeenSet;
}

string ModifyAuditServiceRequest::GetAuditType() const
{
    return m_auditType;
}

void ModifyAuditServiceRequest::SetAuditType(const string& _auditType)
{
    m_auditType = _auditType;
    m_auditTypeHasBeenSet = true;
}

bool ModifyAuditServiceRequest::AuditTypeHasBeenSet() const
{
    return m_auditTypeHasBeenSet;
}

string ModifyAuditServiceRequest::GetProduct() const
{
    return m_product;
}

void ModifyAuditServiceRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool ModifyAuditServiceRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}


