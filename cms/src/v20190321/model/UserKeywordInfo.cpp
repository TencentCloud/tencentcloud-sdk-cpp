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

#include <tencentcloud/cms/v20190321/model/UserKeywordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

UserKeywordInfo::UserKeywordInfo() :
    m_iDHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_wordTypeHasBeenSet(false)
{
}

CoreInternalOutcome UserKeywordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserKeywordInfo.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserKeywordInfo.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserKeywordInfo.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserKeywordInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserKeywordInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("WordType") && !value["WordType"].IsNull())
    {
        if (!value["WordType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserKeywordInfo.WordType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wordType = string(value["WordType"].GetString());
        m_wordTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserKeywordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
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


string UserKeywordInfo::GetID() const
{
    return m_iD;
}

void UserKeywordInfo::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool UserKeywordInfo::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string UserKeywordInfo::GetContent() const
{
    return m_content;
}

void UserKeywordInfo::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool UserKeywordInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string UserKeywordInfo::GetLabel() const
{
    return m_label;
}

void UserKeywordInfo::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool UserKeywordInfo::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string UserKeywordInfo::GetCreateTime() const
{
    return m_createTime;
}

void UserKeywordInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UserKeywordInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string UserKeywordInfo::GetRemark() const
{
    return m_remark;
}

void UserKeywordInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool UserKeywordInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string UserKeywordInfo::GetWordType() const
{
    return m_wordType;
}

void UserKeywordInfo::SetWordType(const string& _wordType)
{
    m_wordType = _wordType;
    m_wordTypeHasBeenSet = true;
}

bool UserKeywordInfo::WordTypeHasBeenSet() const
{
    return m_wordTypeHasBeenSet;
}

