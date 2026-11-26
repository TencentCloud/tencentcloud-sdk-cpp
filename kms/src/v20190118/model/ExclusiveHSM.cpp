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

#include <tencentcloud/kms/v20190118/model/ExclusiveHSM.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

ExclusiveHSM::ExclusiveHSM() :
    m_hsmClusterIdHasBeenSet(false),
    m_hsmClusterNameHasBeenSet(false),
    m_cmkUserCountHasBeenSet(false),
    m_cmkLimitHasBeenSet(false)
{
}

CoreInternalOutcome ExclusiveHSM::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HsmClusterId") && !value["HsmClusterId"].IsNull())
    {
        if (!value["HsmClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveHSM.HsmClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hsmClusterId = string(value["HsmClusterId"].GetString());
        m_hsmClusterIdHasBeenSet = true;
    }

    if (value.HasMember("HsmClusterName") && !value["HsmClusterName"].IsNull())
    {
        if (!value["HsmClusterName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveHSM.HsmClusterName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hsmClusterName = string(value["HsmClusterName"].GetString());
        m_hsmClusterNameHasBeenSet = true;
    }

    if (value.HasMember("CmkUserCount") && !value["CmkUserCount"].IsNull())
    {
        if (!value["CmkUserCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveHSM.CmkUserCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cmkUserCount = value["CmkUserCount"].GetUint64();
        m_cmkUserCountHasBeenSet = true;
    }

    if (value.HasMember("CmkLimit") && !value["CmkLimit"].IsNull())
    {
        if (!value["CmkLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ExclusiveHSM.CmkLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cmkLimit = value["CmkLimit"].GetUint64();
        m_cmkLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExclusiveHSM::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hsmClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hsmClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_hsmClusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HsmClusterName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hsmClusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_cmkUserCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmkUserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cmkUserCount, allocator);
    }

    if (m_cmkLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CmkLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cmkLimit, allocator);
    }

}


string ExclusiveHSM::GetHsmClusterId() const
{
    return m_hsmClusterId;
}

void ExclusiveHSM::SetHsmClusterId(const string& _hsmClusterId)
{
    m_hsmClusterId = _hsmClusterId;
    m_hsmClusterIdHasBeenSet = true;
}

bool ExclusiveHSM::HsmClusterIdHasBeenSet() const
{
    return m_hsmClusterIdHasBeenSet;
}

string ExclusiveHSM::GetHsmClusterName() const
{
    return m_hsmClusterName;
}

void ExclusiveHSM::SetHsmClusterName(const string& _hsmClusterName)
{
    m_hsmClusterName = _hsmClusterName;
    m_hsmClusterNameHasBeenSet = true;
}

bool ExclusiveHSM::HsmClusterNameHasBeenSet() const
{
    return m_hsmClusterNameHasBeenSet;
}

uint64_t ExclusiveHSM::GetCmkUserCount() const
{
    return m_cmkUserCount;
}

void ExclusiveHSM::SetCmkUserCount(const uint64_t& _cmkUserCount)
{
    m_cmkUserCount = _cmkUserCount;
    m_cmkUserCountHasBeenSet = true;
}

bool ExclusiveHSM::CmkUserCountHasBeenSet() const
{
    return m_cmkUserCountHasBeenSet;
}

uint64_t ExclusiveHSM::GetCmkLimit() const
{
    return m_cmkLimit;
}

void ExclusiveHSM::SetCmkLimit(const uint64_t& _cmkLimit)
{
    m_cmkLimit = _cmkLimit;
    m_cmkLimitHasBeenSet = true;
}

bool ExclusiveHSM::CmkLimitHasBeenSet() const
{
    return m_cmkLimitHasBeenSet;
}

