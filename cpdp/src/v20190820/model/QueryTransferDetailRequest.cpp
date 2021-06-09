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

#include <tencentcloud/cpdp/v20190820/model/QueryTransferDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryTransferDetailRequest::QueryTransferDetailRequest() :
    m_merchantIdHasBeenSet(false),
    m_merchantBatchNoHasBeenSet(false),
    m_merchantDetailNoHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_detailIdHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string QueryTransferDetailRequest::ToJsonString() const
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

    if (m_merchantBatchNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantBatchNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantBatchNo.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantDetailNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantDetailNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantDetailNo.c_str(), allocator).Move(), allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_detailIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_detailId.c_str(), allocator).Move(), allocator);
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


string QueryTransferDetailRequest::GetMerchantId() const
{
    return m_merchantId;
}

void QueryTransferDetailRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool QueryTransferDetailRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string QueryTransferDetailRequest::GetMerchantBatchNo() const
{
    return m_merchantBatchNo;
}

void QueryTransferDetailRequest::SetMerchantBatchNo(const string& _merchantBatchNo)
{
    m_merchantBatchNo = _merchantBatchNo;
    m_merchantBatchNoHasBeenSet = true;
}

bool QueryTransferDetailRequest::MerchantBatchNoHasBeenSet() const
{
    return m_merchantBatchNoHasBeenSet;
}

string QueryTransferDetailRequest::GetMerchantDetailNo() const
{
    return m_merchantDetailNo;
}

void QueryTransferDetailRequest::SetMerchantDetailNo(const string& _merchantDetailNo)
{
    m_merchantDetailNo = _merchantDetailNo;
    m_merchantDetailNoHasBeenSet = true;
}

bool QueryTransferDetailRequest::MerchantDetailNoHasBeenSet() const
{
    return m_merchantDetailNoHasBeenSet;
}

string QueryTransferDetailRequest::GetBatchId() const
{
    return m_batchId;
}

void QueryTransferDetailRequest::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool QueryTransferDetailRequest::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string QueryTransferDetailRequest::GetDetailId() const
{
    return m_detailId;
}

void QueryTransferDetailRequest::SetDetailId(const string& _detailId)
{
    m_detailId = _detailId;
    m_detailIdHasBeenSet = true;
}

bool QueryTransferDetailRequest::DetailIdHasBeenSet() const
{
    return m_detailIdHasBeenSet;
}

string QueryTransferDetailRequest::GetProfile() const
{
    return m_profile;
}

void QueryTransferDetailRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool QueryTransferDetailRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


