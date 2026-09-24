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

#include <tencentcloud/ioa/v20220601/model/ProfileFieldItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

ProfileFieldItem::ProfileFieldItem() :
    m_idHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_isMustHasBeenSet(false),
    m_isShowHasBeenSet(false),
    m_isCustomHasBeenSet(false),
    m_nextOptionKeyHasBeenSet(false),
    m_optionsHasBeenSet(false),
    m_isReplaceHasBeenSet(false),
    m_groupEditableHasBeenSet(false),
    m_hasRulesHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_titleEnHasBeenSet(false),
    m_optionsEnHasBeenSet(false),
    m_optionsItemHasBeenSet(false)
{
}

CoreInternalOutcome ProfileFieldItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.Key` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_key = value["Key"].GetInt64();
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("IsMust") && !value["IsMust"].IsNull())
    {
        if (!value["IsMust"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.IsMust` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isMust = value["IsMust"].GetInt64();
        m_isMustHasBeenSet = true;
    }

    if (value.HasMember("IsShow") && !value["IsShow"].IsNull())
    {
        if (!value["IsShow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.IsShow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isShow = value["IsShow"].GetInt64();
        m_isShowHasBeenSet = true;
    }

    if (value.HasMember("IsCustom") && !value["IsCustom"].IsNull())
    {
        if (!value["IsCustom"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.IsCustom` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isCustom = value["IsCustom"].GetInt64();
        m_isCustomHasBeenSet = true;
    }

    if (value.HasMember("NextOptionKey") && !value["NextOptionKey"].IsNull())
    {
        if (!value["NextOptionKey"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.NextOptionKey` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nextOptionKey = value["NextOptionKey"].GetInt64();
        m_nextOptionKeyHasBeenSet = true;
    }

    if (value.HasMember("Options") && !value["Options"].IsNull())
    {
        if (!value["Options"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.Options` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_options = string(value["Options"].GetString());
        m_optionsHasBeenSet = true;
    }

    if (value.HasMember("IsReplace") && !value["IsReplace"].IsNull())
    {
        if (!value["IsReplace"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.IsReplace` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isReplace = value["IsReplace"].GetInt64();
        m_isReplaceHasBeenSet = true;
    }

    if (value.HasMember("GroupEditable") && !value["GroupEditable"].IsNull())
    {
        if (!value["GroupEditable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.GroupEditable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_groupEditable = value["GroupEditable"].GetBool();
        m_groupEditableHasBeenSet = true;
    }

    if (value.HasMember("HasRules") && !value["HasRules"].IsNull())
    {
        if (!value["HasRules"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.HasRules` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasRules = value["HasRules"].GetBool();
        m_hasRulesHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("TitleEn") && !value["TitleEn"].IsNull())
    {
        if (!value["TitleEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.TitleEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_titleEn = string(value["TitleEn"].GetString());
        m_titleEnHasBeenSet = true;
    }

    if (value.HasMember("OptionsEn") && !value["OptionsEn"].IsNull())
    {
        if (!value["OptionsEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.OptionsEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_optionsEn = string(value["OptionsEn"].GetString());
        m_optionsEnHasBeenSet = true;
    }

    if (value.HasMember("OptionsItem") && !value["OptionsItem"].IsNull())
    {
        if (!value["OptionsItem"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProfileFieldItem.OptionsItem` is not array type"));

        const rapidjson::Value &tmpValue = value["OptionsItem"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OptionsItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_optionsItem.push_back(item);
        }
        m_optionsItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProfileFieldItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_key, allocator);
    }

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_isMustHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMust";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isMust, allocator);
    }

    if (m_isShowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShow, allocator);
    }

    if (m_isCustomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCustom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCustom, allocator);
    }

    if (m_nextOptionKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextOptionKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nextOptionKey, allocator);
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_options.c_str(), allocator).Move(), allocator);
    }

    if (m_isReplaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsReplace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isReplace, allocator);
    }

    if (m_groupEditableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupEditable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupEditable, allocator);
    }

    if (m_hasRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasRules, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_titleEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TitleEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_titleEn.c_str(), allocator).Move(), allocator);
    }

    if (m_optionsEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionsEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_optionsEn.c_str(), allocator).Move(), allocator);
    }

    if (m_optionsItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionsItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_optionsItem.begin(); itr != m_optionsItem.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ProfileFieldItem::GetId() const
{
    return m_id;
}

void ProfileFieldItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ProfileFieldItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t ProfileFieldItem::GetKey() const
{
    return m_key;
}

void ProfileFieldItem::SetKey(const int64_t& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool ProfileFieldItem::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string ProfileFieldItem::GetTitle() const
{
    return m_title;
}

void ProfileFieldItem::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool ProfileFieldItem::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

int64_t ProfileFieldItem::GetType() const
{
    return m_type;
}

void ProfileFieldItem::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ProfileFieldItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ProfileFieldItem::GetIsMust() const
{
    return m_isMust;
}

void ProfileFieldItem::SetIsMust(const int64_t& _isMust)
{
    m_isMust = _isMust;
    m_isMustHasBeenSet = true;
}

bool ProfileFieldItem::IsMustHasBeenSet() const
{
    return m_isMustHasBeenSet;
}

int64_t ProfileFieldItem::GetIsShow() const
{
    return m_isShow;
}

void ProfileFieldItem::SetIsShow(const int64_t& _isShow)
{
    m_isShow = _isShow;
    m_isShowHasBeenSet = true;
}

bool ProfileFieldItem::IsShowHasBeenSet() const
{
    return m_isShowHasBeenSet;
}

int64_t ProfileFieldItem::GetIsCustom() const
{
    return m_isCustom;
}

void ProfileFieldItem::SetIsCustom(const int64_t& _isCustom)
{
    m_isCustom = _isCustom;
    m_isCustomHasBeenSet = true;
}

bool ProfileFieldItem::IsCustomHasBeenSet() const
{
    return m_isCustomHasBeenSet;
}

int64_t ProfileFieldItem::GetNextOptionKey() const
{
    return m_nextOptionKey;
}

void ProfileFieldItem::SetNextOptionKey(const int64_t& _nextOptionKey)
{
    m_nextOptionKey = _nextOptionKey;
    m_nextOptionKeyHasBeenSet = true;
}

bool ProfileFieldItem::NextOptionKeyHasBeenSet() const
{
    return m_nextOptionKeyHasBeenSet;
}

string ProfileFieldItem::GetOptions() const
{
    return m_options;
}

void ProfileFieldItem::SetOptions(const string& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool ProfileFieldItem::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

int64_t ProfileFieldItem::GetIsReplace() const
{
    return m_isReplace;
}

void ProfileFieldItem::SetIsReplace(const int64_t& _isReplace)
{
    m_isReplace = _isReplace;
    m_isReplaceHasBeenSet = true;
}

bool ProfileFieldItem::IsReplaceHasBeenSet() const
{
    return m_isReplaceHasBeenSet;
}

bool ProfileFieldItem::GetGroupEditable() const
{
    return m_groupEditable;
}

void ProfileFieldItem::SetGroupEditable(const bool& _groupEditable)
{
    m_groupEditable = _groupEditable;
    m_groupEditableHasBeenSet = true;
}

bool ProfileFieldItem::GroupEditableHasBeenSet() const
{
    return m_groupEditableHasBeenSet;
}

bool ProfileFieldItem::GetHasRules() const
{
    return m_hasRules;
}

void ProfileFieldItem::SetHasRules(const bool& _hasRules)
{
    m_hasRules = _hasRules;
    m_hasRulesHasBeenSet = true;
}

bool ProfileFieldItem::HasRulesHasBeenSet() const
{
    return m_hasRulesHasBeenSet;
}

int64_t ProfileFieldItem::GetRuleId() const
{
    return m_ruleId;
}

void ProfileFieldItem::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ProfileFieldItem::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ProfileFieldItem::GetTitleEn() const
{
    return m_titleEn;
}

void ProfileFieldItem::SetTitleEn(const string& _titleEn)
{
    m_titleEn = _titleEn;
    m_titleEnHasBeenSet = true;
}

bool ProfileFieldItem::TitleEnHasBeenSet() const
{
    return m_titleEnHasBeenSet;
}

string ProfileFieldItem::GetOptionsEn() const
{
    return m_optionsEn;
}

void ProfileFieldItem::SetOptionsEn(const string& _optionsEn)
{
    m_optionsEn = _optionsEn;
    m_optionsEnHasBeenSet = true;
}

bool ProfileFieldItem::OptionsEnHasBeenSet() const
{
    return m_optionsEnHasBeenSet;
}

vector<OptionsItem> ProfileFieldItem::GetOptionsItem() const
{
    return m_optionsItem;
}

void ProfileFieldItem::SetOptionsItem(const vector<OptionsItem>& _optionsItem)
{
    m_optionsItem = _optionsItem;
    m_optionsItemHasBeenSet = true;
}

bool ProfileFieldItem::OptionsItemHasBeenSet() const
{
    return m_optionsItemHasBeenSet;
}

