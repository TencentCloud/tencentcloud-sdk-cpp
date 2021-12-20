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

#include <tencentcloud/lighthouse/v20200324/model/InquirePriceRenewInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

InquirePriceRenewInstancesRequest::InquirePriceRenewInstancesRequest() :
    m_instanceIdsHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_renewDataDiskHasBeenSet(false),
    m_alignInstanceExpiredTimeHasBeenSet(false)
{
}

string InquirePriceRenewInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_renewDataDiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewDataDisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_renewDataDisk, allocator);
    }

    if (m_alignInstanceExpiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlignInstanceExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alignInstanceExpiredTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> InquirePriceRenewInstancesRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void InquirePriceRenewInstancesRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool InquirePriceRenewInstancesRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

InstanceChargePrepaid InquirePriceRenewInstancesRequest::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void InquirePriceRenewInstancesRequest::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool InquirePriceRenewInstancesRequest::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

bool InquirePriceRenewInstancesRequest::GetRenewDataDisk() const
{
    return m_renewDataDisk;
}

void InquirePriceRenewInstancesRequest::SetRenewDataDisk(const bool& _renewDataDisk)
{
    m_renewDataDisk = _renewDataDisk;
    m_renewDataDiskHasBeenSet = true;
}

bool InquirePriceRenewInstancesRequest::RenewDataDiskHasBeenSet() const
{
    return m_renewDataDiskHasBeenSet;
}

bool InquirePriceRenewInstancesRequest::GetAlignInstanceExpiredTime() const
{
    return m_alignInstanceExpiredTime;
}

void InquirePriceRenewInstancesRequest::SetAlignInstanceExpiredTime(const bool& _alignInstanceExpiredTime)
{
    m_alignInstanceExpiredTime = _alignInstanceExpiredTime;
    m_alignInstanceExpiredTimeHasBeenSet = true;
}

bool InquirePriceRenewInstancesRequest::AlignInstanceExpiredTimeHasBeenSet() const
{
    return m_alignInstanceExpiredTimeHasBeenSet;
}


