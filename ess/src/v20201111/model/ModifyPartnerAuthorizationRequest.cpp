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

#include <tencentcloud/ess/v20201111/model/ModifyPartnerAuthorizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ModifyPartnerAuthorizationRequest::ModifyPartnerAuthorizationRequest() :
    m_operatorHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_partnerApplicationIdHasBeenSet(false),
    m_applicationInfoHasBeenSet(false)
{
}

string ModifyPartnerAuthorizationRequest::ToJsonString() const
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

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_partnerApplicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartnerApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_partnerApplicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_applicationInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo ModifyPartnerAuthorizationRequest::GetOperator() const
{
    return m_operator;
}

void ModifyPartnerAuthorizationRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool ModifyPartnerAuthorizationRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string ModifyPartnerAuthorizationRequest::GetBusinessId() const
{
    return m_businessId;
}

void ModifyPartnerAuthorizationRequest::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool ModifyPartnerAuthorizationRequest::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

string ModifyPartnerAuthorizationRequest::GetPartnerApplicationId() const
{
    return m_partnerApplicationId;
}

void ModifyPartnerAuthorizationRequest::SetPartnerApplicationId(const string& _partnerApplicationId)
{
    m_partnerApplicationId = _partnerApplicationId;
    m_partnerApplicationIdHasBeenSet = true;
}

bool ModifyPartnerAuthorizationRequest::PartnerApplicationIdHasBeenSet() const
{
    return m_partnerApplicationIdHasBeenSet;
}

CallbackInfo ModifyPartnerAuthorizationRequest::GetApplicationInfo() const
{
    return m_applicationInfo;
}

void ModifyPartnerAuthorizationRequest::SetApplicationInfo(const CallbackInfo& _applicationInfo)
{
    m_applicationInfo = _applicationInfo;
    m_applicationInfoHasBeenSet = true;
}

bool ModifyPartnerAuthorizationRequest::ApplicationInfoHasBeenSet() const
{
    return m_applicationInfoHasBeenSet;
}


