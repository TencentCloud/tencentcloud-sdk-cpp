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

#include <tencentcloud/mps/v20190612/model/AIRecognitionTemplateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AIRecognitionTemplateItem::AIRecognitionTemplateItem() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_faceConfigureHasBeenSet(false),
    m_ocrFullTextConfigureHasBeenSet(false),
    m_ocrWordsConfigureHasBeenSet(false),
    m_asrFullTextConfigureHasBeenSet(false),
    m_asrWordsConfigureHasBeenSet(false),
    m_translateConfigureHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome AIRecognitionTemplateItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecognitionTemplateItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecognitionTemplateItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecognitionTemplateItem.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("FaceConfigure") && !value["FaceConfigure"].IsNull())
    {
        if (!value["FaceConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecognitionTemplateItem.FaceConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_faceConfigure.Deserialize(value["FaceConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_faceConfigureHasBeenSet = true;
    }

    if (value.HasMember("OcrFullTextConfigure") && !value["OcrFullTextConfigure"].IsNull())
    {
        if (!value["OcrFullTextConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecognitionTemplateItem.OcrFullTextConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ocrFullTextConfigure.Deserialize(value["OcrFullTextConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ocrFullTextConfigureHasBeenSet = true;
    }

    if (value.HasMember("OcrWordsConfigure") && !value["OcrWordsConfigure"].IsNull())
    {
        if (!value["OcrWordsConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecognitionTemplateItem.OcrWordsConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ocrWordsConfigure.Deserialize(value["OcrWordsConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ocrWordsConfigureHasBeenSet = true;
    }

    if (value.HasMember("AsrFullTextConfigure") && !value["AsrFullTextConfigure"].IsNull())
    {
        if (!value["AsrFullTextConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecognitionTemplateItem.AsrFullTextConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrFullTextConfigure.Deserialize(value["AsrFullTextConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrFullTextConfigureHasBeenSet = true;
    }

    if (value.HasMember("AsrWordsConfigure") && !value["AsrWordsConfigure"].IsNull())
    {
        if (!value["AsrWordsConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecognitionTemplateItem.AsrWordsConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrWordsConfigure.Deserialize(value["AsrWordsConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrWordsConfigureHasBeenSet = true;
    }

    if (value.HasMember("TranslateConfigure") && !value["TranslateConfigure"].IsNull())
    {
        if (!value["TranslateConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecognitionTemplateItem.TranslateConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_translateConfigure.Deserialize(value["TranslateConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_translateConfigureHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecognitionTemplateItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecognitionTemplateItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIRecognitionTemplateItem.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIRecognitionTemplateItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_faceConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_faceConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ocrFullTextConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrFullTextConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ocrFullTextConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ocrWordsConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OcrWordsConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ocrWordsConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_asrFullTextConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrFullTextConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrFullTextConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_asrWordsConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrWordsConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrWordsConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_translateConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslateConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_translateConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


int64_t AIRecognitionTemplateItem::GetDefinition() const
{
    return m_definition;
}

void AIRecognitionTemplateItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AIRecognitionTemplateItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string AIRecognitionTemplateItem::GetName() const
{
    return m_name;
}

void AIRecognitionTemplateItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AIRecognitionTemplateItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AIRecognitionTemplateItem::GetComment() const
{
    return m_comment;
}

void AIRecognitionTemplateItem::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool AIRecognitionTemplateItem::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

FaceConfigureInfo AIRecognitionTemplateItem::GetFaceConfigure() const
{
    return m_faceConfigure;
}

void AIRecognitionTemplateItem::SetFaceConfigure(const FaceConfigureInfo& _faceConfigure)
{
    m_faceConfigure = _faceConfigure;
    m_faceConfigureHasBeenSet = true;
}

bool AIRecognitionTemplateItem::FaceConfigureHasBeenSet() const
{
    return m_faceConfigureHasBeenSet;
}

OcrFullTextConfigureInfo AIRecognitionTemplateItem::GetOcrFullTextConfigure() const
{
    return m_ocrFullTextConfigure;
}

void AIRecognitionTemplateItem::SetOcrFullTextConfigure(const OcrFullTextConfigureInfo& _ocrFullTextConfigure)
{
    m_ocrFullTextConfigure = _ocrFullTextConfigure;
    m_ocrFullTextConfigureHasBeenSet = true;
}

bool AIRecognitionTemplateItem::OcrFullTextConfigureHasBeenSet() const
{
    return m_ocrFullTextConfigureHasBeenSet;
}

OcrWordsConfigureInfo AIRecognitionTemplateItem::GetOcrWordsConfigure() const
{
    return m_ocrWordsConfigure;
}

void AIRecognitionTemplateItem::SetOcrWordsConfigure(const OcrWordsConfigureInfo& _ocrWordsConfigure)
{
    m_ocrWordsConfigure = _ocrWordsConfigure;
    m_ocrWordsConfigureHasBeenSet = true;
}

bool AIRecognitionTemplateItem::OcrWordsConfigureHasBeenSet() const
{
    return m_ocrWordsConfigureHasBeenSet;
}

AsrFullTextConfigureInfo AIRecognitionTemplateItem::GetAsrFullTextConfigure() const
{
    return m_asrFullTextConfigure;
}

void AIRecognitionTemplateItem::SetAsrFullTextConfigure(const AsrFullTextConfigureInfo& _asrFullTextConfigure)
{
    m_asrFullTextConfigure = _asrFullTextConfigure;
    m_asrFullTextConfigureHasBeenSet = true;
}

bool AIRecognitionTemplateItem::AsrFullTextConfigureHasBeenSet() const
{
    return m_asrFullTextConfigureHasBeenSet;
}

AsrWordsConfigureInfo AIRecognitionTemplateItem::GetAsrWordsConfigure() const
{
    return m_asrWordsConfigure;
}

void AIRecognitionTemplateItem::SetAsrWordsConfigure(const AsrWordsConfigureInfo& _asrWordsConfigure)
{
    m_asrWordsConfigure = _asrWordsConfigure;
    m_asrWordsConfigureHasBeenSet = true;
}

bool AIRecognitionTemplateItem::AsrWordsConfigureHasBeenSet() const
{
    return m_asrWordsConfigureHasBeenSet;
}

TranslateConfigureInfo AIRecognitionTemplateItem::GetTranslateConfigure() const
{
    return m_translateConfigure;
}

void AIRecognitionTemplateItem::SetTranslateConfigure(const TranslateConfigureInfo& _translateConfigure)
{
    m_translateConfigure = _translateConfigure;
    m_translateConfigureHasBeenSet = true;
}

bool AIRecognitionTemplateItem::TranslateConfigureHasBeenSet() const
{
    return m_translateConfigureHasBeenSet;
}

string AIRecognitionTemplateItem::GetCreateTime() const
{
    return m_createTime;
}

void AIRecognitionTemplateItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AIRecognitionTemplateItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AIRecognitionTemplateItem::GetUpdateTime() const
{
    return m_updateTime;
}

void AIRecognitionTemplateItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AIRecognitionTemplateItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AIRecognitionTemplateItem::GetType() const
{
    return m_type;
}

void AIRecognitionTemplateItem::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AIRecognitionTemplateItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

