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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyRefComplianceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyRefComplianceInfo::DspmIdentifyRefComplianceInfo() :
    m_complianceIdHasBeenSet(false),
    m_complianceNameHasBeenSet(false),
    m_complianceTypeHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyRefComplianceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComplianceId") && !value["ComplianceId"].IsNull())
    {
        if (!value["ComplianceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRefComplianceInfo.ComplianceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_complianceId = value["ComplianceId"].GetUint64();
        m_complianceIdHasBeenSet = true;
    }

    if (value.HasMember("ComplianceName") && !value["ComplianceName"].IsNull())
    {
        if (!value["ComplianceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRefComplianceInfo.ComplianceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_complianceName = string(value["ComplianceName"].GetString());
        m_complianceNameHasBeenSet = true;
    }

    if (value.HasMember("ComplianceType") && !value["ComplianceType"].IsNull())
    {
        if (!value["ComplianceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyRefComplianceInfo.ComplianceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_complianceType = value["ComplianceType"].GetUint64();
        m_complianceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIdentifyRefComplianceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_complianceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complianceId, allocator);
    }

    if (m_complianceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_complianceName.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complianceType, allocator);
    }

}


uint64_t DspmIdentifyRefComplianceInfo::GetComplianceId() const
{
    return m_complianceId;
}

void DspmIdentifyRefComplianceInfo::SetComplianceId(const uint64_t& _complianceId)
{
    m_complianceId = _complianceId;
    m_complianceIdHasBeenSet = true;
}

bool DspmIdentifyRefComplianceInfo::ComplianceIdHasBeenSet() const
{
    return m_complianceIdHasBeenSet;
}

string DspmIdentifyRefComplianceInfo::GetComplianceName() const
{
    return m_complianceName;
}

void DspmIdentifyRefComplianceInfo::SetComplianceName(const string& _complianceName)
{
    m_complianceName = _complianceName;
    m_complianceNameHasBeenSet = true;
}

bool DspmIdentifyRefComplianceInfo::ComplianceNameHasBeenSet() const
{
    return m_complianceNameHasBeenSet;
}

uint64_t DspmIdentifyRefComplianceInfo::GetComplianceType() const
{
    return m_complianceType;
}

void DspmIdentifyRefComplianceInfo::SetComplianceType(const uint64_t& _complianceType)
{
    m_complianceType = _complianceType;
    m_complianceTypeHasBeenSet = true;
}

bool DspmIdentifyRefComplianceInfo::ComplianceTypeHasBeenSet() const
{
    return m_complianceTypeHasBeenSet;
}

