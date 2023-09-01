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

#include <tencentcloud/tse/v20201207/model/AutoScalerBehavior.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

AutoScalerBehavior::AutoScalerBehavior() :
    m_scaleUpHasBeenSet(false),
    m_scaleDownHasBeenSet(false)
{
}

CoreInternalOutcome AutoScalerBehavior::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScaleUp") && !value["ScaleUp"].IsNull())
    {
        if (!value["ScaleUp"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalerBehavior.ScaleUp` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scaleUp.Deserialize(value["ScaleUp"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scaleUpHasBeenSet = true;
    }

    if (value.HasMember("ScaleDown") && !value["ScaleDown"].IsNull())
    {
        if (!value["ScaleDown"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalerBehavior.ScaleDown` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_scaleDown.Deserialize(value["ScaleDown"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_scaleDownHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScalerBehavior::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scaleUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleUp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scaleUp.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_scaleDownHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleDown";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scaleDown.ToJsonObject(value[key.c_str()], allocator);
    }

}


AutoScalerRules AutoScalerBehavior::GetScaleUp() const
{
    return m_scaleUp;
}

void AutoScalerBehavior::SetScaleUp(const AutoScalerRules& _scaleUp)
{
    m_scaleUp = _scaleUp;
    m_scaleUpHasBeenSet = true;
}

bool AutoScalerBehavior::ScaleUpHasBeenSet() const
{
    return m_scaleUpHasBeenSet;
}

AutoScalerRules AutoScalerBehavior::GetScaleDown() const
{
    return m_scaleDown;
}

void AutoScalerBehavior::SetScaleDown(const AutoScalerRules& _scaleDown)
{
    m_scaleDown = _scaleDown;
    m_scaleDownHasBeenSet = true;
}

bool AutoScalerBehavior::ScaleDownHasBeenSet() const
{
    return m_scaleDownHasBeenSet;
}

