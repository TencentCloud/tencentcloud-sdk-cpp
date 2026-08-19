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

#include <tencentcloud/csip/v20221121/model/CustomTag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CustomTag::CustomTag() :
    m_tagIDHasBeenSet(false),
    m_tagKeyHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_tagColorHasBeenSet(false)
{
}

CoreInternalOutcome CustomTag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagID") && !value["TagID"].IsNull())
    {
        if (!value["TagID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CustomTag.TagID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tagID = value["TagID"].GetUint64();
        m_tagIDHasBeenSet = true;
    }

    if (value.HasMember("TagKey") && !value["TagKey"].IsNull())
    {
        if (!value["TagKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomTag.TagKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagKey = string(value["TagKey"].GetString());
        m_tagKeyHasBeenSet = true;
    }

    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomTag.TagValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValue = string(value["TagValue"].GetString());
        m_tagValueHasBeenSet = true;
    }

    if (value.HasMember("TagColor") && !value["TagColor"].IsNull())
    {
        if (!value["TagColor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomTag.TagColor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagColor = string(value["TagColor"].GetString());
        m_tagColorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomTag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagID, allocator);
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

    if (m_tagColorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagColor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagColor.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CustomTag::GetTagID() const
{
    return m_tagID;
}

void CustomTag::SetTagID(const uint64_t& _tagID)
{
    m_tagID = _tagID;
    m_tagIDHasBeenSet = true;
}

bool CustomTag::TagIDHasBeenSet() const
{
    return m_tagIDHasBeenSet;
}

string CustomTag::GetTagKey() const
{
    return m_tagKey;
}

void CustomTag::SetTagKey(const string& _tagKey)
{
    m_tagKey = _tagKey;
    m_tagKeyHasBeenSet = true;
}

bool CustomTag::TagKeyHasBeenSet() const
{
    return m_tagKeyHasBeenSet;
}

string CustomTag::GetTagValue() const
{
    return m_tagValue;
}

void CustomTag::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool CustomTag::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

string CustomTag::GetTagColor() const
{
    return m_tagColor;
}

void CustomTag::SetTagColor(const string& _tagColor)
{
    m_tagColor = _tagColor;
    m_tagColorHasBeenSet = true;
}

bool CustomTag::TagColorHasBeenSet() const
{
    return m_tagColorHasBeenSet;
}

