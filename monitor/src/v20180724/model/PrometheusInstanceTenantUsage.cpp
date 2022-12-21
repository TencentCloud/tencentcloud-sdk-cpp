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

#include <tencentcloud/monitor/v20180724/model/PrometheusInstanceTenantUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusInstanceTenantUsage::PrometheusInstanceTenantUsage() :
    m_instanceIdHasBeenSet(false),
    m_calcDateHasBeenSet(false),
    m_totalHasBeenSet(false),
    m_basicHasBeenSet(false),
    m_feeHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusInstanceTenantUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceTenantUsage.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CalcDate") && !value["CalcDate"].IsNull())
    {
        if (!value["CalcDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceTenantUsage.CalcDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calcDate = string(value["CalcDate"].GetString());
        m_calcDateHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceTenantUsage.Total` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetDouble();
        m_totalHasBeenSet = true;
    }

    if (value.HasMember("Basic") && !value["Basic"].IsNull())
    {
        if (!value["Basic"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceTenantUsage.Basic` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_basic = value["Basic"].GetDouble();
        m_basicHasBeenSet = true;
    }

    if (value.HasMember("Fee") && !value["Fee"].IsNull())
    {
        if (!value["Fee"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `PrometheusInstanceTenantUsage.Fee` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_fee = value["Fee"].GetDouble();
        m_feeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusInstanceTenantUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_calcDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calcDate.c_str(), allocator).Move(), allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

    if (m_basicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Basic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_basic, allocator);
    }

    if (m_feeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fee, allocator);
    }

}


string PrometheusInstanceTenantUsage::GetInstanceId() const
{
    return m_instanceId;
}

void PrometheusInstanceTenantUsage::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool PrometheusInstanceTenantUsage::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string PrometheusInstanceTenantUsage::GetCalcDate() const
{
    return m_calcDate;
}

void PrometheusInstanceTenantUsage::SetCalcDate(const string& _calcDate)
{
    m_calcDate = _calcDate;
    m_calcDateHasBeenSet = true;
}

bool PrometheusInstanceTenantUsage::CalcDateHasBeenSet() const
{
    return m_calcDateHasBeenSet;
}

double PrometheusInstanceTenantUsage::GetTotal() const
{
    return m_total;
}

void PrometheusInstanceTenantUsage::SetTotal(const double& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool PrometheusInstanceTenantUsage::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

double PrometheusInstanceTenantUsage::GetBasic() const
{
    return m_basic;
}

void PrometheusInstanceTenantUsage::SetBasic(const double& _basic)
{
    m_basic = _basic;
    m_basicHasBeenSet = true;
}

bool PrometheusInstanceTenantUsage::BasicHasBeenSet() const
{
    return m_basicHasBeenSet;
}

double PrometheusInstanceTenantUsage::GetFee() const
{
    return m_fee;
}

void PrometheusInstanceTenantUsage::SetFee(const double& _fee)
{
    m_fee = _fee;
    m_feeHasBeenSet = true;
}

bool PrometheusInstanceTenantUsage::FeeHasBeenSet() const
{
    return m_feeHasBeenSet;
}

