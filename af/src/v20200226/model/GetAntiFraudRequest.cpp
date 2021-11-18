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

#include <tencentcloud/af/v20200226/model/GetAntiFraudRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Af::V20200226::Model;
using namespace std;

GetAntiFraudRequest::GetAntiFraudRequest() :
    m_businessSecurityDataHasBeenSet(false),
    m_businessCryptoDataHasBeenSet(false)
{
}

string GetAntiFraudRequest::ToJsonString() const
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


AntiFraudFilter GetAntiFraudRequest::GetBusinessSecurityData() const
{
    return m_businessSecurityData;
}

void GetAntiFraudRequest::SetBusinessSecurityData(const AntiFraudFilter& _businessSecurityData)
{
    m_businessSecurityData = _businessSecurityData;
    m_businessSecurityDataHasBeenSet = true;
}

bool GetAntiFraudRequest::BusinessSecurityDataHasBeenSet() const
{
    return m_businessSecurityDataHasBeenSet;
}

AntiFraudCryptoFilter GetAntiFraudRequest::GetBusinessCryptoData() const
{
    return m_businessCryptoData;
}

void GetAntiFraudRequest::SetBusinessCryptoData(const AntiFraudCryptoFilter& _businessCryptoData)
{
    m_businessCryptoData = _businessCryptoData;
    m_businessCryptoDataHasBeenSet = true;
}

bool GetAntiFraudRequest::BusinessCryptoDataHasBeenSet() const
{
    return m_businessCryptoDataHasBeenSet;
}


