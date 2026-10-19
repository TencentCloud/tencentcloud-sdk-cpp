/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cfw/v20190904/model/OverviewNDRDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OverviewNDRDetail::OverviewNDRDetail() :
    m_statusHasBeenSet(false),
    m_totalMbpsHasBeenSet(false),
    m_inMaxBpsHasBeenSet(false),
    m_outMaxBpsHasBeenSet(false),
    m_maxFlowBpsHasBeenSet(false),
    m_flowPercentHasBeenSet(false)
{
}

CoreInternalOutcome OverviewNDRDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNDRDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TotalMbps") && !value["TotalMbps"].IsNull())
    {
        if (!value["TotalMbps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNDRDetail.TotalMbps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalMbps = value["TotalMbps"].GetInt64();
        m_totalMbpsHasBeenSet = true;
    }

    if (value.HasMember("InMaxBps") && !value["InMaxBps"].IsNull())
    {
        if (!value["InMaxBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNDRDetail.InMaxBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inMaxBps = value["InMaxBps"].GetInt64();
        m_inMaxBpsHasBeenSet = true;
    }

    if (value.HasMember("OutMaxBps") && !value["OutMaxBps"].IsNull())
    {
        if (!value["OutMaxBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNDRDetail.OutMaxBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_outMaxBps = value["OutMaxBps"].GetInt64();
        m_outMaxBpsHasBeenSet = true;
    }

    if (value.HasMember("MaxFlowBps") && !value["MaxFlowBps"].IsNull())
    {
        if (!value["MaxFlowBps"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNDRDetail.MaxFlowBps` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxFlowBps = value["MaxFlowBps"].GetInt64();
        m_maxFlowBpsHasBeenSet = true;
    }

    if (value.HasMember("FlowPercent") && !value["FlowPercent"].IsNull())
    {
        if (!value["FlowPercent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewNDRDetail.FlowPercent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_flowPercent = value["FlowPercent"].GetDouble();
        m_flowPercentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewNDRDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_totalMbpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalMbps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalMbps, allocator);
    }

    if (m_inMaxBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InMaxBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inMaxBps, allocator);
    }

    if (m_outMaxBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutMaxBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outMaxBps, allocator);
    }

    if (m_maxFlowBpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxFlowBps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxFlowBps, allocator);
    }

    if (m_flowPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowPercent, allocator);
    }

}


int64_t OverviewNDRDetail::GetStatus() const
{
    return m_status;
}

void OverviewNDRDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OverviewNDRDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t OverviewNDRDetail::GetTotalMbps() const
{
    return m_totalMbps;
}

void OverviewNDRDetail::SetTotalMbps(const int64_t& _totalMbps)
{
    m_totalMbps = _totalMbps;
    m_totalMbpsHasBeenSet = true;
}

bool OverviewNDRDetail::TotalMbpsHasBeenSet() const
{
    return m_totalMbpsHasBeenSet;
}

int64_t OverviewNDRDetail::GetInMaxBps() const
{
    return m_inMaxBps;
}

void OverviewNDRDetail::SetInMaxBps(const int64_t& _inMaxBps)
{
    m_inMaxBps = _inMaxBps;
    m_inMaxBpsHasBeenSet = true;
}

bool OverviewNDRDetail::InMaxBpsHasBeenSet() const
{
    return m_inMaxBpsHasBeenSet;
}

int64_t OverviewNDRDetail::GetOutMaxBps() const
{
    return m_outMaxBps;
}

void OverviewNDRDetail::SetOutMaxBps(const int64_t& _outMaxBps)
{
    m_outMaxBps = _outMaxBps;
    m_outMaxBpsHasBeenSet = true;
}

bool OverviewNDRDetail::OutMaxBpsHasBeenSet() const
{
    return m_outMaxBpsHasBeenSet;
}

int64_t OverviewNDRDetail::GetMaxFlowBps() const
{
    return m_maxFlowBps;
}

void OverviewNDRDetail::SetMaxFlowBps(const int64_t& _maxFlowBps)
{
    m_maxFlowBps = _maxFlowBps;
    m_maxFlowBpsHasBeenSet = true;
}

bool OverviewNDRDetail::MaxFlowBpsHasBeenSet() const
{
    return m_maxFlowBpsHasBeenSet;
}

double OverviewNDRDetail::GetFlowPercent() const
{
    return m_flowPercent;
}

void OverviewNDRDetail::SetFlowPercent(const double& _flowPercent)
{
    m_flowPercent = _flowPercent;
    m_flowPercentHasBeenSet = true;
}

bool OverviewNDRDetail::FlowPercentHasBeenSet() const
{
    return m_flowPercentHasBeenSet;
}

