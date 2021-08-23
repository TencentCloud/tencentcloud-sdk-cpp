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

#include <tencentcloud/cwp/v20180228/model/VulDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulDetailInfo::VulDetailInfo() :
    m_vulIdHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cveIdHasBeenSet(false),
    m_vulCategoryHasBeenSet(false),
    m_descriptHasBeenSet(false),
    m_fixHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_cvssScoreHasBeenSet(false),
    m_cvssHasBeenSet(false),
    m_publishTimeHasBeenSet(false)
{
}

CoreInternalOutcome VulDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CveId") && !value["CveId"].IsNull())
    {
        if (!value["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(value["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }

    if (value.HasMember("VulCategory") && !value["VulCategory"].IsNull())
    {
        if (!value["VulCategory"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.VulCategory` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCategory = value["VulCategory"].GetUint64();
        m_vulCategoryHasBeenSet = true;
    }

    if (value.HasMember("Descript") && !value["Descript"].IsNull())
    {
        if (!value["Descript"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Descript` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descript = string(value["Descript"].GetString());
        m_descriptHasBeenSet = true;
    }

    if (value.HasMember("Fix") && !value["Fix"].IsNull())
    {
        if (!value["Fix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Fix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fix = string(value["Fix"].GetString());
        m_fixHasBeenSet = true;
    }

    if (value.HasMember("Reference") && !value["Reference"].IsNull())
    {
        if (!value["Reference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Reference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reference = string(value["Reference"].GetString());
        m_referenceHasBeenSet = true;
    }

    if (value.HasMember("CvssScore") && !value["CvssScore"].IsNull())
    {
        if (!value["CvssScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.CvssScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cvssScore = value["CvssScore"].GetDouble();
        m_cvssScoreHasBeenSet = true;
    }

    if (value.HasMember("Cvss") && !value["Cvss"].IsNull())
    {
        if (!value["Cvss"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Cvss` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvss = string(value["Cvss"].GetString());
        m_cvssHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

    if (m_vulCategoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCategory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCategory, allocator);
    }

    if (m_descriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Descript";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descript.c_str(), allocator).Move(), allocator);
    }

    if (m_fixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fix.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reference.c_str(), allocator).Move(), allocator);
    }

    if (m_cvssScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvssScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvssScore, allocator);
    }

    if (m_cvssHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cvss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvss.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t VulDetailInfo::GetVulId() const
{
    return m_vulId;
}

void VulDetailInfo::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulDetailInfo::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

uint64_t VulDetailInfo::GetLevel() const
{
    return m_level;
}

void VulDetailInfo::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VulDetailInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string VulDetailInfo::GetName() const
{
    return m_name;
}

void VulDetailInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VulDetailInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VulDetailInfo::GetCveId() const
{
    return m_cveId;
}

void VulDetailInfo::SetCveId(const string& _cveId)
{
    m_cveId = _cveId;
    m_cveIdHasBeenSet = true;
}

bool VulDetailInfo::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

uint64_t VulDetailInfo::GetVulCategory() const
{
    return m_vulCategory;
}

void VulDetailInfo::SetVulCategory(const uint64_t& _vulCategory)
{
    m_vulCategory = _vulCategory;
    m_vulCategoryHasBeenSet = true;
}

bool VulDetailInfo::VulCategoryHasBeenSet() const
{
    return m_vulCategoryHasBeenSet;
}

string VulDetailInfo::GetDescript() const
{
    return m_descript;
}

void VulDetailInfo::SetDescript(const string& _descript)
{
    m_descript = _descript;
    m_descriptHasBeenSet = true;
}

bool VulDetailInfo::DescriptHasBeenSet() const
{
    return m_descriptHasBeenSet;
}

string VulDetailInfo::GetFix() const
{
    return m_fix;
}

void VulDetailInfo::SetFix(const string& _fix)
{
    m_fix = _fix;
    m_fixHasBeenSet = true;
}

bool VulDetailInfo::FixHasBeenSet() const
{
    return m_fixHasBeenSet;
}

string VulDetailInfo::GetReference() const
{
    return m_reference;
}

void VulDetailInfo::SetReference(const string& _reference)
{
    m_reference = _reference;
    m_referenceHasBeenSet = true;
}

bool VulDetailInfo::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

double VulDetailInfo::GetCvssScore() const
{
    return m_cvssScore;
}

void VulDetailInfo::SetCvssScore(const double& _cvssScore)
{
    m_cvssScore = _cvssScore;
    m_cvssScoreHasBeenSet = true;
}

bool VulDetailInfo::CvssScoreHasBeenSet() const
{
    return m_cvssScoreHasBeenSet;
}

string VulDetailInfo::GetCvss() const
{
    return m_cvss;
}

void VulDetailInfo::SetCvss(const string& _cvss)
{
    m_cvss = _cvss;
    m_cvssHasBeenSet = true;
}

bool VulDetailInfo::CvssHasBeenSet() const
{
    return m_cvssHasBeenSet;
}

string VulDetailInfo::GetPublishTime() const
{
    return m_publishTime;
}

void VulDetailInfo::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool VulDetailInfo::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

