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

#include <tencentcloud/wedata/v20250806/model/DLCClusterInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

DLCClusterInfo::DLCClusterInfo() :
    m_computeResourcesHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_defaultDatabaseHasBeenSet(false),
    m_standardModeEnvTagHasBeenSet(false),
    m_accessAccountHasBeenSet(false),
    m_subAccountUinHasBeenSet(false)
{
}

CoreInternalOutcome DLCClusterInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComputeResources") && !value["ComputeResources"].IsNull())
    {
        if (!value["ComputeResources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DLCClusterInfo.ComputeResources` is not array type"));

        const rapidjson::Value &tmpValue = value["ComputeResources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_computeResources.push_back((*itr).GetString());
        }
        m_computeResourcesHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DLCClusterInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("DefaultDatabase") && !value["DefaultDatabase"].IsNull())
    {
        if (!value["DefaultDatabase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DLCClusterInfo.DefaultDatabase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDatabase = string(value["DefaultDatabase"].GetString());
        m_defaultDatabaseHasBeenSet = true;
    }

    if (value.HasMember("StandardModeEnvTag") && !value["StandardModeEnvTag"].IsNull())
    {
        if (!value["StandardModeEnvTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DLCClusterInfo.StandardModeEnvTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_standardModeEnvTag = string(value["StandardModeEnvTag"].GetString());
        m_standardModeEnvTagHasBeenSet = true;
    }

    if (value.HasMember("AccessAccount") && !value["AccessAccount"].IsNull())
    {
        if (!value["AccessAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DLCClusterInfo.AccessAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessAccount = string(value["AccessAccount"].GetString());
        m_accessAccountHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DLCClusterInfo.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DLCClusterInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_computeResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeResources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_computeResources.begin(); itr != m_computeResources.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultDatabaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDatabase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defaultDatabase.c_str(), allocator).Move(), allocator);
    }

    if (m_standardModeEnvTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardModeEnvTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_standardModeEnvTag.c_str(), allocator).Move(), allocator);
    }

    if (m_accessAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

}


vector<string> DLCClusterInfo::GetComputeResources() const
{
    return m_computeResources;
}

void DLCClusterInfo::SetComputeResources(const vector<string>& _computeResources)
{
    m_computeResources = _computeResources;
    m_computeResourcesHasBeenSet = true;
}

bool DLCClusterInfo::ComputeResourcesHasBeenSet() const
{
    return m_computeResourcesHasBeenSet;
}

string DLCClusterInfo::GetRegion() const
{
    return m_region;
}

void DLCClusterInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DLCClusterInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DLCClusterInfo::GetDefaultDatabase() const
{
    return m_defaultDatabase;
}

void DLCClusterInfo::SetDefaultDatabase(const string& _defaultDatabase)
{
    m_defaultDatabase = _defaultDatabase;
    m_defaultDatabaseHasBeenSet = true;
}

bool DLCClusterInfo::DefaultDatabaseHasBeenSet() const
{
    return m_defaultDatabaseHasBeenSet;
}

string DLCClusterInfo::GetStandardModeEnvTag() const
{
    return m_standardModeEnvTag;
}

void DLCClusterInfo::SetStandardModeEnvTag(const string& _standardModeEnvTag)
{
    m_standardModeEnvTag = _standardModeEnvTag;
    m_standardModeEnvTagHasBeenSet = true;
}

bool DLCClusterInfo::StandardModeEnvTagHasBeenSet() const
{
    return m_standardModeEnvTagHasBeenSet;
}

string DLCClusterInfo::GetAccessAccount() const
{
    return m_accessAccount;
}

void DLCClusterInfo::SetAccessAccount(const string& _accessAccount)
{
    m_accessAccount = _accessAccount;
    m_accessAccountHasBeenSet = true;
}

bool DLCClusterInfo::AccessAccountHasBeenSet() const
{
    return m_accessAccountHasBeenSet;
}

string DLCClusterInfo::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void DLCClusterInfo::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool DLCClusterInfo::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

