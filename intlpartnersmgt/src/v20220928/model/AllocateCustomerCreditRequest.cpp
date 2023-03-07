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

#include <tencentcloud/intlpartnersmgt/v20220928/model/AllocateCustomerCreditRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

AllocateCustomerCreditRequest::AllocateCustomerCreditRequest() :
    m_addedCreditHasBeenSet(false),
    m_clientUinHasBeenSet(false)
{
}

string AllocateCustomerCreditRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_addedCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddedCredit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_addedCredit, allocator);
    }

    if (m_clientUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clientUin, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


double AllocateCustomerCreditRequest::GetAddedCredit() const
{
    return m_addedCredit;
}

void AllocateCustomerCreditRequest::SetAddedCredit(const double& _addedCredit)
{
    m_addedCredit = _addedCredit;
    m_addedCreditHasBeenSet = true;
}

bool AllocateCustomerCreditRequest::AddedCreditHasBeenSet() const
{
    return m_addedCreditHasBeenSet;
}

uint64_t AllocateCustomerCreditRequest::GetClientUin() const
{
    return m_clientUin;
}

void AllocateCustomerCreditRequest::SetClientUin(const uint64_t& _clientUin)
{
    m_clientUin = _clientUin;
    m_clientUinHasBeenSet = true;
}

bool AllocateCustomerCreditRequest::ClientUinHasBeenSet() const
{
    return m_clientUinHasBeenSet;
}


