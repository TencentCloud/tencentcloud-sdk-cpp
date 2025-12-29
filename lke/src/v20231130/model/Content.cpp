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

#include <tencentcloud/lke/v20231130/model/Content.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

Content::Content() :
    m_typeHasBeenSet(false),
    m_textHasBeenSet(false),
    m_quoteInfosHasBeenSet(false),
    m_referencesHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_fileHasBeenSet(false),
    m_optionCardsHasBeenSet(false),
    m_customParamsHasBeenSet(false),
    m_customVariablesHasBeenSet(false),
    m_sandboxHasBeenSet(false),
    m_webSearchHasBeenSet(false),
    m_fileCollectionHasBeenSet(false),
    m_widgetHasBeenSet(false),
    m_widgetActionHasBeenSet(false)
{
}

CoreInternalOutcome Content::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Content.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Content.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("QuoteInfos") && !value["QuoteInfos"].IsNull())
    {
        if (!value["QuoteInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Content.QuoteInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["QuoteInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QuoteInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_quoteInfos.push_back(item);
        }
        m_quoteInfosHasBeenSet = true;
    }

    if (value.HasMember("References") && !value["References"].IsNull())
    {
        if (!value["References"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Content.References` is not array type"));

        const rapidjson::Value &tmpValue = value["References"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ContentReference item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_references.push_back(item);
        }
        m_referencesHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Content.Image` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_image.Deserialize(value["Image"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageHasBeenSet = true;
    }

    if (value.HasMember("File") && !value["File"].IsNull())
    {
        if (!value["File"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Content.File` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_file.Deserialize(value["File"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileHasBeenSet = true;
    }

    if (value.HasMember("OptionCards") && !value["OptionCards"].IsNull())
    {
        if (!value["OptionCards"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Content.OptionCards` is not array type"));

        const rapidjson::Value &tmpValue = value["OptionCards"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_optionCards.push_back((*itr).GetString());
        }
        m_optionCardsHasBeenSet = true;
    }

    if (value.HasMember("CustomParams") && !value["CustomParams"].IsNull())
    {
        if (!value["CustomParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Content.CustomParams` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customParams.push_back((*itr).GetString());
        }
        m_customParamsHasBeenSet = true;
    }

    if (value.HasMember("CustomVariables") && !value["CustomVariables"].IsNull())
    {
        if (!value["CustomVariables"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Content.CustomVariables` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomVariables"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customVariables.push_back((*itr).GetString());
        }
        m_customVariablesHasBeenSet = true;
    }

    if (value.HasMember("Sandbox") && !value["Sandbox"].IsNull())
    {
        if (!value["Sandbox"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Content.Sandbox` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sandbox.Deserialize(value["Sandbox"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sandboxHasBeenSet = true;
    }

    if (value.HasMember("WebSearch") && !value["WebSearch"].IsNull())
    {
        if (!value["WebSearch"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Content.WebSearch` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webSearch.Deserialize(value["WebSearch"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webSearchHasBeenSet = true;
    }

    if (value.HasMember("FileCollection") && !value["FileCollection"].IsNull())
    {
        if (!value["FileCollection"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Content.FileCollection` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `Content.Widget` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_widget.Deserialize(value["Widget"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_widgetHasBeenSet = true;
    }

    if (value.HasMember("WidgetAction") && !value["WidgetAction"].IsNull())
    {
        if (!value["WidgetAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Content.WidgetAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_widgetAction.Deserialize(value["WidgetAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_widgetActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Content::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_quoteInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuoteInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_quoteInfos.begin(); itr != m_quoteInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_referencesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "References";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_references.begin(); itr != m_references.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_image.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_file.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_optionCardsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionCards";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_optionCards.begin(); itr != m_optionCards.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customParams.begin(); itr != m_customParams.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customVariablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomVariables";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customVariables.begin(); itr != m_customVariables.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sandboxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sandbox";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sandbox.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSearch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webSearch.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_widgetActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WidgetAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_widgetAction.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Content::GetType() const
{
    return m_type;
}

void Content::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Content::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Content::GetText() const
{
    return m_text;
}

void Content::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool Content::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<QuoteInfo> Content::GetQuoteInfos() const
{
    return m_quoteInfos;
}

void Content::SetQuoteInfos(const vector<QuoteInfo>& _quoteInfos)
{
    m_quoteInfos = _quoteInfos;
    m_quoteInfosHasBeenSet = true;
}

bool Content::QuoteInfosHasBeenSet() const
{
    return m_quoteInfosHasBeenSet;
}

vector<ContentReference> Content::GetReferences() const
{
    return m_references;
}

void Content::SetReferences(const vector<ContentReference>& _references)
{
    m_references = _references;
    m_referencesHasBeenSet = true;
}

bool Content::ReferencesHasBeenSet() const
{
    return m_referencesHasBeenSet;
}

ImageInfoContent Content::GetImage() const
{
    return m_image;
}

void Content::SetImage(const ImageInfoContent& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool Content::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

FileInfoContent Content::GetFile() const
{
    return m_file;
}

void Content::SetFile(const FileInfoContent& _file)
{
    m_file = _file;
    m_fileHasBeenSet = true;
}

bool Content::FileHasBeenSet() const
{
    return m_fileHasBeenSet;
}

vector<string> Content::GetOptionCards() const
{
    return m_optionCards;
}

void Content::SetOptionCards(const vector<string>& _optionCards)
{
    m_optionCards = _optionCards;
    m_optionCardsHasBeenSet = true;
}

bool Content::OptionCardsHasBeenSet() const
{
    return m_optionCardsHasBeenSet;
}

vector<string> Content::GetCustomParams() const
{
    return m_customParams;
}

void Content::SetCustomParams(const vector<string>& _customParams)
{
    m_customParams = _customParams;
    m_customParamsHasBeenSet = true;
}

bool Content::CustomParamsHasBeenSet() const
{
    return m_customParamsHasBeenSet;
}

vector<string> Content::GetCustomVariables() const
{
    return m_customVariables;
}

void Content::SetCustomVariables(const vector<string>& _customVariables)
{
    m_customVariables = _customVariables;
    m_customVariablesHasBeenSet = true;
}

bool Content::CustomVariablesHasBeenSet() const
{
    return m_customVariablesHasBeenSet;
}

SandboxContent Content::GetSandbox() const
{
    return m_sandbox;
}

void Content::SetSandbox(const SandboxContent& _sandbox)
{
    m_sandbox = _sandbox;
    m_sandboxHasBeenSet = true;
}

bool Content::SandboxHasBeenSet() const
{
    return m_sandboxHasBeenSet;
}

WebSearchContent Content::GetWebSearch() const
{
    return m_webSearch;
}

void Content::SetWebSearch(const WebSearchContent& _webSearch)
{
    m_webSearch = _webSearch;
    m_webSearchHasBeenSet = true;
}

bool Content::WebSearchHasBeenSet() const
{
    return m_webSearchHasBeenSet;
}

FileCollection Content::GetFileCollection() const
{
    return m_fileCollection;
}

void Content::SetFileCollection(const FileCollection& _fileCollection)
{
    m_fileCollection = _fileCollection;
    m_fileCollectionHasBeenSet = true;
}

bool Content::FileCollectionHasBeenSet() const
{
    return m_fileCollectionHasBeenSet;
}

Widget Content::GetWidget() const
{
    return m_widget;
}

void Content::SetWidget(const Widget& _widget)
{
    m_widget = _widget;
    m_widgetHasBeenSet = true;
}

bool Content::WidgetHasBeenSet() const
{
    return m_widgetHasBeenSet;
}

WidgetAction Content::GetWidgetAction() const
{
    return m_widgetAction;
}

void Content::SetWidgetAction(const WidgetAction& _widgetAction)
{
    m_widgetAction = _widgetAction;
    m_widgetActionHasBeenSet = true;
}

bool Content::WidgetActionHasBeenSet() const
{
    return m_widgetActionHasBeenSet;
}

