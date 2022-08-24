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

#include <tencentcloud/yinsuda/v20220527/model/SeekCommandInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

SeekCommandInput::SeekCommandInput() :
    m_positionHasBeenSet(false)
{
}

CoreInternalOutcome SeekCommandInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SeekCommandInput.Position` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetUint64();
        m_positionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeekCommandInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

}


uint64_t SeekCommandInput::GetPosition() const
{
    return m_position;
}

void SeekCommandInput::SetPosition(const uint64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool SeekCommandInput::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

