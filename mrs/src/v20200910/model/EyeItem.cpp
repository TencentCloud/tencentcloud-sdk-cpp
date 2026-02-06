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

#include <tencentcloud/mrs/v20200910/model/EyeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

EyeItem::EyeItem() :
    m_leftHasBeenSet(false),
    m_rightHasBeenSet(false),
    m_pdHasBeenSet(false),
    m_rightFinalHasBeenSet(false),
    m_leftFinalHasBeenSet(false)
{
}

CoreInternalOutcome EyeItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Left") && !value["Left"].IsNull())
    {
        if (!value["Left"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EyeItem.Left` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_left.Deserialize(value["Left"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_leftHasBeenSet = true;
    }

    if (value.HasMember("Right") && !value["Right"].IsNull())
    {
        if (!value["Right"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EyeItem.Right` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_right.Deserialize(value["Right"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rightHasBeenSet = true;
    }

    if (value.HasMember("Pd") && !value["Pd"].IsNull())
    {
        if (!value["Pd"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EyeItem.Pd` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pd.Deserialize(value["Pd"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pdHasBeenSet = true;
    }

    if (value.HasMember("RightFinal") && !value["RightFinal"].IsNull())
    {
        if (!value["RightFinal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EyeItem.RightFinal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rightFinal.Deserialize(value["RightFinal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rightFinalHasBeenSet = true;
    }

    if (value.HasMember("LeftFinal") && !value["LeftFinal"].IsNull())
    {
        if (!value["LeftFinal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EyeItem.LeftFinal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_leftFinal.Deserialize(value["LeftFinal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_leftFinalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EyeItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_leftHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Left";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_left.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Right";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_right.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pd.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rightFinalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightFinal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rightFinal.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_leftFinalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftFinal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_leftFinal.ToJsonObject(value[key.c_str()], allocator);
    }

}


EyeChildItem EyeItem::GetLeft() const
{
    return m_left;
}

void EyeItem::SetLeft(const EyeChildItem& _left)
{
    m_left = _left;
    m_leftHasBeenSet = true;
}

bool EyeItem::LeftHasBeenSet() const
{
    return m_leftHasBeenSet;
}

EyeChildItem EyeItem::GetRight() const
{
    return m_right;
}

void EyeItem::SetRight(const EyeChildItem& _right)
{
    m_right = _right;
    m_rightHasBeenSet = true;
}

bool EyeItem::RightHasBeenSet() const
{
    return m_rightHasBeenSet;
}

BaseItem2 EyeItem::GetPd() const
{
    return m_pd;
}

void EyeItem::SetPd(const BaseItem2& _pd)
{
    m_pd = _pd;
    m_pdHasBeenSet = true;
}

bool EyeItem::PdHasBeenSet() const
{
    return m_pdHasBeenSet;
}

EyeFinalItem EyeItem::GetRightFinal() const
{
    return m_rightFinal;
}

void EyeItem::SetRightFinal(const EyeFinalItem& _rightFinal)
{
    m_rightFinal = _rightFinal;
    m_rightFinalHasBeenSet = true;
}

bool EyeItem::RightFinalHasBeenSet() const
{
    return m_rightFinalHasBeenSet;
}

EyeFinalItem EyeItem::GetLeftFinal() const
{
    return m_leftFinal;
}

void EyeItem::SetLeftFinal(const EyeFinalItem& _leftFinal)
{
    m_leftFinal = _leftFinal;
    m_leftFinalHasBeenSet = true;
}

bool EyeItem::LeftFinalHasBeenSet() const
{
    return m_leftFinalHasBeenSet;
}

