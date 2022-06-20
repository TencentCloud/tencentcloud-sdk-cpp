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

#include <tencentcloud/tsf/v20180326/model/BusinessLogConfigSchema.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

BusinessLogConfigSchema::BusinessLogConfigSchema() :
    m_schemaTypeHasBeenSet(false),
    m_schemaContentHasBeenSet(false),
    m_schemaDateFormatHasBeenSet(false),
    m_schemaMultilinePatternHasBeenSet(false),
    m_schemaCreateTimeHasBeenSet(false),
    m_schemaPatternLayoutHasBeenSet(false)
{
}

CoreInternalOutcome BusinessLogConfigSchema::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SchemaType") && !value["SchemaType"].IsNull())
    {
        if (!value["SchemaType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfigSchema.SchemaType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_schemaType = value["SchemaType"].GetInt64();
        m_schemaTypeHasBeenSet = true;
    }

    if (value.HasMember("SchemaContent") && !value["SchemaContent"].IsNull())
    {
        if (!value["SchemaContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfigSchema.SchemaContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaContent = string(value["SchemaContent"].GetString());
        m_schemaContentHasBeenSet = true;
    }

    if (value.HasMember("SchemaDateFormat") && !value["SchemaDateFormat"].IsNull())
    {
        if (!value["SchemaDateFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfigSchema.SchemaDateFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaDateFormat = string(value["SchemaDateFormat"].GetString());
        m_schemaDateFormatHasBeenSet = true;
    }

    if (value.HasMember("SchemaMultilinePattern") && !value["SchemaMultilinePattern"].IsNull())
    {
        if (!value["SchemaMultilinePattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfigSchema.SchemaMultilinePattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaMultilinePattern = string(value["SchemaMultilinePattern"].GetString());
        m_schemaMultilinePatternHasBeenSet = true;
    }

    if (value.HasMember("SchemaCreateTime") && !value["SchemaCreateTime"].IsNull())
    {
        if (!value["SchemaCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfigSchema.SchemaCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaCreateTime = string(value["SchemaCreateTime"].GetString());
        m_schemaCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("SchemaPatternLayout") && !value["SchemaPatternLayout"].IsNull())
    {
        if (!value["SchemaPatternLayout"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BusinessLogConfigSchema.SchemaPatternLayout` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaPatternLayout = string(value["SchemaPatternLayout"].GetString());
        m_schemaPatternLayoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BusinessLogConfigSchema::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_schemaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_schemaType, allocator);
    }

    if (m_schemaContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaContent.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaDateFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaDateFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaDateFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaMultilinePatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaMultilinePattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaMultilinePattern.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaPatternLayoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaPatternLayout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaPatternLayout.c_str(), allocator).Move(), allocator);
    }

}


int64_t BusinessLogConfigSchema::GetSchemaType() const
{
    return m_schemaType;
}

void BusinessLogConfigSchema::SetSchemaType(const int64_t& _schemaType)
{
    m_schemaType = _schemaType;
    m_schemaTypeHasBeenSet = true;
}

bool BusinessLogConfigSchema::SchemaTypeHasBeenSet() const
{
    return m_schemaTypeHasBeenSet;
}

string BusinessLogConfigSchema::GetSchemaContent() const
{
    return m_schemaContent;
}

void BusinessLogConfigSchema::SetSchemaContent(const string& _schemaContent)
{
    m_schemaContent = _schemaContent;
    m_schemaContentHasBeenSet = true;
}

bool BusinessLogConfigSchema::SchemaContentHasBeenSet() const
{
    return m_schemaContentHasBeenSet;
}

string BusinessLogConfigSchema::GetSchemaDateFormat() const
{
    return m_schemaDateFormat;
}

void BusinessLogConfigSchema::SetSchemaDateFormat(const string& _schemaDateFormat)
{
    m_schemaDateFormat = _schemaDateFormat;
    m_schemaDateFormatHasBeenSet = true;
}

bool BusinessLogConfigSchema::SchemaDateFormatHasBeenSet() const
{
    return m_schemaDateFormatHasBeenSet;
}

string BusinessLogConfigSchema::GetSchemaMultilinePattern() const
{
    return m_schemaMultilinePattern;
}

void BusinessLogConfigSchema::SetSchemaMultilinePattern(const string& _schemaMultilinePattern)
{
    m_schemaMultilinePattern = _schemaMultilinePattern;
    m_schemaMultilinePatternHasBeenSet = true;
}

bool BusinessLogConfigSchema::SchemaMultilinePatternHasBeenSet() const
{
    return m_schemaMultilinePatternHasBeenSet;
}

string BusinessLogConfigSchema::GetSchemaCreateTime() const
{
    return m_schemaCreateTime;
}

void BusinessLogConfigSchema::SetSchemaCreateTime(const string& _schemaCreateTime)
{
    m_schemaCreateTime = _schemaCreateTime;
    m_schemaCreateTimeHasBeenSet = true;
}

bool BusinessLogConfigSchema::SchemaCreateTimeHasBeenSet() const
{
    return m_schemaCreateTimeHasBeenSet;
}

string BusinessLogConfigSchema::GetSchemaPatternLayout() const
{
    return m_schemaPatternLayout;
}

void BusinessLogConfigSchema::SetSchemaPatternLayout(const string& _schemaPatternLayout)
{
    m_schemaPatternLayout = _schemaPatternLayout;
    m_schemaPatternLayoutHasBeenSet = true;
}

bool BusinessLogConfigSchema::SchemaPatternLayoutHasBeenSet() const
{
    return m_schemaPatternLayoutHasBeenSet;
}

