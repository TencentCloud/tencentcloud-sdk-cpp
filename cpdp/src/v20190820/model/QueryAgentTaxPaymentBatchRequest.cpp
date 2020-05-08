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

#include <tencentcloud/cpdp/v20190820/model/QueryAgentTaxPaymentBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QueryAgentTaxPaymentBatchRequest::QueryAgentTaxPaymentBatchRequest() :
    m_batchNumHasBeenSet(false)
{
}

string QueryAgentTaxPaymentBatchRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_batchNumHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BatchNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_batchNum, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t QueryAgentTaxPaymentBatchRequest::GetBatchNum() const
{
    return m_batchNum;
}

void QueryAgentTaxPaymentBatchRequest::SetBatchNum(const int64_t& _batchNum)
{
    m_batchNum = _batchNum;
    m_batchNumHasBeenSet = true;
}

bool QueryAgentTaxPaymentBatchRequest::BatchNumHasBeenSet() const
{
    return m_batchNumHasBeenSet;
}


