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

#include <tencentcloud/cpdp/v20190820/model/CreateBatchPaymentRecipient.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateBatchPaymentRecipient::CreateBatchPaymentRecipient() :
    m_transferAmountHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_anchorIdHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_anchorNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_reqReservedHasBeenSet(false)
{
}

CoreInternalOutcome CreateBatchPaymentRecipient::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TransferAmount") && !value["TransferAmount"].IsNull())
    {
        if (!value["TransferAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentRecipient.TransferAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transferAmount = value["TransferAmount"].GetInt64();
        m_transferAmountHasBeenSet = true;
    }

    if (value.HasMember("OrderId") && !value["OrderId"].IsNull())
    {
        if (!value["OrderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentRecipient.OrderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderId = string(value["OrderId"].GetString());
        m_orderIdHasBeenSet = true;
    }

    if (value.HasMember("AnchorId") && !value["AnchorId"].IsNull())
    {
        if (!value["AnchorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentRecipient.AnchorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anchorId = string(value["AnchorId"].GetString());
        m_anchorIdHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentRecipient.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("AnchorName") && !value["AnchorName"].IsNull())
    {
        if (!value["AnchorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentRecipient.AnchorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_anchorName = string(value["AnchorName"].GetString());
        m_anchorNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentRecipient.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("ReqReserved") && !value["ReqReserved"].IsNull())
    {
        if (!value["ReqReserved"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateBatchPaymentRecipient.ReqReserved` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqReserved = string(value["ReqReserved"].GetString());
        m_reqReservedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateBatchPaymentRecipient::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_transferAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferAmount, allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anchorId.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_anchorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnchorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_anchorName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_reqReservedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqReserved";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqReserved.c_str(), allocator).Move(), allocator);
    }

}


int64_t CreateBatchPaymentRecipient::GetTransferAmount() const
{
    return m_transferAmount;
}

void CreateBatchPaymentRecipient::SetTransferAmount(const int64_t& _transferAmount)
{
    m_transferAmount = _transferAmount;
    m_transferAmountHasBeenSet = true;
}

bool CreateBatchPaymentRecipient::TransferAmountHasBeenSet() const
{
    return m_transferAmountHasBeenSet;
}

string CreateBatchPaymentRecipient::GetOrderId() const
{
    return m_orderId;
}

void CreateBatchPaymentRecipient::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool CreateBatchPaymentRecipient::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string CreateBatchPaymentRecipient::GetAnchorId() const
{
    return m_anchorId;
}

void CreateBatchPaymentRecipient::SetAnchorId(const string& _anchorId)
{
    m_anchorId = _anchorId;
    m_anchorIdHasBeenSet = true;
}

bool CreateBatchPaymentRecipient::AnchorIdHasBeenSet() const
{
    return m_anchorIdHasBeenSet;
}

string CreateBatchPaymentRecipient::GetUid() const
{
    return m_uid;
}

void CreateBatchPaymentRecipient::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool CreateBatchPaymentRecipient::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string CreateBatchPaymentRecipient::GetAnchorName() const
{
    return m_anchorName;
}

void CreateBatchPaymentRecipient::SetAnchorName(const string& _anchorName)
{
    m_anchorName = _anchorName;
    m_anchorNameHasBeenSet = true;
}

bool CreateBatchPaymentRecipient::AnchorNameHasBeenSet() const
{
    return m_anchorNameHasBeenSet;
}

string CreateBatchPaymentRecipient::GetRemark() const
{
    return m_remark;
}

void CreateBatchPaymentRecipient::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateBatchPaymentRecipient::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateBatchPaymentRecipient::GetReqReserved() const
{
    return m_reqReserved;
}

void CreateBatchPaymentRecipient::SetReqReserved(const string& _reqReserved)
{
    m_reqReserved = _reqReserved;
    m_reqReservedHasBeenSet = true;
}

bool CreateBatchPaymentRecipient::ReqReservedHasBeenSet() const
{
    return m_reqReservedHasBeenSet;
}

