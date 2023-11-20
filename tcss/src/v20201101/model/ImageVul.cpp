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

#include <tencentcloud/tcss/v20201101/model/ImageVul.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImageVul::ImageVul() :
    m_cVEIDHasBeenSet(false),
    m_pOCIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_componentsHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_categoryTypeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_desHasBeenSet(false),
    m_officialSolutionHasBeenSet(false),
    m_referenceHasBeenSet(false),
    m_defenseSolutionHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_cvssScoreHasBeenSet(false),
    m_cvssVectorHasBeenSet(false),
    m_isSuggestHasBeenSet(false),
    m_fixedVersionsHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_attackLevelHasBeenSet(false),
    m_layerInfosHasBeenSet(false)
{
}

CoreInternalOutcome ImageVul::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CVEID") && !value["CVEID"].IsNull())
    {
        if (!value["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(value["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
    }

    if (value.HasMember("POCID") && !value["POCID"].IsNull())
    {
        if (!value["POCID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.POCID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pOCID = string(value["POCID"].GetString());
        m_pOCIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Components") && !value["Components"].IsNull())
    {
        if (!value["Components"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageVul.Components` is not array type"));

        const rapidjson::Value &tmpValue = value["Components"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComponentsInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_components.push_back(item);
        }
        m_componentsHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("CategoryType") && !value["CategoryType"].IsNull())
    {
        if (!value["CategoryType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.CategoryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_categoryType = string(value["CategoryType"].GetString());
        m_categoryTypeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Des") && !value["Des"].IsNull())
    {
        if (!value["Des"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.Des` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_des = string(value["Des"].GetString());
        m_desHasBeenSet = true;
    }

    if (value.HasMember("OfficialSolution") && !value["OfficialSolution"].IsNull())
    {
        if (!value["OfficialSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.OfficialSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_officialSolution = string(value["OfficialSolution"].GetString());
        m_officialSolutionHasBeenSet = true;
    }

    if (value.HasMember("Reference") && !value["Reference"].IsNull())
    {
        if (!value["Reference"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.Reference` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reference = string(value["Reference"].GetString());
        m_referenceHasBeenSet = true;
    }

    if (value.HasMember("DefenseSolution") && !value["DefenseSolution"].IsNull())
    {
        if (!value["DefenseSolution"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.DefenseSolution` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_defenseSolution = string(value["DefenseSolution"].GetString());
        m_defenseSolutionHasBeenSet = true;
    }

    if (value.HasMember("SubmitTime") && !value["SubmitTime"].IsNull())
    {
        if (!value["SubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.SubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitTime = string(value["SubmitTime"].GetString());
        m_submitTimeHasBeenSet = true;
    }

    if (value.HasMember("CvssScore") && !value["CvssScore"].IsNull())
    {
        if (!value["CvssScore"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.CvssScore` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvssScore = string(value["CvssScore"].GetString());
        m_cvssScoreHasBeenSet = true;
    }

    if (value.HasMember("CvssVector") && !value["CvssVector"].IsNull())
    {
        if (!value["CvssVector"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.CvssVector` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cvssVector = string(value["CvssVector"].GetString());
        m_cvssVectorHasBeenSet = true;
    }

    if (value.HasMember("IsSuggest") && !value["IsSuggest"].IsNull())
    {
        if (!value["IsSuggest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.IsSuggest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isSuggest = string(value["IsSuggest"].GetString());
        m_isSuggestHasBeenSet = true;
    }

    if (value.HasMember("FixedVersions") && !value["FixedVersions"].IsNull())
    {
        if (!value["FixedVersions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.FixedVersions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixedVersions = string(value["FixedVersions"].GetString());
        m_fixedVersionsHasBeenSet = true;
    }

    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageVul.Tag` is not array type"));

        const rapidjson::Value &tmpValue = value["Tag"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tag.push_back((*itr).GetString());
        }
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Component") && !value["Component"].IsNull())
    {
        if (!value["Component"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.Component` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_component = string(value["Component"].GetString());
        m_componentHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("AttackLevel") && !value["AttackLevel"].IsNull())
    {
        if (!value["AttackLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVul.AttackLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackLevel = value["AttackLevel"].GetInt64();
        m_attackLevelHasBeenSet = true;
    }

    if (value.HasMember("LayerInfos") && !value["LayerInfos"].IsNull())
    {
        if (!value["LayerInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageVul.LayerInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["LayerInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ImageVulLayerInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_layerInfos.push_back(item);
        }
        m_layerInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageVul::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cVEIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEID.c_str(), allocator).Move(), allocator);
    }

    if (m_pOCIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "POCID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pOCID.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_componentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Components";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_components.begin(); itr != m_components.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
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

    if (m_cvssScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvssScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvssScore.c_str(), allocator).Move(), allocator);
    }

    if (m_cvssVectorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvssVector";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cvssVector.c_str(), allocator).Move(), allocator);
    }

    if (m_isSuggestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSuggest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isSuggest.c_str(), allocator).Move(), allocator);
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

    if (m_attackLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackLevel, allocator);
    }

    if (m_layerInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_layerInfos.begin(); itr != m_layerInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ImageVul::GetCVEID() const
{
    return m_cVEID;
}

void ImageVul::SetCVEID(const string& _cVEID)
{
    m_cVEID = _cVEID;
    m_cVEIDHasBeenSet = true;
}

bool ImageVul::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
}

string ImageVul::GetPOCID() const
{
    return m_pOCID;
}

void ImageVul::SetPOCID(const string& _pOCID)
{
    m_pOCID = _pOCID;
    m_pOCIDHasBeenSet = true;
}

bool ImageVul::POCIDHasBeenSet() const
{
    return m_pOCIDHasBeenSet;
}

string ImageVul::GetName() const
{
    return m_name;
}

void ImageVul::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImageVul::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<ComponentsInfo> ImageVul::GetComponents() const
{
    return m_components;
}

void ImageVul::SetComponents(const vector<ComponentsInfo>& _components)
{
    m_components = _components;
    m_componentsHasBeenSet = true;
}

bool ImageVul::ComponentsHasBeenSet() const
{
    return m_componentsHasBeenSet;
}

string ImageVul::GetCategory() const
{
    return m_category;
}

void ImageVul::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ImageVul::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string ImageVul::GetCategoryType() const
{
    return m_categoryType;
}

void ImageVul::SetCategoryType(const string& _categoryType)
{
    m_categoryType = _categoryType;
    m_categoryTypeHasBeenSet = true;
}

bool ImageVul::CategoryTypeHasBeenSet() const
{
    return m_categoryTypeHasBeenSet;
}

string ImageVul::GetLevel() const
{
    return m_level;
}

void ImageVul::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ImageVul::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string ImageVul::GetDes() const
{
    return m_des;
}

void ImageVul::SetDes(const string& _des)
{
    m_des = _des;
    m_desHasBeenSet = true;
}

bool ImageVul::DesHasBeenSet() const
{
    return m_desHasBeenSet;
}

string ImageVul::GetOfficialSolution() const
{
    return m_officialSolution;
}

void ImageVul::SetOfficialSolution(const string& _officialSolution)
{
    m_officialSolution = _officialSolution;
    m_officialSolutionHasBeenSet = true;
}

bool ImageVul::OfficialSolutionHasBeenSet() const
{
    return m_officialSolutionHasBeenSet;
}

string ImageVul::GetReference() const
{
    return m_reference;
}

void ImageVul::SetReference(const string& _reference)
{
    m_reference = _reference;
    m_referenceHasBeenSet = true;
}

bool ImageVul::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

string ImageVul::GetDefenseSolution() const
{
    return m_defenseSolution;
}

void ImageVul::SetDefenseSolution(const string& _defenseSolution)
{
    m_defenseSolution = _defenseSolution;
    m_defenseSolutionHasBeenSet = true;
}

bool ImageVul::DefenseSolutionHasBeenSet() const
{
    return m_defenseSolutionHasBeenSet;
}

string ImageVul::GetSubmitTime() const
{
    return m_submitTime;
}

void ImageVul::SetSubmitTime(const string& _submitTime)
{
    m_submitTime = _submitTime;
    m_submitTimeHasBeenSet = true;
}

bool ImageVul::SubmitTimeHasBeenSet() const
{
    return m_submitTimeHasBeenSet;
}

string ImageVul::GetCvssScore() const
{
    return m_cvssScore;
}

void ImageVul::SetCvssScore(const string& _cvssScore)
{
    m_cvssScore = _cvssScore;
    m_cvssScoreHasBeenSet = true;
}

bool ImageVul::CvssScoreHasBeenSet() const
{
    return m_cvssScoreHasBeenSet;
}

string ImageVul::GetCvssVector() const
{
    return m_cvssVector;
}

void ImageVul::SetCvssVector(const string& _cvssVector)
{
    m_cvssVector = _cvssVector;
    m_cvssVectorHasBeenSet = true;
}

bool ImageVul::CvssVectorHasBeenSet() const
{
    return m_cvssVectorHasBeenSet;
}

string ImageVul::GetIsSuggest() const
{
    return m_isSuggest;
}

void ImageVul::SetIsSuggest(const string& _isSuggest)
{
    m_isSuggest = _isSuggest;
    m_isSuggestHasBeenSet = true;
}

bool ImageVul::IsSuggestHasBeenSet() const
{
    return m_isSuggestHasBeenSet;
}

string ImageVul::GetFixedVersions() const
{
    return m_fixedVersions;
}

void ImageVul::SetFixedVersions(const string& _fixedVersions)
{
    m_fixedVersions = _fixedVersions;
    m_fixedVersionsHasBeenSet = true;
}

bool ImageVul::FixedVersionsHasBeenSet() const
{
    return m_fixedVersionsHasBeenSet;
}

vector<string> ImageVul::GetTag() const
{
    return m_tag;
}

void ImageVul::SetTag(const vector<string>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool ImageVul::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

string ImageVul::GetComponent() const
{
    return m_component;
}

void ImageVul::SetComponent(const string& _component)
{
    m_component = _component;
    m_componentHasBeenSet = true;
}

bool ImageVul::ComponentHasBeenSet() const
{
    return m_componentHasBeenSet;
}

string ImageVul::GetVersion() const
{
    return m_version;
}

void ImageVul::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ImageVul::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

int64_t ImageVul::GetAttackLevel() const
{
    return m_attackLevel;
}

void ImageVul::SetAttackLevel(const int64_t& _attackLevel)
{
    m_attackLevel = _attackLevel;
    m_attackLevelHasBeenSet = true;
}

bool ImageVul::AttackLevelHasBeenSet() const
{
    return m_attackLevelHasBeenSet;
}

vector<ImageVulLayerInfo> ImageVul::GetLayerInfos() const
{
    return m_layerInfos;
}

void ImageVul::SetLayerInfos(const vector<ImageVulLayerInfo>& _layerInfos)
{
    m_layerInfos = _layerInfos;
    m_layerInfosHasBeenSet = true;
}

bool ImageVul::LayerInfosHasBeenSet() const
{
    return m_layerInfosHasBeenSet;
}

