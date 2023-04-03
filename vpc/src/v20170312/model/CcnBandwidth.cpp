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

#include <tencentcloud/vpc/v20170312/model/CcnBandwidth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

CcnBandwidth::CcnBandwidth() :
    m_ccnIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_regionFlowControlIdHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_ccnRegionBandwidthLimitHasBeenSet(false),
    m_marketIdHasBeenSet(false),
    m_userAccountIDHasBeenSet(false),
    m_isCrossBorderHasBeenSet(false),
    m_isSecurityLockHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome CcnBandwidth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidth.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidth.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidth.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("RegionFlowControlId") && !value["RegionFlowControlId"].IsNull())
    {
        if (!value["RegionFlowControlId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidth.RegionFlowControlId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionFlowControlId = string(value["RegionFlowControlId"].GetString());
        m_regionFlowControlIdHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidth.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("CcnRegionBandwidthLimit") && !value["CcnRegionBandwidthLimit"].IsNull())
    {
        if (!value["CcnRegionBandwidthLimit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidth.CcnRegionBandwidthLimit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ccnRegionBandwidthLimit.Deserialize(value["CcnRegionBandwidthLimit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ccnRegionBandwidthLimitHasBeenSet = true;
    }

    if (value.HasMember("MarketId") && !value["MarketId"].IsNull())
    {
        if (!value["MarketId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidth.MarketId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marketId = string(value["MarketId"].GetString());
        m_marketIdHasBeenSet = true;
    }

    if (value.HasMember("UserAccountID") && !value["UserAccountID"].IsNull())
    {
        if (!value["UserAccountID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidth.UserAccountID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAccountID = string(value["UserAccountID"].GetString());
        m_userAccountIDHasBeenSet = true;
    }

    if (value.HasMember("IsCrossBorder") && !value["IsCrossBorder"].IsNull())
    {
        if (!value["IsCrossBorder"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidth.IsCrossBorder` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isCrossBorder = value["IsCrossBorder"].GetBool();
        m_isCrossBorderHasBeenSet = true;
    }

    if (value.HasMember("IsSecurityLock") && !value["IsSecurityLock"].IsNull())
    {
        if (!value["IsSecurityLock"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidth.IsSecurityLock` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSecurityLock = value["IsSecurityLock"].GetBool();
        m_isSecurityLockHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidth.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidth.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnBandwidth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_regionFlowControlIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionFlowControlId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionFlowControlId.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnRegionBandwidthLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnRegionBandwidthLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ccnRegionBandwidthLimit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_marketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MarketId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_marketId.c_str(), allocator).Move(), allocator);
    }

    if (m_userAccountIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAccountID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAccountID.c_str(), allocator).Move(), allocator);
    }

    if (m_isCrossBorderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCrossBorder";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCrossBorder, allocator);
    }

    if (m_isSecurityLockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSecurityLock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSecurityLock, allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string CcnBandwidth::GetCcnId() const
{
    return m_ccnId;
}

void CcnBandwidth::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool CcnBandwidth::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string CcnBandwidth::GetCreatedTime() const
{
    return m_createdTime;
}

void CcnBandwidth::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool CcnBandwidth::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string CcnBandwidth::GetExpiredTime() const
{
    return m_expiredTime;
}

void CcnBandwidth::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool CcnBandwidth::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string CcnBandwidth::GetRegionFlowControlId() const
{
    return m_regionFlowControlId;
}

void CcnBandwidth::SetRegionFlowControlId(const string& _regionFlowControlId)
{
    m_regionFlowControlId = _regionFlowControlId;
    m_regionFlowControlIdHasBeenSet = true;
}

bool CcnBandwidth::RegionFlowControlIdHasBeenSet() const
{
    return m_regionFlowControlIdHasBeenSet;
}

string CcnBandwidth::GetRenewFlag() const
{
    return m_renewFlag;
}

void CcnBandwidth::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool CcnBandwidth::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

CcnRegionBandwidthLimitInfo CcnBandwidth::GetCcnRegionBandwidthLimit() const
{
    return m_ccnRegionBandwidthLimit;
}

void CcnBandwidth::SetCcnRegionBandwidthLimit(const CcnRegionBandwidthLimitInfo& _ccnRegionBandwidthLimit)
{
    m_ccnRegionBandwidthLimit = _ccnRegionBandwidthLimit;
    m_ccnRegionBandwidthLimitHasBeenSet = true;
}

bool CcnBandwidth::CcnRegionBandwidthLimitHasBeenSet() const
{
    return m_ccnRegionBandwidthLimitHasBeenSet;
}

string CcnBandwidth::GetMarketId() const
{
    return m_marketId;
}

void CcnBandwidth::SetMarketId(const string& _marketId)
{
    m_marketId = _marketId;
    m_marketIdHasBeenSet = true;
}

bool CcnBandwidth::MarketIdHasBeenSet() const
{
    return m_marketIdHasBeenSet;
}

string CcnBandwidth::GetUserAccountID() const
{
    return m_userAccountID;
}

void CcnBandwidth::SetUserAccountID(const string& _userAccountID)
{
    m_userAccountID = _userAccountID;
    m_userAccountIDHasBeenSet = true;
}

bool CcnBandwidth::UserAccountIDHasBeenSet() const
{
    return m_userAccountIDHasBeenSet;
}

bool CcnBandwidth::GetIsCrossBorder() const
{
    return m_isCrossBorder;
}

void CcnBandwidth::SetIsCrossBorder(const bool& _isCrossBorder)
{
    m_isCrossBorder = _isCrossBorder;
    m_isCrossBorderHasBeenSet = true;
}

bool CcnBandwidth::IsCrossBorderHasBeenSet() const
{
    return m_isCrossBorderHasBeenSet;
}

bool CcnBandwidth::GetIsSecurityLock() const
{
    return m_isSecurityLock;
}

void CcnBandwidth::SetIsSecurityLock(const bool& _isSecurityLock)
{
    m_isSecurityLock = _isSecurityLock;
    m_isSecurityLockHasBeenSet = true;
}

bool CcnBandwidth::IsSecurityLockHasBeenSet() const
{
    return m_isSecurityLockHasBeenSet;
}

string CcnBandwidth::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void CcnBandwidth::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool CcnBandwidth::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string CcnBandwidth::GetUpdateTime() const
{
    return m_updateTime;
}

void CcnBandwidth::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CcnBandwidth::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

