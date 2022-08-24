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

#include <tencentcloud/yinsuda/v20220527/model/SetPlayModeCommandInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yinsuda::V20220527::Model;
using namespace std;

SetPlayModeCommandInput::SetPlayModeCommandInput() :
    m_playModeHasBeenSet(false)
{
}

CoreInternalOutcome SetPlayModeCommandInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlayMode") && !value["PlayMode"].IsNull())
    {
        if (!value["PlayMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SetPlayModeCommandInput.PlayMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_playMode = string(value["PlayMode"].GetString());
        m_playModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SetPlayModeCommandInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_playModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_playMode.c_str(), allocator).Move(), allocator);
    }

}


string SetPlayModeCommandInput::GetPlayMode() const
{
    return m_playMode;
}

void SetPlayModeCommandInput::SetPlayMode(const string& _playMode)
{
    m_playMode = _playMode;
    m_playModeHasBeenSet = true;
}

bool SetPlayModeCommandInput::PlayModeHasBeenSet() const
{
    return m_playModeHasBeenSet;
}

