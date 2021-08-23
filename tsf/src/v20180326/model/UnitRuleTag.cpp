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

#include <tencentcloud/tsf/v20180326/model/UnitRuleTag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

UnitRuleTag::UnitRuleTag() :
    m_tagTypeHasBeenSet(false),
    m_tagFieldHasBeenSet(false),
    m_tagOperatorHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_unitRuleItemIdHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome UnitRuleTag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagType") && !value["TagType"].IsNull())
    {
        if (!value["TagType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitRuleTag.TagType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagType = string(value["TagType"].GetString());
        m_tagTypeHasBeenSet = true;
    }

    if (value.HasMember("TagField") && !value["TagField"].IsNull())
    {
        if (!value["TagField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitRuleTag.TagField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagField = string(value["TagField"].GetString());
        m_tagFieldHasBeenSet = true;
    }

    if (value.HasMember("TagOperator") && !value["TagOperator"].IsNull())
    {
        if (!value["TagOperator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitRuleTag.TagOperator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagOperator = string(value["TagOperator"].GetString());
        m_tagOperatorHasBeenSet = true;
    }

    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitRuleTag.TagValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValue = string(value["TagValue"].GetString());
        m_tagValueHasBeenSet = true;
    }

    if (value.HasMember("UnitRuleItemId") && !value["UnitRuleItemId"].IsNull())
    {
        if (!value["UnitRuleItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitRuleTag.UnitRuleItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unitRuleItemId = string(value["UnitRuleItemId"].GetString());
        m_unitRuleItemIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UnitRuleTag.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UnitRuleTag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagType.c_str(), allocator).Move(), allocator);
    }

    if (m_tagFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagField.c_str(), allocator).Move(), allocator);
    }

    if (m_tagOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagOperator.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }

    if (m_unitRuleItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnitRuleItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unitRuleItemId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

}


string UnitRuleTag::GetTagType() const
{
    return m_tagType;
}

void UnitRuleTag::SetTagType(const string& _tagType)
{
    m_tagType = _tagType;
    m_tagTypeHasBeenSet = true;
}

bool UnitRuleTag::TagTypeHasBeenSet() const
{
    return m_tagTypeHasBeenSet;
}

string UnitRuleTag::GetTagField() const
{
    return m_tagField;
}

void UnitRuleTag::SetTagField(const string& _tagField)
{
    m_tagField = _tagField;
    m_tagFieldHasBeenSet = true;
}

bool UnitRuleTag::TagFieldHasBeenSet() const
{
    return m_tagFieldHasBeenSet;
}

string UnitRuleTag::GetTagOperator() const
{
    return m_tagOperator;
}

void UnitRuleTag::SetTagOperator(const string& _tagOperator)
{
    m_tagOperator = _tagOperator;
    m_tagOperatorHasBeenSet = true;
}

bool UnitRuleTag::TagOperatorHasBeenSet() const
{
    return m_tagOperatorHasBeenSet;
}

string UnitRuleTag::GetTagValue() const
{
    return m_tagValue;
}

void UnitRuleTag::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool UnitRuleTag::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

string UnitRuleTag::GetUnitRuleItemId() const
{
    return m_unitRuleItemId;
}

void UnitRuleTag::SetUnitRuleItemId(const string& _unitRuleItemId)
{
    m_unitRuleItemId = _unitRuleItemId;
    m_unitRuleItemIdHasBeenSet = true;
}

bool UnitRuleTag::UnitRuleItemIdHasBeenSet() const
{
    return m_unitRuleItemIdHasBeenSet;
}

string UnitRuleTag::GetId() const
{
    return m_id;
}

void UnitRuleTag::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UnitRuleTag::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

