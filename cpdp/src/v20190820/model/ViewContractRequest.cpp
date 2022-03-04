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

#include <tencentcloud/cpdp/v20190820/model/ViewContractRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ViewContractRequest::ViewContractRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_outContractIdHasBeenSet(false),
    m_contractIdHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string ViewContractRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_openKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openKey.c_str(), allocator).Move(), allocator);
    }

    if (m_outContractIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutContractId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outContractId.c_str(), allocator).Move(), allocator);
    }

    if (m_contractIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractId.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ViewContractRequest::GetOpenId() const
{
    return m_openId;
}

void ViewContractRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool ViewContractRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string ViewContractRequest::GetOpenKey() const
{
    return m_openKey;
}

void ViewContractRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool ViewContractRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string ViewContractRequest::GetOutContractId() const
{
    return m_outContractId;
}

void ViewContractRequest::SetOutContractId(const string& _outContractId)
{
    m_outContractId = _outContractId;
    m_outContractIdHasBeenSet = true;
}

bool ViewContractRequest::OutContractIdHasBeenSet() const
{
    return m_outContractIdHasBeenSet;
}

string ViewContractRequest::GetContractId() const
{
    return m_contractId;
}

void ViewContractRequest::SetContractId(const string& _contractId)
{
    m_contractId = _contractId;
    m_contractIdHasBeenSet = true;
}

bool ViewContractRequest::ContractIdHasBeenSet() const
{
    return m_contractIdHasBeenSet;
}

string ViewContractRequest::GetProfile() const
{
    return m_profile;
}

void ViewContractRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool ViewContractRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


