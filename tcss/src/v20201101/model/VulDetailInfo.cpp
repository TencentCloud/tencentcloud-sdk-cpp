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

#include <tencentcloud/tcss/v20201101/model/VulDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VulDetailInfo::VulDetailInfo() :
    m_cVEIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_categoryTypeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_cVSSV3DescHasBeenSet(false),
    m_officialSolutionHasBeenSet(false),
    m_defenseSolutionHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_cVSSV3ScoreHasBeenSet(false),
    m_componentListHasBeenSet(false),
    m_localImageCountHasBeenSet(false),
    m_containerCountHasBeenSet(false),
    m_registryImageCountHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_localNewestImageCountHasBeenSet(false),
    m_registryNewestImageCountHasBeenSet(false),
    m_pocIDHasBeenSet(false),
    m_defenceStatusHasBeenSet(false),
    m_defenceScopeHasBeenSet(false),
    m_defenceHostCountHasBeenSet(false),
    m_defendedCountHasBeenSet(false),
    m_scanStatusHasBeenSet(false)
{
}

CoreInternalOutcome VulDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CVEID") && !value["CVEID"].IsNull())
    {
        if (!value["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(value["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
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

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("CategoryType") && !value["CategoryType"].IsNull())
    {
        if (!value["CategoryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.CategoryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryType = string(value["CategoryType"].GetString());
        m_categoryTypeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("SubmitTime") && !value["SubmitTime"].IsNull())
    {
        if (!value["SubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.SubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitTime = string(value["SubmitTime"].GetString());
        m_submitTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CVSSV3Desc") && !value["CVSSV3Desc"].IsNull())
    {
        if (!value["CVSSV3Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.CVSSV3Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVSSV3Desc = string(value["CVSSV3Desc"].GetString());
        m_cVSSV3DescHasBeenSet = true;
    }

    if (value.HasMember("OfficialSolution") && !value["OfficialSolution"].IsNull())
    {
        if (!value["OfficialSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.OfficialSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_officialSolution = string(value["OfficialSolution"].GetString());
        m_officialSolutionHasBeenSet = true;
    }

    if (value.HasMember("DefenseSolution") && !value["DefenseSolution"].IsNull())
    {
        if (!value["DefenseSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.DefenseSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defenseSolution = string(value["DefenseSolution"].GetString());
        m_defenseSolutionHasBeenSet = true;
    }

    if (value.HasMember("Reference") && !value["Reference"].IsNull())
    {
        if (!value["Reference"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Reference` is not array type"));

        const rapidjson::Value &tmpValue = value["Reference"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reference.push_back((*itr).GetString());
        }
        m_referenceHasBeenSet = true;
    }

    if (value.HasMember("CVSSV3Score") && !value["CVSSV3Score"].IsNull())
    {
        if (!value["CVSSV3Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.CVSSV3Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cVSSV3Score = value["CVSSV3Score"].GetDouble();
        m_cVSSV3ScoreHasBeenSet = true;
    }

    if (value.HasMember("ComponentList") && !value["ComponentList"].IsNull())
    {
        if (!value["ComponentList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.ComponentList` is not array type"));

        const rapidjson::Value &tmpValue = value["ComponentList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VulAffectedComponentInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_componentList.push_back(item);
        }
        m_componentListHasBeenSet = true;
    }

    if (value.HasMember("LocalImageCount") && !value["LocalImageCount"].IsNull())
    {
        if (!value["LocalImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.LocalImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_localImageCount = value["LocalImageCount"].GetInt64();
        m_localImageCountHasBeenSet = true;
    }

    if (value.HasMember("ContainerCount") && !value["ContainerCount"].IsNull())
    {
        if (!value["ContainerCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.ContainerCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCount = value["ContainerCount"].GetInt64();
        m_containerCountHasBeenSet = true;
    }

    if (value.HasMember("RegistryImageCount") && !value["RegistryImageCount"].IsNull())
    {
        if (!value["RegistryImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.RegistryImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registryImageCount = value["RegistryImageCount"].GetInt64();
        m_registryImageCountHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("LocalNewestImageCount") && !value["LocalNewestImageCount"].IsNull())
    {
        if (!value["LocalNewestImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.LocalNewestImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_localNewestImageCount = value["LocalNewestImageCount"].GetInt64();
        m_localNewestImageCountHasBeenSet = true;
    }

    if (value.HasMember("RegistryNewestImageCount") && !value["RegistryNewestImageCount"].IsNull())
    {
        if (!value["RegistryNewestImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.RegistryNewestImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_registryNewestImageCount = value["RegistryNewestImageCount"].GetInt64();
        m_registryNewestImageCountHasBeenSet = true;
    }

    if (value.HasMember("PocID") && !value["PocID"].IsNull())
    {
        if (!value["PocID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.PocID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pocID = string(value["PocID"].GetString());
        m_pocIDHasBeenSet = true;
    }

    if (value.HasMember("DefenceStatus") && !value["DefenceStatus"].IsNull())
    {
        if (!value["DefenceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.DefenceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defenceStatus = string(value["DefenceStatus"].GetString());
        m_defenceStatusHasBeenSet = true;
    }

    if (value.HasMember("DefenceScope") && !value["DefenceScope"].IsNull())
    {
        if (!value["DefenceScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.DefenceScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defenceScope = string(value["DefenceScope"].GetString());
        m_defenceScopeHasBeenSet = true;
    }

    if (value.HasMember("DefenceHostCount") && !value["DefenceHostCount"].IsNull())
    {
        if (!value["DefenceHostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.DefenceHostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defenceHostCount = value["DefenceHostCount"].GetInt64();
        m_defenceHostCountHasBeenSet = true;
    }

    if (value.HasMember("DefendedCount") && !value["DefendedCount"].IsNull())
    {
        if (!value["DefendedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.DefendedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defendedCount = value["DefendedCount"].GetInt64();
        m_defendedCountHasBeenSet = true;
    }

    if (value.HasMember("ScanStatus") && !value["ScanStatus"].IsNull())
    {
        if (!value["ScanStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDetailInfo.ScanStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanStatus = string(value["ScanStatus"].GetString());
        m_scanStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cVEIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEID.c_str(), allocator).Move(), allocator);
    }

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

    if (m_categoryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_categoryType.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_submitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_cVSSV3DescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSSV3Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVSSV3Desc.c_str(), allocator).Move(), allocator);
    }

    if (m_officialSolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfficialSolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_officialSolution.c_str(), allocator).Move(), allocator);
    }

    if (m_defenseSolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenseSolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defenseSolution.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reference.begin(); itr != m_reference.end(); ++itr)
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

    if (m_componentListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_componentList.begin(); itr != m_componentList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_localNewestImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalNewestImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_localNewestImageCount, allocator);
    }

    if (m_registryNewestImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryNewestImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_registryNewestImageCount, allocator);
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

    if (m_scanStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanStatus.c_str(), allocator).Move(), allocator);
    }

}


string VulDetailInfo::GetCVEID() const
{
    return m_cVEID;
}

void VulDetailInfo::SetCVEID(const string& _cVEID)
{
    m_cVEID = _cVEID;
    m_cVEIDHasBeenSet = true;
}

bool VulDetailInfo::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
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

vector<string> VulDetailInfo::GetTags() const
{
    return m_tags;
}

void VulDetailInfo::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool VulDetailInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string VulDetailInfo::GetCategoryType() const
{
    return m_categoryType;
}

void VulDetailInfo::SetCategoryType(const string& _categoryType)
{
    m_categoryType = _categoryType;
    m_categoryTypeHasBeenSet = true;
}

bool VulDetailInfo::CategoryTypeHasBeenSet() const
{
    return m_categoryTypeHasBeenSet;
}

string VulDetailInfo::GetLevel() const
{
    return m_level;
}

void VulDetailInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VulDetailInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string VulDetailInfo::GetSubmitTime() const
{
    return m_submitTime;
}

void VulDetailInfo::SetSubmitTime(const string& _submitTime)
{
    m_submitTime = _submitTime;
    m_submitTimeHasBeenSet = true;
}

bool VulDetailInfo::SubmitTimeHasBeenSet() const
{
    return m_submitTimeHasBeenSet;
}

string VulDetailInfo::GetDescription() const
{
    return m_description;
}

void VulDetailInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool VulDetailInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string VulDetailInfo::GetCVSSV3Desc() const
{
    return m_cVSSV3Desc;
}

void VulDetailInfo::SetCVSSV3Desc(const string& _cVSSV3Desc)
{
    m_cVSSV3Desc = _cVSSV3Desc;
    m_cVSSV3DescHasBeenSet = true;
}

bool VulDetailInfo::CVSSV3DescHasBeenSet() const
{
    return m_cVSSV3DescHasBeenSet;
}

string VulDetailInfo::GetOfficialSolution() const
{
    return m_officialSolution;
}

void VulDetailInfo::SetOfficialSolution(const string& _officialSolution)
{
    m_officialSolution = _officialSolution;
    m_officialSolutionHasBeenSet = true;
}

bool VulDetailInfo::OfficialSolutionHasBeenSet() const
{
    return m_officialSolutionHasBeenSet;
}

string VulDetailInfo::GetDefenseSolution() const
{
    return m_defenseSolution;
}

void VulDetailInfo::SetDefenseSolution(const string& _defenseSolution)
{
    m_defenseSolution = _defenseSolution;
    m_defenseSolutionHasBeenSet = true;
}

bool VulDetailInfo::DefenseSolutionHasBeenSet() const
{
    return m_defenseSolutionHasBeenSet;
}

vector<string> VulDetailInfo::GetReference() const
{
    return m_reference;
}

void VulDetailInfo::SetReference(const vector<string>& _reference)
{
    m_reference = _reference;
    m_referenceHasBeenSet = true;
}

bool VulDetailInfo::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

double VulDetailInfo::GetCVSSV3Score() const
{
    return m_cVSSV3Score;
}

void VulDetailInfo::SetCVSSV3Score(const double& _cVSSV3Score)
{
    m_cVSSV3Score = _cVSSV3Score;
    m_cVSSV3ScoreHasBeenSet = true;
}

bool VulDetailInfo::CVSSV3ScoreHasBeenSet() const
{
    return m_cVSSV3ScoreHasBeenSet;
}

vector<VulAffectedComponentInfo> VulDetailInfo::GetComponentList() const
{
    return m_componentList;
}

void VulDetailInfo::SetComponentList(const vector<VulAffectedComponentInfo>& _componentList)
{
    m_componentList = _componentList;
    m_componentListHasBeenSet = true;
}

bool VulDetailInfo::ComponentListHasBeenSet() const
{
    return m_componentListHasBeenSet;
}

int64_t VulDetailInfo::GetLocalImageCount() const
{
    return m_localImageCount;
}

void VulDetailInfo::SetLocalImageCount(const int64_t& _localImageCount)
{
    m_localImageCount = _localImageCount;
    m_localImageCountHasBeenSet = true;
}

bool VulDetailInfo::LocalImageCountHasBeenSet() const
{
    return m_localImageCountHasBeenSet;
}

int64_t VulDetailInfo::GetContainerCount() const
{
    return m_containerCount;
}

void VulDetailInfo::SetContainerCount(const int64_t& _containerCount)
{
    m_containerCount = _containerCount;
    m_containerCountHasBeenSet = true;
}

bool VulDetailInfo::ContainerCountHasBeenSet() const
{
    return m_containerCountHasBeenSet;
}

int64_t VulDetailInfo::GetRegistryImageCount() const
{
    return m_registryImageCount;
}

void VulDetailInfo::SetRegistryImageCount(const int64_t& _registryImageCount)
{
    m_registryImageCount = _registryImageCount;
    m_registryImageCountHasBeenSet = true;
}

bool VulDetailInfo::RegistryImageCountHasBeenSet() const
{
    return m_registryImageCountHasBeenSet;
}

string VulDetailInfo::GetCategory() const
{
    return m_category;
}

void VulDetailInfo::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool VulDetailInfo::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

int64_t VulDetailInfo::GetLocalNewestImageCount() const
{
    return m_localNewestImageCount;
}

void VulDetailInfo::SetLocalNewestImageCount(const int64_t& _localNewestImageCount)
{
    m_localNewestImageCount = _localNewestImageCount;
    m_localNewestImageCountHasBeenSet = true;
}

bool VulDetailInfo::LocalNewestImageCountHasBeenSet() const
{
    return m_localNewestImageCountHasBeenSet;
}

int64_t VulDetailInfo::GetRegistryNewestImageCount() const
{
    return m_registryNewestImageCount;
}

void VulDetailInfo::SetRegistryNewestImageCount(const int64_t& _registryNewestImageCount)
{
    m_registryNewestImageCount = _registryNewestImageCount;
    m_registryNewestImageCountHasBeenSet = true;
}

bool VulDetailInfo::RegistryNewestImageCountHasBeenSet() const
{
    return m_registryNewestImageCountHasBeenSet;
}

string VulDetailInfo::GetPocID() const
{
    return m_pocID;
}

void VulDetailInfo::SetPocID(const string& _pocID)
{
    m_pocID = _pocID;
    m_pocIDHasBeenSet = true;
}

bool VulDetailInfo::PocIDHasBeenSet() const
{
    return m_pocIDHasBeenSet;
}

string VulDetailInfo::GetDefenceStatus() const
{
    return m_defenceStatus;
}

void VulDetailInfo::SetDefenceStatus(const string& _defenceStatus)
{
    m_defenceStatus = _defenceStatus;
    m_defenceStatusHasBeenSet = true;
}

bool VulDetailInfo::DefenceStatusHasBeenSet() const
{
    return m_defenceStatusHasBeenSet;
}

string VulDetailInfo::GetDefenceScope() const
{
    return m_defenceScope;
}

void VulDetailInfo::SetDefenceScope(const string& _defenceScope)
{
    m_defenceScope = _defenceScope;
    m_defenceScopeHasBeenSet = true;
}

bool VulDetailInfo::DefenceScopeHasBeenSet() const
{
    return m_defenceScopeHasBeenSet;
}

int64_t VulDetailInfo::GetDefenceHostCount() const
{
    return m_defenceHostCount;
}

void VulDetailInfo::SetDefenceHostCount(const int64_t& _defenceHostCount)
{
    m_defenceHostCount = _defenceHostCount;
    m_defenceHostCountHasBeenSet = true;
}

bool VulDetailInfo::DefenceHostCountHasBeenSet() const
{
    return m_defenceHostCountHasBeenSet;
}

int64_t VulDetailInfo::GetDefendedCount() const
{
    return m_defendedCount;
}

void VulDetailInfo::SetDefendedCount(const int64_t& _defendedCount)
{
    m_defendedCount = _defendedCount;
    m_defendedCountHasBeenSet = true;
}

bool VulDetailInfo::DefendedCountHasBeenSet() const
{
    return m_defendedCountHasBeenSet;
}

string VulDetailInfo::GetScanStatus() const
{
    return m_scanStatus;
}

void VulDetailInfo::SetScanStatus(const string& _scanStatus)
{
    m_scanStatus = _scanStatus;
    m_scanStatusHasBeenSet = true;
}

bool VulDetailInfo::ScanStatusHasBeenSet() const
{
    return m_scanStatusHasBeenSet;
}

