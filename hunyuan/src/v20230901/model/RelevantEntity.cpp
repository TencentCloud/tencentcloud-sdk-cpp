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

#include <tencentcloud/hunyuan/v20230901/model/RelevantEntity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hunyuan::V20230901::Model;
using namespace std;

RelevantEntity::RelevantEntity() :
    m_nameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_referenceHasBeenSet(false)
{
}

CoreInternalOutcome RelevantEntity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelevantEntity.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelevantEntity.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Reference") && !value["Reference"].IsNull())
    {
        if (!value["Reference"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RelevantEntity.Reference` is not array type"));

        const rapidjson::Value &tmpValue = value["Reference"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_reference.push_back((*itr).GetInt64());
        }
        m_referenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RelevantEntity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reference";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_reference.begin(); itr != m_reference.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


string RelevantEntity::GetName() const
{
    return m_name;
}

void RelevantEntity::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RelevantEntity::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RelevantEntity::GetContent() const
{
    return m_content;
}

void RelevantEntity::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool RelevantEntity::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<int64_t> RelevantEntity::GetReference() const
{
    return m_reference;
}

void RelevantEntity::SetReference(const vector<int64_t>& _reference)
{
    m_reference = _reference;
    m_referenceHasBeenSet = true;
}

bool RelevantEntity::ReferenceHasBeenSet() const
{
    return m_referenceHasBeenSet;
}

