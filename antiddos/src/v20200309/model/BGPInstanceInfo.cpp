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

#include <tencentcloud/antiddos/v20200309/model/BGPInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20200309::Model;
using namespace std;

BGPInstanceInfo::BGPInstanceInfo() :
    m_instanceIdHasBeenSet(false),
    m_instanceChargePrepaidHasBeenSet(false),
    m_enterprisePackageConfigHasBeenSet(false),
    m_standardPackageConfigHasBeenSet(false),
    m_standardPlusPackageConfigHasBeenSet(false),
    m_tagInfoListHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_dryRunHasBeenSet(false)
{
}

CoreInternalOutcome BGPInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargePrepaid") && !value["InstanceChargePrepaid"].IsNull())
    {
        if (!value["InstanceChargePrepaid"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceInfo.InstanceChargePrepaid` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceChargePrepaid.Deserialize(value["InstanceChargePrepaid"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceChargePrepaidHasBeenSet = true;
    }

    if (value.HasMember("EnterprisePackageConfig") && !value["EnterprisePackageConfig"].IsNull())
    {
        if (!value["EnterprisePackageConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceInfo.EnterprisePackageConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_enterprisePackageConfig.Deserialize(value["EnterprisePackageConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_enterprisePackageConfigHasBeenSet = true;
    }

    if (value.HasMember("StandardPackageConfig") && !value["StandardPackageConfig"].IsNull())
    {
        if (!value["StandardPackageConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceInfo.StandardPackageConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_standardPackageConfig.Deserialize(value["StandardPackageConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_standardPackageConfigHasBeenSet = true;
    }

    if (value.HasMember("StandardPlusPackageConfig") && !value["StandardPlusPackageConfig"].IsNull())
    {
        if (!value["StandardPlusPackageConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceInfo.StandardPlusPackageConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_standardPlusPackageConfig.Deserialize(value["StandardPlusPackageConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_standardPlusPackageConfigHasBeenSet = true;
    }

    if (value.HasMember("TagInfoList") && !value["TagInfoList"].IsNull())
    {
        if (!value["TagInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BGPInstanceInfo.TagInfoList` is not array type"));

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

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceInfo.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceInfo.InstanceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetUint64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceInfo.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("DryRun") && !value["DryRun"].IsNull())
    {
        if (!value["DryRun"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `BGPInstanceInfo.DryRun` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_dryRun = value["DryRun"].GetBool();
        m_dryRunHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BGPInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargePrepaidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargePrepaid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceChargePrepaid.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enterprisePackageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterprisePackageConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_enterprisePackageConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_standardPackageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardPackageConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_standardPackageConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_standardPlusPackageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardPlusPackageConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_standardPlusPackageConfig.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_dryRunHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DryRun";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dryRun, allocator);
    }

}


string BGPInstanceInfo::GetInstanceId() const
{
    return m_instanceId;
}

void BGPInstanceInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool BGPInstanceInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

InstanceChargePrepaid BGPInstanceInfo::GetInstanceChargePrepaid() const
{
    return m_instanceChargePrepaid;
}

void BGPInstanceInfo::SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid)
{
    m_instanceChargePrepaid = _instanceChargePrepaid;
    m_instanceChargePrepaidHasBeenSet = true;
}

bool BGPInstanceInfo::InstanceChargePrepaidHasBeenSet() const
{
    return m_instanceChargePrepaidHasBeenSet;
}

EnterprisePackageConfig BGPInstanceInfo::GetEnterprisePackageConfig() const
{
    return m_enterprisePackageConfig;
}

void BGPInstanceInfo::SetEnterprisePackageConfig(const EnterprisePackageConfig& _enterprisePackageConfig)
{
    m_enterprisePackageConfig = _enterprisePackageConfig;
    m_enterprisePackageConfigHasBeenSet = true;
}

bool BGPInstanceInfo::EnterprisePackageConfigHasBeenSet() const
{
    return m_enterprisePackageConfigHasBeenSet;
}

StandardPackageConfig BGPInstanceInfo::GetStandardPackageConfig() const
{
    return m_standardPackageConfig;
}

void BGPInstanceInfo::SetStandardPackageConfig(const StandardPackageConfig& _standardPackageConfig)
{
    m_standardPackageConfig = _standardPackageConfig;
    m_standardPackageConfigHasBeenSet = true;
}

bool BGPInstanceInfo::StandardPackageConfigHasBeenSet() const
{
    return m_standardPackageConfigHasBeenSet;
}

StandardPlusPackageConfig BGPInstanceInfo::GetStandardPlusPackageConfig() const
{
    return m_standardPlusPackageConfig;
}

void BGPInstanceInfo::SetStandardPlusPackageConfig(const StandardPlusPackageConfig& _standardPlusPackageConfig)
{
    m_standardPlusPackageConfig = _standardPlusPackageConfig;
    m_standardPlusPackageConfigHasBeenSet = true;
}

bool BGPInstanceInfo::StandardPlusPackageConfigHasBeenSet() const
{
    return m_standardPlusPackageConfigHasBeenSet;
}

vector<TagInfo> BGPInstanceInfo::GetTagInfoList() const
{
    return m_tagInfoList;
}

void BGPInstanceInfo::SetTagInfoList(const vector<TagInfo>& _tagInfoList)
{
    m_tagInfoList = _tagInfoList;
    m_tagInfoListHasBeenSet = true;
}

bool BGPInstanceInfo::TagInfoListHasBeenSet() const
{
    return m_tagInfoListHasBeenSet;
}

string BGPInstanceInfo::GetPackageType() const
{
    return m_packageType;
}

void BGPInstanceInfo::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool BGPInstanceInfo::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

uint64_t BGPInstanceInfo::GetInstanceCount() const
{
    return m_instanceCount;
}

void BGPInstanceInfo::SetInstanceCount(const uint64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool BGPInstanceInfo::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string BGPInstanceInfo::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void BGPInstanceInfo::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool BGPInstanceInfo::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

bool BGPInstanceInfo::GetDryRun() const
{
    return m_dryRun;
}

void BGPInstanceInfo::SetDryRun(const bool& _dryRun)
{
    m_dryRun = _dryRun;
    m_dryRunHasBeenSet = true;
}

bool BGPInstanceInfo::DryRunHasBeenSet() const
{
    return m_dryRunHasBeenSet;
}

