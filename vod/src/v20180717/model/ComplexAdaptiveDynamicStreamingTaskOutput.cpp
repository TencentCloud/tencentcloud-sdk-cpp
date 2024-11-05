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

#include <tencentcloud/vod/v20180717/model/ComplexAdaptiveDynamicStreamingTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ComplexAdaptiveDynamicStreamingTaskOutput::ComplexAdaptiveDynamicStreamingTaskOutput() :
    m_definitionHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_drmTypeHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

CoreInternalOutcome ComplexAdaptiveDynamicStreamingTaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTaskOutput.Definition` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetUint64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTaskOutput.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("DrmType") && !value["DrmType"].IsNull())
    {
        if (!value["DrmType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTaskOutput.DrmType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drmType = string(value["DrmType"].GetString());
        m_drmTypeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplexAdaptiveDynamicStreamingTaskOutput.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplexAdaptiveDynamicStreamingTaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_drmTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrmType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drmType.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ComplexAdaptiveDynamicStreamingTaskOutput::GetDefinition() const
{
    return m_definition;
}

void ComplexAdaptiveDynamicStreamingTaskOutput::SetDefinition(const uint64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTaskOutput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

string ComplexAdaptiveDynamicStreamingTaskOutput::GetFormat() const
{
    return m_format;
}

void ComplexAdaptiveDynamicStreamingTaskOutput::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTaskOutput::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string ComplexAdaptiveDynamicStreamingTaskOutput::GetDrmType() const
{
    return m_drmType;
}

void ComplexAdaptiveDynamicStreamingTaskOutput::SetDrmType(const string& _drmType)
{
    m_drmType = _drmType;
    m_drmTypeHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTaskOutput::DrmTypeHasBeenSet() const
{
    return m_drmTypeHasBeenSet;
}

string ComplexAdaptiveDynamicStreamingTaskOutput::GetUrl() const
{
    return m_url;
}

void ComplexAdaptiveDynamicStreamingTaskOutput::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ComplexAdaptiveDynamicStreamingTaskOutput::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

