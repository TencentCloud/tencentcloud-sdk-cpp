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

#include <tencentcloud/vod/v20180717/model/MPSAIAnalysisTemplateForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSAIAnalysisTemplateForUpdate::MPSAIAnalysisTemplateForUpdate() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_classificationConfigureHasBeenSet(false),
    m_tagConfigureHasBeenSet(false),
    m_coverConfigureHasBeenSet(false),
    m_frameTagConfigureHasBeenSet(false),
    m_splitConfigureHasBeenSet(false),
    m_highlightConfigureHasBeenSet(false),
    m_openingAndEndingConfigureHasBeenSet(false)
{
}

CoreInternalOutcome MPSAIAnalysisTemplateForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MPSAIAnalysisTemplateForUpdate.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSAIAnalysisTemplateForUpdate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSAIAnalysisTemplateForUpdate.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("ClassificationConfigure") && !value["ClassificationConfigure"].IsNull())
    {
        if (!value["ClassificationConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MPSAIAnalysisTemplateForUpdate.ClassificationConfigure` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MPSAIAnalysisTemplateForUpdate.TagConfigure` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MPSAIAnalysisTemplateForUpdate.CoverConfigure` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `MPSAIAnalysisTemplateForUpdate.FrameTagConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_frameTagConfigure.Deserialize(value["FrameTagConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frameTagConfigureHasBeenSet = true;
    }

    if (value.HasMember("SplitConfigure") && !value["SplitConfigure"].IsNull())
    {
        if (!value["SplitConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MPSAIAnalysisTemplateForUpdate.SplitConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_splitConfigure.Deserialize(value["SplitConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_splitConfigureHasBeenSet = true;
    }

    if (value.HasMember("HighlightConfigure") && !value["HighlightConfigure"].IsNull())
    {
        if (!value["HighlightConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MPSAIAnalysisTemplateForUpdate.HighlightConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_highlightConfigure.Deserialize(value["HighlightConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_highlightConfigureHasBeenSet = true;
    }

    if (value.HasMember("OpeningAndEndingConfigure") && !value["OpeningAndEndingConfigure"].IsNull())
    {
        if (!value["OpeningAndEndingConfigure"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MPSAIAnalysisTemplateForUpdate.OpeningAndEndingConfigure` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_openingAndEndingConfigure.Deserialize(value["OpeningAndEndingConfigure"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_openingAndEndingConfigureHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSAIAnalysisTemplateForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_classificationConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_classificationConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tagConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coverConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coverConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_frameTagConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameTagConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_frameTagConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_splitConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_splitConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_highlightConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighlightConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_highlightConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_openingAndEndingConfigureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpeningAndEndingConfigure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_openingAndEndingConfigure.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t MPSAIAnalysisTemplateForUpdate::GetDefinition() const
{
    return m_definition;
}

void MPSAIAnalysisTemplateForUpdate::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool MPSAIAnalysisTemplateForUpdate::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string MPSAIAnalysisTemplateForUpdate::GetName() const
{
    return m_name;
}

void MPSAIAnalysisTemplateForUpdate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool MPSAIAnalysisTemplateForUpdate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string MPSAIAnalysisTemplateForUpdate::GetComment() const
{
    return m_comment;
}

void MPSAIAnalysisTemplateForUpdate::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool MPSAIAnalysisTemplateForUpdate::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

MPSAIAnalysisConfigureInfo MPSAIAnalysisTemplateForUpdate::GetClassificationConfigure() const
{
    return m_classificationConfigure;
}

void MPSAIAnalysisTemplateForUpdate::SetClassificationConfigure(const MPSAIAnalysisConfigureInfo& _classificationConfigure)
{
    m_classificationConfigure = _classificationConfigure;
    m_classificationConfigureHasBeenSet = true;
}

bool MPSAIAnalysisTemplateForUpdate::ClassificationConfigureHasBeenSet() const
{
    return m_classificationConfigureHasBeenSet;
}

MPSAIAnalysisConfigureInfo MPSAIAnalysisTemplateForUpdate::GetTagConfigure() const
{
    return m_tagConfigure;
}

void MPSAIAnalysisTemplateForUpdate::SetTagConfigure(const MPSAIAnalysisConfigureInfo& _tagConfigure)
{
    m_tagConfigure = _tagConfigure;
    m_tagConfigureHasBeenSet = true;
}

bool MPSAIAnalysisTemplateForUpdate::TagConfigureHasBeenSet() const
{
    return m_tagConfigureHasBeenSet;
}

MPSAIAnalysisConfigureInfo MPSAIAnalysisTemplateForUpdate::GetCoverConfigure() const
{
    return m_coverConfigure;
}

void MPSAIAnalysisTemplateForUpdate::SetCoverConfigure(const MPSAIAnalysisConfigureInfo& _coverConfigure)
{
    m_coverConfigure = _coverConfigure;
    m_coverConfigureHasBeenSet = true;
}

bool MPSAIAnalysisTemplateForUpdate::CoverConfigureHasBeenSet() const
{
    return m_coverConfigureHasBeenSet;
}

MPSAIAnalysisConfigureInfo MPSAIAnalysisTemplateForUpdate::GetFrameTagConfigure() const
{
    return m_frameTagConfigure;
}

void MPSAIAnalysisTemplateForUpdate::SetFrameTagConfigure(const MPSAIAnalysisConfigureInfo& _frameTagConfigure)
{
    m_frameTagConfigure = _frameTagConfigure;
    m_frameTagConfigureHasBeenSet = true;
}

bool MPSAIAnalysisTemplateForUpdate::FrameTagConfigureHasBeenSet() const
{
    return m_frameTagConfigureHasBeenSet;
}

MPSAIAnalysisConfigureInfo MPSAIAnalysisTemplateForUpdate::GetSplitConfigure() const
{
    return m_splitConfigure;
}

void MPSAIAnalysisTemplateForUpdate::SetSplitConfigure(const MPSAIAnalysisConfigureInfo& _splitConfigure)
{
    m_splitConfigure = _splitConfigure;
    m_splitConfigureHasBeenSet = true;
}

bool MPSAIAnalysisTemplateForUpdate::SplitConfigureHasBeenSet() const
{
    return m_splitConfigureHasBeenSet;
}

MPSAIAnalysisConfigureInfo MPSAIAnalysisTemplateForUpdate::GetHighlightConfigure() const
{
    return m_highlightConfigure;
}

void MPSAIAnalysisTemplateForUpdate::SetHighlightConfigure(const MPSAIAnalysisConfigureInfo& _highlightConfigure)
{
    m_highlightConfigure = _highlightConfigure;
    m_highlightConfigureHasBeenSet = true;
}

bool MPSAIAnalysisTemplateForUpdate::HighlightConfigureHasBeenSet() const
{
    return m_highlightConfigureHasBeenSet;
}

MPSAIAnalysisConfigureInfo MPSAIAnalysisTemplateForUpdate::GetOpeningAndEndingConfigure() const
{
    return m_openingAndEndingConfigure;
}

void MPSAIAnalysisTemplateForUpdate::SetOpeningAndEndingConfigure(const MPSAIAnalysisConfigureInfo& _openingAndEndingConfigure)
{
    m_openingAndEndingConfigure = _openingAndEndingConfigure;
    m_openingAndEndingConfigureHasBeenSet = true;
}

bool MPSAIAnalysisTemplateForUpdate::OpeningAndEndingConfigureHasBeenSet() const
{
    return m_openingAndEndingConfigureHasBeenSet;
}

