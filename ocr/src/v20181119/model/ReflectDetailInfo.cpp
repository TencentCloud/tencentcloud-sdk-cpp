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

#include <tencentcloud/ocr/v20181119/model/ReflectDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

ReflectDetailInfo::ReflectDetailInfo() :
    m_positionHasBeenSet(false)
{
}

CoreInternalOutcome ReflectDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReflectDetailInfo.Position` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_position = string(value["Position"].GetString());
        m_positionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReflectDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_position.c_str(), allocator).Move(), allocator);
    }

}


string ReflectDetailInfo::GetPosition() const
{
    return m_position;
}

void ReflectDetailInfo::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool ReflectDetailInfo::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

