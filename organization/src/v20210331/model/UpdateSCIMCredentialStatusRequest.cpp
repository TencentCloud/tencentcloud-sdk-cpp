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

#include <tencentcloud/organization/v20210331/model/UpdateSCIMCredentialStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

UpdateSCIMCredentialStatusRequest::UpdateSCIMCredentialStatusRequest() :
    m_zoneIdHasBeenSet(false),
    m_credentialIdHasBeenSet(false),
    m_newStatusHasBeenSet(false)
{
}

string UpdateSCIMCredentialStatusRequest::ToJsonString() const
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

    if (m_credentialIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CredentialId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_credentialId.c_str(), allocator).Move(), allocator);
    }

    if (m_newStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newStatus.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateSCIMCredentialStatusRequest::GetZoneId() const
{
    return m_zoneId;
}

void UpdateSCIMCredentialStatusRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool UpdateSCIMCredentialStatusRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string UpdateSCIMCredentialStatusRequest::GetCredentialId() const
{
    return m_credentialId;
}

void UpdateSCIMCredentialStatusRequest::SetCredentialId(const string& _credentialId)
{
    m_credentialId = _credentialId;
    m_credentialIdHasBeenSet = true;
}

bool UpdateSCIMCredentialStatusRequest::CredentialIdHasBeenSet() const
{
    return m_credentialIdHasBeenSet;
}

string UpdateSCIMCredentialStatusRequest::GetNewStatus() const
{
    return m_newStatus;
}

void UpdateSCIMCredentialStatusRequest::SetNewStatus(const string& _newStatus)
{
    m_newStatus = _newStatus;
    m_newStatusHasBeenSet = true;
}

bool UpdateSCIMCredentialStatusRequest::NewStatusHasBeenSet() const
{
    return m_newStatusHasBeenSet;
}


