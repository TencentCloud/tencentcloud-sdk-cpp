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

#include <tencentcloud/billing/v20180709/model/DescribeAccountBalanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeAccountBalanceRequest::DescribeAccountBalanceRequest() :
    m_tempCreditHasBeenSet(false)
{
}

string DescribeAccountBalanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tempCreditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TempCredit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tempCredit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool DescribeAccountBalanceRequest::GetTempCredit() const
{
    return m_tempCredit;
}

void DescribeAccountBalanceRequest::SetTempCredit(const bool& _tempCredit)
{
    m_tempCredit = _tempCredit;
    m_tempCreditHasBeenSet = true;
}

bool DescribeAccountBalanceRequest::TempCreditHasBeenSet() const
{
    return m_tempCreditHasBeenSet;
}


