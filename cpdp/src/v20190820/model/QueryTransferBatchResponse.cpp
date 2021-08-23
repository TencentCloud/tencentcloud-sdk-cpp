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

#include <tencentcloud/cpdp/v20190820/model/QueryTransferBatchResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryTransferBatchResponse::QueryTransferBatchResponse() :
    m_merchantIdHasBeenSet(false),
    m_merchantBatchNoHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_merchantAppIdHasBeenSet(false),
    m_batchStatusHasBeenSet(false),
    m_closeReasonHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_totalNumHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_successAmountHasBeenSet(false),
    m_successNumHasBeenSet(false),
    m_failAmountHasBeenSet(false),
    m_failNumHasBeenSet(false),
    m_transferDetailsHasBeenSet(false),
    m_batchTypeHasBeenSet(false),
    m_batchNameHasBeenSet(false),
    m_batchRemarkHasBeenSet(false)
{
}

CoreInternalOutcome QueryTransferBatchResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("MerchantId") && !rsp["MerchantId"].IsNull())
    {
        if (!rsp["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(rsp["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (rsp.HasMember("MerchantBatchNo") && !rsp["MerchantBatchNo"].IsNull())
    {
        if (!rsp["MerchantBatchNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantBatchNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantBatchNo = string(rsp["MerchantBatchNo"].GetString());
        m_merchantBatchNoHasBeenSet = true;
    }

    if (rsp.HasMember("BatchId") && !rsp["BatchId"].IsNull())
    {
        if (!rsp["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(rsp["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (rsp.HasMember("MerchantAppId") && !rsp["MerchantAppId"].IsNull())
    {
        if (!rsp["MerchantAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantAppId = string(rsp["MerchantAppId"].GetString());
        m_merchantAppIdHasBeenSet = true;
    }

    if (rsp.HasMember("BatchStatus") && !rsp["BatchStatus"].IsNull())
    {
        if (!rsp["BatchStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchStatus = string(rsp["BatchStatus"].GetString());
        m_batchStatusHasBeenSet = true;
    }

    if (rsp.HasMember("CloseReason") && !rsp["CloseReason"].IsNull())
    {
        if (!rsp["CloseReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloseReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_closeReason = string(rsp["CloseReason"].GetString());
        m_closeReasonHasBeenSet = true;
    }

    if (rsp.HasMember("TotalAmount") && !rsp["TotalAmount"].IsNull())
    {
        if (!rsp["TotalAmount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmount = rsp["TotalAmount"].GetUint64();
        m_totalAmountHasBeenSet = true;
    }

    if (rsp.HasMember("TotalNum") && !rsp["TotalNum"].IsNull())
    {
        if (!rsp["TotalNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalNum = rsp["TotalNum"].GetUint64();
        m_totalNumHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessAmount") && !rsp["SuccessAmount"].IsNull())
    {
        if (!rsp["SuccessAmount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successAmount = rsp["SuccessAmount"].GetUint64();
        m_successAmountHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessNum") && !rsp["SuccessNum"].IsNull())
    {
        if (!rsp["SuccessNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SuccessNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_successNum = rsp["SuccessNum"].GetUint64();
        m_successNumHasBeenSet = true;
    }

    if (rsp.HasMember("FailAmount") && !rsp["FailAmount"].IsNull())
    {
        if (!rsp["FailAmount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FailAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failAmount = rsp["FailAmount"].GetUint64();
        m_failAmountHasBeenSet = true;
    }

    if (rsp.HasMember("FailNum") && !rsp["FailNum"].IsNull())
    {
        if (!rsp["FailNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FailNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_failNum = rsp["FailNum"].GetUint64();
        m_failNumHasBeenSet = true;
    }

    if (rsp.HasMember("TransferDetails") && !rsp["TransferDetails"].IsNull())
    {
        if (!rsp["TransferDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TransferDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TransferDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TransferDetailResponse item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_transferDetails.push_back(item);
        }
        m_transferDetailsHasBeenSet = true;
    }

    if (rsp.HasMember("BatchType") && !rsp["BatchType"].IsNull())
    {
        if (!rsp["BatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchType = string(rsp["BatchType"].GetString());
        m_batchTypeHasBeenSet = true;
    }

    if (rsp.HasMember("BatchName") && !rsp["BatchName"].IsNull())
    {
        if (!rsp["BatchName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchName = string(rsp["BatchName"].GetString());
        m_batchNameHasBeenSet = true;
    }

    if (rsp.HasMember("BatchRemark") && !rsp["BatchRemark"].IsNull())
    {
        if (!rsp["BatchRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchRemark = string(rsp["BatchRemark"].GetString());
        m_batchRemarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string QueryTransferBatchResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_merchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantBatchNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantBatchNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantBatchNo.c_str(), allocator).Move(), allocator);
    }

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_batchStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_closeReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloseReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_closeReason.c_str(), allocator).Move(), allocator);
    }

    if (m_totalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAmount, allocator);
    }

    if (m_totalNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalNum, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_successAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successAmount, allocator);
    }

    if (m_successNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successNum, allocator);
    }

    if (m_failAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failAmount, allocator);
    }

    if (m_failNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failNum, allocator);
    }

    if (m_transferDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transferDetails.begin(); itr != m_transferDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_batchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchType.c_str(), allocator).Move(), allocator);
    }

    if (m_batchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchName.c_str(), allocator).Move(), allocator);
    }

    if (m_batchRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchRemark.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string QueryTransferBatchResponse::GetMerchantId() const
{
    return m_merchantId;
}

bool QueryTransferBatchResponse::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string QueryTransferBatchResponse::GetMerchantBatchNo() const
{
    return m_merchantBatchNo;
}

bool QueryTransferBatchResponse::MerchantBatchNoHasBeenSet() const
{
    return m_merchantBatchNoHasBeenSet;
}

string QueryTransferBatchResponse::GetBatchId() const
{
    return m_batchId;
}

bool QueryTransferBatchResponse::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string QueryTransferBatchResponse::GetMerchantAppId() const
{
    return m_merchantAppId;
}

bool QueryTransferBatchResponse::MerchantAppIdHasBeenSet() const
{
    return m_merchantAppIdHasBeenSet;
}

string QueryTransferBatchResponse::GetBatchStatus() const
{
    return m_batchStatus;
}

bool QueryTransferBatchResponse::BatchStatusHasBeenSet() const
{
    return m_batchStatusHasBeenSet;
}

string QueryTransferBatchResponse::GetCloseReason() const
{
    return m_closeReason;
}

bool QueryTransferBatchResponse::CloseReasonHasBeenSet() const
{
    return m_closeReasonHasBeenSet;
}

uint64_t QueryTransferBatchResponse::GetTotalAmount() const
{
    return m_totalAmount;
}

bool QueryTransferBatchResponse::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

uint64_t QueryTransferBatchResponse::GetTotalNum() const
{
    return m_totalNum;
}

bool QueryTransferBatchResponse::TotalNumHasBeenSet() const
{
    return m_totalNumHasBeenSet;
}

string QueryTransferBatchResponse::GetCreateTime() const
{
    return m_createTime;
}

bool QueryTransferBatchResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string QueryTransferBatchResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool QueryTransferBatchResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t QueryTransferBatchResponse::GetSuccessAmount() const
{
    return m_successAmount;
}

bool QueryTransferBatchResponse::SuccessAmountHasBeenSet() const
{
    return m_successAmountHasBeenSet;
}

uint64_t QueryTransferBatchResponse::GetSuccessNum() const
{
    return m_successNum;
}

bool QueryTransferBatchResponse::SuccessNumHasBeenSet() const
{
    return m_successNumHasBeenSet;
}

uint64_t QueryTransferBatchResponse::GetFailAmount() const
{
    return m_failAmount;
}

bool QueryTransferBatchResponse::FailAmountHasBeenSet() const
{
    return m_failAmountHasBeenSet;
}

uint64_t QueryTransferBatchResponse::GetFailNum() const
{
    return m_failNum;
}

bool QueryTransferBatchResponse::FailNumHasBeenSet() const
{
    return m_failNumHasBeenSet;
}

vector<TransferDetailResponse> QueryTransferBatchResponse::GetTransferDetails() const
{
    return m_transferDetails;
}

bool QueryTransferBatchResponse::TransferDetailsHasBeenSet() const
{
    return m_transferDetailsHasBeenSet;
}

string QueryTransferBatchResponse::GetBatchType() const
{
    return m_batchType;
}

bool QueryTransferBatchResponse::BatchTypeHasBeenSet() const
{
    return m_batchTypeHasBeenSet;
}

string QueryTransferBatchResponse::GetBatchName() const
{
    return m_batchName;
}

bool QueryTransferBatchResponse::BatchNameHasBeenSet() const
{
    return m_batchNameHasBeenSet;
}

string QueryTransferBatchResponse::GetBatchRemark() const
{
    return m_batchRemark;
}

bool QueryTransferBatchResponse::BatchRemarkHasBeenSet() const
{
    return m_batchRemarkHasBeenSet;
}


