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

#include <tencentcloud/yinsuda/v20220527/model/JoinRoomInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

JoinRoomInput::JoinRoomInput() :
    m_tRTCJoinRoomInputHasBeenSet(false)
{
}

CoreInternalOutcome JoinRoomInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TRTCJoinRoomInput") && !value["TRTCJoinRoomInput"].IsNull())
    {
        if (!value["TRTCJoinRoomInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `JoinRoomInput.TRTCJoinRoomInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tRTCJoinRoomInput.Deserialize(value["TRTCJoinRoomInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tRTCJoinRoomInputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void JoinRoomInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tRTCJoinRoomInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TRTCJoinRoomInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tRTCJoinRoomInput.ToJsonObject(value[key.c_str()], allocator);
    }

}


TRTCJoinRoomInput JoinRoomInput::GetTRTCJoinRoomInput() const
{
    return m_tRTCJoinRoomInput;
}

void JoinRoomInput::SetTRTCJoinRoomInput(const TRTCJoinRoomInput& _tRTCJoinRoomInput)
{
    m_tRTCJoinRoomInput = _tRTCJoinRoomInput;
    m_tRTCJoinRoomInputHasBeenSet = true;
}

bool JoinRoomInput::TRTCJoinRoomInputHasBeenSet() const
{
    return m_tRTCJoinRoomInputHasBeenSet;
}

