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

#include <tencentcloud/mrs/v20200910/model/SurgerySpinalExtremities.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

SurgerySpinalExtremities::SurgerySpinalExtremities() :
    m_textHasBeenSet(false),
    m_spinalColumnHasBeenSet(false),
    m_limbJointHasBeenSet(false),
    m_footHasBeenSet(false),
    m_boneHasBeenSet(false),
    m_gaitHasBeenSet(false),
    m_deformityHasBeenSet(false)
{
}

CoreInternalOutcome SurgerySpinalExtremities::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgerySpinalExtremities.Text` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_text.Deserialize(value["Text"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textHasBeenSet = true;
    }

    if (value.HasMember("SpinalColumn") && !value["SpinalColumn"].IsNull())
    {
        if (!value["SpinalColumn"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgerySpinalExtremities.SpinalColumn` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_spinalColumn.Deserialize(value["SpinalColumn"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_spinalColumnHasBeenSet = true;
    }

    if (value.HasMember("LimbJoint") && !value["LimbJoint"].IsNull())
    {
        if (!value["LimbJoint"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgerySpinalExtremities.LimbJoint` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_limbJoint.Deserialize(value["LimbJoint"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_limbJointHasBeenSet = true;
    }

    if (value.HasMember("Foot") && !value["Foot"].IsNull())
    {
        if (!value["Foot"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgerySpinalExtremities.Foot` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_foot.Deserialize(value["Foot"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_footHasBeenSet = true;
    }

    if (value.HasMember("Bone") && !value["Bone"].IsNull())
    {
        if (!value["Bone"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgerySpinalExtremities.Bone` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bone.Deserialize(value["Bone"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_boneHasBeenSet = true;
    }

    if (value.HasMember("Gait") && !value["Gait"].IsNull())
    {
        if (!value["Gait"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgerySpinalExtremities.Gait` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gait.Deserialize(value["Gait"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gaitHasBeenSet = true;
    }

    if (value.HasMember("Deformity") && !value["Deformity"].IsNull())
    {
        if (!value["Deformity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SurgerySpinalExtremities.Deformity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deformity.Deserialize(value["Deformity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deformityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SurgerySpinalExtremities::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_text.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_spinalColumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpinalColumn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_spinalColumn.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_limbJointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimbJoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_limbJoint.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_footHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Foot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_foot.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_boneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bone.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gaitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gait";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gait.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deformityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deformity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deformity.ToJsonObject(value[key.c_str()], allocator);
    }

}


KeyValueItem SurgerySpinalExtremities::GetText() const
{
    return m_text;
}

void SurgerySpinalExtremities::SetText(const KeyValueItem& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SurgerySpinalExtremities::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

KeyValueItem SurgerySpinalExtremities::GetSpinalColumn() const
{
    return m_spinalColumn;
}

void SurgerySpinalExtremities::SetSpinalColumn(const KeyValueItem& _spinalColumn)
{
    m_spinalColumn = _spinalColumn;
    m_spinalColumnHasBeenSet = true;
}

bool SurgerySpinalExtremities::SpinalColumnHasBeenSet() const
{
    return m_spinalColumnHasBeenSet;
}

KeyValueItem SurgerySpinalExtremities::GetLimbJoint() const
{
    return m_limbJoint;
}

void SurgerySpinalExtremities::SetLimbJoint(const KeyValueItem& _limbJoint)
{
    m_limbJoint = _limbJoint;
    m_limbJointHasBeenSet = true;
}

bool SurgerySpinalExtremities::LimbJointHasBeenSet() const
{
    return m_limbJointHasBeenSet;
}

KeyValueItem SurgerySpinalExtremities::GetFoot() const
{
    return m_foot;
}

void SurgerySpinalExtremities::SetFoot(const KeyValueItem& _foot)
{
    m_foot = _foot;
    m_footHasBeenSet = true;
}

bool SurgerySpinalExtremities::FootHasBeenSet() const
{
    return m_footHasBeenSet;
}

KeyValueItem SurgerySpinalExtremities::GetBone() const
{
    return m_bone;
}

void SurgerySpinalExtremities::SetBone(const KeyValueItem& _bone)
{
    m_bone = _bone;
    m_boneHasBeenSet = true;
}

bool SurgerySpinalExtremities::BoneHasBeenSet() const
{
    return m_boneHasBeenSet;
}

KeyValueItem SurgerySpinalExtremities::GetGait() const
{
    return m_gait;
}

void SurgerySpinalExtremities::SetGait(const KeyValueItem& _gait)
{
    m_gait = _gait;
    m_gaitHasBeenSet = true;
}

bool SurgerySpinalExtremities::GaitHasBeenSet() const
{
    return m_gaitHasBeenSet;
}

KeyValueItem SurgerySpinalExtremities::GetDeformity() const
{
    return m_deformity;
}

void SurgerySpinalExtremities::SetDeformity(const KeyValueItem& _deformity)
{
    m_deformity = _deformity;
    m_deformityHasBeenSet = true;
}

bool SurgerySpinalExtremities::DeformityHasBeenSet() const
{
    return m_deformityHasBeenSet;
}

