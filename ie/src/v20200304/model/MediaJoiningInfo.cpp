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

#include <tencentcloud/ie/v20200304/model/MediaJoiningInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

MediaJoiningInfo::MediaJoiningInfo() :
    m_targetInfoHasBeenSet(false),
    m_modeHasBeenSet(false)
{
}

CoreInternalOutcome MediaJoiningInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetInfo") && !value["TargetInfo"].IsNull())
    {
        if (!value["TargetInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaJoiningInfo.TargetInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetInfo.Deserialize(value["TargetInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetInfoHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaJoiningInfo.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaJoiningInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

}


MediaTargetInfo MediaJoiningInfo::GetTargetInfo() const
{
    return m_targetInfo;
}

void MediaJoiningInfo::SetTargetInfo(const MediaTargetInfo& _targetInfo)
{
    m_targetInfo = _targetInfo;
    m_targetInfoHasBeenSet = true;
}

bool MediaJoiningInfo::TargetInfoHasBeenSet() const
{
    return m_targetInfoHasBeenSet;
}

string MediaJoiningInfo::GetMode() const
{
    return m_mode;
}

void MediaJoiningInfo::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool MediaJoiningInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

