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

#include <tencentcloud/mrs/v20200910/model/Fp2NdItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Fp2NdItem::Fp2NdItem() :
    m_codeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_incisionHealingGradeHasBeenSet(false),
    m_anesthesiaMethodHasBeenSet(false)
{
}

CoreInternalOutcome Fp2NdItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fp2NdItem.Code` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_code.Deserialize(value["Code"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fp2NdItem.Name` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_name.Deserialize(value["Name"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fp2NdItem.StartTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_startTime.Deserialize(value["StartTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fp2NdItem.EndTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_endTime.Deserialize(value["EndTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fp2NdItem.Level` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_level.Deserialize(value["Level"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fp2NdItem.Type` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_type.Deserialize(value["Type"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_typeHasBeenSet = true;
    }

    if (value.HasMember("IncisionHealingGrade") && !value["IncisionHealingGrade"].IsNull())
    {
        if (!value["IncisionHealingGrade"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fp2NdItem.IncisionHealingGrade` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_incisionHealingGrade.Deserialize(value["IncisionHealingGrade"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_incisionHealingGradeHasBeenSet = true;
    }

    if (value.HasMember("AnesthesiaMethod") && !value["AnesthesiaMethod"].IsNull())
    {
        if (!value["AnesthesiaMethod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fp2NdItem.AnesthesiaMethod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_anesthesiaMethod.Deserialize(value["AnesthesiaMethod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_anesthesiaMethodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Fp2NdItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_code.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_name.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_startTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_endTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_level.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_type.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_incisionHealingGradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncisionHealingGrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_incisionHealingGrade.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_anesthesiaMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnesthesiaMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_anesthesiaMethod.ToJsonObject(value[key.c_str()], allocator);
    }

}


BaseItem Fp2NdItem::GetCode() const
{
    return m_code;
}

void Fp2NdItem::SetCode(const BaseItem& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool Fp2NdItem::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

BaseItem Fp2NdItem::GetName() const
{
    return m_name;
}

void Fp2NdItem::SetName(const BaseItem& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Fp2NdItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

BaseItem Fp2NdItem::GetStartTime() const
{
    return m_startTime;
}

void Fp2NdItem::SetStartTime(const BaseItem& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool Fp2NdItem::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

BaseItem Fp2NdItem::GetEndTime() const
{
    return m_endTime;
}

void Fp2NdItem::SetEndTime(const BaseItem& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool Fp2NdItem::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

BaseItem Fp2NdItem::GetLevel() const
{
    return m_level;
}

void Fp2NdItem::SetLevel(const BaseItem& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool Fp2NdItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

BaseItem Fp2NdItem::GetType() const
{
    return m_type;
}

void Fp2NdItem::SetType(const BaseItem& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Fp2NdItem::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

BaseItem Fp2NdItem::GetIncisionHealingGrade() const
{
    return m_incisionHealingGrade;
}

void Fp2NdItem::SetIncisionHealingGrade(const BaseItem& _incisionHealingGrade)
{
    m_incisionHealingGrade = _incisionHealingGrade;
    m_incisionHealingGradeHasBeenSet = true;
}

bool Fp2NdItem::IncisionHealingGradeHasBeenSet() const
{
    return m_incisionHealingGradeHasBeenSet;
}

BaseItem Fp2NdItem::GetAnesthesiaMethod() const
{
    return m_anesthesiaMethod;
}

void Fp2NdItem::SetAnesthesiaMethod(const BaseItem& _anesthesiaMethod)
{
    m_anesthesiaMethod = _anesthesiaMethod;
    m_anesthesiaMethodHasBeenSet = true;
}

bool Fp2NdItem::AnesthesiaMethodHasBeenSet() const
{
    return m_anesthesiaMethodHasBeenSet;
}

