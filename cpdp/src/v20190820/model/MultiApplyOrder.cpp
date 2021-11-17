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

#include <tencentcloud/cpdp/v20190820/model/MultiApplyOrder.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

MultiApplyOrder::MultiApplyOrder() :
    m_outDistributeNoHasBeenSet(false),
    m_distributeNoHasBeenSet(false),
    m_orderNoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_inDateHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

CoreInternalOutcome MultiApplyOrder::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OutDistributeNo") && !value["OutDistributeNo"].IsNull())
    {
        if (!value["OutDistributeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiApplyOrder.OutDistributeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outDistributeNo = string(value["OutDistributeNo"].GetString());
        m_outDistributeNoHasBeenSet = true;
    }

    if (value.HasMember("DistributeNo") && !value["DistributeNo"].IsNull())
    {
        if (!value["DistributeNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiApplyOrder.DistributeNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_distributeNo = string(value["DistributeNo"].GetString());
        m_distributeNoHasBeenSet = true;
    }

    if (value.HasMember("OrderNo") && !value["OrderNo"].IsNull())
    {
        if (!value["OrderNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiApplyOrder.OrderNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderNo = string(value["OrderNo"].GetString());
        m_orderNoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiApplyOrder.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("InDate") && !value["InDate"].IsNull())
    {
        if (!value["InDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiApplyOrder.InDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inDate = string(value["InDate"].GetString());
        m_inDateHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MultiApplyOrder.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiApplyOrder.Details` is not array type"));

        const rapidjson::Value &tmpValue = value["Details"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiApplyDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_details.push_back(item);
        }
        m_detailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiApplyOrder::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_outDistributeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutDistributeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outDistributeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_distributeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DistributeNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_distributeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderNo.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_inDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inDate.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_details.begin(); itr != m_details.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MultiApplyOrder::GetOutDistributeNo() const
{
    return m_outDistributeNo;
}

void MultiApplyOrder::SetOutDistributeNo(const string& _outDistributeNo)
{
    m_outDistributeNo = _outDistributeNo;
    m_outDistributeNoHasBeenSet = true;
}

bool MultiApplyOrder::OutDistributeNoHasBeenSet() const
{
    return m_outDistributeNoHasBeenSet;
}

string MultiApplyOrder::GetDistributeNo() const
{
    return m_distributeNo;
}

void MultiApplyOrder::SetDistributeNo(const string& _distributeNo)
{
    m_distributeNo = _distributeNo;
    m_distributeNoHasBeenSet = true;
}

bool MultiApplyOrder::DistributeNoHasBeenSet() const
{
    return m_distributeNoHasBeenSet;
}

string MultiApplyOrder::GetOrderNo() const
{
    return m_orderNo;
}

void MultiApplyOrder::SetOrderNo(const string& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool MultiApplyOrder::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}

string MultiApplyOrder::GetStatus() const
{
    return m_status;
}

void MultiApplyOrder::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MultiApplyOrder::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MultiApplyOrder::GetInDate() const
{
    return m_inDate;
}

void MultiApplyOrder::SetInDate(const string& _inDate)
{
    m_inDate = _inDate;
    m_inDateHasBeenSet = true;
}

bool MultiApplyOrder::InDateHasBeenSet() const
{
    return m_inDateHasBeenSet;
}

string MultiApplyOrder::GetRemark() const
{
    return m_remark;
}

void MultiApplyOrder::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool MultiApplyOrder::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<MultiApplyDetail> MultiApplyOrder::GetDetails() const
{
    return m_details;
}

void MultiApplyOrder::SetDetails(const vector<MultiApplyDetail>& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool MultiApplyOrder::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

