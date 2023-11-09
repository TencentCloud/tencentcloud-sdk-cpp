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

#include <tencentcloud/essbasic/v20210526/model/ChannelBillUsageDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelBillUsageDetail::ChannelBillUsageDetail() :
    m_flowIdHasBeenSet(false),
    m_operatorNameHasBeenSet(false),
    m_createOrganizationNameHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowStatusHasBeenSet(false),
    m_quotaTypeHasBeenSet(false),
    m_useCountHasBeenSet(false),
    m_costTimeHasBeenSet(false),
    m_quotaNameHasBeenSet(false),
    m_costTypeHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome ChannelBillUsageDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelBillUsageDetail.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("OperatorName") && !value["OperatorName"].IsNull())
    {
        if (!value["OperatorName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelBillUsageDetail.OperatorName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorName = string(value["OperatorName"].GetString());
        m_operatorNameHasBeenSet = true;
    }

    if (value.HasMember("CreateOrganizationName") && !value["CreateOrganizationName"].IsNull())
    {
        if (!value["CreateOrganizationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelBillUsageDetail.CreateOrganizationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createOrganizationName = string(value["CreateOrganizationName"].GetString());
        m_createOrganizationNameHasBeenSet = true;
    }

    if (value.HasMember("FlowName") && !value["FlowName"].IsNull())
    {
        if (!value["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelBillUsageDetail.FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(value["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (value.HasMember("FlowStatus") && !value["FlowStatus"].IsNull())
    {
        if (!value["FlowStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelBillUsageDetail.FlowStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowStatus = string(value["FlowStatus"].GetString());
        m_flowStatusHasBeenSet = true;
    }

    if (value.HasMember("QuotaType") && !value["QuotaType"].IsNull())
    {
        if (!value["QuotaType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelBillUsageDetail.QuotaType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaType = string(value["QuotaType"].GetString());
        m_quotaTypeHasBeenSet = true;
    }

    if (value.HasMember("UseCount") && !value["UseCount"].IsNull())
    {
        if (!value["UseCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelBillUsageDetail.UseCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useCount = value["UseCount"].GetInt64();
        m_useCountHasBeenSet = true;
    }

    if (value.HasMember("CostTime") && !value["CostTime"].IsNull())
    {
        if (!value["CostTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelBillUsageDetail.CostTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costTime = value["CostTime"].GetInt64();
        m_costTimeHasBeenSet = true;
    }

    if (value.HasMember("QuotaName") && !value["QuotaName"].IsNull())
    {
        if (!value["QuotaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelBillUsageDetail.QuotaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaName = string(value["QuotaName"].GetString());
        m_quotaNameHasBeenSet = true;
    }

    if (value.HasMember("CostType") && !value["CostType"].IsNull())
    {
        if (!value["CostType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelBillUsageDetail.CostType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costType = value["CostType"].GetInt64();
        m_costTypeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelBillUsageDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChannelBillUsageDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_flowStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowStatus.c_str(), allocator).Move(), allocator);
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


string ChannelBillUsageDetail::GetFlowId() const
{
    return m_flowId;
}

void ChannelBillUsageDetail::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool ChannelBillUsageDetail::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string ChannelBillUsageDetail::GetOperatorName() const
{
    return m_operatorName;
}

void ChannelBillUsageDetail::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool ChannelBillUsageDetail::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

string ChannelBillUsageDetail::GetCreateOrganizationName() const
{
    return m_createOrganizationName;
}

void ChannelBillUsageDetail::SetCreateOrganizationName(const string& _createOrganizationName)
{
    m_createOrganizationName = _createOrganizationName;
    m_createOrganizationNameHasBeenSet = true;
}

bool ChannelBillUsageDetail::CreateOrganizationNameHasBeenSet() const
{
    return m_createOrganizationNameHasBeenSet;
}

string ChannelBillUsageDetail::GetFlowName() const
{
    return m_flowName;
}

void ChannelBillUsageDetail::SetFlowName(const string& _flowName)
{
    m_flowName = _flowName;
    m_flowNameHasBeenSet = true;
}

bool ChannelBillUsageDetail::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

string ChannelBillUsageDetail::GetFlowStatus() const
{
    return m_flowStatus;
}

void ChannelBillUsageDetail::SetFlowStatus(const string& _flowStatus)
{
    m_flowStatus = _flowStatus;
    m_flowStatusHasBeenSet = true;
}

bool ChannelBillUsageDetail::FlowStatusHasBeenSet() const
{
    return m_flowStatusHasBeenSet;
}

string ChannelBillUsageDetail::GetQuotaType() const
{
    return m_quotaType;
}

void ChannelBillUsageDetail::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool ChannelBillUsageDetail::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

int64_t ChannelBillUsageDetail::GetUseCount() const
{
    return m_useCount;
}

void ChannelBillUsageDetail::SetUseCount(const int64_t& _useCount)
{
    m_useCount = _useCount;
    m_useCountHasBeenSet = true;
}

bool ChannelBillUsageDetail::UseCountHasBeenSet() const
{
    return m_useCountHasBeenSet;
}

int64_t ChannelBillUsageDetail::GetCostTime() const
{
    return m_costTime;
}

void ChannelBillUsageDetail::SetCostTime(const int64_t& _costTime)
{
    m_costTime = _costTime;
    m_costTimeHasBeenSet = true;
}

bool ChannelBillUsageDetail::CostTimeHasBeenSet() const
{
    return m_costTimeHasBeenSet;
}

string ChannelBillUsageDetail::GetQuotaName() const
{
    return m_quotaName;
}

void ChannelBillUsageDetail::SetQuotaName(const string& _quotaName)
{
    m_quotaName = _quotaName;
    m_quotaNameHasBeenSet = true;
}

bool ChannelBillUsageDetail::QuotaNameHasBeenSet() const
{
    return m_quotaNameHasBeenSet;
}

int64_t ChannelBillUsageDetail::GetCostType() const
{
    return m_costType;
}

void ChannelBillUsageDetail::SetCostType(const int64_t& _costType)
{
    m_costType = _costType;
    m_costTypeHasBeenSet = true;
}

bool ChannelBillUsageDetail::CostTypeHasBeenSet() const
{
    return m_costTypeHasBeenSet;
}

string ChannelBillUsageDetail::GetRemark() const
{
    return m_remark;
}

void ChannelBillUsageDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ChannelBillUsageDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

