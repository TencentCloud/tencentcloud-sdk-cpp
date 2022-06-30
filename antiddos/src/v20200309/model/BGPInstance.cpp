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

#include <tencentcloud/antiddos/v20200309/model/BGPInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

BGPInstance::BGPInstance() :
    m_instanceDetailHasBeenSet(false),
    m_specificationLimitHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_packInfoHasBeenSet(false),
    m_eipProductInfosHasBeenSet(false),
    m_boundStatusHasBeenSet(false),
    m_dDoSLevelHasBeenSet(false),
    m_cCEnableHasBeenSet(false),
    m_tagInfoListHasBeenSet(false),
    m_ipCountNewFlagHasBeenSet(false)
{
}

CoreInternalOutcome BGPInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceDetail") && !value["InstanceDetail"].IsNull())
    {
        if (!value["InstanceDetail"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstance.InstanceDetail` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BGPInstance.SpecificationLimit` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BGPInstance.Usage` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BGPInstance.Region` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `BGPInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstance.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstance.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstance.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PackInfo") && !value["PackInfo"].IsNull())
    {
        if (!value["PackInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstance.PackInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_packInfo.Deserialize(value["PackInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_packInfoHasBeenSet = true;
    }

    if (value.HasMember("EipProductInfos") && !value["EipProductInfos"].IsNull())
    {
        if (!value["EipProductInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BGPInstance.EipProductInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["EipProductInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EipProductInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eipProductInfos.push_back(item);
        }
        m_eipProductInfosHasBeenSet = true;
    }

    if (value.HasMember("BoundStatus") && !value["BoundStatus"].IsNull())
    {
        if (!value["BoundStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstance.BoundStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_boundStatus = string(value["BoundStatus"].GetString());
        m_boundStatusHasBeenSet = true;
    }

    if (value.HasMember("DDoSLevel") && !value["DDoSLevel"].IsNull())
    {
        if (!value["DDoSLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstance.DDoSLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dDoSLevel = string(value["DDoSLevel"].GetString());
        m_dDoSLevelHasBeenSet = true;
    }

    if (value.HasMember("CCEnable") && !value["CCEnable"].IsNull())
    {
        if (!value["CCEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstance.CCEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cCEnable = value["CCEnable"].GetInt64();
        m_cCEnableHasBeenSet = true;
    }

    if (value.HasMember("TagInfoList") && !value["TagInfoList"].IsNull())
    {
        if (!value["TagInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BGPInstance.TagInfoList` is not array type"));

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

    if (value.HasMember("IpCountNewFlag") && !value["IpCountNewFlag"].IsNull())
    {
        if (!value["IpCountNewFlag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstance.IpCountNewFlag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ipCountNewFlag = value["IpCountNewFlag"].GetUint64();
        m_ipCountNewFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BGPInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_eipProductInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EipProductInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eipProductInfos.begin(); itr != m_eipProductInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_boundStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_boundStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_dDoSLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DDoSLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dDoSLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_cCEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCEnable, allocator);
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

    if (m_ipCountNewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpCountNewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipCountNewFlag, allocator);
    }

}


InstanceRelation BGPInstance::GetInstanceDetail() const
{
    return m_instanceDetail;
}

void BGPInstance::SetInstanceDetail(const InstanceRelation& _instanceDetail)
{
    m_instanceDetail = _instanceDetail;
    m_instanceDetailHasBeenSet = true;
}

bool BGPInstance::InstanceDetailHasBeenSet() const
{
    return m_instanceDetailHasBeenSet;
}

BGPInstanceSpecification BGPInstance::GetSpecificationLimit() const
{
    return m_specificationLimit;
}

void BGPInstance::SetSpecificationLimit(const BGPInstanceSpecification& _specificationLimit)
{
    m_specificationLimit = _specificationLimit;
    m_specificationLimitHasBeenSet = true;
}

bool BGPInstance::SpecificationLimitHasBeenSet() const
{
    return m_specificationLimitHasBeenSet;
}

BGPInstanceUsages BGPInstance::GetUsage() const
{
    return m_usage;
}

void BGPInstance::SetUsage(const BGPInstanceUsages& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool BGPInstance::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

RegionInfo BGPInstance::GetRegion() const
{
    return m_region;
}

void BGPInstance::SetRegion(const RegionInfo& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool BGPInstance::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string BGPInstance::GetStatus() const
{
    return m_status;
}

void BGPInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BGPInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string BGPInstance::GetCreatedTime() const
{
    return m_createdTime;
}

void BGPInstance::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool BGPInstance::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string BGPInstance::GetExpiredTime() const
{
    return m_expiredTime;
}

void BGPInstance::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool BGPInstance::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string BGPInstance::GetName() const
{
    return m_name;
}

void BGPInstance::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BGPInstance::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

PackInfo BGPInstance::GetPackInfo() const
{
    return m_packInfo;
}

void BGPInstance::SetPackInfo(const PackInfo& _packInfo)
{
    m_packInfo = _packInfo;
    m_packInfoHasBeenSet = true;
}

bool BGPInstance::PackInfoHasBeenSet() const
{
    return m_packInfoHasBeenSet;
}

vector<EipProductInfo> BGPInstance::GetEipProductInfos() const
{
    return m_eipProductInfos;
}

void BGPInstance::SetEipProductInfos(const vector<EipProductInfo>& _eipProductInfos)
{
    m_eipProductInfos = _eipProductInfos;
    m_eipProductInfosHasBeenSet = true;
}

bool BGPInstance::EipProductInfosHasBeenSet() const
{
    return m_eipProductInfosHasBeenSet;
}

string BGPInstance::GetBoundStatus() const
{
    return m_boundStatus;
}

void BGPInstance::SetBoundStatus(const string& _boundStatus)
{
    m_boundStatus = _boundStatus;
    m_boundStatusHasBeenSet = true;
}

bool BGPInstance::BoundStatusHasBeenSet() const
{
    return m_boundStatusHasBeenSet;
}

string BGPInstance::GetDDoSLevel() const
{
    return m_dDoSLevel;
}

void BGPInstance::SetDDoSLevel(const string& _dDoSLevel)
{
    m_dDoSLevel = _dDoSLevel;
    m_dDoSLevelHasBeenSet = true;
}

bool BGPInstance::DDoSLevelHasBeenSet() const
{
    return m_dDoSLevelHasBeenSet;
}

int64_t BGPInstance::GetCCEnable() const
{
    return m_cCEnable;
}

void BGPInstance::SetCCEnable(const int64_t& _cCEnable)
{
    m_cCEnable = _cCEnable;
    m_cCEnableHasBeenSet = true;
}

bool BGPInstance::CCEnableHasBeenSet() const
{
    return m_cCEnableHasBeenSet;
}

vector<TagInfo> BGPInstance::GetTagInfoList() const
{
    return m_tagInfoList;
}

void BGPInstance::SetTagInfoList(const vector<TagInfo>& _tagInfoList)
{
    m_tagInfoList = _tagInfoList;
    m_tagInfoListHasBeenSet = true;
}

bool BGPInstance::TagInfoListHasBeenSet() const
{
    return m_tagInfoListHasBeenSet;
}

uint64_t BGPInstance::GetIpCountNewFlag() const
{
    return m_ipCountNewFlag;
}

void BGPInstance::SetIpCountNewFlag(const uint64_t& _ipCountNewFlag)
{
    m_ipCountNewFlag = _ipCountNewFlag;
    m_ipCountNewFlagHasBeenSet = true;
}

bool BGPInstance::IpCountNewFlagHasBeenSet() const
{
    return m_ipCountNewFlagHasBeenSet;
}

