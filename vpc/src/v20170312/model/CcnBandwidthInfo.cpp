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

#include <tencentcloud/vpc/v20170312/model/CcnBandwidthInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CcnBandwidthInfo::CcnBandwidthInfo() :
    m_ccnIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_regionFlowControlIdHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_ccnRegionBandwidthLimitHasBeenSet(false)
{
}

CoreInternalOutcome CcnBandwidthInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnBandwidthInfo.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnBandwidthInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnBandwidthInfo.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("RegionFlowControlId") && !value["RegionFlowControlId"].IsNull())
    {
        if (!value["RegionFlowControlId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnBandwidthInfo.RegionFlowControlId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionFlowControlId = string(value["RegionFlowControlId"].GetString());
        m_regionFlowControlIdHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnBandwidthInfo.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("CcnRegionBandwidthLimit") && !value["CcnRegionBandwidthLimit"].IsNull())
    {
        if (!value["CcnRegionBandwidthLimit"].IsObject())
        {
            return CoreInternalOutcome(Error("response `CcnBandwidthInfo.CcnRegionBandwidthLimit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ccnRegionBandwidthLimit.Deserialize(value["CcnRegionBandwidthLimit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ccnRegionBandwidthLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnBandwidthInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_ccnIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionFlowControlIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionFlowControlId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionFlowControlId.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnRegionBandwidthLimitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CcnRegionBandwidthLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_ccnRegionBandwidthLimit.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CcnBandwidthInfo::GetCcnId() const
{
    return m_ccnId;
}

void CcnBandwidthInfo::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool CcnBandwidthInfo::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string CcnBandwidthInfo::GetCreatedTime() const
{
    return m_createdTime;
}

void CcnBandwidthInfo::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool CcnBandwidthInfo::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string CcnBandwidthInfo::GetExpiredTime() const
{
    return m_expiredTime;
}

void CcnBandwidthInfo::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool CcnBandwidthInfo::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string CcnBandwidthInfo::GetRegionFlowControlId() const
{
    return m_regionFlowControlId;
}

void CcnBandwidthInfo::SetRegionFlowControlId(const string& _regionFlowControlId)
{
    m_regionFlowControlId = _regionFlowControlId;
    m_regionFlowControlIdHasBeenSet = true;
}

bool CcnBandwidthInfo::RegionFlowControlIdHasBeenSet() const
{
    return m_regionFlowControlIdHasBeenSet;
}

string CcnBandwidthInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void CcnBandwidthInfo::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CcnBandwidthInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

CcnRegionBandwidthLimit CcnBandwidthInfo::GetCcnRegionBandwidthLimit() const
{
    return m_ccnRegionBandwidthLimit;
}

void CcnBandwidthInfo::SetCcnRegionBandwidthLimit(const CcnRegionBandwidthLimit& _ccnRegionBandwidthLimit)
{
    m_ccnRegionBandwidthLimit = _ccnRegionBandwidthLimit;
    m_ccnRegionBandwidthLimitHasBeenSet = true;
}

bool CcnBandwidthInfo::CcnRegionBandwidthLimitHasBeenSet() const
{
    return m_ccnRegionBandwidthLimitHasBeenSet;
}

