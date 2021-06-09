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

#include <tencentcloud/cpdp/v20190820/model/DeleteAgentTaxPaymentInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DeleteAgentTaxPaymentInfoRequest::DeleteAgentTaxPaymentInfoRequest() :
    m_batchNumHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string DeleteAgentTaxPaymentInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_batchNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_batchNum, allocator);
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


int64_t DeleteAgentTaxPaymentInfoRequest::GetBatchNum() const
{
    return m_batchNum;
}

void DeleteAgentTaxPaymentInfoRequest::SetBatchNum(const int64_t& _batchNum)
{
    m_batchNum = _batchNum;
    m_batchNumHasBeenSet = true;
}

bool DeleteAgentTaxPaymentInfoRequest::BatchNumHasBeenSet() const
{
    return m_batchNumHasBeenSet;
}

string DeleteAgentTaxPaymentInfoRequest::GetProfile() const
{
    return m_profile;
}

void DeleteAgentTaxPaymentInfoRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool DeleteAgentTaxPaymentInfoRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


