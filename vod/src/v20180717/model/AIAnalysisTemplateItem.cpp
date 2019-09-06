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

#include <tencentcloud/vod/v20180717/model/AIAnalysisTemplateItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

AIAnalysisTemplateItem::AIAnalysisTemplateItem() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_classificationConfigureHasBeenSet(false),
    m_tagConfigureHasBeenSet(false),
    m_coverConfigureHasBeenSet(false),
    m_frameTagConfigureHasBeenSet(false),
    m_highlightConfigureHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AIAnalysisTemplateItem::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `AIAnalysisTemplateItem.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Error("response `AIAnalysisTemplateItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Error("response `AIAnalysisTemplateItem.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("ClassificationConfigure") && !value["ClassificationConfigure"].IsNull())
    {
        if (!value["ClassificationConfigure"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AIAnalysisTemplateItem.ClassificationConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_classificationConfigure.Deserialize(value["ClassificationConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_classificationConfigureHasBeenSet = true;
    }

    if (value.HasMember("TagConfigure") && !value["TagConfigure"].IsNull())
    {
        if (!value["TagConfigure"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AIAnalysisTemplateItem.TagConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tagConfigure.Deserialize(value["TagConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagConfigureHasBeenSet = true;
    }

    if (value.HasMember("CoverConfigure") && !value["CoverConfigure"].IsNull())
    {
        if (!value["CoverConfigure"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AIAnalysisTemplateItem.CoverConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coverConfigure.Deserialize(value["CoverConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coverConfigureHasBeenSet = true;
    }

    if (value.HasMember("FrameTagConfigure") && !value["FrameTagConfigure"].IsNull())
    {
        if (!value["FrameTagConfigure"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AIAnalysisTemplateItem.FrameTagConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_frameTagConfigure.Deserialize(value["FrameTagConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frameTagConfigureHasBeenSet = true;
    }

    if (value.HasMember("HighlightConfigure") && !value["HighlightConfigure"].IsNull())
    {
        if (!value["HighlightConfigure"].IsObject())
        {
            return CoreInternalOutcome(Error("response `AIAnalysisTemplateItem.HighlightConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_highlightConfigure.Deserialize(value["HighlightConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_highlightConfigureHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AIAnalysisTemplateItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `AIAnalysisTemplateItem.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIAnalysisTemplateItem::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationConfigureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassificationConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_classificationConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagConfigureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TagConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_tagConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coverConfigureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoverConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_coverConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_frameTagConfigureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FrameTagConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_frameTagConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_highlightConfigureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HighlightConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_highlightConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t AIAnalysisTemplateItem::GetDefinition() const
{
    return m_definition;
}

void AIAnalysisTemplateItem::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool AIAnalysisTemplateItem::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string AIAnalysisTemplateItem::GetName() const
{
    return m_name;
}

void AIAnalysisTemplateItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AIAnalysisTemplateItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AIAnalysisTemplateItem::GetComment() const
{
    return m_comment;
}

void AIAnalysisTemplateItem::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool AIAnalysisTemplateItem::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

ClassificationConfigureInfo AIAnalysisTemplateItem::GetClassificationConfigure() const
{
    return m_classificationConfigure;
}

void AIAnalysisTemplateItem::SetClassificationConfigure(const ClassificationConfigureInfo& _classificationConfigure)
{
    m_classificationConfigure = _classificationConfigure;
    m_classificationConfigureHasBeenSet = true;
}

bool AIAnalysisTemplateItem::ClassificationConfigureHasBeenSet() const
{
    return m_classificationConfigureHasBeenSet;
}

TagConfigureInfo AIAnalysisTemplateItem::GetTagConfigure() const
{
    return m_tagConfigure;
}

void AIAnalysisTemplateItem::SetTagConfigure(const TagConfigureInfo& _tagConfigure)
{
    m_tagConfigure = _tagConfigure;
    m_tagConfigureHasBeenSet = true;
}

bool AIAnalysisTemplateItem::TagConfigureHasBeenSet() const
{
    return m_tagConfigureHasBeenSet;
}

CoverConfigureInfo AIAnalysisTemplateItem::GetCoverConfigure() const
{
    return m_coverConfigure;
}

void AIAnalysisTemplateItem::SetCoverConfigure(const CoverConfigureInfo& _coverConfigure)
{
    m_coverConfigure = _coverConfigure;
    m_coverConfigureHasBeenSet = true;
}

bool AIAnalysisTemplateItem::CoverConfigureHasBeenSet() const
{
    return m_coverConfigureHasBeenSet;
}

FrameTagConfigureInfo AIAnalysisTemplateItem::GetFrameTagConfigure() const
{
    return m_frameTagConfigure;
}

void AIAnalysisTemplateItem::SetFrameTagConfigure(const FrameTagConfigureInfo& _frameTagConfigure)
{
    m_frameTagConfigure = _frameTagConfigure;
    m_frameTagConfigureHasBeenSet = true;
}

bool AIAnalysisTemplateItem::FrameTagConfigureHasBeenSet() const
{
    return m_frameTagConfigureHasBeenSet;
}

HighlightsConfigureInfo AIAnalysisTemplateItem::GetHighlightConfigure() const
{
    return m_highlightConfigure;
}

void AIAnalysisTemplateItem::SetHighlightConfigure(const HighlightsConfigureInfo& _highlightConfigure)
{
    m_highlightConfigure = _highlightConfigure;
    m_highlightConfigureHasBeenSet = true;
}

bool AIAnalysisTemplateItem::HighlightConfigureHasBeenSet() const
{
    return m_highlightConfigureHasBeenSet;
}

string AIAnalysisTemplateItem::GetCreateTime() const
{
    return m_createTime;
}

void AIAnalysisTemplateItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AIAnalysisTemplateItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AIAnalysisTemplateItem::GetUpdateTime() const
{
    return m_updateTime;
}

void AIAnalysisTemplateItem::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AIAnalysisTemplateItem::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

