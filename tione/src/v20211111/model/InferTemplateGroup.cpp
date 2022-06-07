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

#include <tencentcloud/tione/v20211111/model/InferTemplateGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

InferTemplateGroup::InferTemplateGroup() :
    m_frameworkHasBeenSet(false),
    m_frameworkVersionHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_inferTemplatesHasBeenSet(false)
{
}

CoreInternalOutcome InferTemplateGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Framework") && !value["Framework"].IsNull())
    {
        if (!value["Framework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferTemplateGroup.Framework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_framework = string(value["Framework"].GetString());
        m_frameworkHasBeenSet = true;
    }

    if (value.HasMember("FrameworkVersion") && !value["FrameworkVersion"].IsNull())
    {
        if (!value["FrameworkVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InferTemplateGroup.FrameworkVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_frameworkVersion = string(value["FrameworkVersion"].GetString());
        m_frameworkVersionHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferTemplateGroup.Groups` is not array type"));

        const rapidjson::Value &tmpValue = value["Groups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groups.push_back((*itr).GetString());
        }
        m_groupsHasBeenSet = true;
    }

    if (value.HasMember("InferTemplates") && !value["InferTemplates"].IsNull())
    {
        if (!value["InferTemplates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InferTemplateGroup.InferTemplates` is not array type"));

        const rapidjson::Value &tmpValue = value["InferTemplates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InferTemplate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_inferTemplates.push_back(item);
        }
        m_inferTemplatesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InferTemplateGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_frameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Framework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_framework.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameworkVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_frameworkVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_inferTemplatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InferTemplates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_inferTemplates.begin(); itr != m_inferTemplates.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string InferTemplateGroup::GetFramework() const
{
    return m_framework;
}

void InferTemplateGroup::SetFramework(const string& _framework)
{
    m_framework = _framework;
    m_frameworkHasBeenSet = true;
}

bool InferTemplateGroup::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

string InferTemplateGroup::GetFrameworkVersion() const
{
    return m_frameworkVersion;
}

void InferTemplateGroup::SetFrameworkVersion(const string& _frameworkVersion)
{
    m_frameworkVersion = _frameworkVersion;
    m_frameworkVersionHasBeenSet = true;
}

bool InferTemplateGroup::FrameworkVersionHasBeenSet() const
{
    return m_frameworkVersionHasBeenSet;
}

vector<string> InferTemplateGroup::GetGroups() const
{
    return m_groups;
}

void InferTemplateGroup::SetGroups(const vector<string>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool InferTemplateGroup::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

vector<InferTemplate> InferTemplateGroup::GetInferTemplates() const
{
    return m_inferTemplates;
}

void InferTemplateGroup::SetInferTemplates(const vector<InferTemplate>& _inferTemplates)
{
    m_inferTemplates = _inferTemplates;
    m_inferTemplatesHasBeenSet = true;
}

bool InferTemplateGroup::InferTemplatesHasBeenSet() const
{
    return m_inferTemplatesHasBeenSet;
}

