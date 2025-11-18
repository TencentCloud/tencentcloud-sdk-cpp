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

#include <tencentcloud/ess/v20201111/model/CreateBatchAdminChangeInvitationsUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateBatchAdminChangeInvitationsUrlRequest::CreateBatchAdminChangeInvitationsUrlRequest() :
    m_operatorHasBeenSet(false),
    m_newAdminNameHasBeenSet(false),
    m_newAdminMobileHasBeenSet(false),
    m_newAdminIdCardTypeHasBeenSet(false),
    m_newAdminIdCardNumberHasBeenSet(false),
    m_notifyTypeHasBeenSet(false),
    m_endpointHasBeenSet(false)
{
}

string CreateBatchAdminChangeInvitationsUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_newAdminNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAdminName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newAdminName.c_str(), allocator).Move(), allocator);
    }

    if (m_newAdminMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAdminMobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newAdminMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_newAdminIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAdminIdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newAdminIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_newAdminIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAdminIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newAdminIdCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyType.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateBatchAdminChangeInvitationsUrlRequest::GetOperator() const
{
    return m_operator;
}

void CreateBatchAdminChangeInvitationsUrlRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateBatchAdminChangeInvitationsUrlRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateBatchAdminChangeInvitationsUrlRequest::GetNewAdminName() const
{
    return m_newAdminName;
}

void CreateBatchAdminChangeInvitationsUrlRequest::SetNewAdminName(const string& _newAdminName)
{
    m_newAdminName = _newAdminName;
    m_newAdminNameHasBeenSet = true;
}

bool CreateBatchAdminChangeInvitationsUrlRequest::NewAdminNameHasBeenSet() const
{
    return m_newAdminNameHasBeenSet;
}

string CreateBatchAdminChangeInvitationsUrlRequest::GetNewAdminMobile() const
{
    return m_newAdminMobile;
}

void CreateBatchAdminChangeInvitationsUrlRequest::SetNewAdminMobile(const string& _newAdminMobile)
{
    m_newAdminMobile = _newAdminMobile;
    m_newAdminMobileHasBeenSet = true;
}

bool CreateBatchAdminChangeInvitationsUrlRequest::NewAdminMobileHasBeenSet() const
{
    return m_newAdminMobileHasBeenSet;
}

string CreateBatchAdminChangeInvitationsUrlRequest::GetNewAdminIdCardType() const
{
    return m_newAdminIdCardType;
}

void CreateBatchAdminChangeInvitationsUrlRequest::SetNewAdminIdCardType(const string& _newAdminIdCardType)
{
    m_newAdminIdCardType = _newAdminIdCardType;
    m_newAdminIdCardTypeHasBeenSet = true;
}

bool CreateBatchAdminChangeInvitationsUrlRequest::NewAdminIdCardTypeHasBeenSet() const
{
    return m_newAdminIdCardTypeHasBeenSet;
}

string CreateBatchAdminChangeInvitationsUrlRequest::GetNewAdminIdCardNumber() const
{
    return m_newAdminIdCardNumber;
}

void CreateBatchAdminChangeInvitationsUrlRequest::SetNewAdminIdCardNumber(const string& _newAdminIdCardNumber)
{
    m_newAdminIdCardNumber = _newAdminIdCardNumber;
    m_newAdminIdCardNumberHasBeenSet = true;
}

bool CreateBatchAdminChangeInvitationsUrlRequest::NewAdminIdCardNumberHasBeenSet() const
{
    return m_newAdminIdCardNumberHasBeenSet;
}

string CreateBatchAdminChangeInvitationsUrlRequest::GetNotifyType() const
{
    return m_notifyType;
}

void CreateBatchAdminChangeInvitationsUrlRequest::SetNotifyType(const string& _notifyType)
{
    m_notifyType = _notifyType;
    m_notifyTypeHasBeenSet = true;
}

bool CreateBatchAdminChangeInvitationsUrlRequest::NotifyTypeHasBeenSet() const
{
    return m_notifyTypeHasBeenSet;
}

string CreateBatchAdminChangeInvitationsUrlRequest::GetEndpoint() const
{
    return m_endpoint;
}

void CreateBatchAdminChangeInvitationsUrlRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CreateBatchAdminChangeInvitationsUrlRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}


