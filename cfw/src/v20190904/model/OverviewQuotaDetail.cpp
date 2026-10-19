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

#include <tencentcloud/cfw/v20190904/model/OverviewQuotaDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

OverviewQuotaDetail::OverviewQuotaDetail() :
    m_publicIpUsedHasBeenSet(false),
    m_publicIpTotalHasBeenSet(false),
    m_commonInstanceTotalHasBeenSet(false),
    m_commonInstanceRemainHasBeenSet(false),
    m_commonInstanceUsedHasBeenSet(false),
    m_accessControlRuleUsedHasBeenSet(false),
    m_accessControlRuleTotalHasBeenSet(false),
    m_serialRegionUsedHasBeenSet(false),
    m_natInstanceUsedHasBeenSet(false),
    m_vpcInstanceUsedHasBeenSet(false),
    m_borderRuleQuotaHasBeenSet(false),
    m_natRuleQuotaHasBeenSet(false),
    m_vpcRuleQuotaHasBeenSet(false),
    m_blockListQuotaHasBeenSet(false),
    m_blockIpCountHasBeenSet(false),
    m_blockIpUsedHasBeenSet(false),
    m_blockIpTotalHasBeenSet(false),
    m_blockListQuotaDetailHasBeenSet(false),
    m_sgRuleQuotaUsedHasBeenSet(false),
    m_sgRuleQuotaTotalHasBeenSet(false),
    m_totalExtensionUsedHasBeenSet(false),
    m_totalExtensionNumHasBeenSet(false),
    m_addressTemplateUsedHasBeenSet(false),
    m_addressTemplateTotalHasBeenSet(false),
    m_honeyPotUsedHasBeenSet(false),
    m_honeyPotTotalHasBeenSet(false)
{
}

