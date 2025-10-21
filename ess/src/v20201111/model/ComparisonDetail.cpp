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

#include <tencentcloud/ess/v20201111/model/ComparisonDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

ComparisonDetail::ComparisonDetail() :
    m_comparisonTypeHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_originTextHasBeenSet(false),
    m_diffTextHasBeenSet(false)
{
}

CoreInternalOutcome ComparisonDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ComparisonType") && !value["ComparisonType"].IsNull())
    {
        if (!value["ComparisonType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComparisonDetail.ComparisonType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comparisonType = string(value["ComparisonType"].GetString());
        m_comparisonTypeHasBeenSet = true;
    }

    if (value.HasMember("ContentType") && !value["ContentType"].IsNull())
    {
        if (!value["ContentType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComparisonDetail.ContentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentType = string(value["ContentType"].GetString());
        m_contentTypeHasBeenSet = true;
    }

    if (value.HasMember("OriginText") && !value["OriginText"].IsNull())
    {
        if (!value["OriginText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComparisonDetail.OriginText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originText = string(value["OriginText"].GetString());
        m_originTextHasBeenSet = true;
    }

    if (value.HasMember("DiffText") && !value["DiffText"].IsNull())
    {
        if (!value["DiffText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComparisonDetail.DiffText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_diffText = string(value["DiffText"].GetString());
        m_diffTextHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComparisonDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_comparisonTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComparisonType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comparisonType.c_str(), allocator).Move(), allocator);
    }

    if (m_contentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentType.c_str(), allocator).Move(), allocator);
    }

    if (m_originTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originText.c_str(), allocator).Move(), allocator);
    }

    if (m_diffTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiffText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_diffText.c_str(), allocator).Move(), allocator);
    }

}


string ComparisonDetail::GetComparisonType() const
{
    return m_comparisonType;
}

void ComparisonDetail::SetComparisonType(const string& _comparisonType)
{
    m_comparisonType = _comparisonType;
    m_comparisonTypeHasBeenSet = true;
}

bool ComparisonDetail::ComparisonTypeHasBeenSet() const
{
    return m_comparisonTypeHasBeenSet;
}

string ComparisonDetail::GetContentType() const
{
    return m_contentType;
}

void ComparisonDetail::SetContentType(const string& _contentType)
{
    m_contentType = _contentType;
    m_contentTypeHasBeenSet = true;
}

bool ComparisonDetail::ContentTypeHasBeenSet() const
{
    return m_contentTypeHasBeenSet;
}

string ComparisonDetail::GetOriginText() const
{
    return m_originText;
}

void ComparisonDetail::SetOriginText(const string& _originText)
{
    m_originText = _originText;
    m_originTextHasBeenSet = true;
}

bool ComparisonDetail::OriginTextHasBeenSet() const
{
    return m_originTextHasBeenSet;
}

string ComparisonDetail::GetDiffText() const
{
    return m_diffText;
}

void ComparisonDetail::SetDiffText(const string& _diffText)
{
    m_diffText = _diffText;
    m_diffTextHasBeenSet = true;
}

bool ComparisonDetail::DiffTextHasBeenSet() const
{
    return m_diffTextHasBeenSet;
}

