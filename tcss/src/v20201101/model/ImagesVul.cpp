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

#include <tencentcloud/tcss/v20201101/model/ImagesVul.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImagesVul::ImagesVul() :
    m_cVEIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_categoryTypeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_desHasBeenSet(false),
    m_officialSolutionHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_defenseSolutionHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_cVSSV3ScoreHasBeenSet(false),
    m_cVSSV3DescHasBeenSet(false),
    m_isSuggestHasBeenSet(false),
    m_fixedVersionsHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_attackLevelHasBeenSet(false)
{
}

CoreInternalOutcome ImagesVul::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CVEID") && !value["CVEID"].IsNull())
    {
        if (!value["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(value["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("CategoryType") && !value["CategoryType"].IsNull())
    {
        if (!value["CategoryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.CategoryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryType = string(value["CategoryType"].GetString());
        m_categoryTypeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Des") && !value["Des"].IsNull())
    {
        if (!value["Des"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.Des` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_des = string(value["Des"].GetString());
        m_desHasBeenSet = true;
    }

    if (value.HasMember("OfficialSolution") && !value["OfficialSolution"].IsNull())
    {
        if (!value["OfficialSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.OfficialSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_officialSolution = string(value["OfficialSolution"].GetString());
        m_officialSolutionHasBeenSet = true;
    }

    if (value.HasMember("Reference") && !value["Reference"].IsNull())
    {
        if (!value["Reference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.Reference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reference = string(value["Reference"].GetString());
        m_referenceHasBeenSet = true;
    }

    if (value.HasMember("DefenseSolution") && !value["DefenseSolution"].IsNull())
    {
        if (!value["DefenseSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.DefenseSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defenseSolution = string(value["DefenseSolution"].GetString());
        m_defenseSolutionHasBeenSet = true;
    }

    if (value.HasMember("SubmitTime") && !value["SubmitTime"].IsNull())
    {
        if (!value["SubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.SubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitTime = string(value["SubmitTime"].GetString());
        m_submitTimeHasBeenSet = true;
    }

    if (value.HasMember("CVSSV3Score") && !value["CVSSV3Score"].IsNull())
    {
        if (!value["CVSSV3Score"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.CVSSV3Score` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cVSSV3Score = value["CVSSV3Score"].GetDouble();
        m_cVSSV3ScoreHasBeenSet = true;
    }

    if (value.HasMember("CVSSV3Desc") && !value["CVSSV3Desc"].IsNull())
    {
        if (!value["CVSSV3Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.CVSSV3Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVSSV3Desc = string(value["CVSSV3Desc"].GetString());
        m_cVSSV3DescHasBeenSet = true;
    }

    if (value.HasMember("IsSuggest") && !value["IsSuggest"].IsNull())
    {
        if (!value["IsSuggest"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.IsSuggest` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isSuggest = value["IsSuggest"].GetBool();
        m_isSuggestHasBeenSet = true;
    }

    if (value.HasMember("FixedVersions") && !value["FixedVersions"].IsNull())
    {
        if (!value["FixedVersions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.FixedVersions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixedVersions = string(value["FixedVersions"].GetString());
        m_fixedVersionsHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImagesVul.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tag.push_back((*itr).GetString());
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("AttackLevel") && !value["AttackLevel"].IsNull())
    {
        if (!value["AttackLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImagesVul.AttackLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackLevel = value["AttackLevel"].GetInt64();
        m_attackLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImagesVul::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_componentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Component";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_component.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_desHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Des";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_des.c_str(), allocator).Move(), allocator);
    }

    if (m_officialSolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfficialSolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_officialSolution.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reference.c_str(), allocator).Move(), allocator);
    }

    if (m_defenseSolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenseSolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_defenseSolution.c_str(), allocator).Move(), allocator);
    }

    if (m_submitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cVSSV3ScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSSV3Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVSSV3Score, allocator);
    }

    if (m_cVSSV3DescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSSV3Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVSSV3Desc.c_str(), allocator).Move(), allocator);
    }

    if (m_isSuggestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSuggest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSuggest, allocator);
    }

    if (m_fixedVersionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixedVersions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixedVersions.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_attackLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackLevel, allocator);
    }

}


string ImagesVul::GetCVEID() const
{
    return m_cVEID;
}

void ImagesVul::SetCVEID(const string& _cVEID)
{
    m_cVEID = _cVEID;
    m_cVEIDHasBeenSet = true;
}

bool ImagesVul::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
}

string ImagesVul::GetName() const
{
    return m_name;
}

void ImagesVul::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImagesVul::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImagesVul::GetComponent() const
{
    return m_component;
}

void ImagesVul::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool ImagesVul::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

string ImagesVul::GetVersion() const
{
    return m_version;
}

void ImagesVul::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ImagesVul::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string ImagesVul::GetCategory() const
{
    return m_category;
}

void ImagesVul::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ImagesVul::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string ImagesVul::GetCategoryType() const
{
    return m_categoryType;
}

void ImagesVul::SetCategoryType(const string& _categoryType)
{
    m_categoryType = _categoryType;
    m_categoryTypeHasBeenSet = true;
}

bool ImagesVul::CategoryTypeHasBeenSet() const
{
    return m_categoryTypeHasBeenSet;
}

uint64_t ImagesVul::GetLevel() const
{
    return m_level;
}

void ImagesVul::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ImagesVul::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string ImagesVul::GetDes() const
{
    return m_des;
}

void ImagesVul::SetDes(const string& _des)
{
    m_des = _des;
    m_desHasBeenSet = true;
}

bool ImagesVul::DesHasBeenSet() const
{
    return m_desHasBeenSet;
}

string ImagesVul::GetOfficialSolution() const
{
    return m_officialSolution;
}

void ImagesVul::SetOfficialSolution(const string& _officialSolution)
{
    m_officialSolution = _officialSolution;
    m_officialSolutionHasBeenSet = true;
}

bool ImagesVul::OfficialSolutionHasBeenSet() const
{
    return m_officialSolutionHasBeenSet;
}

string ImagesVul::GetReference() const
{
    return m_reference;
}

void ImagesVul::SetReference(const string& _reference)
{
    m_reference = _reference;
    m_referenceHasBeenSet = true;
}

bool ImagesVul::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

string ImagesVul::GetDefenseSolution() const
{
    return m_defenseSolution;
}

void ImagesVul::SetDefenseSolution(const string& _defenseSolution)
{
    m_defenseSolution = _defenseSolution;
    m_defenseSolutionHasBeenSet = true;
}

bool ImagesVul::DefenseSolutionHasBeenSet() const
{
    return m_defenseSolutionHasBeenSet;
}

string ImagesVul::GetSubmitTime() const
{
    return m_submitTime;
}

void ImagesVul::SetSubmitTime(const string& _submitTime)
{
    m_submitTime = _submitTime;
    m_submitTimeHasBeenSet = true;
}

bool ImagesVul::SubmitTimeHasBeenSet() const
{
    return m_submitTimeHasBeenSet;
}

double ImagesVul::GetCVSSV3Score() const
{
    return m_cVSSV3Score;
}

void ImagesVul::SetCVSSV3Score(const double& _cVSSV3Score)
{
    m_cVSSV3Score = _cVSSV3Score;
    m_cVSSV3ScoreHasBeenSet = true;
}

bool ImagesVul::CVSSV3ScoreHasBeenSet() const
{
    return m_cVSSV3ScoreHasBeenSet;
}

string ImagesVul::GetCVSSV3Desc() const
{
    return m_cVSSV3Desc;
}

void ImagesVul::SetCVSSV3Desc(const string& _cVSSV3Desc)
{
    m_cVSSV3Desc = _cVSSV3Desc;
    m_cVSSV3DescHasBeenSet = true;
}

bool ImagesVul::CVSSV3DescHasBeenSet() const
{
    return m_cVSSV3DescHasBeenSet;
}

bool ImagesVul::GetIsSuggest() const
{
    return m_isSuggest;
}

void ImagesVul::SetIsSuggest(const bool& _isSuggest)
{
    m_isSuggest = _isSuggest;
    m_isSuggestHasBeenSet = true;
}

bool ImagesVul::IsSuggestHasBeenSet() const
{
    return m_isSuggestHasBeenSet;
}

string ImagesVul::GetFixedVersions() const
{
    return m_fixedVersions;
}

void ImagesVul::SetFixedVersions(const string& _fixedVersions)
{
    m_fixedVersions = _fixedVersions;
    m_fixedVersionsHasBeenSet = true;
}

bool ImagesVul::FixedVersionsHasBeenSet() const
{
    return m_fixedVersionsHasBeenSet;
}

vector<string> ImagesVul::GetTag() const
{
    return m_tag;
}

void ImagesVul::SetTag(const vector<string>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool ImagesVul::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

int64_t ImagesVul::GetAttackLevel() const
{
    return m_attackLevel;
}

void ImagesVul::SetAttackLevel(const int64_t& _attackLevel)
{
    m_attackLevel = _attackLevel;
    m_attackLevelHasBeenSet = true;
}

bool ImagesVul::AttackLevelHasBeenSet() const
{
    return m_attackLevelHasBeenSet;
}

