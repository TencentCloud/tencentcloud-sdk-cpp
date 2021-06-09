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

#include <tencentcloud/cpdp/v20190820/model/QueryTransferBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryTransferBatchRequest::QueryTransferBatchRequest() :
    m_merchantIdHasBeenSet(false),
    m_needQueryDetailHasBeenSet(false),
    m_merchantBatchNoHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_detailStatusHasBeenSet(false)
{
}

string QueryTransferBatchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_needQueryDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedQueryDetail";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needQueryDetail, allocator);
    }

    if (m_merchantBatchNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantBatchNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantBatchNo.c_str(), allocator).Move(), allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_detailStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_detailStatus.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryTransferBatchRequest::GetMerchantId() const
{
    return m_merchantId;
}

void QueryTransferBatchRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool QueryTransferBatchRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

bool QueryTransferBatchRequest::GetNeedQueryDetail() const
{
    return m_needQueryDetail;
}

void QueryTransferBatchRequest::SetNeedQueryDetail(const bool& _needQueryDetail)
{
    m_needQueryDetail = _needQueryDetail;
    m_needQueryDetailHasBeenSet = true;
}

bool QueryTransferBatchRequest::NeedQueryDetailHasBeenSet() const
{
    return m_needQueryDetailHasBeenSet;
}

string QueryTransferBatchRequest::GetMerchantBatchNo() const
{
    return m_merchantBatchNo;
}

void QueryTransferBatchRequest::SetMerchantBatchNo(const string& _merchantBatchNo)
{
    m_merchantBatchNo = _merchantBatchNo;
    m_merchantBatchNoHasBeenSet = true;
}

bool QueryTransferBatchRequest::MerchantBatchNoHasBeenSet() const
{
    return m_merchantBatchNoHasBeenSet;
}

string QueryTransferBatchRequest::GetBatchId() const
{
    return m_batchId;
}

void QueryTransferBatchRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool QueryTransferBatchRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string QueryTransferBatchRequest::GetProfile() const
{
    return m_profile;
}

void QueryTransferBatchRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QueryTransferBatchRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

uint64_t QueryTransferBatchRequest::GetOffset() const
{
    return m_offset;
}

void QueryTransferBatchRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool QueryTransferBatchRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t QueryTransferBatchRequest::GetLimit() const
{
    return m_limit;
}

void QueryTransferBatchRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool QueryTransferBatchRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string QueryTransferBatchRequest::GetDetailStatus() const
{
    return m_detailStatus;
}

void QueryTransferBatchRequest::SetDetailStatus(const string& _detailStatus)
{
    m_detailStatus = _detailStatus;
    m_detailStatusHasBeenSet = true;
}

bool QueryTransferBatchRequest::DetailStatusHasBeenSet() const
{
    return m_detailStatusHasBeenSet;
}


