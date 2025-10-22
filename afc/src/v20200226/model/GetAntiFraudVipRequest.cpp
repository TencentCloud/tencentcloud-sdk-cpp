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

#include <tencentcloud/afc/v20200226/model/GetAntiFraudVipRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Afc::V20200226::Model;
using namespace std;

GetAntiFraudVipRequest::GetAntiFraudVipRequest() :
    m_businessSecurityDataHasBeenSet(false),
    m_businessCryptoDataHasBeenSet(false)
{
}

string GetAntiFraudVipRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessSecurityDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessSecurityData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_businessSecurityData.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_businessCryptoDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessCryptoData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_businessCryptoData.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


AntiFraudVipFilter GetAntiFraudVipRequest::GetBusinessSecurityData() const
{
    return m_businessSecurityData;
}

void GetAntiFraudVipRequest::SetBusinessSecurityData(const AntiFraudVipFilter& _businessSecurityData)
{
    m_businessSecurityData = _businessSecurityData;
    m_businessSecurityDataHasBeenSet = true;
}

bool GetAntiFraudVipRequest::BusinessSecurityDataHasBeenSet() const
{
    return m_businessSecurityDataHasBeenSet;
}

AntiFraudVipCryptoFilter GetAntiFraudVipRequest::GetBusinessCryptoData() const
{
    return m_businessCryptoData;
}

void GetAntiFraudVipRequest::SetBusinessCryptoData(const AntiFraudVipCryptoFilter& _businessCryptoData)
{
    m_businessCryptoData = _businessCryptoData;
    m_businessCryptoDataHasBeenSet = true;
}

bool GetAntiFraudVipRequest::BusinessCryptoDataHasBeenSet() const
{
    return m_businessCryptoDataHasBeenSet;
}


