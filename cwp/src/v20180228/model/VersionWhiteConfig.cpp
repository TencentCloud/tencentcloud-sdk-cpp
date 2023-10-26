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

#include <tencentcloud/cwp/v20180228/model/VersionWhiteConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VersionWhiteConfig::VersionWhiteConfig() :
    m_deadlineHasBeenSet(false),
    m_licenseNumHasBeenSet(false),
    m_isApplyForHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome VersionWhiteConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Deadline") && !value["Deadline"].IsNull())
    {
        if (!value["Deadline"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionWhiteConfig.Deadline` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deadline = value["Deadline"].GetUint64();
        m_deadlineHasBeenSet = true;
    }

    if (value.HasMember("LicenseNum") && !value["LicenseNum"].IsNull())
    {
        if (!value["LicenseNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionWhiteConfig.LicenseNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_licenseNum = value["LicenseNum"].GetUint64();
        m_licenseNumHasBeenSet = true;
    }

    if (value.HasMember("IsApplyFor") && !value["IsApplyFor"].IsNull())
    {
        if (!value["IsApplyFor"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `VersionWhiteConfig.IsApplyFor` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isApplyFor = value["IsApplyFor"].GetBool();
        m_isApplyForHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VersionWhiteConfig.SourceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = value["SourceType"].GetUint64();
        m_sourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VersionWhiteConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deadline, allocator);
    }

    if (m_licenseNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_licenseNum, allocator);
    }

    if (m_isApplyForHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsApplyFor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isApplyFor, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceType, allocator);
    }

}


uint64_t VersionWhiteConfig::GetDeadline() const
{
    return m_deadline;
}

void VersionWhiteConfig::SetDeadline(const uint64_t& _deadline)
{
    m_deadline = _deadline;
    m_deadlineHasBeenSet = true;
}

bool VersionWhiteConfig::DeadlineHasBeenSet() const
{
    return m_deadlineHasBeenSet;
}

uint64_t VersionWhiteConfig::GetLicenseNum() const
{
    return m_licenseNum;
}

void VersionWhiteConfig::SetLicenseNum(const uint64_t& _licenseNum)
{
    m_licenseNum = _licenseNum;
    m_licenseNumHasBeenSet = true;
}

bool VersionWhiteConfig::LicenseNumHasBeenSet() const
{
    return m_licenseNumHasBeenSet;
}

bool VersionWhiteConfig::GetIsApplyFor() const
{
    return m_isApplyFor;
}

void VersionWhiteConfig::SetIsApplyFor(const bool& _isApplyFor)
{
    m_isApplyFor = _isApplyFor;
    m_isApplyForHasBeenSet = true;
}

bool VersionWhiteConfig::IsApplyForHasBeenSet() const
{
    return m_isApplyForHasBeenSet;
}

uint64_t VersionWhiteConfig::GetSourceType() const
{
    return m_sourceType;
}

void VersionWhiteConfig::SetSourceType(const uint64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool VersionWhiteConfig::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

