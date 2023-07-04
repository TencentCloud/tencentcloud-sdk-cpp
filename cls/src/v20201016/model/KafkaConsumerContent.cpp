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

#include <tencentcloud/cls/v20201016/model/KafkaConsumerContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

KafkaConsumerContent::KafkaConsumerContent() :
    m_formatHasBeenSet(false),
    m_enableTagHasBeenSet(false),
    m_metaFieldsHasBeenSet(false),
    m_tagTransactionHasBeenSet(false),
    m_jsonTypeHasBeenSet(false)
{
}

CoreInternalOutcome KafkaConsumerContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConsumerContent.Format` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_format = value["Format"].GetInt64();
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("EnableTag") && !value["EnableTag"].IsNull())
    {
        if (!value["EnableTag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConsumerContent.EnableTag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableTag = value["EnableTag"].GetBool();
        m_enableTagHasBeenSet = true;
    }

    if (value.HasMember("MetaFields") && !value["MetaFields"].IsNull())
    {
        if (!value["MetaFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KafkaConsumerContent.MetaFields` is not array type"));

        const rapidjson::Value &tmpValue = value["MetaFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_metaFields.push_back((*itr).GetString());
        }
        m_metaFieldsHasBeenSet = true;
    }

    if (value.HasMember("TagTransaction") && !value["TagTransaction"].IsNull())
    {
        if (!value["TagTransaction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConsumerContent.TagTransaction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tagTransaction = value["TagTransaction"].GetInt64();
        m_tagTransactionHasBeenSet = true;
    }

    if (value.HasMember("JsonType") && !value["JsonType"].IsNull())
    {
        if (!value["JsonType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConsumerContent.JsonType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jsonType = value["JsonType"].GetInt64();
        m_jsonTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KafkaConsumerContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_format, allocator);
    }

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

    if (m_tagTransactionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagTransaction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagTransaction, allocator);
    }

    if (m_jsonTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsonType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jsonType, allocator);
    }

}


int64_t KafkaConsumerContent::GetFormat() const
{
    return m_format;
}

void KafkaConsumerContent::SetFormat(const int64_t& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool KafkaConsumerContent::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

bool KafkaConsumerContent::GetEnableTag() const
{
    return m_enableTag;
}

void KafkaConsumerContent::SetEnableTag(const bool& _enableTag)
{
    m_enableTag = _enableTag;
    m_enableTagHasBeenSet = true;
}

bool KafkaConsumerContent::EnableTagHasBeenSet() const
{
    return m_enableTagHasBeenSet;
}

vector<string> KafkaConsumerContent::GetMetaFields() const
{
    return m_metaFields;
}

void KafkaConsumerContent::SetMetaFields(const vector<string>& _metaFields)
{
    m_metaFields = _metaFields;
    m_metaFieldsHasBeenSet = true;
}

bool KafkaConsumerContent::MetaFieldsHasBeenSet() const
{
    return m_metaFieldsHasBeenSet;
}

int64_t KafkaConsumerContent::GetTagTransaction() const
{
    return m_tagTransaction;
}

void KafkaConsumerContent::SetTagTransaction(const int64_t& _tagTransaction)
{
    m_tagTransaction = _tagTransaction;
    m_tagTransactionHasBeenSet = true;
}

bool KafkaConsumerContent::TagTransactionHasBeenSet() const
{
    return m_tagTransactionHasBeenSet;
}

int64_t KafkaConsumerContent::GetJsonType() const
{
    return m_jsonType;
}

void KafkaConsumerContent::SetJsonType(const int64_t& _jsonType)
{
    m_jsonType = _jsonType;
    m_jsonTypeHasBeenSet = true;
}

bool KafkaConsumerContent::JsonTypeHasBeenSet() const
{
    return m_jsonTypeHasBeenSet;
}

