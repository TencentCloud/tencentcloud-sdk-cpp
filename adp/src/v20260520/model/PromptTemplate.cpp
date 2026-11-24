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

#include <tencentcloud/adp/v20260520/model/PromptTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

PromptTemplate::PromptTemplate() :
    m_profileHasBeenSet(false),
    m_customVariableListHasBeenSet(false),
    m_labelListHasBeenSet(false),
    m_promptContentHasBeenSet(false)
{
}

CoreInternalOutcome PromptTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Profile") && !value["Profile"].IsNull())
    {
        if (!value["Profile"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplate.Profile` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_profile.Deserialize(value["Profile"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_profileHasBeenSet = true;
    }

    if (value.HasMember("CustomVariableList") && !value["CustomVariableList"].IsNull())
    {
        if (!value["CustomVariableList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PromptTemplate.CustomVariableList` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomVariableList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customVariableList.push_back((*itr).GetString());
        }
        m_customVariableListHasBeenSet = true;
    }

    if (value.HasMember("LabelList") && !value["LabelList"].IsNull())
    {
        if (!value["LabelList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PromptTemplate.LabelList` is not array type"));

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

    if (value.HasMember("PromptContent") && !value["PromptContent"].IsNull())
    {
        if (!value["PromptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTemplate.PromptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_promptContent = string(value["PromptContent"].GetString());
        m_promptContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PromptTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profile.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customVariableListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariableList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customVariableList.begin(); itr != m_customVariableList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_promptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_promptContent.c_str(), allocator).Move(), allocator);
    }

}


PromptTemplateProfile PromptTemplate::GetProfile() const
{
    return m_profile;
}

void PromptTemplate::SetProfile(const PromptTemplateProfile& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool PromptTemplate::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

vector<string> PromptTemplate::GetCustomVariableList() const
{
    return m_customVariableList;
}

void PromptTemplate::SetCustomVariableList(const vector<string>& _customVariableList)
{
    m_customVariableList = _customVariableList;
    m_customVariableListHasBeenSet = true;
}

bool PromptTemplate::CustomVariableListHasBeenSet() const
{
    return m_customVariableListHasBeenSet;
}

vector<PromptTemplateLabel> PromptTemplate::GetLabelList() const
{
    return m_labelList;
}

void PromptTemplate::SetLabelList(const vector<PromptTemplateLabel>& _labelList)
{
    m_labelList = _labelList;
    m_labelListHasBeenSet = true;
}

bool PromptTemplate::LabelListHasBeenSet() const
{
    return m_labelListHasBeenSet;
}

string PromptTemplate::GetPromptContent() const
{
    return m_promptContent;
}

void PromptTemplate::SetPromptContent(const string& _promptContent)
{
    m_promptContent = _promptContent;
    m_promptContentHasBeenSet = true;
}

bool PromptTemplate::PromptContentHasBeenSet() const
{
    return m_promptContentHasBeenSet;
}

