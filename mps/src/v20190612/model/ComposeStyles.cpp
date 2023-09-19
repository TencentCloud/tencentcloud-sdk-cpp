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

#include <tencentcloud/mps/v20190612/model/ComposeStyles.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ComposeStyles::ComposeStyles() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_subtitleHasBeenSet(false)
{
}

CoreInternalOutcome ComposeStyles::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeStyles.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeStyles.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Subtitle") && !value["Subtitle"].IsNull())
    {
        if (!value["Subtitle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ComposeStyles.Subtitle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_subtitle.Deserialize(value["Subtitle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_subtitleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComposeStyles::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subtitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_subtitle.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ComposeStyles::GetId() const
{
    return m_id;
}

void ComposeStyles::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ComposeStyles::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ComposeStyles::GetType() const
{
    return m_type;
}

void ComposeStyles::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ComposeStyles::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

ComposeSubtitleStyle ComposeStyles::GetSubtitle() const
{
    return m_subtitle;
}

void ComposeStyles::SetSubtitle(const ComposeSubtitleStyle& _subtitle)
{
    m_subtitle = _subtitle;
    m_subtitleHasBeenSet = true;
}

bool ComposeStyles::SubtitleHasBeenSet() const
{
    return m_subtitleHasBeenSet;
}

