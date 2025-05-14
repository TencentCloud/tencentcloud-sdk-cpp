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

#include <tencentcloud/tmt/v20180321/model/TransDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

TransDetail::TransDetail() :
    m_sourceLineTextHasBeenSet(false),
    m_targetLineTextHasBeenSet(false),
    m_boundingBoxHasBeenSet(false),
    m_linesCountHasBeenSet(false),
    m_lineHeightHasBeenSet(false),
    m_spamCodeHasBeenSet(false)
{
}

CoreInternalOutcome TransDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceLineText") && !value["SourceLineText"].IsNull())
    {
        if (!value["SourceLineText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransDetail.SourceLineText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceLineText = string(value["SourceLineText"].GetString());
        m_sourceLineTextHasBeenSet = true;
    }

    if (value.HasMember("TargetLineText") && !value["TargetLineText"].IsNull())
    {
        if (!value["TargetLineText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransDetail.TargetLineText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetLineText = string(value["TargetLineText"].GetString());
        m_targetLineTextHasBeenSet = true;
    }

    if (value.HasMember("BoundingBox") && !value["BoundingBox"].IsNull())
    {
        if (!value["BoundingBox"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TransDetail.BoundingBox` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_boundingBox.Deserialize(value["BoundingBox"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_boundingBoxHasBeenSet = true;
    }

    if (value.HasMember("LinesCount") && !value["LinesCount"].IsNull())
    {
        if (!value["LinesCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TransDetail.LinesCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_linesCount = value["LinesCount"].GetInt64();
        m_linesCountHasBeenSet = true;
    }

    if (value.HasMember("LineHeight") && !value["LineHeight"].IsNull())
    {
        if (!value["LineHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TransDetail.LineHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lineHeight = value["LineHeight"].GetInt64();
        m_lineHeightHasBeenSet = true;
    }

    if (value.HasMember("SpamCode") && !value["SpamCode"].IsNull())
    {
        if (!value["SpamCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TransDetail.SpamCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_spamCode = value["SpamCode"].GetInt64();
        m_spamCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceLineTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceLineText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceLineText.c_str(), allocator).Move(), allocator);
    }

    if (m_targetLineTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetLineText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetLineText.c_str(), allocator).Move(), allocator);
    }

    if (m_boundingBoxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundingBox";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_boundingBox.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_linesCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinesCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_linesCount, allocator);
    }

    if (m_lineHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineHeight, allocator);
    }

    if (m_spamCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpamCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spamCode, allocator);
    }

}


string TransDetail::GetSourceLineText() const
{
    return m_sourceLineText;
}

void TransDetail::SetSourceLineText(const string& _sourceLineText)
{
    m_sourceLineText = _sourceLineText;
    m_sourceLineTextHasBeenSet = true;
}

bool TransDetail::SourceLineTextHasBeenSet() const
{
    return m_sourceLineTextHasBeenSet;
}

string TransDetail::GetTargetLineText() const
{
    return m_targetLineText;
}

void TransDetail::SetTargetLineText(const string& _targetLineText)
{
    m_targetLineText = _targetLineText;
    m_targetLineTextHasBeenSet = true;
}

bool TransDetail::TargetLineTextHasBeenSet() const
{
    return m_targetLineTextHasBeenSet;
}

BoundingBox TransDetail::GetBoundingBox() const
{
    return m_boundingBox;
}

void TransDetail::SetBoundingBox(const BoundingBox& _boundingBox)
{
    m_boundingBox = _boundingBox;
    m_boundingBoxHasBeenSet = true;
}

bool TransDetail::BoundingBoxHasBeenSet() const
{
    return m_boundingBoxHasBeenSet;
}

int64_t TransDetail::GetLinesCount() const
{
    return m_linesCount;
}

void TransDetail::SetLinesCount(const int64_t& _linesCount)
{
    m_linesCount = _linesCount;
    m_linesCountHasBeenSet = true;
}

bool TransDetail::LinesCountHasBeenSet() const
{
    return m_linesCountHasBeenSet;
}

int64_t TransDetail::GetLineHeight() const
{
    return m_lineHeight;
}

void TransDetail::SetLineHeight(const int64_t& _lineHeight)
{
    m_lineHeight = _lineHeight;
    m_lineHeightHasBeenSet = true;
}

bool TransDetail::LineHeightHasBeenSet() const
{
    return m_lineHeightHasBeenSet;
}

int64_t TransDetail::GetSpamCode() const
{
    return m_spamCode;
}

void TransDetail::SetSpamCode(const int64_t& _spamCode)
{
    m_spamCode = _spamCode;
    m_spamCodeHasBeenSet = true;
}

bool TransDetail::SpamCodeHasBeenSet() const
{
    return m_spamCodeHasBeenSet;
}

