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

#include <tencentcloud/mps/v20190612/model/ModifyQualityControlTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifyQualityControlTemplateRequest::ModifyQualityControlTemplateRequest() :
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_qualityControlItemSetHasBeenSet(false),
    m_recordFormatHasBeenSet(false),
    m_strategyHasBeenSet(false)
{
}

string ModifyQualityControlTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_definition, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_qualityControlItemSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityControlItemSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qualityControlItemSet.begin(); itr != m_qualityControlItemSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_recordFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_recordFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_strategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_strategy.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyQualityControlTemplateRequest::GetDefinition() const
{
    return m_definition;
}

void ModifyQualityControlTemplateRequest::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ModifyQualityControlTemplateRequest::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ModifyQualityControlTemplateRequest::GetName() const
{
    return m_name;
}

void ModifyQualityControlTemplateRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyQualityControlTemplateRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyQualityControlTemplateRequest::GetComment() const
{
    return m_comment;
}

void ModifyQualityControlTemplateRequest::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ModifyQualityControlTemplateRequest::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<QualityControlItemConfig> ModifyQualityControlTemplateRequest::GetQualityControlItemSet() const
{
    return m_qualityControlItemSet;
}

void ModifyQualityControlTemplateRequest::SetQualityControlItemSet(const vector<QualityControlItemConfig>& _qualityControlItemSet)
{
    m_qualityControlItemSet = _qualityControlItemSet;
    m_qualityControlItemSetHasBeenSet = true;
}

bool ModifyQualityControlTemplateRequest::QualityControlItemSetHasBeenSet() const
{
    return m_qualityControlItemSetHasBeenSet;
}

string ModifyQualityControlTemplateRequest::GetRecordFormat() const
{
    return m_recordFormat;
}

void ModifyQualityControlTemplateRequest::SetRecordFormat(const string& _recordFormat)
{
    m_recordFormat = _recordFormat;
    m_recordFormatHasBeenSet = true;
}

bool ModifyQualityControlTemplateRequest::RecordFormatHasBeenSet() const
{
    return m_recordFormatHasBeenSet;
}

QualityControlStrategy ModifyQualityControlTemplateRequest::GetStrategy() const
{
    return m_strategy;
}

void ModifyQualityControlTemplateRequest::SetStrategy(const QualityControlStrategy& _strategy)
{
    m_strategy = _strategy;
    m_strategyHasBeenSet = true;
}

bool ModifyQualityControlTemplateRequest::StrategyHasBeenSet() const
{
    return m_strategyHasBeenSet;
}


