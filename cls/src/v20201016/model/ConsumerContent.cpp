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

#include <tencentcloud/cls/v20201016/model/ConsumerContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ConsumerContent::ConsumerContent() :
    m_enableTagHasBeenSet(false),
    m_metaFieldsHasBeenSet(false),
    m_tagJsonNotTiledHasBeenSet(false),
    m_timestampAccuracyHasBeenSet(false),
    m_jsonTypeHasBeenSet(false)
{
}

CoreInternalOutcome ConsumerContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableTag") && !value["EnableTag"].IsNull())
    {
        if (!value["EnableTag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerContent.EnableTag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableTag = value["EnableTag"].GetBool();
        m_enableTagHasBeenSet = true;
    }

    if (value.HasMember("MetaFields") && !value["MetaFields"].IsNull())
    {
        if (!value["MetaFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConsumerContent.MetaFields` is not array type"));

        const rapidjson::Value &tmpValue = value["MetaFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metaFields.push_back((*itr).GetString());
        }
        m_metaFieldsHasBeenSet = true;
    }

    if (value.HasMember("TagJsonNotTiled") && !value["TagJsonNotTiled"].IsNull())
    {
        if (!value["TagJsonNotTiled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerContent.TagJsonNotTiled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tagJsonNotTiled = value["TagJsonNotTiled"].GetBool();
        m_tagJsonNotTiledHasBeenSet = true;
    }

    if (value.HasMember("TimestampAccuracy") && !value["TimestampAccuracy"].IsNull())
    {
        if (!value["TimestampAccuracy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerContent.TimestampAccuracy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestampAccuracy = value["TimestampAccuracy"].GetInt64();
        m_timestampAccuracyHasBeenSet = true;
    }

    if (value.HasMember("JsonType") && !value["JsonType"].IsNull())
    {
        if (!value["JsonType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConsumerContent.JsonType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jsonType = value["JsonType"].GetInt64();
        m_jsonTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsumerContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableTag, allocator);
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

    if (m_tagJsonNotTiledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagJsonNotTiled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagJsonNotTiled, allocator);
    }

    if (m_timestampAccuracyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimestampAccuracy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestampAccuracy, allocator);
    }

    if (m_jsonTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsonType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jsonType, allocator);
    }

}


bool ConsumerContent::GetEnableTag() const
{
    return m_enableTag;
}

void ConsumerContent::SetEnableTag(const bool& _enableTag)
{
    m_enableTag = _enableTag;
    m_enableTagHasBeenSet = true;
}

bool ConsumerContent::EnableTagHasBeenSet() const
{
    return m_enableTagHasBeenSet;
}

vector<string> ConsumerContent::GetMetaFields() const
{
    return m_metaFields;
}

void ConsumerContent::SetMetaFields(const vector<string>& _metaFields)
{
    m_metaFields = _metaFields;
    m_metaFieldsHasBeenSet = true;
}

bool ConsumerContent::MetaFieldsHasBeenSet() const
{
    return m_metaFieldsHasBeenSet;
}

bool ConsumerContent::GetTagJsonNotTiled() const
{
    return m_tagJsonNotTiled;
}

void ConsumerContent::SetTagJsonNotTiled(const bool& _tagJsonNotTiled)
{
    m_tagJsonNotTiled = _tagJsonNotTiled;
    m_tagJsonNotTiledHasBeenSet = true;
}

bool ConsumerContent::TagJsonNotTiledHasBeenSet() const
{
    return m_tagJsonNotTiledHasBeenSet;
}

int64_t ConsumerContent::GetTimestampAccuracy() const
{
    return m_timestampAccuracy;
}

void ConsumerContent::SetTimestampAccuracy(const int64_t& _timestampAccuracy)
{
    m_timestampAccuracy = _timestampAccuracy;
    m_timestampAccuracyHasBeenSet = true;
}

bool ConsumerContent::TimestampAccuracyHasBeenSet() const
{
    return m_timestampAccuracyHasBeenSet;
}

int64_t ConsumerContent::GetJsonType() const
{
    return m_jsonType;
}

void ConsumerContent::SetJsonType(const int64_t& _jsonType)
{
    m_jsonType = _jsonType;
    m_jsonTypeHasBeenSet = true;
}

bool ConsumerContent::JsonTypeHasBeenSet() const
{
    return m_jsonTypeHasBeenSet;
}

