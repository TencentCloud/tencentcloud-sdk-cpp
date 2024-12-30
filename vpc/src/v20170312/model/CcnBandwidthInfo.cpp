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
using namespace std;

CcnBandwidthInfo::CcnBandwidthInfo() :
    m_ccnIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_regionFlowControlIdHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_ccnRegionBandwidthLimitHasBeenSet(false),
    m_marketIdHasBeenSet(false),
    m_tagSetHasBeenSet(false),
    m_defaultQosBandwidthFlagHasBeenSet(false),
    m_qosLevelHasBeenSet(false)
{
}

CoreInternalOutcome CcnBandwidthInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidthInfo.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidthInfo.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidthInfo.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("RegionFlowControlId") && !value["RegionFlowControlId"].IsNull())
    {
        if (!value["RegionFlowControlId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidthInfo.RegionFlowControlId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionFlowControlId = string(value["RegionFlowControlId"].GetString());
        m_regionFlowControlIdHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidthInfo.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("CcnRegionBandwidthLimit") && !value["CcnRegionBandwidthLimit"].IsNull())
    {
        if (!value["CcnRegionBandwidthLimit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidthInfo.CcnRegionBandwidthLimit` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `CcnBandwidthInfo.MarketId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_marketId = string(value["MarketId"].GetString());
        m_marketIdHasBeenSet = true;
    }

    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CcnBandwidthInfo.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("DefaultQosBandwidthFlag") && !value["DefaultQosBandwidthFlag"].IsNull())
    {
        if (!value["DefaultQosBandwidthFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidthInfo.DefaultQosBandwidthFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultQosBandwidthFlag = value["DefaultQosBandwidthFlag"].GetBool();
        m_defaultQosBandwidthFlagHasBeenSet = true;
    }

    if (value.HasMember("QosLevel") && !value["QosLevel"].IsNull())
    {
        if (!value["QosLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnBandwidthInfo.QosLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qosLevel = string(value["QosLevel"].GetString());
        m_qosLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnBandwidthInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_defaultQosBandwidthFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultQosBandwidthFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultQosBandwidthFlag, allocator);
    }

    if (m_qosLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QosLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qosLevel.c_str(), allocator).Move(), allocator);
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

string CcnBandwidthInfo::GetMarketId() const
{
    return m_marketId;
}

void CcnBandwidthInfo::SetMarketId(const string& _marketId)
{
    m_marketId = _marketId;
    m_marketIdHasBeenSet = true;
}

bool CcnBandwidthInfo::MarketIdHasBeenSet() const
{
    return m_marketIdHasBeenSet;
}

vector<Tag> CcnBandwidthInfo::GetTagSet() const
{
    return m_tagSet;
}

void CcnBandwidthInfo::SetTagSet(const vector<Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool CcnBandwidthInfo::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

bool CcnBandwidthInfo::GetDefaultQosBandwidthFlag() const
{
    return m_defaultQosBandwidthFlag;
}

void CcnBandwidthInfo::SetDefaultQosBandwidthFlag(const bool& _defaultQosBandwidthFlag)
{
    m_defaultQosBandwidthFlag = _defaultQosBandwidthFlag;
    m_defaultQosBandwidthFlagHasBeenSet = true;
}

bool CcnBandwidthInfo::DefaultQosBandwidthFlagHasBeenSet() const
{
    return m_defaultQosBandwidthFlagHasBeenSet;
}

string CcnBandwidthInfo::GetQosLevel() const
{
    return m_qosLevel;
}

void CcnBandwidthInfo::SetQosLevel(const string& _qosLevel)
{
    m_qosLevel = _qosLevel;
    m_qosLevelHasBeenSet = true;
}

bool CcnBandwidthInfo::QosLevelHasBeenSet() const
{
    return m_qosLevelHasBeenSet;
}

