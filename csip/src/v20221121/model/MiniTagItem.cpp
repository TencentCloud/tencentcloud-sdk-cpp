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

#include <tencentcloud/csip/v20221121/model/MiniTagItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

MiniTagItem::MiniTagItem() :
    m_colorHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_tagKeyEnHasBeenSet(false),
    m_tagValueEnHasBeenSet(false)
{
}

CoreInternalOutcome MiniTagItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Color") && !value["Color"].IsNull())
    {
        if (!value["Color"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniTagItem.Color` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_color = string(value["Color"].GetString());
        m_colorHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniTagItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MiniTagItem.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("TagKey") && !value["TagKey"].IsNull())
    {
        if (!value["TagKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniTagItem.TagKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagKey = string(value["TagKey"].GetString());
        m_tagKeyHasBeenSet = true;
    }

    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniTagItem.TagValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValue = string(value["TagValue"].GetString());
        m_tagValueHasBeenSet = true;
    }

    if (value.HasMember("TagKeyEn") && !value["TagKeyEn"].IsNull())
    {
        if (!value["TagKeyEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniTagItem.TagKeyEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagKeyEn = string(value["TagKeyEn"].GetString());
        m_tagKeyEnHasBeenSet = true;
    }

    if (value.HasMember("TagValueEn") && !value["TagValueEn"].IsNull())
    {
        if (!value["TagValueEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MiniTagItem.TagValueEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValueEn = string(value["TagValueEn"].GetString());
        m_tagValueEnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MiniTagItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_colorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Color";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_color.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_tagKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagKey.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }

    if (m_tagKeyEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKeyEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagKeyEn.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValueEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagValueEn.c_str(), allocator).Move(), allocator);
    }

}


string MiniTagItem::GetColor() const
{
    return m_color;
}

void MiniTagItem::SetColor(const string& _color)
{
    m_color = _color;
    m_colorHasBeenSet = true;
}

bool MiniTagItem::ColorHasBeenSet() const
{
    return m_colorHasBeenSet;
}

string MiniTagItem::GetDescription() const
{
    return m_description;
}

void MiniTagItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool MiniTagItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t MiniTagItem::GetID() const
{
    return m_iD;
}

void MiniTagItem::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool MiniTagItem::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string MiniTagItem::GetTagKey() const
{
    return m_tagKey;
}

void MiniTagItem::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool MiniTagItem::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

string MiniTagItem::GetTagValue() const
{
    return m_tagValue;
}

void MiniTagItem::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool MiniTagItem::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

string MiniTagItem::GetTagKeyEn() const
{
    return m_tagKeyEn;
}

void MiniTagItem::SetTagKeyEn(const string& _tagKeyEn)
{
    m_tagKeyEn = _tagKeyEn;
    m_tagKeyEnHasBeenSet = true;
}

bool MiniTagItem::TagKeyEnHasBeenSet() const
{
    return m_tagKeyEnHasBeenSet;
}

string MiniTagItem::GetTagValueEn() const
{
    return m_tagValueEn;
}

void MiniTagItem::SetTagValueEn(const string& _tagValueEn)
{
    m_tagValueEn = _tagValueEn;
    m_tagValueEnHasBeenSet = true;
}

bool MiniTagItem::TagValueEnHasBeenSet() const
{
    return m_tagValueEnHasBeenSet;
}

