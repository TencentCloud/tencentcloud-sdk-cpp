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

#include <tencentcloud/iai/v20180301/model/Mouth.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

Mouth::Mouth() :
    m_mouthOpenHasBeenSet(false)
{
}

CoreInternalOutcome Mouth::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MouthOpen") && !value["MouthOpen"].IsNull())
    {
        if (!value["MouthOpen"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Mouth.MouthOpen` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mouthOpen.Deserialize(value["MouthOpen"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mouthOpenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Mouth::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mouthOpenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MouthOpen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mouthOpen.ToJsonObject(value[key.c_str()], allocator);
    }

}


AttributeItem Mouth::GetMouthOpen() const
{
    return m_mouthOpen;
}

void Mouth::SetMouthOpen(const AttributeItem& _mouthOpen)
{
    m_mouthOpen = _mouthOpen;
    m_mouthOpenHasBeenSet = true;
}

bool Mouth::MouthOpenHasBeenSet() const
{
    return m_mouthOpenHasBeenSet;
}

