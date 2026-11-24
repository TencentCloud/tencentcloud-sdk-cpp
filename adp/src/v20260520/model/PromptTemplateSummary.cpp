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

#include <tencentcloud/adp/v20260520/model/PromptTemplateSummary.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PromptTemplateSummary::PromptTemplateSummary() :
    m_profileHasBeenSet(false),
    m_labelListHasBeenSet(false),
    m_isFavoriteHasBeenSet(false),
    m_permissionIdListHasBeenSet(false)
{
}

CoreInternalOutcome PromptTemplateSummary::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateSummary.Profile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_profile.Deserialize(value["Profile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_profileHasBeenSet = true;
    }

    if (value.HasMember("LabelList") && !value["LabelList"].IsNull())
    {
        if (!value["LabelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PromptTemplateSummary.LabelList` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PromptTemplateLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelList.push_back(item);
        }
        m_labelListHasBeenSet = true;
    }

    if (value.HasMember("IsFavorite") && !value["IsFavorite"].IsNull())
    {
        if (!value["IsFavorite"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplateSummary.IsFavorite` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFavorite = value["IsFavorite"].GetBool();
        m_isFavoriteHasBeenSet = true;
    }

    if (value.HasMember("PermissionIdList") && !value["PermissionIdList"].IsNull())
    {
        if (!value["PermissionIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PromptTemplateSummary.PermissionIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["PermissionIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_permissionIdList.push_back((*itr).GetString());
        }
        m_permissionIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PromptTemplateSummary::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_labelListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelList.begin(); itr != m_labelList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_isFavoriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFavorite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFavorite, allocator);
    }

    if (m_permissionIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permissionIdList.begin(); itr != m_permissionIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


PromptTemplateProfile PromptTemplateSummary::GetProfile() const
{
    return m_profile;
}

void PromptTemplateSummary::SetProfile(const PromptTemplateProfile& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool PromptTemplateSummary::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

vector<PromptTemplateLabel> PromptTemplateSummary::GetLabelList() const
{
    return m_labelList;
}

void PromptTemplateSummary::SetLabelList(const vector<PromptTemplateLabel>& _labelList)
{
    m_labelList = _labelList;
    m_labelListHasBeenSet = true;
}

bool PromptTemplateSummary::LabelListHasBeenSet() const
{
    return m_labelListHasBeenSet;
}

bool PromptTemplateSummary::GetIsFavorite() const
{
    return m_isFavorite;
}

void PromptTemplateSummary::SetIsFavorite(const bool& _isFavorite)
{
    m_isFavorite = _isFavorite;
    m_isFavoriteHasBeenSet = true;
}

bool PromptTemplateSummary::IsFavoriteHasBeenSet() const
{
    return m_isFavoriteHasBeenSet;
}

vector<string> PromptTemplateSummary::GetPermissionIdList() const
{
    return m_permissionIdList;
}

void PromptTemplateSummary::SetPermissionIdList(const vector<string>& _permissionIdList)
{
    m_permissionIdList = _permissionIdList;
    m_permissionIdListHasBeenSet = true;
}

bool PromptTemplateSummary::PermissionIdListHasBeenSet() const
{
    return m_permissionIdListHasBeenSet;
}

