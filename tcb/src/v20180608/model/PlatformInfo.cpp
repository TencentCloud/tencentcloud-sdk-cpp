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

#include <tencentcloud/tcb/v20180608/model/PlatformInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PlatformInfo::PlatformInfo() :
    m_platformIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_packageIdHasBeenSet(false),
    m_billStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_specHasBeenSet(false),
    m_billTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_isAutoRenewHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

CoreInternalOutcome PlatformInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlatformId") && !value["PlatformId"].IsNull())
    {
        if (!value["PlatformId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformInfo.PlatformId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platformId = string(value["PlatformId"].GetString());
        m_platformIdHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("PackageId") && !value["PackageId"].IsNull())
    {
        if (!value["PackageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformInfo.PackageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageId = string(value["PackageId"].GetString());
        m_packageIdHasBeenSet = true;
    }

    if (value.HasMember("BillStatus") && !value["BillStatus"].IsNull())
    {
        if (!value["BillStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformInfo.BillStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billStatus = string(value["BillStatus"].GetString());
        m_billStatusHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Spec") && !value["Spec"].IsNull())
    {
        if (!value["Spec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformInfo.Spec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spec = string(value["Spec"].GetString());
        m_specHasBeenSet = true;
    }

    if (value.HasMember("BillTime") && !value["BillTime"].IsNull())
    {
        if (!value["BillTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformInfo.BillTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billTime = string(value["BillTime"].GetString());
        m_billTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("IsAutoRenew") && !value["IsAutoRenew"].IsNull())
    {
        if (!value["IsAutoRenew"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformInfo.IsAutoRenew` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAutoRenew = value["IsAutoRenew"].GetUint64();
        m_isAutoRenewHasBeenSet = true;
    }

    if (value.HasMember("Resources") && !value["Resources"].IsNull())
    {
        if (!value["Resources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PlatformInfo.Resources` is not array type"));

        const rapidjson::Value &tmpValue = value["Resources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PlatFormResourceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resources.push_back(item);
        }
        m_resourcesHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlatformInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PlatformInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_platformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platformId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_packageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageId.c_str(), allocator).Move(), allocator);
    }

    if (m_billStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_specHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Spec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spec.c_str(), allocator).Move(), allocator);
    }

    if (m_billTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isAutoRenewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoRenew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAutoRenew, allocator);
    }

    if (m_resourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resources.begin(); itr != m_resources.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

}


string PlatformInfo::GetPlatformId() const
{
    return m_platformId;
}

void PlatformInfo::SetPlatformId(const string& _platformId)
{
    m_platformId = _platformId;
    m_platformIdHasBeenSet = true;
}

bool PlatformInfo::PlatformIdHasBeenSet() const
{
    return m_platformIdHasBeenSet;
}

string PlatformInfo::GetAlias() const
{
    return m_alias;
}

void PlatformInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool PlatformInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string PlatformInfo::GetPackageId() const
{
    return m_packageId;
}

void PlatformInfo::SetPackageId(const string& _packageId)
{
    m_packageId = _packageId;
    m_packageIdHasBeenSet = true;
}

bool PlatformInfo::PackageIdHasBeenSet() const
{
    return m_packageIdHasBeenSet;
}

string PlatformInfo::GetBillStatus() const
{
    return m_billStatus;
}

void PlatformInfo::SetBillStatus(const string& _billStatus)
{
    m_billStatus = _billStatus;
    m_billStatusHasBeenSet = true;
}

bool PlatformInfo::BillStatusHasBeenSet() const
{
    return m_billStatusHasBeenSet;
}

uint64_t PlatformInfo::GetStatus() const
{
    return m_status;
}

void PlatformInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool PlatformInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string PlatformInfo::GetSpec() const
{
    return m_spec;
}

void PlatformInfo::SetSpec(const string& _spec)
{
    m_spec = _spec;
    m_specHasBeenSet = true;
}

bool PlatformInfo::SpecHasBeenSet() const
{
    return m_specHasBeenSet;
}

string PlatformInfo::GetBillTime() const
{
    return m_billTime;
}

void PlatformInfo::SetBillTime(const string& _billTime)
{
    m_billTime = _billTime;
    m_billTimeHasBeenSet = true;
}

bool PlatformInfo::BillTimeHasBeenSet() const
{
    return m_billTimeHasBeenSet;
}

string PlatformInfo::GetExpireTime() const
{
    return m_expireTime;
}

void PlatformInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool PlatformInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

uint64_t PlatformInfo::GetIsAutoRenew() const
{
    return m_isAutoRenew;
}

void PlatformInfo::SetIsAutoRenew(const uint64_t& _isAutoRenew)
{
    m_isAutoRenew = _isAutoRenew;
    m_isAutoRenewHasBeenSet = true;
}

bool PlatformInfo::IsAutoRenewHasBeenSet() const
{
    return m_isAutoRenewHasBeenSet;
}

vector<PlatFormResourceInfo> PlatformInfo::GetResources() const
{
    return m_resources;
}

void PlatformInfo::SetResources(const vector<PlatFormResourceInfo>& _resources)
{
    m_resources = _resources;
    m_resourcesHasBeenSet = true;
}

bool PlatformInfo::ResourcesHasBeenSet() const
{
    return m_resourcesHasBeenSet;
}

string PlatformInfo::GetRegion() const
{
    return m_region;
}

void PlatformInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool PlatformInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

