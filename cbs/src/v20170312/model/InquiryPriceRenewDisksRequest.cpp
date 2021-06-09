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

#include <tencentcloud/cbs/v20170312/model/InquiryPriceRenewDisksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cbs::V20170312::Model;
using namespace std;

InquiryPriceRenewDisksRequest::InquiryPriceRenewDisksRequest() :
    m_diskIdsHasBeenSet(false),
    m_diskChargePrepaidsHasBeenSet(false),
    m_newDeadlineHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string InquiryPriceRenewDisksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_diskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_diskIds.begin(); itr != m_diskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_diskChargePrepaidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskChargePrepaids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_diskChargePrepaids.begin(); itr != m_diskChargePrepaids.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_newDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewDeadline";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newDeadline.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> InquiryPriceRenewDisksRequest::GetDiskIds() const
{
    return m_diskIds;
}

void InquiryPriceRenewDisksRequest::SetDiskIds(const vector<string>& _diskIds)
{
    m_diskIds = _diskIds;
    m_diskIdsHasBeenSet = true;
}

bool InquiryPriceRenewDisksRequest::DiskIdsHasBeenSet() const
{
    return m_diskIdsHasBeenSet;
}

vector<DiskChargePrepaid> InquiryPriceRenewDisksRequest::GetDiskChargePrepaids() const
{
    return m_diskChargePrepaids;
}

void InquiryPriceRenewDisksRequest::SetDiskChargePrepaids(const vector<DiskChargePrepaid>& _diskChargePrepaids)
{
    m_diskChargePrepaids = _diskChargePrepaids;
    m_diskChargePrepaidsHasBeenSet = true;
}

bool InquiryPriceRenewDisksRequest::DiskChargePrepaidsHasBeenSet() const
{
    return m_diskChargePrepaidsHasBeenSet;
}

string InquiryPriceRenewDisksRequest::GetNewDeadline() const
{
    return m_newDeadline;
}

void InquiryPriceRenewDisksRequest::SetNewDeadline(const string& _newDeadline)
{
    m_newDeadline = _newDeadline;
    m_newDeadlineHasBeenSet = true;
}

bool InquiryPriceRenewDisksRequest::NewDeadlineHasBeenSet() const
{
    return m_newDeadlineHasBeenSet;
}

uint64_t InquiryPriceRenewDisksRequest::GetProjectId() const
{
    return m_projectId;
}

void InquiryPriceRenewDisksRequest::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool InquiryPriceRenewDisksRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


