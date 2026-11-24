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

#include <tencentcloud/tcb/v20180608/model/PGConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

PGConfig::PGConfig() :
    m_pGSpecHasBeenSet(false),
    m_pGStorageHasBeenSet(false),
    m_tenantTypeHasBeenSet(false)
{
}

CoreInternalOutcome PGConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PGSpec") && !value["PGSpec"].IsNull())
    {
        if (!value["PGSpec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGConfig.PGSpec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pGSpec = string(value["PGSpec"].GetString());
        m_pGSpecHasBeenSet = true;
    }

    if (value.HasMember("PGStorage") && !value["PGStorage"].IsNull())
    {
        if (!value["PGStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PGConfig.PGStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pGStorage = value["PGStorage"].GetInt64();
        m_pGStorageHasBeenSet = true;
    }

    if (value.HasMember("TenantType") && !value["TenantType"].IsNull())
    {
        if (!value["TenantType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PGConfig.TenantType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantType = string(value["TenantType"].GetString());
        m_tenantTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PGConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pGSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PGSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pGSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_pGStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PGStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pGStorage, allocator);
    }

    if (m_tenantTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantType.c_str(), allocator).Move(), allocator);
    }

}


string PGConfig::GetPGSpec() const
{
    return m_pGSpec;
}

void PGConfig::SetPGSpec(const string& _pGSpec)
{
    m_pGSpec = _pGSpec;
    m_pGSpecHasBeenSet = true;
}

bool PGConfig::PGSpecHasBeenSet() const
{
    return m_pGSpecHasBeenSet;
}

int64_t PGConfig::GetPGStorage() const
{
    return m_pGStorage;
}

void PGConfig::SetPGStorage(const int64_t& _pGStorage)
{
    m_pGStorage = _pGStorage;
    m_pGStorageHasBeenSet = true;
}

bool PGConfig::PGStorageHasBeenSet() const
{
    return m_pGStorageHasBeenSet;
}

string PGConfig::GetTenantType() const
{
    return m_tenantType;
}

void PGConfig::SetTenantType(const string& _tenantType)
{
    m_tenantType = _tenantType;
    m_tenantTypeHasBeenSet = true;
}

bool PGConfig::TenantTypeHasBeenSet() const
{
    return m_tenantTypeHasBeenSet;
}

