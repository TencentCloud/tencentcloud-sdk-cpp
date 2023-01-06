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

#include <tencentcloud/antiddos/v20200309/model/BGPIPInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

BGPIPInstance::BGPIPInstance() :
    m_instanceDetailHasBeenSet(false),
    m_specificationLimitHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_packInfoHasBeenSet(false),
    m_staticPackRelationHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_tgwHasBeenSet(false),
    m_eipAddressStatusHasBeenSet(false),
    m_eipFlagHasBeenSet(false),
    m_eipAddressPackRelationHasBeenSet(false),
    m_eipAddressInfoHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_damDDoSStatusHasBeenSet(false),
    m_v6FlagHasBeenSet(false),
    m_bGPIPChannelFlagHasBeenSet(false),
    m_tagInfoListHasBeenSet(false),
    m_anycastOutPackRelationHasBeenSet(false),
    m_instanceVersionHasBeenSet(false),
    m_convoyIdHasBeenSet(false),
    m_elasticBandwidthHasBeenSet(false),
    m_eOFlagHasBeenSet(false)
{
}

CoreInternalOutcome BGPIPInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceDetail") && !value["InstanceDetail"].IsNull())
    {
        if (!value["InstanceDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.InstanceDetail` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceDetail.Deserialize(value["InstanceDetail"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceDetailHasBeenSet = true;
    }

    if (value.HasMember("SpecificationLimit") && !value["SpecificationLimit"].IsNull())
    {
        if (!value["SpecificationLimit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.SpecificationLimit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_specificationLimit.Deserialize(value["SpecificationLimit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_specificationLimitHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.Usage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_usage.Deserialize(value["Usage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_usageHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.Region` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_region.Deserialize(value["Region"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PackInfo") && !value["PackInfo"].IsNull())
    {
        if (!value["PackInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.PackInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_packInfo.Deserialize(value["PackInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_packInfoHasBeenSet = true;
    }

    if (value.HasMember("StaticPackRelation") && !value["StaticPackRelation"].IsNull())
    {
        if (!value["StaticPackRelation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.StaticPackRelation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_staticPackRelation.Deserialize(value["StaticPackRelation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_staticPackRelationHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.ZoneId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetUint64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Tgw") && !value["Tgw"].IsNull())
    {
        if (!value["Tgw"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.Tgw` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tgw = value["Tgw"].GetUint64();
        m_tgwHasBeenSet = true;
    }

    if (value.HasMember("EipAddressStatus") && !value["EipAddressStatus"].IsNull())
    {
        if (!value["EipAddressStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.EipAddressStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eipAddressStatus = string(value["EipAddressStatus"].GetString());
        m_eipAddressStatusHasBeenSet = true;
    }

    if (value.HasMember("EipFlag") && !value["EipFlag"].IsNull())
    {
        if (!value["EipFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.EipFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eipFlag = value["EipFlag"].GetInt64();
        m_eipFlagHasBeenSet = true;
    }

    if (value.HasMember("EipAddressPackRelation") && !value["EipAddressPackRelation"].IsNull())
    {
        if (!value["EipAddressPackRelation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.EipAddressPackRelation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eipAddressPackRelation.Deserialize(value["EipAddressPackRelation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eipAddressPackRelationHasBeenSet = true;
    }

    if (value.HasMember("EipAddressInfo") && !value["EipAddressInfo"].IsNull())
    {
        if (!value["EipAddressInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.EipAddressInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eipAddressInfo.Deserialize(value["EipAddressInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eipAddressInfoHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DamDDoSStatus") && !value["DamDDoSStatus"].IsNull())
    {
        if (!value["DamDDoSStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.DamDDoSStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_damDDoSStatus = value["DamDDoSStatus"].GetUint64();
        m_damDDoSStatusHasBeenSet = true;
    }

    if (value.HasMember("V6Flag") && !value["V6Flag"].IsNull())
    {
        if (!value["V6Flag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.V6Flag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_v6Flag = value["V6Flag"].GetUint64();
        m_v6FlagHasBeenSet = true;
    }

    if (value.HasMember("BGPIPChannelFlag") && !value["BGPIPChannelFlag"].IsNull())
    {
        if (!value["BGPIPChannelFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.BGPIPChannelFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bGPIPChannelFlag = value["BGPIPChannelFlag"].GetUint64();
        m_bGPIPChannelFlagHasBeenSet = true;
    }

    if (value.HasMember("TagInfoList") && !value["TagInfoList"].IsNull())
    {
        if (!value["TagInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.TagInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagInfoList.push_back(item);
        }
        m_tagInfoListHasBeenSet = true;
    }

    if (value.HasMember("AnycastOutPackRelation") && !value["AnycastOutPackRelation"].IsNull())
    {
        if (!value["AnycastOutPackRelation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.AnycastOutPackRelation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_anycastOutPackRelation.Deserialize(value["AnycastOutPackRelation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_anycastOutPackRelationHasBeenSet = true;
    }

    if (value.HasMember("InstanceVersion") && !value["InstanceVersion"].IsNull())
    {
        if (!value["InstanceVersion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.InstanceVersion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceVersion = value["InstanceVersion"].GetUint64();
        m_instanceVersionHasBeenSet = true;
    }

    if (value.HasMember("ConvoyId") && !value["ConvoyId"].IsNull())
    {
        if (!value["ConvoyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.ConvoyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_convoyId = string(value["ConvoyId"].GetString());
        m_convoyIdHasBeenSet = true;
    }

    if (value.HasMember("ElasticBandwidth") && !value["ElasticBandwidth"].IsNull())
    {
        if (!value["ElasticBandwidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.ElasticBandwidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticBandwidth = value["ElasticBandwidth"].GetUint64();
        m_elasticBandwidthHasBeenSet = true;
    }

    if (value.HasMember("EOFlag") && !value["EOFlag"].IsNull())
    {
        if (!value["EOFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPIPInstance.EOFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eOFlag = value["EOFlag"].GetUint64();
        m_eOFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BGPIPInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceDetail.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_specificationLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecificationLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_specificationLimit.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_usage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_region.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_packInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_packInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_staticPackRelationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticPackRelation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_staticPackRelation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_tgwHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tgw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tgw, allocator);
    }

    if (m_eipAddressStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipAddressStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eipAddressStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_eipFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eipFlag, allocator);
    }

    if (m_eipAddressPackRelationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipAddressPackRelation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eipAddressPackRelation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eipAddressInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipAddressInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eipAddressInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_damDDoSStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DamDDoSStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_damDDoSStatus, allocator);
    }

    if (m_v6FlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "V6Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_v6Flag, allocator);
    }

    if (m_bGPIPChannelFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BGPIPChannelFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bGPIPChannelFlag, allocator);
    }

    if (m_tagInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagInfoList.begin(); itr != m_tagInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_anycastOutPackRelationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnycastOutPackRelation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_anycastOutPackRelation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceVersion, allocator);
    }

    if (m_convoyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConvoyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_convoyId.c_str(), allocator).Move(), allocator);
    }

    if (m_elasticBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticBandwidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticBandwidth, allocator);
    }

    if (m_eOFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EOFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eOFlag, allocator);
    }

}


InstanceRelation BGPIPInstance::GetInstanceDetail() const
{
    return m_instanceDetail;
}

void BGPIPInstance::SetInstanceDetail(const InstanceRelation& _instanceDetail)
{
    m_instanceDetail = _instanceDetail;
    m_instanceDetailHasBeenSet = true;
}

bool BGPIPInstance::InstanceDetailHasBeenSet() const
{
    return m_instanceDetailHasBeenSet;
}

BGPIPInstanceSpecification BGPIPInstance::GetSpecificationLimit() const
{
    return m_specificationLimit;
}

void BGPIPInstance::SetSpecificationLimit(const BGPIPInstanceSpecification& _specificationLimit)
{
    m_specificationLimit = _specificationLimit;
    m_specificationLimitHasBeenSet = true;
}

bool BGPIPInstance::SpecificationLimitHasBeenSet() const
{
    return m_specificationLimitHasBeenSet;
}

BGPIPInstanceUsages BGPIPInstance::GetUsage() const
{
    return m_usage;
}

void BGPIPInstance::SetUsage(const BGPIPInstanceUsages& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool BGPIPInstance::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

RegionInfo BGPIPInstance::GetRegion() const
{
    return m_region;
}

void BGPIPInstance::SetRegion(const RegionInfo& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BGPIPInstance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string BGPIPInstance::GetStatus() const
{
    return m_status;
}

void BGPIPInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BGPIPInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BGPIPInstance::GetExpiredTime() const
{
    return m_expiredTime;
}

void BGPIPInstance::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool BGPIPInstance::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string BGPIPInstance::GetCreatedTime() const
{
    return m_createdTime;
}

void BGPIPInstance::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool BGPIPInstance::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string BGPIPInstance::GetName() const
{
    return m_name;
}

void BGPIPInstance::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BGPIPInstance::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

PackInfo BGPIPInstance::GetPackInfo() const
{
    return m_packInfo;
}

void BGPIPInstance::SetPackInfo(const PackInfo& _packInfo)
{
    m_packInfo = _packInfo;
    m_packInfoHasBeenSet = true;
}

bool BGPIPInstance::PackInfoHasBeenSet() const
{
    return m_packInfoHasBeenSet;
}

StaticPackRelation BGPIPInstance::GetStaticPackRelation() const
{
    return m_staticPackRelation;
}

void BGPIPInstance::SetStaticPackRelation(const StaticPackRelation& _staticPackRelation)
{
    m_staticPackRelation = _staticPackRelation;
    m_staticPackRelationHasBeenSet = true;
}

bool BGPIPInstance::StaticPackRelationHasBeenSet() const
{
    return m_staticPackRelationHasBeenSet;
}

uint64_t BGPIPInstance::GetZoneId() const
{
    return m_zoneId;
}

void BGPIPInstance::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool BGPIPInstance::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

uint64_t BGPIPInstance::GetTgw() const
{
    return m_tgw;
}

void BGPIPInstance::SetTgw(const uint64_t& _tgw)
{
    m_tgw = _tgw;
    m_tgwHasBeenSet = true;
}

bool BGPIPInstance::TgwHasBeenSet() const
{
    return m_tgwHasBeenSet;
}

string BGPIPInstance::GetEipAddressStatus() const
{
    return m_eipAddressStatus;
}

void BGPIPInstance::SetEipAddressStatus(const string& _eipAddressStatus)
{
    m_eipAddressStatus = _eipAddressStatus;
    m_eipAddressStatusHasBeenSet = true;
}

bool BGPIPInstance::EipAddressStatusHasBeenSet() const
{
    return m_eipAddressStatusHasBeenSet;
}

int64_t BGPIPInstance::GetEipFlag() const
{
    return m_eipFlag;
}

void BGPIPInstance::SetEipFlag(const int64_t& _eipFlag)
{
    m_eipFlag = _eipFlag;
    m_eipFlagHasBeenSet = true;
}

bool BGPIPInstance::EipFlagHasBeenSet() const
{
    return m_eipFlagHasBeenSet;
}

EipAddressPackRelation BGPIPInstance::GetEipAddressPackRelation() const
{
    return m_eipAddressPackRelation;
}

void BGPIPInstance::SetEipAddressPackRelation(const EipAddressPackRelation& _eipAddressPackRelation)
{
    m_eipAddressPackRelation = _eipAddressPackRelation;
    m_eipAddressPackRelationHasBeenSet = true;
}

bool BGPIPInstance::EipAddressPackRelationHasBeenSet() const
{
    return m_eipAddressPackRelationHasBeenSet;
}

EipAddressRelation BGPIPInstance::GetEipAddressInfo() const
{
    return m_eipAddressInfo;
}

void BGPIPInstance::SetEipAddressInfo(const EipAddressRelation& _eipAddressInfo)
{
    m_eipAddressInfo = _eipAddressInfo;
    m_eipAddressInfoHasBeenSet = true;
}

bool BGPIPInstance::EipAddressInfoHasBeenSet() const
{
    return m_eipAddressInfoHasBeenSet;
}

string BGPIPInstance::GetDomain() const
{
    return m_domain;
}

void BGPIPInstance::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool BGPIPInstance::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t BGPIPInstance::GetDamDDoSStatus() const
{
    return m_damDDoSStatus;
}

void BGPIPInstance::SetDamDDoSStatus(const uint64_t& _damDDoSStatus)
{
    m_damDDoSStatus = _damDDoSStatus;
    m_damDDoSStatusHasBeenSet = true;
}

bool BGPIPInstance::DamDDoSStatusHasBeenSet() const
{
    return m_damDDoSStatusHasBeenSet;
}

uint64_t BGPIPInstance::GetV6Flag() const
{
    return m_v6Flag;
}

void BGPIPInstance::SetV6Flag(const uint64_t& _v6Flag)
{
    m_v6Flag = _v6Flag;
    m_v6FlagHasBeenSet = true;
}

bool BGPIPInstance::V6FlagHasBeenSet() const
{
    return m_v6FlagHasBeenSet;
}

uint64_t BGPIPInstance::GetBGPIPChannelFlag() const
{
    return m_bGPIPChannelFlag;
}

void BGPIPInstance::SetBGPIPChannelFlag(const uint64_t& _bGPIPChannelFlag)
{
    m_bGPIPChannelFlag = _bGPIPChannelFlag;
    m_bGPIPChannelFlagHasBeenSet = true;
}

bool BGPIPInstance::BGPIPChannelFlagHasBeenSet() const
{
    return m_bGPIPChannelFlagHasBeenSet;
}

vector<TagInfo> BGPIPInstance::GetTagInfoList() const
{
    return m_tagInfoList;
}

void BGPIPInstance::SetTagInfoList(const vector<TagInfo>& _tagInfoList)
{
    m_tagInfoList = _tagInfoList;
    m_tagInfoListHasBeenSet = true;
}

bool BGPIPInstance::TagInfoListHasBeenSet() const
{
    return m_tagInfoListHasBeenSet;
}

AnycastOutPackRelation BGPIPInstance::GetAnycastOutPackRelation() const
{
    return m_anycastOutPackRelation;
}

void BGPIPInstance::SetAnycastOutPackRelation(const AnycastOutPackRelation& _anycastOutPackRelation)
{
    m_anycastOutPackRelation = _anycastOutPackRelation;
    m_anycastOutPackRelationHasBeenSet = true;
}

bool BGPIPInstance::AnycastOutPackRelationHasBeenSet() const
{
    return m_anycastOutPackRelationHasBeenSet;
}

uint64_t BGPIPInstance::GetInstanceVersion() const
{
    return m_instanceVersion;
}

void BGPIPInstance::SetInstanceVersion(const uint64_t& _instanceVersion)
{
    m_instanceVersion = _instanceVersion;
    m_instanceVersionHasBeenSet = true;
}

bool BGPIPInstance::InstanceVersionHasBeenSet() const
{
    return m_instanceVersionHasBeenSet;
}

string BGPIPInstance::GetConvoyId() const
{
    return m_convoyId;
}

void BGPIPInstance::SetConvoyId(const string& _convoyId)
{
    m_convoyId = _convoyId;
    m_convoyIdHasBeenSet = true;
}

bool BGPIPInstance::ConvoyIdHasBeenSet() const
{
    return m_convoyIdHasBeenSet;
}

uint64_t BGPIPInstance::GetElasticBandwidth() const
{
    return m_elasticBandwidth;
}

void BGPIPInstance::SetElasticBandwidth(const uint64_t& _elasticBandwidth)
{
    m_elasticBandwidth = _elasticBandwidth;
    m_elasticBandwidthHasBeenSet = true;
}

bool BGPIPInstance::ElasticBandwidthHasBeenSet() const
{
    return m_elasticBandwidthHasBeenSet;
}

uint64_t BGPIPInstance::GetEOFlag() const
{
    return m_eOFlag;
}

void BGPIPInstance::SetEOFlag(const uint64_t& _eOFlag)
{
    m_eOFlag = _eOFlag;
    m_eOFlagHasBeenSet = true;
}

bool BGPIPInstance::EOFlagHasBeenSet() const
{
    return m_eOFlagHasBeenSet;
}

