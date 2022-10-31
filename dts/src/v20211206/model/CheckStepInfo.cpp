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

#include <tencentcloud/dts/v20211206/model/CheckStepInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CheckStepInfo::CheckStepInfo() :
    m_startAtHasBeenSet(false),
    m_endAtHasBeenSet(false),
    m_progressHasBeenSet(false)
{
}

CoreInternalOutcome CheckStepInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartAt") && !value["StartAt"].IsNull())
    {
        if (!value["StartAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckStepInfo.StartAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startAt = string(value["StartAt"].GetString());
        m_startAtHasBeenSet = true;
    }

    if (value.HasMember("EndAt") && !value["EndAt"].IsNull())
    {
        if (!value["EndAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckStepInfo.EndAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endAt = string(value["EndAt"].GetString());
        m_endAtHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CheckStepInfo.Progress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_progress.Deserialize(value["Progress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_progressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckStepInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startAt.c_str(), allocator).Move(), allocator);
    }

    if (m_endAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endAt.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_progress.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CheckStepInfo::GetStartAt() const
{
    return m_startAt;
}

void CheckStepInfo::SetStartAt(const string& _startAt)
{
    m_startAt = _startAt;
    m_startAtHasBeenSet = true;
}

bool CheckStepInfo::StartAtHasBeenSet() const
{
    return m_startAtHasBeenSet;
}

string CheckStepInfo::GetEndAt() const
{
    return m_endAt;
}

void CheckStepInfo::SetEndAt(const string& _endAt)
{
    m_endAt = _endAt;
    m_endAtHasBeenSet = true;
}

bool CheckStepInfo::EndAtHasBeenSet() const
{
    return m_endAtHasBeenSet;
}

ProcessProgress CheckStepInfo::GetProgress() const
{
    return m_progress;
}

void CheckStepInfo::SetProgress(const ProcessProgress& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool CheckStepInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

