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

#include <tencentcloud/cvm/v20170312/model/InquiryPriceRenewHostsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

InquiryPriceRenewHostsRequest::InquiryPriceRenewHostsRequest() :
    m_hostIdsHasBeenSet(false),
    m_hostChargePrepaidHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

string InquiryPriceRenewHostsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_hostIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hostIds.begin(); itr != m_hostIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_hostChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dryRun, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> InquiryPriceRenewHostsRequest::GetHostIds() const
{
    return m_hostIds;
}

void InquiryPriceRenewHostsRequest::SetHostIds(const vector<string>& _hostIds)
{
    m_hostIds = _hostIds;
    m_hostIdsHasBeenSet = true;
}

bool InquiryPriceRenewHostsRequest::HostIdsHasBeenSet() const
{
    return m_hostIdsHasBeenSet;
}

ChargePrepaid InquiryPriceRenewHostsRequest::GetHostChargePrepaid() const
{
    return m_hostChargePrepaid;
}

void InquiryPriceRenewHostsRequest::SetHostChargePrepaid(const ChargePrepaid& _hostChargePrepaid)
{
    m_hostChargePrepaid = _hostChargePrepaid;
    m_hostChargePrepaidHasBeenSet = true;
}

bool InquiryPriceRenewHostsRequest::HostChargePrepaidHasBeenSet() const
{
    return m_hostChargePrepaidHasBeenSet;
}

bool InquiryPriceRenewHostsRequest::GetDryRun() const
{
    return m_dryRun;
}

void InquiryPriceRenewHostsRequest::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool InquiryPriceRenewHostsRequest::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}


