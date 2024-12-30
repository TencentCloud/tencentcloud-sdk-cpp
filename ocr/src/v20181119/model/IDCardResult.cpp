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

#include <tencentcloud/ocr/v20181119/model/IDCardResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

IDCardResult::IDCardResult() :
    m_frontHasBeenSet(false),
    m_backHasBeenSet(false)
{
}

CoreInternalOutcome IDCardResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Front") && !value["Front"].IsNull())
    {
        if (!value["Front"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardResult.Front` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_front.Deserialize(value["Front"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frontHasBeenSet = true;
    }

    if (value.HasMember("Back") && !value["Back"].IsNull())
    {
        if (!value["Back"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IDCardResult.Back` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_back.Deserialize(value["Back"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IDCardResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_frontHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Front";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_front.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Back";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_back.ToJsonObject(value[key.c_str()], allocator);
    }

}


IDCardInfoResult IDCardResult::GetFront() const
{
    return m_front;
}

void IDCardResult::SetFront(const IDCardInfoResult& _front)
{
    m_front = _front;
    m_frontHasBeenSet = true;
}

bool IDCardResult::FrontHasBeenSet() const
{
    return m_frontHasBeenSet;
}

IDCardInfoResult IDCardResult::GetBack() const
{
    return m_back;
}

void IDCardResult::SetBack(const IDCardInfoResult& _back)
{
    m_back = _back;
    m_backHasBeenSet = true;
}

bool IDCardResult::BackHasBeenSet() const
{
    return m_backHasBeenSet;
}

