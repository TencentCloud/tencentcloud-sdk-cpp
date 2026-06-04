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

#include <tencentcloud/adp/v20260520/model/SkillSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SkillSummary::SkillSummary() :
    m_classificationInfoHasBeenSet(false),
    m_currentVersionInfoHasBeenSet(false),
    m_isFavoriteHasBeenSet(false),
    m_profileHasBeenSet(false),
    m_skillIdHasBeenSet(false),
    m_shareListHasBeenSet(false)
{
}

CoreInternalOutcome SkillSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClassificationInfo") && !value["ClassificationInfo"].IsNull())
    {
        if (!value["ClassificationInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SkillSummary.ClassificationInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_classificationInfo.Deserialize(value["ClassificationInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_classificationInfoHasBeenSet = true;
    }

    if (value.HasMember("CurrentVersionInfo") && !value["CurrentVersionInfo"].IsNull())
    {
        if (!value["CurrentVersionInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SkillSummary.CurrentVersionInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_currentVersionInfo.Deserialize(value["CurrentVersionInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_currentVersionInfoHasBeenSet = true;
    }

    if (value.HasMember("IsFavorite") && !value["IsFavorite"].IsNull())
    {
        if (!value["IsFavorite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SkillSummary.IsFavorite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFavorite = value["IsFavorite"].GetBool();
        m_isFavoriteHasBeenSet = true;
    }

    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SkillSummary.Profile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_profile.Deserialize(value["Profile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_profileHasBeenSet = true;
    }

    if (value.HasMember("SkillId") && !value["SkillId"].IsNull())
    {
        if (!value["SkillId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillSummary.SkillId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillId = string(value["SkillId"].GetString());
        m_skillIdHasBeenSet = true;
    }

    if (value.HasMember("ShareList") && !value["ShareList"].IsNull())
    {
        if (!value["ShareList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SkillSummary.ShareList` is not array type"));

        const rapidjson::Value &tmpValue = value["ShareList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SkillShare item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_shareList.push_back(item);
        }
        m_shareListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_classificationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_classificationInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_currentVersionInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentVersionInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_currentVersionInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isFavoriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFavorite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFavorite, allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_skillIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillId.c_str(), allocator).Move(), allocator);
    }

    if (m_shareListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_shareList.begin(); itr != m_shareList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


SkillClassification SkillSummary::GetClassificationInfo() const
{
    return m_classificationInfo;
}

void SkillSummary::SetClassificationInfo(const SkillClassification& _classificationInfo)
{
    m_classificationInfo = _classificationInfo;
    m_classificationInfoHasBeenSet = true;
}

bool SkillSummary::ClassificationInfoHasBeenSet() const
{
    return m_classificationInfoHasBeenSet;
}

SkillVersion SkillSummary::GetCurrentVersionInfo() const
{
    return m_currentVersionInfo;
}

void SkillSummary::SetCurrentVersionInfo(const SkillVersion& _currentVersionInfo)
{
    m_currentVersionInfo = _currentVersionInfo;
    m_currentVersionInfoHasBeenSet = true;
}

bool SkillSummary::CurrentVersionInfoHasBeenSet() const
{
    return m_currentVersionInfoHasBeenSet;
}

bool SkillSummary::GetIsFavorite() const
{
    return m_isFavorite;
}

void SkillSummary::SetIsFavorite(const bool& _isFavorite)
{
    m_isFavorite = _isFavorite;
    m_isFavoriteHasBeenSet = true;
}

bool SkillSummary::IsFavoriteHasBeenSet() const
{
    return m_isFavoriteHasBeenSet;
}

SkillProfile SkillSummary::GetProfile() const
{
    return m_profile;
}

void SkillSummary::SetProfile(const SkillProfile& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool SkillSummary::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

string SkillSummary::GetSkillId() const
{
    return m_skillId;
}

void SkillSummary::SetSkillId(const string& _skillId)
{
    m_skillId = _skillId;
    m_skillIdHasBeenSet = true;
}

bool SkillSummary::SkillIdHasBeenSet() const
{
    return m_skillIdHasBeenSet;
}

vector<SkillShare> SkillSummary::GetShareList() const
{
    return m_shareList;
}

void SkillSummary::SetShareList(const vector<SkillShare>& _shareList)
{
    m_shareList = _shareList;
    m_shareListHasBeenSet = true;
}

bool SkillSummary::ShareListHasBeenSet() const
{
    return m_shareListHasBeenSet;
}

