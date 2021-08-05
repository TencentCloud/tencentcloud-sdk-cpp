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

#include <tencentcloud/cpdp/v20190820/model/ModifyMerchantRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

ModifyMerchantRequest::ModifyMerchantRequest() :
    m_merchantAppIdHasBeenSet(false),
    m_merchantNameHasBeenSet(false),
    m_businessPayFlagHasBeenSet(false)
{
}

string ModifyMerchantRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_merchantAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantName.c_str(), allocator).Move(), allocator);
    }

    if (m_businessPayFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessPayFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_businessPayFlag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMerchantRequest::GetMerchantAppId() const
{
    return m_merchantAppId;
}

void ModifyMerchantRequest::SetMerchantAppId(const string& _merchantAppId)
{
    m_merchantAppId = _merchantAppId;
    m_merchantAppIdHasBeenSet = true;
}

bool ModifyMerchantRequest::MerchantAppIdHasBeenSet() const
{
    return m_merchantAppIdHasBeenSet;
}

string ModifyMerchantRequest::GetMerchantName() const
{
    return m_merchantName;
}

void ModifyMerchantRequest::SetMerchantName(const string& _merchantName)
{
    m_merchantName = _merchantName;
    m_merchantNameHasBeenSet = true;
}

bool ModifyMerchantRequest::MerchantNameHasBeenSet() const
{
    return m_merchantNameHasBeenSet;
}

string ModifyMerchantRequest::GetBusinessPayFlag() const
{
    return m_businessPayFlag;
}

void ModifyMerchantRequest::SetBusinessPayFlag(const string& _businessPayFlag)
{
    m_businessPayFlag = _businessPayFlag;
    m_businessPayFlagHasBeenSet = true;
}

bool ModifyMerchantRequest::BusinessPayFlagHasBeenSet() const
{
    return m_businessPayFlagHasBeenSet;
}


