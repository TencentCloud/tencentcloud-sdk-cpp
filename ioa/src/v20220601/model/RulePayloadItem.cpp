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

#include <tencentcloud/ioa/v20220601/model/RulePayloadItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

RulePayloadItem::RulePayloadItem() :
    m_fieldKeyHasBeenSet(false),
    m_optionHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_groupsHasBeenSet(false),
    m_relateOptionHasBeenSet(false)
{
}

CoreInternalOutcome RulePayloadItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldKey") && !value["FieldKey"].IsNull())
    {
        if (!value["FieldKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RulePayloadItem.FieldKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldKey = string(value["FieldKey"].GetString());
        m_fieldKeyHasBeenSet = true;
    }

    if (value.HasMember("Option") && !value["Option"].IsNull())
    {
        if (!value["Option"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RulePayloadItem.Option` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_option = string(value["Option"].GetString());
        m_optionHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RulePayloadItem.Value` is not array type"));

        const rapidjson::Value &tmpValue = value["Value"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_value.push_back((*itr).GetString());
        }
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RulePayloadItem.Groups` is not array type"));

        const rapidjson::Value &tmpValue = value["Groups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RulePayloadItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groups.push_back(item);
        }
        m_groupsHasBeenSet = true;
    }

    if (value.HasMember("RelateOption") && !value["RelateOption"].IsNull())
    {
        if (!value["RelateOption"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RulePayloadItem.RelateOption` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relateOption = string(value["RelateOption"].GetString());
        m_relateOptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RulePayloadItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldKey.c_str(), allocator).Move(), allocator);
    }

    if (m_optionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_option.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_value.begin(); itr != m_value.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_relateOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relateOption.c_str(), allocator).Move(), allocator);
    }

}


string RulePayloadItem::GetFieldKey() const
{
    return m_fieldKey;
}

void RulePayloadItem::SetFieldKey(const string& _fieldKey)
{
    m_fieldKey = _fieldKey;
    m_fieldKeyHasBeenSet = true;
}

bool RulePayloadItem::FieldKeyHasBeenSet() const
{
    return m_fieldKeyHasBeenSet;
}

string RulePayloadItem::GetOption() const
{
    return m_option;
}

void RulePayloadItem::SetOption(const string& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool RulePayloadItem::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}

vector<string> RulePayloadItem::GetValue() const
{
    return m_value;
}

void RulePayloadItem::SetValue(const vector<string>& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool RulePayloadItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

vector<RulePayloadItem> RulePayloadItem::GetGroups() const
{
    return m_groups;
}

void RulePayloadItem::SetGroups(const vector<RulePayloadItem>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool RulePayloadItem::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

string RulePayloadItem::GetRelateOption() const
{
    return m_relateOption;
}

void RulePayloadItem::SetRelateOption(const string& _relateOption)
{
    m_relateOption = _relateOption;
    m_relateOptionHasBeenSet = true;
}

bool RulePayloadItem::RelateOptionHasBeenSet() const
{
    return m_relateOptionHasBeenSet;
}

