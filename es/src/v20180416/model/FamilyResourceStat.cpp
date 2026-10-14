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

#include <tencentcloud/es/v20180416/model/FamilyResourceStat.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

FamilyResourceStat::FamilyResourceStat() :
    m_insFamilyHasBeenSet(false),
    m_cvmAvailableHasBeenSet(false),
    m_sysDiskAvailableHasBeenSet(false),
    m_diskAvailableHasBeenSet(false),
    m_purchasableHasBeenSet(false),
    m_missingResourcesHasBeenSet(false)
{
}

CoreInternalOutcome FamilyResourceStat::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InsFamily") && !value["InsFamily"].IsNull())
    {
        if (!value["InsFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FamilyResourceStat.InsFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insFamily = string(value["InsFamily"].GetString());
        m_insFamilyHasBeenSet = true;
    }

    if (value.HasMember("CvmAvailable") && !value["CvmAvailable"].IsNull())
    {
        if (!value["CvmAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FamilyResourceStat.CvmAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_cvmAvailable = value["CvmAvailable"].GetBool();
        m_cvmAvailableHasBeenSet = true;
    }

    if (value.HasMember("SysDiskAvailable") && !value["SysDiskAvailable"].IsNull())
    {
        if (!value["SysDiskAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FamilyResourceStat.SysDiskAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sysDiskAvailable = value["SysDiskAvailable"].GetBool();
        m_sysDiskAvailableHasBeenSet = true;
    }

    if (value.HasMember("DiskAvailable") && !value["DiskAvailable"].IsNull())
    {
        if (!value["DiskAvailable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FamilyResourceStat.DiskAvailable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_diskAvailable = value["DiskAvailable"].GetBool();
        m_diskAvailableHasBeenSet = true;
    }

    if (value.HasMember("Purchasable") && !value["Purchasable"].IsNull())
    {
        if (!value["Purchasable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FamilyResourceStat.Purchasable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_purchasable = value["Purchasable"].GetBool();
        m_purchasableHasBeenSet = true;
    }

    if (value.HasMember("MissingResources") && !value["MissingResources"].IsNull())
    {
        if (!value["MissingResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FamilyResourceStat.MissingResources` is not array type"));

        const rapidjson::Value &tmpValue = value["MissingResources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_missingResources.push_back((*itr).GetString());
        }
        m_missingResourcesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FamilyResourceStat::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_insFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvmAvailable, allocator);
    }

    if (m_sysDiskAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SysDiskAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sysDiskAvailable, allocator);
    }

    if (m_diskAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskAvailable, allocator);
    }

    if (m_purchasableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Purchasable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_purchasable, allocator);
    }

    if (m_missingResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MissingResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_missingResources.begin(); itr != m_missingResources.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string FamilyResourceStat::GetInsFamily() const
{
    return m_insFamily;
}

void FamilyResourceStat::SetInsFamily(const string& _insFamily)
{
    m_insFamily = _insFamily;
    m_insFamilyHasBeenSet = true;
}

bool FamilyResourceStat::InsFamilyHasBeenSet() const
{
    return m_insFamilyHasBeenSet;
}

bool FamilyResourceStat::GetCvmAvailable() const
{
    return m_cvmAvailable;
}

void FamilyResourceStat::SetCvmAvailable(const bool& _cvmAvailable)
{
    m_cvmAvailable = _cvmAvailable;
    m_cvmAvailableHasBeenSet = true;
}

bool FamilyResourceStat::CvmAvailableHasBeenSet() const
{
    return m_cvmAvailableHasBeenSet;
}

bool FamilyResourceStat::GetSysDiskAvailable() const
{
    return m_sysDiskAvailable;
}

void FamilyResourceStat::SetSysDiskAvailable(const bool& _sysDiskAvailable)
{
    m_sysDiskAvailable = _sysDiskAvailable;
    m_sysDiskAvailableHasBeenSet = true;
}

bool FamilyResourceStat::SysDiskAvailableHasBeenSet() const
{
    return m_sysDiskAvailableHasBeenSet;
}

bool FamilyResourceStat::GetDiskAvailable() const
{
    return m_diskAvailable;
}

void FamilyResourceStat::SetDiskAvailable(const bool& _diskAvailable)
{
    m_diskAvailable = _diskAvailable;
    m_diskAvailableHasBeenSet = true;
}

bool FamilyResourceStat::DiskAvailableHasBeenSet() const
{
    return m_diskAvailableHasBeenSet;
}

bool FamilyResourceStat::GetPurchasable() const
{
    return m_purchasable;
}

void FamilyResourceStat::SetPurchasable(const bool& _purchasable)
{
    m_purchasable = _purchasable;
    m_purchasableHasBeenSet = true;
}

bool FamilyResourceStat::PurchasableHasBeenSet() const
{
    return m_purchasableHasBeenSet;
}

vector<string> FamilyResourceStat::GetMissingResources() const
{
    return m_missingResources;
}

void FamilyResourceStat::SetMissingResources(const vector<string>& _missingResources)
{
    m_missingResources = _missingResources;
    m_missingResourcesHasBeenSet = true;
}

bool FamilyResourceStat::MissingResourcesHasBeenSet() const
{
    return m_missingResourcesHasBeenSet;
}

