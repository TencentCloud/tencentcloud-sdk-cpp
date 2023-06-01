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

#include <tencentcloud/cms/v20190321/model/UserKeyword.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

UserKeyword::UserKeyword() :
    m_contentHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_wordTypeHasBeenSet(false)
{
}

CoreInternalOutcome UserKeyword::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserKeyword.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserKeyword.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserKeyword.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("WordType") && !value["WordType"].IsNull())
    {
        if (!value["WordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserKeyword.WordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wordType = string(value["WordType"].GetString());
        m_wordTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserKeyword::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_wordTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wordType.c_str(), allocator).Move(), allocator);
    }

}


string UserKeyword::GetContent() const
{
    return m_content;
}

void UserKeyword::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool UserKeyword::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string UserKeyword::GetLabel() const
{
    return m_label;
}

void UserKeyword::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool UserKeyword::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string UserKeyword::GetRemark() const
{
    return m_remark;
}

void UserKeyword::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool UserKeyword::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string UserKeyword::GetWordType() const
{
    return m_wordType;
}

void UserKeyword::SetWordType(const string& _wordType)
{
    m_wordType = _wordType;
    m_wordTypeHasBeenSet = true;
}

bool UserKeyword::WordTypeHasBeenSet() const
{
    return m_wordTypeHasBeenSet;
}

