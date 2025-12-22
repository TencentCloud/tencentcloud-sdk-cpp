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

#include <tencentcloud/cls/v20201016/model/MetadataInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

MetadataInfo::MetadataInfo() :
    m_formatHasBeenSet(false),
    m_metaFieldsHasBeenSet(false),
    m_enableTagHasBeenSet(false),
    m_tagJsonTiledHasBeenSet(false)
{
}

CoreInternalOutcome MetadataInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetadataInfo.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("MetaFields") && !value["MetaFields"].IsNull())
    {
        if (!value["MetaFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MetadataInfo.MetaFields` is not array type"));

        const rapidjson::Value &tmpValue = value["MetaFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metaFields.push_back((*itr).GetString());
        }
        m_metaFieldsHasBeenSet = true;
    }

    if (value.HasMember("EnableTag") && !value["EnableTag"].IsNull())
    {
        if (!value["EnableTag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MetadataInfo.EnableTag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableTag = value["EnableTag"].GetBool();
        m_enableTagHasBeenSet = true;
    }

    if (value.HasMember("TagJsonTiled") && !value["TagJsonTiled"].IsNull())
    {
        if (!value["TagJsonTiled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MetadataInfo.TagJsonTiled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tagJsonTiled = value["TagJsonTiled"].GetBool();
        m_tagJsonTiledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetadataInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_metaFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metaFields.begin(); itr != m_metaFields.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTag, allocator);
    }

    if (m_tagJsonTiledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagJsonTiled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagJsonTiled, allocator);
    }

}


string MetadataInfo::GetFormat() const
{
    return m_format;
}

void MetadataInfo::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool MetadataInfo::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

vector<string> MetadataInfo::GetMetaFields() const
{
    return m_metaFields;
}

void MetadataInfo::SetMetaFields(const vector<string>& _metaFields)
{
    m_metaFields = _metaFields;
    m_metaFieldsHasBeenSet = true;
}

bool MetadataInfo::MetaFieldsHasBeenSet() const
{
    return m_metaFieldsHasBeenSet;
}

bool MetadataInfo::GetEnableTag() const
{
    return m_enableTag;
}

void MetadataInfo::SetEnableTag(const bool& _enableTag)
{
    m_enableTag = _enableTag;
    m_enableTagHasBeenSet = true;
}

bool MetadataInfo::EnableTagHasBeenSet() const
{
    return m_enableTagHasBeenSet;
}

bool MetadataInfo::GetTagJsonTiled() const
{
    return m_tagJsonTiled;
}

void MetadataInfo::SetTagJsonTiled(const bool& _tagJsonTiled)
{
    m_tagJsonTiled = _tagJsonTiled;
    m_tagJsonTiledHasBeenSet = true;
}

bool MetadataInfo::TagJsonTiledHasBeenSet() const
{
    return m_tagJsonTiledHasBeenSet;
}

