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

#include <tencentcloud/cpdp/v20190820/model/CreateTransferBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateTransferBatchRequest::CreateTransferBatchRequest() :
    m_merchantIdHasBeenSet(false),
    m_transferDetailsHasBeenSet(false),
    m_merchantAppIdHasBeenSet(false),
    m_merchantBatchNoHasBeenSet(false),
    m_batchNameHasBeenSet(false),
    m_batchRemarkHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string CreateTransferBatchRequest::ToJsonString() const
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

    if (m_transferDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferDetails";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transferDetails.begin(); itr != m_transferDetails.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_merchantAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantBatchNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantBatchNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantBatchNo.c_str(), allocator).Move(), allocator);
    }

    if (m_batchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchName.c_str(), allocator).Move(), allocator);
    }

    if (m_batchRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_batchRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_totalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalAmount, allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_totalNum, allocator);
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


string CreateTransferBatchRequest::GetMerchantId() const
{
    return m_merchantId;
}

void CreateTransferBatchRequest::SetMerchantId(const string& _merchantId)
{
    m_merchantId = _merchantId;
    m_merchantIdHasBeenSet = true;
}

bool CreateTransferBatchRequest::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

vector<TransferDetailRequest> CreateTransferBatchRequest::GetTransferDetails() const
{
    return m_transferDetails;
}

void CreateTransferBatchRequest::SetTransferDetails(const vector<TransferDetailRequest>& _transferDetails)
{
    m_transferDetails = _transferDetails;
    m_transferDetailsHasBeenSet = true;
}

bool CreateTransferBatchRequest::TransferDetailsHasBeenSet() const
{
    return m_transferDetailsHasBeenSet;
}

string CreateTransferBatchRequest::GetMerchantAppId() const
{
    return m_merchantAppId;
}

void CreateTransferBatchRequest::SetMerchantAppId(const string& _merchantAppId)
{
    m_merchantAppId = _merchantAppId;
    m_merchantAppIdHasBeenSet = true;
}

bool CreateTransferBatchRequest::MerchantAppIdHasBeenSet() const
{
    return m_merchantAppIdHasBeenSet;
}

string CreateTransferBatchRequest::GetMerchantBatchNo() const
{
    return m_merchantBatchNo;
}

void CreateTransferBatchRequest::SetMerchantBatchNo(const string& _merchantBatchNo)
{
    m_merchantBatchNo = _merchantBatchNo;
    m_merchantBatchNoHasBeenSet = true;
}

bool CreateTransferBatchRequest::MerchantBatchNoHasBeenSet() const
{
    return m_merchantBatchNoHasBeenSet;
}

string CreateTransferBatchRequest::GetBatchName() const
{
    return m_batchName;
}

void CreateTransferBatchRequest::SetBatchName(const string& _batchName)
{
    m_batchName = _batchName;
    m_batchNameHasBeenSet = true;
}

bool CreateTransferBatchRequest::BatchNameHasBeenSet() const
{
    return m_batchNameHasBeenSet;
}

string CreateTransferBatchRequest::GetBatchRemark() const
{
    return m_batchRemark;
}

void CreateTransferBatchRequest::SetBatchRemark(const string& _batchRemark)
{
    m_batchRemark = _batchRemark;
    m_batchRemarkHasBeenSet = true;
}

bool CreateTransferBatchRequest::BatchRemarkHasBeenSet() const
{
    return m_batchRemarkHasBeenSet;
}

uint64_t CreateTransferBatchRequest::GetTotalAmount() const
{
    return m_totalAmount;
}

void CreateTransferBatchRequest::SetTotalAmount(const uint64_t& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool CreateTransferBatchRequest::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

uint64_t CreateTransferBatchRequest::GetTotalNum() const
{
    return m_totalNum;
}

void CreateTransferBatchRequest::SetTotalNum(const uint64_t& _totalNum)
{
    m_totalNum = _totalNum;
    m_totalNumHasBeenSet = true;
}

bool CreateTransferBatchRequest::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

string CreateTransferBatchRequest::GetProfile() const
{
    return m_profile;
}

void CreateTransferBatchRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool CreateTransferBatchRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


