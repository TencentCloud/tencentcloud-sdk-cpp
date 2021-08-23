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

#include <tencentcloud/iai/v20200303/model/Eye.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

Eye::Eye() :
    m_glassHasBeenSet(false),
    m_eyeOpenHasBeenSet(false),
    m_eyelidTypeHasBeenSet(false),
    m_eyeSizeHasBeenSet(false)
{
}

CoreInternalOutcome Eye::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Glass") && !value["Glass"].IsNull())
    {
        if (!value["Glass"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Eye.Glass` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_glass.Deserialize(value["Glass"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_glassHasBeenSet = true;
    }

    if (value.HasMember("EyeOpen") && !value["EyeOpen"].IsNull())
    {
        if (!value["EyeOpen"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Eye.EyeOpen` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eyeOpen.Deserialize(value["EyeOpen"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eyeOpenHasBeenSet = true;
    }

    if (value.HasMember("EyelidType") && !value["EyelidType"].IsNull())
    {
        if (!value["EyelidType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Eye.EyelidType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eyelidType.Deserialize(value["EyelidType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eyelidTypeHasBeenSet = true;
    }

    if (value.HasMember("EyeSize") && !value["EyeSize"].IsNull())
    {
        if (!value["EyeSize"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Eye.EyeSize` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eyeSize.Deserialize(value["EyeSize"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eyeSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Eye::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_glassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Glass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_glass.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eyeOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EyeOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eyeOpen.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eyelidTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EyelidType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eyelidType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eyeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EyeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eyeSize.ToJsonObject(value[key.c_str()], allocator);
    }

}


AttributeItem Eye::GetGlass() const
{
    return m_glass;
}

void Eye::SetGlass(const AttributeItem& _glass)
{
    m_glass = _glass;
    m_glassHasBeenSet = true;
}

bool Eye::GlassHasBeenSet() const
{
    return m_glassHasBeenSet;
}

AttributeItem Eye::GetEyeOpen() const
{
    return m_eyeOpen;
}

void Eye::SetEyeOpen(const AttributeItem& _eyeOpen)
{
    m_eyeOpen = _eyeOpen;
    m_eyeOpenHasBeenSet = true;
}

bool Eye::EyeOpenHasBeenSet() const
{
    return m_eyeOpenHasBeenSet;
}

AttributeItem Eye::GetEyelidType() const
{
    return m_eyelidType;
}

void Eye::SetEyelidType(const AttributeItem& _eyelidType)
{
    m_eyelidType = _eyelidType;
    m_eyelidTypeHasBeenSet = true;
}

bool Eye::EyelidTypeHasBeenSet() const
{
    return m_eyelidTypeHasBeenSet;
}

AttributeItem Eye::GetEyeSize() const
{
    return m_eyeSize;
}

void Eye::SetEyeSize(const AttributeItem& _eyeSize)
{
    m_eyeSize = _eyeSize;
    m_eyeSizeHasBeenSet = true;
}

bool Eye::EyeSizeHasBeenSet() const
{
    return m_eyeSizeHasBeenSet;
}

