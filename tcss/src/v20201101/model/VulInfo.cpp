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

#include <tencentcloud/tcss/v20201101/model/VulInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VulInfo::VulInfo() :
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_cVSSV3ScoreHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_cVEIDHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_foundTimeHasBeenSet(false),
    m_latestFoundTimeHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_localImageCountHasBeenSet(false),
    m_containerCountHasBeenSet(false),
    m_registryImageCountHasBeenSet(false),
    m_pocIDHasBeenSet(false),
    m_defenceStatusHasBeenSet(false),
    m_defenceScopeHasBeenSet(false),
    m_defenceHostCountHasBeenSet(false),
    m_defendedCountHasBeenSet(false)
{
}

CoreInternalOutcome VulInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("CVSSV3Score") && !value["CVSSV3Score"].IsNull())
    {
        if (!value["CVSSV3Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.CVSSV3Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cVSSV3Score = value["CVSSV3Score"].GetDouble();
        m_cVSSV3ScoreHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("CVEID") && !value["CVEID"].IsNull())
    {
        if (!value["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(value["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("FoundTime") && !value["FoundTime"].IsNull())
    {
        if (!value["FoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.FoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_foundTime = string(value["FoundTime"].GetString());
        m_foundTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestFoundTime") && !value["LatestFoundTime"].IsNull())
    {
        if (!value["LatestFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.LatestFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFoundTime = string(value["LatestFoundTime"].GetString());
        m_latestFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("LocalImageCount") && !value["LocalImageCount"].IsNull())
    {
        if (!value["LocalImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.LocalImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_localImageCount = value["LocalImageCount"].GetInt64();
        m_localImageCountHasBeenSet = true;
    }

    if (value.HasMember("ContainerCount") && !value["ContainerCount"].IsNull())
    {
        if (!value["ContainerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.ContainerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCount = value["ContainerCount"].GetInt64();
        m_containerCountHasBeenSet = true;
    }

    if (value.HasMember("RegistryImageCount") && !value["RegistryImageCount"].IsNull())
    {
        if (!value["RegistryImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.RegistryImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registryImageCount = value["RegistryImageCount"].GetInt64();
        m_registryImageCountHasBeenSet = true;
    }

    if (value.HasMember("PocID") && !value["PocID"].IsNull())
    {
        if (!value["PocID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.PocID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pocID = string(value["PocID"].GetString());
        m_pocIDHasBeenSet = true;
    }

    if (value.HasMember("DefenceStatus") && !value["DefenceStatus"].IsNull())
    {
        if (!value["DefenceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.DefenceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defenceStatus = string(value["DefenceStatus"].GetString());
        m_defenceStatusHasBeenSet = true;
    }

    if (value.HasMember("DefenceScope") && !value["DefenceScope"].IsNull())
    {
        if (!value["DefenceScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.DefenceScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defenceScope = string(value["DefenceScope"].GetString());
        m_defenceScopeHasBeenSet = true;
    }

    if (value.HasMember("DefenceHostCount") && !value["DefenceHostCount"].IsNull())
    {
        if (!value["DefenceHostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.DefenceHostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defenceHostCount = value["DefenceHostCount"].GetInt64();
        m_defenceHostCountHasBeenSet = true;
    }

    if (value.HasMember("DefendedCount") && !value["DefendedCount"].IsNull())
    {
        if (!value["DefendedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfo.DefendedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defendedCount = value["DefendedCount"].GetInt64();
        m_defendedCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cVSSV3ScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSSV3Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVSSV3Score, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEID.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_foundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_foundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestFoundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFoundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_localImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localImageCount, allocator);
    }

    if (m_containerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCount, allocator);
    }

    if (m_registryImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryImageCount, allocator);
    }

    if (m_pocIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PocID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pocID.c_str(), allocator).Move(), allocator);
    }

    if (m_defenceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defenceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_defenceScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenceScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defenceScope.c_str(), allocator).Move(), allocator);
    }

    if (m_defenceHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenceHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defenceHostCount, allocator);
    }

    if (m_defendedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefendedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defendedCount, allocator);
    }

}


string VulInfo::GetName() const
{
    return m_name;
}

void VulInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VulInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> VulInfo::GetTags() const
{
    return m_tags;
}

void VulInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool VulInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

double VulInfo::GetCVSSV3Score() const
{
    return m_cVSSV3Score;
}

void VulInfo::SetCVSSV3Score(const double& _cVSSV3Score)
{
    m_cVSSV3Score = _cVSSV3Score;
    m_cVSSV3ScoreHasBeenSet = true;
}

bool VulInfo::CVSSV3ScoreHasBeenSet() const
{
    return m_cVSSV3ScoreHasBeenSet;
}

string VulInfo::GetLevel() const
{
    return m_level;
}

void VulInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VulInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string VulInfo::GetCVEID() const
{
    return m_cVEID;
}

void VulInfo::SetCVEID(const string& _cVEID)
{
    m_cVEID = _cVEID;
    m_cVEIDHasBeenSet = true;
}

bool VulInfo::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
}

string VulInfo::GetCategory() const
{
    return m_category;
}

void VulInfo::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool VulInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string VulInfo::GetFoundTime() const
{
    return m_foundTime;
}

void VulInfo::SetFoundTime(const string& _foundTime)
{
    m_foundTime = _foundTime;
    m_foundTimeHasBeenSet = true;
}

bool VulInfo::FoundTimeHasBeenSet() const
{
    return m_foundTimeHasBeenSet;
}

string VulInfo::GetLatestFoundTime() const
{
    return m_latestFoundTime;
}

void VulInfo::SetLatestFoundTime(const string& _latestFoundTime)
{
    m_latestFoundTime = _latestFoundTime;
    m_latestFoundTimeHasBeenSet = true;
}

bool VulInfo::LatestFoundTimeHasBeenSet() const
{
    return m_latestFoundTimeHasBeenSet;
}

int64_t VulInfo::GetID() const
{
    return m_iD;
}

void VulInfo::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool VulInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

int64_t VulInfo::GetLocalImageCount() const
{
    return m_localImageCount;
}

void VulInfo::SetLocalImageCount(const int64_t& _localImageCount)
{
    m_localImageCount = _localImageCount;
    m_localImageCountHasBeenSet = true;
}

bool VulInfo::LocalImageCountHasBeenSet() const
{
    return m_localImageCountHasBeenSet;
}

int64_t VulInfo::GetContainerCount() const
{
    return m_containerCount;
}

void VulInfo::SetContainerCount(const int64_t& _containerCount)
{
    m_containerCount = _containerCount;
    m_containerCountHasBeenSet = true;
}

bool VulInfo::ContainerCountHasBeenSet() const
{
    return m_containerCountHasBeenSet;
}

int64_t VulInfo::GetRegistryImageCount() const
{
    return m_registryImageCount;
}

void VulInfo::SetRegistryImageCount(const int64_t& _registryImageCount)
{
    m_registryImageCount = _registryImageCount;
    m_registryImageCountHasBeenSet = true;
}

bool VulInfo::RegistryImageCountHasBeenSet() const
{
    return m_registryImageCountHasBeenSet;
}

string VulInfo::GetPocID() const
{
    return m_pocID;
}

void VulInfo::SetPocID(const string& _pocID)
{
    m_pocID = _pocID;
    m_pocIDHasBeenSet = true;
}

bool VulInfo::PocIDHasBeenSet() const
{
    return m_pocIDHasBeenSet;
}

string VulInfo::GetDefenceStatus() const
{
    return m_defenceStatus;
}

void VulInfo::SetDefenceStatus(const string& _defenceStatus)
{
    m_defenceStatus = _defenceStatus;
    m_defenceStatusHasBeenSet = true;
}

bool VulInfo::DefenceStatusHasBeenSet() const
{
    return m_defenceStatusHasBeenSet;
}

string VulInfo::GetDefenceScope() const
{
    return m_defenceScope;
}

void VulInfo::SetDefenceScope(const string& _defenceScope)
{
    m_defenceScope = _defenceScope;
    m_defenceScopeHasBeenSet = true;
}

bool VulInfo::DefenceScopeHasBeenSet() const
{
    return m_defenceScopeHasBeenSet;
}

int64_t VulInfo::GetDefenceHostCount() const
{
    return m_defenceHostCount;
}

void VulInfo::SetDefenceHostCount(const int64_t& _defenceHostCount)
{
    m_defenceHostCount = _defenceHostCount;
    m_defenceHostCountHasBeenSet = true;
}

bool VulInfo::DefenceHostCountHasBeenSet() const
{
    return m_defenceHostCountHasBeenSet;
}

int64_t VulInfo::GetDefendedCount() const
{
    return m_defendedCount;
}

void VulInfo::SetDefendedCount(const int64_t& _defendedCount)
{
    m_defendedCount = _defendedCount;
    m_defendedCountHasBeenSet = true;
}

bool VulInfo::DefendedCountHasBeenSet() const
{
    return m_defendedCountHasBeenSet;
}

