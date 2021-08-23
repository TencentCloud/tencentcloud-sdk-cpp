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

#include <tencentcloud/ie/v20200304/model/EditingInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

EditingInfo::EditingInfo() :
    m_tagEditingInfoHasBeenSet(false),
    m_classificationEditingInfoHasBeenSet(false),
    m_stripEditingInfoHasBeenSet(false),
    m_highlightsEditingInfoHasBeenSet(false),
    m_coverEditingInfoHasBeenSet(false),
    m_openingEndingEditingInfoHasBeenSet(false)
{
}

CoreInternalOutcome EditingInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagEditingInfo") && !value["TagEditingInfo"].IsNull())
    {
        if (!value["TagEditingInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditingInfo.TagEditingInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tagEditingInfo.Deserialize(value["TagEditingInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagEditingInfoHasBeenSet = true;
    }

    if (value.HasMember("ClassificationEditingInfo") && !value["ClassificationEditingInfo"].IsNull())
    {
        if (!value["ClassificationEditingInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditingInfo.ClassificationEditingInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_classificationEditingInfo.Deserialize(value["ClassificationEditingInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_classificationEditingInfoHasBeenSet = true;
    }

    if (value.HasMember("StripEditingInfo") && !value["StripEditingInfo"].IsNull())
    {
        if (!value["StripEditingInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditingInfo.StripEditingInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_stripEditingInfo.Deserialize(value["StripEditingInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_stripEditingInfoHasBeenSet = true;
    }

    if (value.HasMember("HighlightsEditingInfo") && !value["HighlightsEditingInfo"].IsNull())
    {
        if (!value["HighlightsEditingInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditingInfo.HighlightsEditingInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_highlightsEditingInfo.Deserialize(value["HighlightsEditingInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_highlightsEditingInfoHasBeenSet = true;
    }

    if (value.HasMember("CoverEditingInfo") && !value["CoverEditingInfo"].IsNull())
    {
        if (!value["CoverEditingInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditingInfo.CoverEditingInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coverEditingInfo.Deserialize(value["CoverEditingInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coverEditingInfoHasBeenSet = true;
    }

    if (value.HasMember("OpeningEndingEditingInfo") && !value["OpeningEndingEditingInfo"].IsNull())
    {
        if (!value["OpeningEndingEditingInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EditingInfo.OpeningEndingEditingInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_openingEndingEditingInfo.Deserialize(value["OpeningEndingEditingInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_openingEndingEditingInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EditingInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagEditingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagEditingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagEditingInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_classificationEditingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassificationEditingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_classificationEditingInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_stripEditingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StripEditingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_stripEditingInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_highlightsEditingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighlightsEditingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_highlightsEditingInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_coverEditingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverEditingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coverEditingInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_openingEndingEditingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpeningEndingEditingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_openingEndingEditingInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


TagEditingInfo EditingInfo::GetTagEditingInfo() const
{
    return m_tagEditingInfo;
}

void EditingInfo::SetTagEditingInfo(const TagEditingInfo& _tagEditingInfo)
{
    m_tagEditingInfo = _tagEditingInfo;
    m_tagEditingInfoHasBeenSet = true;
}

bool EditingInfo::TagEditingInfoHasBeenSet() const
{
    return m_tagEditingInfoHasBeenSet;
}

ClassificationEditingInfo EditingInfo::GetClassificationEditingInfo() const
{
    return m_classificationEditingInfo;
}

void EditingInfo::SetClassificationEditingInfo(const ClassificationEditingInfo& _classificationEditingInfo)
{
    m_classificationEditingInfo = _classificationEditingInfo;
    m_classificationEditingInfoHasBeenSet = true;
}

bool EditingInfo::ClassificationEditingInfoHasBeenSet() const
{
    return m_classificationEditingInfoHasBeenSet;
}

StripEditingInfo EditingInfo::GetStripEditingInfo() const
{
    return m_stripEditingInfo;
}

void EditingInfo::SetStripEditingInfo(const StripEditingInfo& _stripEditingInfo)
{
    m_stripEditingInfo = _stripEditingInfo;
    m_stripEditingInfoHasBeenSet = true;
}

bool EditingInfo::StripEditingInfoHasBeenSet() const
{
    return m_stripEditingInfoHasBeenSet;
}

HighlightsEditingInfo EditingInfo::GetHighlightsEditingInfo() const
{
    return m_highlightsEditingInfo;
}

void EditingInfo::SetHighlightsEditingInfo(const HighlightsEditingInfo& _highlightsEditingInfo)
{
    m_highlightsEditingInfo = _highlightsEditingInfo;
    m_highlightsEditingInfoHasBeenSet = true;
}

bool EditingInfo::HighlightsEditingInfoHasBeenSet() const
{
    return m_highlightsEditingInfoHasBeenSet;
}

CoverEditingInfo EditingInfo::GetCoverEditingInfo() const
{
    return m_coverEditingInfo;
}

void EditingInfo::SetCoverEditingInfo(const CoverEditingInfo& _coverEditingInfo)
{
    m_coverEditingInfo = _coverEditingInfo;
    m_coverEditingInfoHasBeenSet = true;
}

bool EditingInfo::CoverEditingInfoHasBeenSet() const
{
    return m_coverEditingInfoHasBeenSet;
}

OpeningEndingEditingInfo EditingInfo::GetOpeningEndingEditingInfo() const
{
    return m_openingEndingEditingInfo;
}

void EditingInfo::SetOpeningEndingEditingInfo(const OpeningEndingEditingInfo& _openingEndingEditingInfo)
{
    m_openingEndingEditingInfo = _openingEndingEditingInfo;
    m_openingEndingEditingInfoHasBeenSet = true;
}

bool EditingInfo::OpeningEndingEditingInfoHasBeenSet() const
{
    return m_openingEndingEditingInfoHasBeenSet;
}

