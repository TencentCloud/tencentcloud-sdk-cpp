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

#include <tencentcloud/cpdp/v20190820/model/QueryTransferDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

QueryTransferDetailResponse::QueryTransferDetailResponse() :
    m_merchantIdHasBeenSet(false),
    m_merchantBatchNoHasBeenSet(false),
    m_batchIdHasBeenSet(false),
    m_merchantDetailNoHasBeenSet(false),
    m_detailIdHasBeenSet(false),
    m_detailStatusHasBeenSet(false),
    m_transferAmountHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_initiateTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_transferRemarkHasBeenSet(false),
    m_merchantAppIdHasBeenSet(false),
    m_openIdHasBeenSet(false)
{
}

CoreInternalOutcome QueryTransferDetailResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("MerchantId") && !rsp["MerchantId"].IsNull())
    {
        if (!rsp["MerchantId"].IsString())
        {
            return CoreInternalOutcome(Error("response `MerchantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantId = string(rsp["MerchantId"].GetString());
        m_merchantIdHasBeenSet = true;
    }

    if (rsp.HasMember("MerchantBatchNo") && !rsp["MerchantBatchNo"].IsNull())
    {
        if (!rsp["MerchantBatchNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `MerchantBatchNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantBatchNo = string(rsp["MerchantBatchNo"].GetString());
        m_merchantBatchNoHasBeenSet = true;
    }

    if (rsp.HasMember("BatchId") && !rsp["BatchId"].IsNull())
    {
        if (!rsp["BatchId"].IsString())
        {
            return CoreInternalOutcome(Error("response `BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(rsp["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (rsp.HasMember("MerchantDetailNo") && !rsp["MerchantDetailNo"].IsNull())
    {
        if (!rsp["MerchantDetailNo"].IsString())
        {
            return CoreInternalOutcome(Error("response `MerchantDetailNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantDetailNo = string(rsp["MerchantDetailNo"].GetString());
        m_merchantDetailNoHasBeenSet = true;
    }

    if (rsp.HasMember("DetailId") && !rsp["DetailId"].IsNull())
    {
        if (!rsp["DetailId"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetailId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detailId = string(rsp["DetailId"].GetString());
        m_detailIdHasBeenSet = true;
    }

    if (rsp.HasMember("DetailStatus") && !rsp["DetailStatus"].IsNull())
    {
        if (!rsp["DetailStatus"].IsString())
        {
            return CoreInternalOutcome(Error("response `DetailStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detailStatus = string(rsp["DetailStatus"].GetString());
        m_detailStatusHasBeenSet = true;
    }

    if (rsp.HasMember("TransferAmount") && !rsp["TransferAmount"].IsNull())
    {
        if (!rsp["TransferAmount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `TransferAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transferAmount = rsp["TransferAmount"].GetUint64();
        m_transferAmountHasBeenSet = true;
    }

    if (rsp.HasMember("FailReason") && !rsp["FailReason"].IsNull())
    {
        if (!rsp["FailReason"].IsString())
        {
            return CoreInternalOutcome(Error("response `FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(rsp["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (rsp.HasMember("InitiateTime") && !rsp["InitiateTime"].IsNull())
    {
        if (!rsp["InitiateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `InitiateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_initiateTime = string(rsp["InitiateTime"].GetString());
        m_initiateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTime") && !rsp["UpdateTime"].IsNull())
    {
        if (!rsp["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(rsp["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UserName") && !rsp["UserName"].IsNull())
    {
        if (!rsp["UserName"].IsString())
        {
            return CoreInternalOutcome(Error("response `UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(rsp["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (rsp.HasMember("TransferRemark") && !rsp["TransferRemark"].IsNull())
    {
        if (!rsp["TransferRemark"].IsString())
        {
            return CoreInternalOutcome(Error("response `TransferRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferRemark = string(rsp["TransferRemark"].GetString());
        m_transferRemarkHasBeenSet = true;
    }

    if (rsp.HasMember("MerchantAppId") && !rsp["MerchantAppId"].IsNull())
    {
        if (!rsp["MerchantAppId"].IsString())
        {
            return CoreInternalOutcome(Error("response `MerchantAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantAppId = string(rsp["MerchantAppId"].GetString());
        m_merchantAppIdHasBeenSet = true;
    }

    if (rsp.HasMember("OpenId") && !rsp["OpenId"].IsNull())
    {
        if (!rsp["OpenId"].IsString())
        {
            return CoreInternalOutcome(Error("response `OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(rsp["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


string QueryTransferDetailResponse::GetMerchantId() const
{
    return m_merchantId;
}

bool QueryTransferDetailResponse::MerchantIdHasBeenSet() const
{
    return m_merchantIdHasBeenSet;
}

string QueryTransferDetailResponse::GetMerchantBatchNo() const
{
    return m_merchantBatchNo;
}

bool QueryTransferDetailResponse::MerchantBatchNoHasBeenSet() const
{
    return m_merchantBatchNoHasBeenSet;
}

string QueryTransferDetailResponse::GetBatchId() const
{
    return m_batchId;
}

bool QueryTransferDetailResponse::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

string QueryTransferDetailResponse::GetMerchantDetailNo() const
{
    return m_merchantDetailNo;
}

bool QueryTransferDetailResponse::MerchantDetailNoHasBeenSet() const
{
    return m_merchantDetailNoHasBeenSet;
}

string QueryTransferDetailResponse::GetDetailId() const
{
    return m_detailId;
}

bool QueryTransferDetailResponse::DetailIdHasBeenSet() const
{
    return m_detailIdHasBeenSet;
}

string QueryTransferDetailResponse::GetDetailStatus() const
{
    return m_detailStatus;
}

bool QueryTransferDetailResponse::DetailStatusHasBeenSet() const
{
    return m_detailStatusHasBeenSet;
}

uint64_t QueryTransferDetailResponse::GetTransferAmount() const
{
    return m_transferAmount;
}

bool QueryTransferDetailResponse::TransferAmountHasBeenSet() const
{
    return m_transferAmountHasBeenSet;
}

string QueryTransferDetailResponse::GetFailReason() const
{
    return m_failReason;
}

bool QueryTransferDetailResponse::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string QueryTransferDetailResponse::GetInitiateTime() const
{
    return m_initiateTime;
}

bool QueryTransferDetailResponse::InitiateTimeHasBeenSet() const
{
    return m_initiateTimeHasBeenSet;
}

string QueryTransferDetailResponse::GetUpdateTime() const
{
    return m_updateTime;
}

bool QueryTransferDetailResponse::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string QueryTransferDetailResponse::GetUserName() const
{
    return m_userName;
}

bool QueryTransferDetailResponse::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string QueryTransferDetailResponse::GetTransferRemark() const
{
    return m_transferRemark;
}

bool QueryTransferDetailResponse::TransferRemarkHasBeenSet() const
{
    return m_transferRemarkHasBeenSet;
}

string QueryTransferDetailResponse::GetMerchantAppId() const
{
    return m_merchantAppId;
}

bool QueryTransferDetailResponse::MerchantAppIdHasBeenSet() const
{
    return m_merchantAppIdHasBeenSet;
}

string QueryTransferDetailResponse::GetOpenId() const
{
    return m_openId;
}

bool QueryTransferDetailResponse::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}


