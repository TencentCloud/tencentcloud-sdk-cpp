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

#include <tencentcloud/bi/v20220105/model/JoinRelationField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

JoinRelationField::JoinRelationField() :
    m_fieldJoinIdHasBeenSet(false),
    m_sourceFieldHasBeenSet(false),
    m_targetFieldHasBeenSet(false)
{
}

CoreInternalOutcome JoinRelationField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldJoinId") && !value["FieldJoinId"].IsNull())
    {
        if (!value["FieldJoinId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JoinRelationField.FieldJoinId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldJoinId = string(value["FieldJoinId"].GetString());
        m_fieldJoinIdHasBeenSet = true;
    }

    if (value.HasMember("SourceField") && !value["SourceField"].IsNull())
    {
        if (!value["SourceField"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JoinRelationField.SourceField` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceField.Deserialize(value["SourceField"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceFieldHasBeenSet = true;
    }

    if (value.HasMember("TargetField") && !value["TargetField"].IsNull())
    {
        if (!value["TargetField"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JoinRelationField.TargetField` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetField.Deserialize(value["TargetField"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetFieldHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JoinRelationField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldJoinIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldJoinId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldJoinId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceField.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetField.ToJsonObject(value[key.c_str()], allocator);
    }

}


string JoinRelationField::GetFieldJoinId() const
{
    return m_fieldJoinId;
}

void JoinRelationField::SetFieldJoinId(const string& _fieldJoinId)
{
    m_fieldJoinId = _fieldJoinId;
    m_fieldJoinIdHasBeenSet = true;
}

bool JoinRelationField::FieldJoinIdHasBeenSet() const
{
    return m_fieldJoinIdHasBeenSet;
}

TableField JoinRelationField::GetSourceField() const
{
    return m_sourceField;
}

void JoinRelationField::SetSourceField(const TableField& _sourceField)
{
    m_sourceField = _sourceField;
    m_sourceFieldHasBeenSet = true;
}

bool JoinRelationField::SourceFieldHasBeenSet() const
{
    return m_sourceFieldHasBeenSet;
}

TableField JoinRelationField::GetTargetField() const
{
    return m_targetField;
}

void JoinRelationField::SetTargetField(const TableField& _targetField)
{
    m_targetField = _targetField;
    m_targetFieldHasBeenSet = true;
}

bool JoinRelationField::TargetFieldHasBeenSet() const
{
    return m_targetFieldHasBeenSet;
}

