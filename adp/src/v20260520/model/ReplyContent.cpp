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

#include <tencentcloud/adp/v20260520/model/ReplyContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ReplyContent::ReplyContent() :
    m_typeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_optionCardListHasBeenSet(false),
    m_fileCollectionHasBeenSet(false),
    m_widgetHasBeenSet(false)
{
}

CoreInternalOutcome ReplyContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplyContent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplyContent.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("OptionCardList") && !value["OptionCardList"].IsNull())
    {
        if (!value["OptionCardList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReplyContent.OptionCardList` is not array type"));

        const rapidjson::Value &tmpValue = value["OptionCardList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_optionCardList.push_back((*itr).GetString());
        }
        m_optionCardListHasBeenSet = true;
    }

    if (value.HasMember("FileCollection") && !value["FileCollection"].IsNull())
    {
        if (!value["FileCollection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReplyContent.FileCollection` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileCollection.Deserialize(value["FileCollection"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileCollectionHasBeenSet = true;
    }

    if (value.HasMember("Widget") && !value["Widget"].IsNull())
    {
        if (!value["Widget"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReplyContent.Widget` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_widget.Deserialize(value["Widget"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_widgetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplyContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_optionCardListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionCardList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_optionCardList.begin(); itr != m_optionCardList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileCollectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileCollection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileCollection.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_widgetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Widget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_widget.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ReplyContent::GetType() const
{
    return m_type;
}

void ReplyContent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ReplyContent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ReplyContent::GetText() const
{
    return m_text;
}

void ReplyContent::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ReplyContent::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<string> ReplyContent::GetOptionCardList() const
{
    return m_optionCardList;
}

void ReplyContent::SetOptionCardList(const vector<string>& _optionCardList)
{
    m_optionCardList = _optionCardList;
    m_optionCardListHasBeenSet = true;
}

bool ReplyContent::OptionCardListHasBeenSet() const
{
    return m_optionCardListHasBeenSet;
}

ConversationFileCollection ReplyContent::GetFileCollection() const
{
    return m_fileCollection;
}

void ReplyContent::SetFileCollection(const ConversationFileCollection& _fileCollection)
{
    m_fileCollection = _fileCollection;
    m_fileCollectionHasBeenSet = true;
}

bool ReplyContent::FileCollectionHasBeenSet() const
{
    return m_fileCollectionHasBeenSet;
}

ConversationWidget ReplyContent::GetWidget() const
{
    return m_widget;
}

void ReplyContent::SetWidget(const ConversationWidget& _widget)
{
    m_widget = _widget;
    m_widgetHasBeenSet = true;
}

bool ReplyContent::WidgetHasBeenSet() const
{
    return m_widgetHasBeenSet;
}

