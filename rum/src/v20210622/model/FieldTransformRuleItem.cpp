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

#include <tencentcloud/rum/v20210622/model/FieldTransformRuleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

FieldTransformRuleItem::FieldTransformRuleItem() :
    m_idHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_targetFieldHasBeenSet(false),
    m_matchTypeHasBeenSet(false),
    m_matchPatternHasBeenSet(false),
    m_transformActionHasBeenSet(false),
    m_replaceValueHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_updatedByHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome FieldTransformRuleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TargetField") && !value["TargetField"].IsNull())
    {
        if (!value["TargetField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.TargetField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetField = string(value["TargetField"].GetString());
        m_targetFieldHasBeenSet = true;
    }

    if (value.HasMember("MatchType") && !value["MatchType"].IsNull())
    {
        if (!value["MatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.MatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchType = string(value["MatchType"].GetString());
        m_matchTypeHasBeenSet = true;
    }

    if (value.HasMember("MatchPattern") && !value["MatchPattern"].IsNull())
    {
        if (!value["MatchPattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.MatchPattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchPattern = string(value["MatchPattern"].GetString());
        m_matchPatternHasBeenSet = true;
    }

    if (value.HasMember("TransformAction") && !value["TransformAction"].IsNull())
    {
        if (!value["TransformAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.TransformAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transformAction = string(value["TransformAction"].GetString());
        m_transformActionHasBeenSet = true;
    }

    if (value.HasMember("ReplaceValue") && !value["ReplaceValue"].IsNull())
    {
        if (!value["ReplaceValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.ReplaceValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replaceValue = string(value["ReplaceValue"].GetString());
        m_replaceValueHasBeenSet = true;
    }

    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("CreatedBy") && !value["CreatedBy"].IsNull())
    {
        if (!value["CreatedBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.CreatedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdBy = string(value["CreatedBy"].GetString());
        m_createdByHasBeenSet = true;
    }

    if (value.HasMember("UpdatedBy") && !value["UpdatedBy"].IsNull())
    {
        if (!value["UpdatedBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.UpdatedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedBy = string(value["UpdatedBy"].GetString());
        m_updatedByHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldTransformRuleItem.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldTransformRuleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_targetFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetField.c_str(), allocator).Move(), allocator);
    }

    if (m_matchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchType.c_str(), allocator).Move(), allocator);
    }

    if (m_matchPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_transformActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransformAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transformAction.c_str(), allocator).Move(), allocator);
    }

    if (m_replaceValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplaceValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replaceValue.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_createdByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdBy.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedBy.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

}


int64_t FieldTransformRuleItem::GetId() const
{
    return m_id;
}

void FieldTransformRuleItem::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool FieldTransformRuleItem::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string FieldTransformRuleItem::GetAppId() const
{
    return m_appId;
}

void FieldTransformRuleItem::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool FieldTransformRuleItem::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string FieldTransformRuleItem::GetName() const
{
    return m_name;
}

void FieldTransformRuleItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FieldTransformRuleItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FieldTransformRuleItem::GetTargetField() const
{
    return m_targetField;
}

void FieldTransformRuleItem::SetTargetField(const string& _targetField)
{
    m_targetField = _targetField;
    m_targetFieldHasBeenSet = true;
}

bool FieldTransformRuleItem::TargetFieldHasBeenSet() const
{
    return m_targetFieldHasBeenSet;
}

string FieldTransformRuleItem::GetMatchType() const
{
    return m_matchType;
}

void FieldTransformRuleItem::SetMatchType(const string& _matchType)
{
    m_matchType = _matchType;
    m_matchTypeHasBeenSet = true;
}

bool FieldTransformRuleItem::MatchTypeHasBeenSet() const
{
    return m_matchTypeHasBeenSet;
}

string FieldTransformRuleItem::GetMatchPattern() const
{
    return m_matchPattern;
}

void FieldTransformRuleItem::SetMatchPattern(const string& _matchPattern)
{
    m_matchPattern = _matchPattern;
    m_matchPatternHasBeenSet = true;
}

bool FieldTransformRuleItem::MatchPatternHasBeenSet() const
{
    return m_matchPatternHasBeenSet;
}

string FieldTransformRuleItem::GetTransformAction() const
{
    return m_transformAction;
}

void FieldTransformRuleItem::SetTransformAction(const string& _transformAction)
{
    m_transformAction = _transformAction;
    m_transformActionHasBeenSet = true;
}

bool FieldTransformRuleItem::TransformActionHasBeenSet() const
{
    return m_transformActionHasBeenSet;
}

string FieldTransformRuleItem::GetReplaceValue() const
{
    return m_replaceValue;
}

void FieldTransformRuleItem::SetReplaceValue(const string& _replaceValue)
{
    m_replaceValue = _replaceValue;
    m_replaceValueHasBeenSet = true;
}

bool FieldTransformRuleItem::ReplaceValueHasBeenSet() const
{
    return m_replaceValueHasBeenSet;
}

int64_t FieldTransformRuleItem::GetPriority() const
{
    return m_priority;
}

void FieldTransformRuleItem::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool FieldTransformRuleItem::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

bool FieldTransformRuleItem::GetEnabled() const
{
    return m_enabled;
}

void FieldTransformRuleItem::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool FieldTransformRuleItem::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string FieldTransformRuleItem::GetCreatedBy() const
{
    return m_createdBy;
}

void FieldTransformRuleItem::SetCreatedBy(const string& _createdBy)
{
    m_createdBy = _createdBy;
    m_createdByHasBeenSet = true;
}

bool FieldTransformRuleItem::CreatedByHasBeenSet() const
{
    return m_createdByHasBeenSet;
}

string FieldTransformRuleItem::GetUpdatedBy() const
{
    return m_updatedBy;
}

void FieldTransformRuleItem::SetUpdatedBy(const string& _updatedBy)
{
    m_updatedBy = _updatedBy;
    m_updatedByHasBeenSet = true;
}

bool FieldTransformRuleItem::UpdatedByHasBeenSet() const
{
    return m_updatedByHasBeenSet;
}

string FieldTransformRuleItem::GetCreatedAt() const
{
    return m_createdAt;
}

void FieldTransformRuleItem::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool FieldTransformRuleItem::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string FieldTransformRuleItem::GetUpdatedAt() const
{
    return m_updatedAt;
}

void FieldTransformRuleItem::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool FieldTransformRuleItem::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

