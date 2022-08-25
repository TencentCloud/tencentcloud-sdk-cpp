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

#include <tencentcloud/gaap/v20180529/model/DeleteGlobalDomainDnsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

DeleteGlobalDomainDnsRequest::DeleteGlobalDomainDnsRequest() :
    m_dnsRecordIdHasBeenSet(false)
{
}

string DeleteGlobalDomainDnsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dnsRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsRecordId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dnsRecordId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeleteGlobalDomainDnsRequest::GetDnsRecordId() const
{
    return m_dnsRecordId;
}

void DeleteGlobalDomainDnsRequest::SetDnsRecordId(const uint64_t& _dnsRecordId)
{
    m_dnsRecordId = _dnsRecordId;
    m_dnsRecordIdHasBeenSet = true;
}

bool DeleteGlobalDomainDnsRequest::DnsRecordIdHasBeenSet() const
{
    return m_dnsRecordIdHasBeenSet;
}


