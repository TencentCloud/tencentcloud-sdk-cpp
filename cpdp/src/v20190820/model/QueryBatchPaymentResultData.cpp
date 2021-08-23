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

#include <tencentcloud/cpdp/v20190820/model/QueryBatchPaymentResultData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryBatchPaymentResultData::QueryBatchPaymentResultData() :
    m_batchIdHasBeenSet(false),
    m_totalAmountHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_reqReservedHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_transferTypeHasBeenSet(false),
    m_transferInfoListHasBeenSet(false)
{
}

CoreInternalOutcome QueryBatchPaymentResultData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BatchId") && !value["BatchId"].IsNull())
    {
        if (!value["BatchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBatchPaymentResultData.BatchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchId = string(value["BatchId"].GetString());
        m_batchIdHasBeenSet = true;
    }

    if (value.HasMember("TotalAmount") && !value["TotalAmount"].IsNull())
    {
        if (!value["TotalAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBatchPaymentResultData.TotalAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalAmount = value["TotalAmount"].GetInt64();
        m_totalAmountHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBatchPaymentResultData.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("ReqReserved") && !value["ReqReserved"].IsNull())
    {
        if (!value["ReqReserved"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBatchPaymentResultData.ReqReserved` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reqReserved = string(value["ReqReserved"].GetString());
        m_reqReservedHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBatchPaymentResultData.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("TransferType") && !value["TransferType"].IsNull())
    {
        if (!value["TransferType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryBatchPaymentResultData.TransferType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transferType = value["TransferType"].GetInt64();
        m_transferTypeHasBeenSet = true;
    }

    if (value.HasMember("TransferInfoList") && !value["TransferInfoList"].IsNull())
    {
        if (!value["TransferInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QueryBatchPaymentResultData.TransferInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["TransferInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QueryBatchPaymentResultDataInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_transferInfoList.push_back(item);
        }
        m_transferInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryBatchPaymentResultData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_batchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalAmount, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_reqReservedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReqReserved";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reqReserved.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_transferTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferType, allocator);
    }

    if (m_transferInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transferInfoList.begin(); itr != m_transferInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string QueryBatchPaymentResultData::GetBatchId() const
{
    return m_batchId;
}

void QueryBatchPaymentResultData::SetBatchId(const string& _batchId)
{
    m_batchId = _batchId;
    m_batchIdHasBeenSet = true;
}

bool QueryBatchPaymentResultData::BatchIdHasBeenSet() const
{
    return m_batchIdHasBeenSet;
}

int64_t QueryBatchPaymentResultData::GetTotalAmount() const
{
    return m_totalAmount;
}

void QueryBatchPaymentResultData::SetTotalAmount(const int64_t& _totalAmount)
{
    m_totalAmount = _totalAmount;
    m_totalAmountHasBeenSet = true;
}

bool QueryBatchPaymentResultData::TotalAmountHasBeenSet() const
{
    return m_totalAmountHasBeenSet;
}

int64_t QueryBatchPaymentResultData::GetTotalCount() const
{
    return m_totalCount;
}

void QueryBatchPaymentResultData::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool QueryBatchPaymentResultData::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

string QueryBatchPaymentResultData::GetReqReserved() const
{
    return m_reqReserved;
}

void QueryBatchPaymentResultData::SetReqReserved(const string& _reqReserved)
{
    m_reqReserved = _reqReserved;
    m_reqReservedHasBeenSet = true;
}

bool QueryBatchPaymentResultData::ReqReservedHasBeenSet() const
{
    return m_reqReservedHasBeenSet;
}

string QueryBatchPaymentResultData::GetRemark() const
{
    return m_remark;
}

void QueryBatchPaymentResultData::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool QueryBatchPaymentResultData::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t QueryBatchPaymentResultData::GetTransferType() const
{
    return m_transferType;
}

void QueryBatchPaymentResultData::SetTransferType(const int64_t& _transferType)
{
    m_transferType = _transferType;
    m_transferTypeHasBeenSet = true;
}

bool QueryBatchPaymentResultData::TransferTypeHasBeenSet() const
{
    return m_transferTypeHasBeenSet;
}

vector<QueryBatchPaymentResultDataInfo> QueryBatchPaymentResultData::GetTransferInfoList() const
{
    return m_transferInfoList;
}

void QueryBatchPaymentResultData::SetTransferInfoList(const vector<QueryBatchPaymentResultDataInfo>& _transferInfoList)
{
    m_transferInfoList = _transferInfoList;
    m_transferInfoListHasBeenSet = true;
}

bool QueryBatchPaymentResultData::TransferInfoListHasBeenSet() const
{
    return m_transferInfoListHasBeenSet;
}

