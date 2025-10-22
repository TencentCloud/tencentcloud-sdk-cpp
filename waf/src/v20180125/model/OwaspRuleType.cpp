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

#include <tencentcloud/waf/v20180125/model/OwaspRuleType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

OwaspRuleType::OwaspRuleType() :
    m_typeIdHasBeenSet(false),
    m_typeNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_totalRuleHasBeenSet(false),
    m_activeRuleHasBeenSet(false)
{
}

CoreInternalOutcome OwaspRuleType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TypeId") && !value["TypeId"].IsNull())
    {
        if (!value["TypeId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRuleType.TypeId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_typeId = value["TypeId"].GetUint64();
        m_typeIdHasBeenSet = true;
    }

    if (value.HasMember("TypeName") && !value["TypeName"].IsNull())
    {
        if (!value["TypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRuleType.TypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_typeName = string(value["TypeName"].GetString());
        m_typeNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRuleType.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Classification") && !value["Classification"].IsNull())
    {
        if (!value["Classification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRuleType.Classification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classification = string(value["Classification"].GetString());
        m_classificationHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRuleType.Action` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetInt64();
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRuleType.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRuleType.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TotalRule") && !value["TotalRule"].IsNull())
    {
        if (!value["TotalRule"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRuleType.TotalRule` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalRule = value["TotalRule"].GetUint64();
        m_totalRuleHasBeenSet = true;
    }

    if (value.HasMember("ActiveRule") && !value["ActiveRule"].IsNull())
    {
        if (!value["ActiveRule"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OwaspRuleType.ActiveRule` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeRule = value["ActiveRule"].GetUint64();
        m_activeRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OwaspRuleType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_typeId, allocator);
    }

    if (m_typeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_typeName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_classificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Classification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classification.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_totalRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalRule, allocator);
    }

    if (m_activeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeRule, allocator);
    }

}


uint64_t OwaspRuleType::GetTypeId() const
{
    return m_typeId;
}

void OwaspRuleType::SetTypeId(const uint64_t& _typeId)
{
    m_typeId = _typeId;
    m_typeIdHasBeenSet = true;
}

bool OwaspRuleType::TypeIdHasBeenSet() const
{
    return m_typeIdHasBeenSet;
}

string OwaspRuleType::GetTypeName() const
{
    return m_typeName;
}

void OwaspRuleType::SetTypeName(const string& _typeName)
{
    m_typeName = _typeName;
    m_typeNameHasBeenSet = true;
}

bool OwaspRuleType::TypeNameHasBeenSet() const
{
    return m_typeNameHasBeenSet;
}

string OwaspRuleType::GetDescription() const
{
    return m_description;
}

void OwaspRuleType::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool OwaspRuleType::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string OwaspRuleType::GetClassification() const
{
    return m_classification;
}

void OwaspRuleType::SetClassification(const string& _classification)
{
    m_classification = _classification;
    m_classificationHasBeenSet = true;
}

bool OwaspRuleType::ClassificationHasBeenSet() const
{
    return m_classificationHasBeenSet;
}

int64_t OwaspRuleType::GetAction() const
{
    return m_action;
}

void OwaspRuleType::SetAction(const int64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool OwaspRuleType::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

int64_t OwaspRuleType::GetLevel() const
{
    return m_level;
}

void OwaspRuleType::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool OwaspRuleType::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t OwaspRuleType::GetStatus() const
{
    return m_status;
}

void OwaspRuleType::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OwaspRuleType::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t OwaspRuleType::GetTotalRule() const
{
    return m_totalRule;
}

void OwaspRuleType::SetTotalRule(const uint64_t& _totalRule)
{
    m_totalRule = _totalRule;
    m_totalRuleHasBeenSet = true;
}

bool OwaspRuleType::TotalRuleHasBeenSet() const
{
    return m_totalRuleHasBeenSet;
}

uint64_t OwaspRuleType::GetActiveRule() const
{
    return m_activeRule;
}

void OwaspRuleType::SetActiveRule(const uint64_t& _activeRule)
{
    m_activeRule = _activeRule;
    m_activeRuleHasBeenSet = true;
}

bool OwaspRuleType::ActiveRuleHasBeenSet() const
{
    return m_activeRuleHasBeenSet;
}

