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

#include <tencentcloud/ess/v20201111/model/BillUsageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

BillUsageDetail::BillUsageDetail() :
    m_flowIdHasBeenSet(false),
    m_operatorNameHasBeenSet(false),
    m_createOrganizationNameHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_quotaTypeHasBeenSet(false),
    m_useCountHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_costTypeHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome BillUsageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillUsageDetail.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("OperatorName") && !value["OperatorName"].IsNull())
    {
        if (!value["OperatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillUsageDetail.OperatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorName = string(value["OperatorName"].GetString());
        m_operatorNameHasBeenSet = true;
    }

    if (value.HasMember("CreateOrganizationName") && !value["CreateOrganizationName"].IsNull())
    {
        if (!value["CreateOrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillUsageDetail.CreateOrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createOrganizationName = string(value["CreateOrganizationName"].GetString());
        m_createOrganizationNameHasBeenSet = true;
    }

    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillUsageDetail.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillUsageDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("QuotaType") && !value["QuotaType"].IsNull())
    {
        if (!value["QuotaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillUsageDetail.QuotaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaType = string(value["QuotaType"].GetString());
        m_quotaTypeHasBeenSet = true;
    }

    if (value.HasMember("UseCount") && !value["UseCount"].IsNull())
    {
        if (!value["UseCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillUsageDetail.UseCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useCount = value["UseCount"].GetInt64();
        m_useCountHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillUsageDetail.CostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetInt64();
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("QuotaName") && !value["QuotaName"].IsNull())
    {
        if (!value["QuotaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillUsageDetail.QuotaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaName = string(value["QuotaName"].GetString());
        m_quotaNameHasBeenSet = true;
    }

    if (value.HasMember("CostType") && !value["CostType"].IsNull())
    {
        if (!value["CostType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BillUsageDetail.CostType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costType = value["CostType"].GetInt64();
        m_costTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BillUsageDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BillUsageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_createOrganizationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateOrganizationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createOrganizationName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_quotaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaType.c_str(), allocator).Move(), allocator);
    }

    if (m_useCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useCount, allocator);
    }

    if (m_costTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costTime, allocator);
    }

    if (m_quotaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaName.c_str(), allocator).Move(), allocator);
    }

    if (m_costTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costType, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string BillUsageDetail::GetFlowId() const
{
    return m_flowId;
}

void BillUsageDetail::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool BillUsageDetail::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string BillUsageDetail::GetOperatorName() const
{
    return m_operatorName;
}

void BillUsageDetail::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool BillUsageDetail::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

string BillUsageDetail::GetCreateOrganizationName() const
{
    return m_createOrganizationName;
}

void BillUsageDetail::SetCreateOrganizationName(const string& _createOrganizationName)
{
    m_createOrganizationName = _createOrganizationName;
    m_createOrganizationNameHasBeenSet = true;
}

bool BillUsageDetail::CreateOrganizationNameHasBeenSet() const
{
    return m_createOrganizationNameHasBeenSet;
}

string BillUsageDetail::GetFlowName() const
{
    return m_flowName;
}

void BillUsageDetail::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool BillUsageDetail::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

int64_t BillUsageDetail::GetStatus() const
{
    return m_status;
}

void BillUsageDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BillUsageDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BillUsageDetail::GetQuotaType() const
{
    return m_quotaType;
}

void BillUsageDetail::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool BillUsageDetail::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

int64_t BillUsageDetail::GetUseCount() const
{
    return m_useCount;
}

void BillUsageDetail::SetUseCount(const int64_t& _useCount)
{
    m_useCount = _useCount;
    m_useCountHasBeenSet = true;
}

bool BillUsageDetail::UseCountHasBeenSet() const
{
    return m_useCountHasBeenSet;
}

int64_t BillUsageDetail::GetCostTime() const
{
    return m_costTime;
}

void BillUsageDetail::SetCostTime(const int64_t& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool BillUsageDetail::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

string BillUsageDetail::GetQuotaName() const
{
    return m_quotaName;
}

void BillUsageDetail::SetQuotaName(const string& _quotaName)
{
    m_quotaName = _quotaName;
    m_quotaNameHasBeenSet = true;
}

bool BillUsageDetail::QuotaNameHasBeenSet() const
{
    return m_quotaNameHasBeenSet;
}

int64_t BillUsageDetail::GetCostType() const
{
    return m_costType;
}

void BillUsageDetail::SetCostType(const int64_t& _costType)
{
    m_costType = _costType;
    m_costTypeHasBeenSet = true;
}

bool BillUsageDetail::CostTypeHasBeenSet() const
{
    return m_costTypeHasBeenSet;
}

string BillUsageDetail::GetRemark() const
{
    return m_remark;
}

void BillUsageDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool BillUsageDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

