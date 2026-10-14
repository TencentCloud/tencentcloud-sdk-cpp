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

#include <tencentcloud/organization/v20210331/model/AuditPermissionApplyOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

AuditPermissionApplyOrderRequest::AuditPermissionApplyOrderRequest() :
    m_zoneIdHasBeenSet(false),
    m_applyIdHasBeenSet(false),
    m_auditResultHasBeenSet(false),
    m_auditOpinionHasBeenSet(false)
{
}

string AuditPermissionApplyOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_applyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applyId.c_str(), allocator).Move(), allocator);
    }

    if (m_auditResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditResult";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_auditResult.c_str(), allocator).Move(), allocator);
    }

    if (m_auditOpinionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuditOpinion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_auditOpinion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AuditPermissionApplyOrderRequest::GetZoneId() const
{
    return m_zoneId;
}

void AuditPermissionApplyOrderRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool AuditPermissionApplyOrderRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string AuditPermissionApplyOrderRequest::GetApplyId() const
{
    return m_applyId;
}

void AuditPermissionApplyOrderRequest::SetApplyId(const string& _applyId)
{
    m_applyId = _applyId;
    m_applyIdHasBeenSet = true;
}

bool AuditPermissionApplyOrderRequest::ApplyIdHasBeenSet() const
{
    return m_applyIdHasBeenSet;
}

string AuditPermissionApplyOrderRequest::GetAuditResult() const
{
    return m_auditResult;
}

void AuditPermissionApplyOrderRequest::SetAuditResult(const string& _auditResult)
{
    m_auditResult = _auditResult;
    m_auditResultHasBeenSet = true;
}

bool AuditPermissionApplyOrderRequest::AuditResultHasBeenSet() const
{
    return m_auditResultHasBeenSet;
}

string AuditPermissionApplyOrderRequest::GetAuditOpinion() const
{
    return m_auditOpinion;
}

void AuditPermissionApplyOrderRequest::SetAuditOpinion(const string& _auditOpinion)
{
    m_auditOpinion = _auditOpinion;
    m_auditOpinionHasBeenSet = true;
}

bool AuditPermissionApplyOrderRequest::AuditOpinionHasBeenSet() const
{
    return m_auditOpinionHasBeenSet;
}