CoreInternalOutcome OverviewQuotaDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicIpUsed") && !value["PublicIpUsed"].IsNull())
    {
        if (!value["PublicIpUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.PublicIpUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpUsed = value["PublicIpUsed"].GetInt64();
        m_publicIpUsedHasBeenSet = true;
    }

    if (value.HasMember("PublicIpTotal") && !value["PublicIpTotal"].IsNull())
    {
        if (!value["PublicIpTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.PublicIpTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publicIpTotal = value["PublicIpTotal"].GetInt64();
        m_publicIpTotalHasBeenSet = true;
    }

    if (value.HasMember("CommonInstanceTotal") && !value["CommonInstanceTotal"].IsNull())
    {
        if (!value["CommonInstanceTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.CommonInstanceTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commonInstanceTotal = value["CommonInstanceTotal"].GetInt64();
        m_commonInstanceTotalHasBeenSet = true;
    }

    if (value.HasMember("CommonInstanceRemain") && !value["CommonInstanceRemain"].IsNull())
    {
        if (!value["CommonInstanceRemain"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.CommonInstanceRemain` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commonInstanceRemain = value["CommonInstanceRemain"].GetInt64();
        m_commonInstanceRemainHasBeenSet = true;
    }

    if (value.HasMember("CommonInstanceUsed") && !value["CommonInstanceUsed"].IsNull())
    {
        if (!value["CommonInstanceUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.CommonInstanceUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_commonInstanceUsed = value["CommonInstanceUsed"].GetInt64();
        m_commonInstanceUsedHasBeenSet = true;
    }

    if (value.HasMember("AccessControlRuleUsed") && !value["AccessControlRuleUsed"].IsNull())
    {
        if (!value["AccessControlRuleUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.AccessControlRuleUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessControlRuleUsed = value["AccessControlRuleUsed"].GetInt64();
        m_accessControlRuleUsedHasBeenSet = true;
    }

    if (value.HasMember("AccessControlRuleTotal") && !value["AccessControlRuleTotal"].IsNull())
    {
        if (!value["AccessControlRuleTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.AccessControlRuleTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessControlRuleTotal = value["AccessControlRuleTotal"].GetInt64();
        m_accessControlRuleTotalHasBeenSet = true;
    }

    if (value.HasMember("SerialRegionUsed") && !value["SerialRegionUsed"].IsNull())
    {
        if (!value["SerialRegionUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.SerialRegionUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_serialRegionUsed = value["SerialRegionUsed"].GetInt64();
        m_serialRegionUsedHasBeenSet = true;
    }

    if (value.HasMember("NatInstanceUsed") && !value["NatInstanceUsed"].IsNull())
    {
        if (!value["NatInstanceUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.NatInstanceUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_natInstanceUsed = value["NatInstanceUsed"].GetInt64();
        m_natInstanceUsedHasBeenSet = true;
    }

    if (value.HasMember("VpcInstanceUsed") && !value["VpcInstanceUsed"].IsNull())
    {
        if (!value["VpcInstanceUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.VpcInstanceUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcInstanceUsed = value["VpcInstanceUsed"].GetInt64();
        m_vpcInstanceUsedHasBeenSet = true;
    }

    if (value.HasMember("BorderRuleQuota") && !value["BorderRuleQuota"].IsNull())
    {
        if (!value["BorderRuleQuota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.BorderRuleQuota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_borderRuleQuota.Deserialize(value["BorderRuleQuota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_borderRuleQuotaHasBeenSet = true;
    }

    if (value.HasMember("NatRuleQuota") && !value["NatRuleQuota"].IsNull())
    {
        if (!value["NatRuleQuota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.NatRuleQuota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_natRuleQuota.Deserialize(value["NatRuleQuota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_natRuleQuotaHasBeenSet = true;
    }

    if (value.HasMember("VpcRuleQuota") && !value["VpcRuleQuota"].IsNull())
    {
        if (!value["VpcRuleQuota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.VpcRuleQuota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vpcRuleQuota.Deserialize(value["VpcRuleQuota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vpcRuleQuotaHasBeenSet = true;
    }

    if (value.HasMember("BlockListQuota") && !value["BlockListQuota"].IsNull())
    {
        if (!value["BlockListQuota"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.BlockListQuota` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_blockListQuota.Deserialize(value["BlockListQuota"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_blockListQuotaHasBeenSet = true;
    }

    if (value.HasMember("BlockIpCount") && !value["BlockIpCount"].IsNull())
    {
        if (!value["BlockIpCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.BlockIpCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockIpCount = value["BlockIpCount"].GetInt64();
        m_blockIpCountHasBeenSet = true;
    }

    if (value.HasMember("BlockIpUsed") && !value["BlockIpUsed"].IsNull())
    {
        if (!value["BlockIpUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.BlockIpUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockIpUsed = value["BlockIpUsed"].GetInt64();
        m_blockIpUsedHasBeenSet = true;
    }

    if (value.HasMember("BlockIpTotal") && !value["BlockIpTotal"].IsNull())
    {
        if (!value["BlockIpTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.BlockIpTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockIpTotal = value["BlockIpTotal"].GetInt64();
        m_blockIpTotalHasBeenSet = true;
    }

    if (value.HasMember("BlockListQuotaDetail") && !value["BlockListQuotaDetail"].IsNull())
    {
        if (!value["BlockListQuotaDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.BlockListQuotaDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_blockListQuotaDetail.Deserialize(value["BlockListQuotaDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_blockListQuotaDetailHasBeenSet = true;
    }

    if (value.HasMember("SgRuleQuotaUsed") && !value["SgRuleQuotaUsed"].IsNull())
    {
        if (!value["SgRuleQuotaUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.SgRuleQuotaUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sgRuleQuotaUsed = value["SgRuleQuotaUsed"].GetInt64();
        m_sgRuleQuotaUsedHasBeenSet = true;
    }

    if (value.HasMember("SgRuleQuotaTotal") && !value["SgRuleQuotaTotal"].IsNull())
    {
        if (!value["SgRuleQuotaTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.SgRuleQuotaTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sgRuleQuotaTotal = value["SgRuleQuotaTotal"].GetInt64();
        m_sgRuleQuotaTotalHasBeenSet = true;
    }

    if (value.HasMember("TotalExtensionUsed") && !value["TotalExtensionUsed"].IsNull())
    {
        if (!value["TotalExtensionUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.TotalExtensionUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalExtensionUsed = value["TotalExtensionUsed"].GetInt64();
        m_totalExtensionUsedHasBeenSet = true;
    }

    if (value.HasMember("TotalExtensionNum") && !value["TotalExtensionNum"].IsNull())
    {
        if (!value["TotalExtensionNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.TotalExtensionNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalExtensionNum = value["TotalExtensionNum"].GetInt64();
        m_totalExtensionNumHasBeenSet = true;
    }

    if (value.HasMember("AddressTemplateUsed") && !value["AddressTemplateUsed"].IsNull())
    {
        if (!value["AddressTemplateUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.AddressTemplateUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addressTemplateUsed = value["AddressTemplateUsed"].GetInt64();
        m_addressTemplateUsedHasBeenSet = true;
    }

    if (value.HasMember("AddressTemplateTotal") && !value["AddressTemplateTotal"].IsNull())
    {
        if (!value["AddressTemplateTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.AddressTemplateTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addressTemplateTotal = value["AddressTemplateTotal"].GetInt64();
        m_addressTemplateTotalHasBeenSet = true;
    }

    if (value.HasMember("HoneyPotUsed") && !value["HoneyPotUsed"].IsNull())
    {
        if (!value["HoneyPotUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.HoneyPotUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_honeyPotUsed = value["HoneyPotUsed"].GetInt64();
        m_honeyPotUsedHasBeenSet = true;
    }

    if (value.HasMember("HoneyPotTotal") && !value["HoneyPotTotal"].IsNull())
    {
        if (!value["HoneyPotTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OverviewQuotaDetail.HoneyPotTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_honeyPotTotal = value["HoneyPotTotal"].GetInt64();
        m_honeyPotTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OverviewQuotaDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicIpUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicIpUsed, allocator);
    }

    if (m_publicIpTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIpTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicIpTotal, allocator);
    }

    if (m_commonInstanceTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonInstanceTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commonInstanceTotal, allocator);
    }

    if (m_commonInstanceRemainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonInstanceRemain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commonInstanceRemain, allocator);
    }

    if (m_commonInstanceUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommonInstanceUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_commonInstanceUsed, allocator);
    }

    if (m_accessControlRuleUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessControlRuleUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessControlRuleUsed, allocator);
    }

    if (m_accessControlRuleTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessControlRuleTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessControlRuleTotal, allocator);
    }

    if (m_serialRegionUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialRegionUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serialRegionUsed, allocator);
    }

    if (m_natInstanceUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatInstanceUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_natInstanceUsed, allocator);
    }

    if (m_vpcInstanceUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInstanceUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcInstanceUsed, allocator);
    }

    if (m_borderRuleQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BorderRuleQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_borderRuleQuota.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_natRuleQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatRuleQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_natRuleQuota.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vpcRuleQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcRuleQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vpcRuleQuota.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_blockListQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockListQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_blockListQuota.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_blockIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockIpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockIpCount, allocator);
    }

    if (m_blockIpUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockIpUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockIpUsed, allocator);
    }

    if (m_blockIpTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockIpTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockIpTotal, allocator);
    }

    if (m_blockListQuotaDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockListQuotaDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_blockListQuotaDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sgRuleQuotaUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgRuleQuotaUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sgRuleQuotaUsed, allocator);
    }

    if (m_sgRuleQuotaTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SgRuleQuotaTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sgRuleQuotaTotal, allocator);
    }

    if (m_totalExtensionUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalExtensionUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalExtensionUsed, allocator);
    }

    if (m_totalExtensionNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalExtensionNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalExtensionNum, allocator);
    }

    if (m_addressTemplateUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressTemplateUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addressTemplateUsed, allocator);
    }

    if (m_addressTemplateTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddressTemplateTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addressTemplateTotal, allocator);
    }

    if (m_honeyPotUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HoneyPotUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_honeyPotUsed, allocator);
    }

    if (m_honeyPotTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HoneyPotTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_honeyPotTotal, allocator);
    }

}


int64_t OverviewQuotaDetail::GetPublicIpUsed() const
{
    return m_publicIpUsed;
}

void OverviewQuotaDetail::SetPublicIpUsed(const int64_t& _publicIpUsed)
{
    m_publicIpUsed = _publicIpUsed;
    m_publicIpUsedHasBeenSet = true;
}

bool OverviewQuotaDetail::PublicIpUsedHasBeenSet() const
{
    return m_publicIpUsedHasBeenSet;
}

int64_t OverviewQuotaDetail::GetPublicIpTotal() const
{
    return m_publicIpTotal;
}

void OverviewQuotaDetail::SetPublicIpTotal(const int64_t& _publicIpTotal)
{
    m_publicIpTotal = _publicIpTotal;
    m_publicIpTotalHasBeenSet = true;
}

bool OverviewQuotaDetail::PublicIpTotalHasBeenSet() const
{
    return m_publicIpTotalHasBeenSet;
}

int64_t OverviewQuotaDetail::GetCommonInstanceTotal() const
{
    return m_commonInstanceTotal;
}

void OverviewQuotaDetail::SetCommonInstanceTotal(const int64_t& _commonInstanceTotal)
{
    m_commonInstanceTotal = _commonInstanceTotal;
    m_commonInstanceTotalHasBeenSet = true;
}

bool OverviewQuotaDetail::CommonInstanceTotalHasBeenSet() const
{
    return m_commonInstanceTotalHasBeenSet;
}

int64_t OverviewQuotaDetail::GetCommonInstanceRemain() const
{
    return m_commonInstanceRemain;
}

void OverviewQuotaDetail::SetCommonInstanceRemain(const int64_t& _commonInstanceRemain)
{
    m_commonInstanceRemain = _commonInstanceRemain;
    m_commonInstanceRemainHasBeenSet = true;
}

bool OverviewQuotaDetail::CommonInstanceRemainHasBeenSet() const
{
    return m_commonInstanceRemainHasBeenSet;
}

int64_t OverviewQuotaDetail::GetCommonInstanceUsed() const
{
    return m_commonInstanceUsed;
}

void OverviewQuotaDetail::SetCommonInstanceUsed(const int64_t& _commonInstanceUsed)
{
    m_commonInstanceUsed = _commonInstanceUsed;
    m_commonInstanceUsedHasBeenSet = true;
}

bool OverviewQuotaDetail::CommonInstanceUsedHasBeenSet() const
{
    return m_commonInstanceUsedHasBeenSet;
}

int64_t OverviewQuotaDetail::GetAccessControlRuleUsed() const
{
    return m_accessControlRuleUsed;
}

void OverviewQuotaDetail::SetAccessControlRuleUsed(const int64_t& _accessControlRuleUsed)
{
    m_accessControlRuleUsed = _accessControlRuleUsed;
    m_accessControlRuleUsedHasBeenSet = true;
}

bool OverviewQuotaDetail::AccessControlRuleUsedHasBeenSet() const
{
    return m_accessControlRuleUsedHasBeenSet;
}

int64_t OverviewQuotaDetail::GetAccessControlRuleTotal() const
{
    return m_accessControlRuleTotal;
}

void OverviewQuotaDetail::SetAccessControlRuleTotal(const int64_t& _accessControlRuleTotal)
{
    m_accessControlRuleTotal = _accessControlRuleTotal;
    m_accessControlRuleTotalHasBeenSet = true;
}

bool OverviewQuotaDetail::AccessControlRuleTotalHasBeenSet() const
{
    return m_accessControlRuleTotalHasBeenSet;
}

int64_t OverviewQuotaDetail::GetSerialRegionUsed() const
{
    return m_serialRegionUsed;
}

void OverviewQuotaDetail::SetSerialRegionUsed(const int64_t& _serialRegionUsed)
{
    m_serialRegionUsed = _serialRegionUsed;
    m_serialRegionUsedHasBeenSet = true;
}

bool OverviewQuotaDetail::SerialRegionUsedHasBeenSet() const
{
    return m_serialRegionUsedHasBeenSet;
}

int64_t OverviewQuotaDetail::GetNatInstanceUsed() const
{
    return m_natInstanceUsed;
}

void OverviewQuotaDetail::SetNatInstanceUsed(const int64_t& _natInstanceUsed)
{
    m_natInstanceUsed = _natInstanceUsed;
    m_natInstanceUsedHasBeenSet = true;
}

bool OverviewQuotaDetail::NatInstanceUsedHasBeenSet() const
{
    return m_natInstanceUsedHasBeenSet;
}

int64_t OverviewQuotaDetail::GetVpcInstanceUsed() const
{
    return m_vpcInstanceUsed;
}

void OverviewQuotaDetail::SetVpcInstanceUsed(const int64_t& _vpcInstanceUsed)
{
    m_vpcInstanceUsed = _vpcInstanceUsed;
    m_vpcInstanceUsedHasBeenSet = true;
}

bool OverviewQuotaDetail::VpcInstanceUsedHasBeenSet() const
{
    return m_vpcInstanceUsedHasBeenSet;
}

OverviewCommonRuleQuotaDetail OverviewQuotaDetail::GetBorderRuleQuota() const
{
    return m_borderRuleQuota;
}

void OverviewQuotaDetail::SetBorderRuleQuota(const OverviewCommonRuleQuotaDetail& _borderRuleQuota)
{
    m_borderRuleQuota = _borderRuleQuota;
    m_borderRuleQuotaHasBeenSet = true;
}

bool OverviewQuotaDetail::BorderRuleQuotaHasBeenSet() const
{
    return m_borderRuleQuotaHasBeenSet;
}

OverviewCommonRuleQuotaDetail OverviewQuotaDetail::GetNatRuleQuota() const
{
    return m_natRuleQuota;
}

void OverviewQuotaDetail::SetNatRuleQuota(const OverviewCommonRuleQuotaDetail& _natRuleQuota)
{
    m_natRuleQuota = _natRuleQuota;
    m_natRuleQuotaHasBeenSet = true;
}

bool OverviewQuotaDetail::NatRuleQuotaHasBeenSet() const
{
    return m_natRuleQuotaHasBeenSet;
}

OverviewVpcRuleQuotaDetail OverviewQuotaDetail::GetVpcRuleQuota() const
{
    return m_vpcRuleQuota;
}

void OverviewQuotaDetail::SetVpcRuleQuota(const OverviewVpcRuleQuotaDetail& _vpcRuleQuota)
{
    m_vpcRuleQuota = _vpcRuleQuota;
    m_vpcRuleQuotaHasBeenSet = true;
}

bool OverviewQuotaDetail::VpcRuleQuotaHasBeenSet() const
{
    return m_vpcRuleQuotaHasBeenSet;
}

OverviewBlockListQuota OverviewQuotaDetail::GetBlockListQuota() const
{
    return m_blockListQuota;
}

void OverviewQuotaDetail::SetBlockListQuota(const OverviewBlockListQuota& _blockListQuota)
{
    m_blockListQuota = _blockListQuota;
    m_blockListQuotaHasBeenSet = true;
}

bool OverviewQuotaDetail::BlockListQuotaHasBeenSet() const
{
    return m_blockListQuotaHasBeenSet;
}

int64_t OverviewQuotaDetail::GetBlockIpCount() const
{
    return m_blockIpCount;
}

void OverviewQuotaDetail::SetBlockIpCount(const int64_t& _blockIpCount)
{
    m_blockIpCount = _blockIpCount;
    m_blockIpCountHasBeenSet = true;
}

bool OverviewQuotaDetail::BlockIpCountHasBeenSet() const
{
    return m_blockIpCountHasBeenSet;
}

int64_t OverviewQuotaDetail::GetBlockIpUsed() const
{
    return m_blockIpUsed;
}

void OverviewQuotaDetail::SetBlockIpUsed(const int64_t& _blockIpUsed)
{
    m_blockIpUsed = _blockIpUsed;
    m_blockIpUsedHasBeenSet = true;
}

bool OverviewQuotaDetail::BlockIpUsedHasBeenSet() const
{
    return m_blockIpUsedHasBeenSet;
}

int64_t OverviewQuotaDetail::GetBlockIpTotal() const
{
    return m_blockIpTotal;
}

void OverviewQuotaDetail::SetBlockIpTotal(const int64_t& _blockIpTotal)
{
    m_blockIpTotal = _blockIpTotal;
    m_blockIpTotalHasBeenSet = true;
}

bool OverviewQuotaDetail::BlockIpTotalHasBeenSet() const
{
    return m_blockIpTotalHasBeenSet;
}

OverviewBlockListQuotaDetail OverviewQuotaDetail::GetBlockListQuotaDetail() const
{
    return m_blockListQuotaDetail;
}

void OverviewQuotaDetail::SetBlockListQuotaDetail(const OverviewBlockListQuotaDetail& _blockListQuotaDetail)
{
    m_blockListQuotaDetail = _blockListQuotaDetail;
    m_blockListQuotaDetailHasBeenSet = true;
}

bool OverviewQuotaDetail::BlockListQuotaDetailHasBeenSet() const
{
    return m_blockListQuotaDetailHasBeenSet;
}

int64_t OverviewQuotaDetail::GetSgRuleQuotaUsed() const
{
    return m_sgRuleQuotaUsed;
}

void OverviewQuotaDetail::SetSgRuleQuotaUsed(const int64_t& _sgRuleQuotaUsed)
{
    m_sgRuleQuotaUsed = _sgRuleQuotaUsed;
    m_sgRuleQuotaUsedHasBeenSet = true;
}

bool OverviewQuotaDetail::SgRuleQuotaUsedHasBeenSet() const
{
    return m_sgRuleQuotaUsedHasBeenSet;
}

int64_t OverviewQuotaDetail::GetSgRuleQuotaTotal() const
{
    return m_sgRuleQuotaTotal;
}

void OverviewQuotaDetail::SetSgRuleQuotaTotal(const int64_t& _sgRuleQuotaTotal)
{
    m_sgRuleQuotaTotal = _sgRuleQuotaTotal;
    m_sgRuleQuotaTotalHasBeenSet = true;
}

bool OverviewQuotaDetail::SgRuleQuotaTotalHasBeenSet() const
{
    return m_sgRuleQuotaTotalHasBeenSet;
}

int64_t OverviewQuotaDetail::GetTotalExtensionUsed() const
{
    return m_totalExtensionUsed;
}

void OverviewQuotaDetail::SetTotalExtensionUsed(const int64_t& _totalExtensionUsed)
{
    m_totalExtensionUsed = _totalExtensionUsed;
    m_totalExtensionUsedHasBeenSet = true;
}

bool OverviewQuotaDetail::TotalExtensionUsedHasBeenSet() const
{
    return m_totalExtensionUsedHasBeenSet;
}

int64_t OverviewQuotaDetail::GetTotalExtensionNum() const
{
    return m_totalExtensionNum;
}

void OverviewQuotaDetail::SetTotalExtensionNum(const int64_t& _totalExtensionNum)
{
    m_totalExtensionNum = _totalExtensionNum;
    m_totalExtensionNumHasBeenSet = true;
}

bool OverviewQuotaDetail::TotalExtensionNumHasBeenSet() const
{
    return m_totalExtensionNumHasBeenSet;
}

int64_t OverviewQuotaDetail::GetAddressTemplateUsed() const
{
    return m_addressTemplateUsed;
}

void OverviewQuotaDetail::SetAddressTemplateUsed(const int64_t& _addressTemplateUsed)
{
    m_addressTemplateUsed = _addressTemplateUsed;
    m_addressTemplateUsedHasBeenSet = true;
}

bool OverviewQuotaDetail::AddressTemplateUsedHasBeenSet() const
{
    return m_addressTemplateUsedHasBeenSet;
}

int64_t OverviewQuotaDetail::GetAddressTemplateTotal() const
{
    return m_addressTemplateTotal;
}

void OverviewQuotaDetail::SetAddressTemplateTotal(const int64_t& _addressTemplateTotal)
{
    m_addressTemplateTotal = _addressTemplateTotal;
    m_addressTemplateTotalHasBeenSet = true;
}

bool OverviewQuotaDetail::AddressTemplateTotalHasBeenSet() const
{
    return m_addressTemplateTotalHasBeenSet;
}

int64_t OverviewQuotaDetail::GetHoneyPotUsed() const
{
    return m_honeyPotUsed;
}

void OverviewQuotaDetail::SetHoneyPotUsed(const int64_t& _honeyPotUsed)
{
    m_honeyPotUsed = _honeyPotUsed;
    m_honeyPotUsedHasBeenSet = true;
}

bool OverviewQuotaDetail::HoneyPotUsedHasBeenSet() const
{
    return m_honeyPotUsedHasBeenSet;
}

int64_t OverviewQuotaDetail::GetHoneyPotTotal() const
{
    return m_honeyPotTotal;
}

void OverviewQuotaDetail::SetHoneyPotTotal(const int64_t& _honeyPotTotal)
{
    m_honeyPotTotal = _honeyPotTotal;
    m_honeyPotTotalHasBeenSet = true;
}

bool OverviewQuotaDetail::HoneyPotTotalHasBeenSet() const
{
    return m_honeyPotTotalHasBeenSet;
}

