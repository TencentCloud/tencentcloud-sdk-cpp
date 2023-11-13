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

#include <tencentcloud/omics/v20221128/model/EnvironmentConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Omics::V20221128::Model;
using namespace std;

EnvironmentConfig::EnvironmentConfig() :
    m_vPCOptionHasBeenSet(false),
    m_clusterOptionHasBeenSet(false),
    m_databaseOptionHasBeenSet(false),
    m_storageOptionHasBeenSet(false),
    m_cVMOptionHasBeenSet(false),
    m_securityGroupOptionHasBeenSet(false)
{
}

CoreInternalOutcome EnvironmentConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VPCOption") && !value["VPCOption"].IsNull())
    {
        if (!value["VPCOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnvironmentConfig.VPCOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vPCOption.Deserialize(value["VPCOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vPCOptionHasBeenSet = true;
    }

    if (value.HasMember("ClusterOption") && !value["ClusterOption"].IsNull())
    {
        if (!value["ClusterOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnvironmentConfig.ClusterOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clusterOption.Deserialize(value["ClusterOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clusterOptionHasBeenSet = true;
    }

    if (value.HasMember("DatabaseOption") && !value["DatabaseOption"].IsNull())
    {
        if (!value["DatabaseOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnvironmentConfig.DatabaseOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_databaseOption.Deserialize(value["DatabaseOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_databaseOptionHasBeenSet = true;
    }

    if (value.HasMember("StorageOption") && !value["StorageOption"].IsNull())
    {
        if (!value["StorageOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnvironmentConfig.StorageOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_storageOption.Deserialize(value["StorageOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_storageOptionHasBeenSet = true;
    }

    if (value.HasMember("CVMOption") && !value["CVMOption"].IsNull())
    {
        if (!value["CVMOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnvironmentConfig.CVMOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cVMOption.Deserialize(value["CVMOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cVMOptionHasBeenSet = true;
    }

    if (value.HasMember("SecurityGroupOption") && !value["SecurityGroupOption"].IsNull())
    {
        if (!value["SecurityGroupOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EnvironmentConfig.SecurityGroupOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_securityGroupOption.Deserialize(value["SecurityGroupOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_securityGroupOptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvironmentConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vPCOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPCOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vPCOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clusterOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clusterOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_databaseOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_databaseOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_storageOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_storageOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cVMOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVMOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cVMOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_securityGroupOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_securityGroupOption.ToJsonObject(value[key.c_str()], allocator);
    }

}


VPCOption EnvironmentConfig::GetVPCOption() const
{
    return m_vPCOption;
}

void EnvironmentConfig::SetVPCOption(const VPCOption& _vPCOption)
{
    m_vPCOption = _vPCOption;
    m_vPCOptionHasBeenSet = true;
}

bool EnvironmentConfig::VPCOptionHasBeenSet() const
{
    return m_vPCOptionHasBeenSet;
}

ClusterOption EnvironmentConfig::GetClusterOption() const
{
    return m_clusterOption;
}

void EnvironmentConfig::SetClusterOption(const ClusterOption& _clusterOption)
{
    m_clusterOption = _clusterOption;
    m_clusterOptionHasBeenSet = true;
}

bool EnvironmentConfig::ClusterOptionHasBeenSet() const
{
    return m_clusterOptionHasBeenSet;
}

DatabaseOption EnvironmentConfig::GetDatabaseOption() const
{
    return m_databaseOption;
}

void EnvironmentConfig::SetDatabaseOption(const DatabaseOption& _databaseOption)
{
    m_databaseOption = _databaseOption;
    m_databaseOptionHasBeenSet = true;
}

bool EnvironmentConfig::DatabaseOptionHasBeenSet() const
{
    return m_databaseOptionHasBeenSet;
}

StorageOption EnvironmentConfig::GetStorageOption() const
{
    return m_storageOption;
}

void EnvironmentConfig::SetStorageOption(const StorageOption& _storageOption)
{
    m_storageOption = _storageOption;
    m_storageOptionHasBeenSet = true;
}

bool EnvironmentConfig::StorageOptionHasBeenSet() const
{
    return m_storageOptionHasBeenSet;
}

CVMOption EnvironmentConfig::GetCVMOption() const
{
    return m_cVMOption;
}

void EnvironmentConfig::SetCVMOption(const CVMOption& _cVMOption)
{
    m_cVMOption = _cVMOption;
    m_cVMOptionHasBeenSet = true;
}

bool EnvironmentConfig::CVMOptionHasBeenSet() const
{
    return m_cVMOptionHasBeenSet;
}

SecurityGroupOption EnvironmentConfig::GetSecurityGroupOption() const
{
    return m_securityGroupOption;
}

void EnvironmentConfig::SetSecurityGroupOption(const SecurityGroupOption& _securityGroupOption)
{
    m_securityGroupOption = _securityGroupOption;
    m_securityGroupOptionHasBeenSet = true;
}

bool EnvironmentConfig::SecurityGroupOptionHasBeenSet() const
{
    return m_securityGroupOptionHasBeenSet;
}

