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

#include <tencentcloud/wav/v20210129/model/CrmStatisticsData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

CrmStatisticsData::CrmStatisticsData() :
    m_leadCntHasBeenSet(false),
    m_buildCntHasBeenSet(false),
    m_invitedCntHasBeenSet(false),
    m_orderedCntHasBeenSet(false),
    m_deliveredCntHasBeenSet(false),
    m_defeatCntHasBeenSet(false),
    m_newContactCntHasBeenSet(false),
    m_statisticalTimeHasBeenSet(false)
{
}

CoreInternalOutcome CrmStatisticsData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LeadCnt") && !value["LeadCnt"].IsNull())
    {
        if (!value["LeadCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrmStatisticsData.LeadCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leadCnt = value["LeadCnt"].GetUint64();
        m_leadCntHasBeenSet = true;
    }

    if (value.HasMember("BuildCnt") && !value["BuildCnt"].IsNull())
    {
        if (!value["BuildCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrmStatisticsData.BuildCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_buildCnt = value["BuildCnt"].GetUint64();
        m_buildCntHasBeenSet = true;
    }

    if (value.HasMember("InvitedCnt") && !value["InvitedCnt"].IsNull())
    {
        if (!value["InvitedCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrmStatisticsData.InvitedCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_invitedCnt = value["InvitedCnt"].GetUint64();
        m_invitedCntHasBeenSet = true;
    }

    if (value.HasMember("OrderedCnt") && !value["OrderedCnt"].IsNull())
    {
        if (!value["OrderedCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrmStatisticsData.OrderedCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderedCnt = value["OrderedCnt"].GetUint64();
        m_orderedCntHasBeenSet = true;
    }

    if (value.HasMember("DeliveredCnt") && !value["DeliveredCnt"].IsNull())
    {
        if (!value["DeliveredCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrmStatisticsData.DeliveredCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deliveredCnt = value["DeliveredCnt"].GetUint64();
        m_deliveredCntHasBeenSet = true;
    }

    if (value.HasMember("DefeatCnt") && !value["DefeatCnt"].IsNull())
    {
        if (!value["DefeatCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrmStatisticsData.DefeatCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_defeatCnt = value["DefeatCnt"].GetUint64();
        m_defeatCntHasBeenSet = true;
    }

    if (value.HasMember("NewContactCnt") && !value["NewContactCnt"].IsNull())
    {
        if (!value["NewContactCnt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CrmStatisticsData.NewContactCnt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_newContactCnt = value["NewContactCnt"].GetUint64();
        m_newContactCntHasBeenSet = true;
    }

    if (value.HasMember("StatisticalTime") && !value["StatisticalTime"].IsNull())
    {
        if (!value["StatisticalTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CrmStatisticsData.StatisticalTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statisticalTime = string(value["StatisticalTime"].GetString());
        m_statisticalTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CrmStatisticsData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_leadCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeadCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leadCnt, allocator);
    }

    if (m_buildCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buildCnt, allocator);
    }

    if (m_invitedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvitedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invitedCnt, allocator);
    }

    if (m_orderedCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderedCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderedCnt, allocator);
    }

    if (m_deliveredCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliveredCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliveredCnt, allocator);
    }

    if (m_defeatCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefeatCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defeatCnt, allocator);
    }

    if (m_newContactCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewContactCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_newContactCnt, allocator);
    }

    if (m_statisticalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatisticalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statisticalTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CrmStatisticsData::GetLeadCnt() const
{
    return m_leadCnt;
}

void CrmStatisticsData::SetLeadCnt(const uint64_t& _leadCnt)
{
    m_leadCnt = _leadCnt;
    m_leadCntHasBeenSet = true;
}

bool CrmStatisticsData::LeadCntHasBeenSet() const
{
    return m_leadCntHasBeenSet;
}

uint64_t CrmStatisticsData::GetBuildCnt() const
{
    return m_buildCnt;
}

void CrmStatisticsData::SetBuildCnt(const uint64_t& _buildCnt)
{
    m_buildCnt = _buildCnt;
    m_buildCntHasBeenSet = true;
}

bool CrmStatisticsData::BuildCntHasBeenSet() const
{
    return m_buildCntHasBeenSet;
}

uint64_t CrmStatisticsData::GetInvitedCnt() const
{
    return m_invitedCnt;
}

void CrmStatisticsData::SetInvitedCnt(const uint64_t& _invitedCnt)
{
    m_invitedCnt = _invitedCnt;
    m_invitedCntHasBeenSet = true;
}

bool CrmStatisticsData::InvitedCntHasBeenSet() const
{
    return m_invitedCntHasBeenSet;
}

uint64_t CrmStatisticsData::GetOrderedCnt() const
{
    return m_orderedCnt;
}

void CrmStatisticsData::SetOrderedCnt(const uint64_t& _orderedCnt)
{
    m_orderedCnt = _orderedCnt;
    m_orderedCntHasBeenSet = true;
}

bool CrmStatisticsData::OrderedCntHasBeenSet() const
{
    return m_orderedCntHasBeenSet;
}

uint64_t CrmStatisticsData::GetDeliveredCnt() const
{
    return m_deliveredCnt;
}

void CrmStatisticsData::SetDeliveredCnt(const uint64_t& _deliveredCnt)
{
    m_deliveredCnt = _deliveredCnt;
    m_deliveredCntHasBeenSet = true;
}

bool CrmStatisticsData::DeliveredCntHasBeenSet() const
{
    return m_deliveredCntHasBeenSet;
}

uint64_t CrmStatisticsData::GetDefeatCnt() const
{
    return m_defeatCnt;
}

void CrmStatisticsData::SetDefeatCnt(const uint64_t& _defeatCnt)
{
    m_defeatCnt = _defeatCnt;
    m_defeatCntHasBeenSet = true;
}

bool CrmStatisticsData::DefeatCntHasBeenSet() const
{
    return m_defeatCntHasBeenSet;
}

uint64_t CrmStatisticsData::GetNewContactCnt() const
{
    return m_newContactCnt;
}

void CrmStatisticsData::SetNewContactCnt(const uint64_t& _newContactCnt)
{
    m_newContactCnt = _newContactCnt;
    m_newContactCntHasBeenSet = true;
}

bool CrmStatisticsData::NewContactCntHasBeenSet() const
{
    return m_newContactCntHasBeenSet;
}

string CrmStatisticsData::GetStatisticalTime() const
{
    return m_statisticalTime;
}

void CrmStatisticsData::SetStatisticalTime(const string& _statisticalTime)
{
    m_statisticalTime = _statisticalTime;
    m_statisticalTimeHasBeenSet = true;
}

bool CrmStatisticsData::StatisticalTimeHasBeenSet() const
{
    return m_statisticalTimeHasBeenSet;
}

