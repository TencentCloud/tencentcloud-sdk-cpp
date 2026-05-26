/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/cynosdb/v20190107/model/AIOptimizerStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

AIOptimizerStatus::AIOptimizerStatus() :
    m_statusHasBeenSet(false),
    m_openTimeHasBeenSet(false),
    m_trainingProgressHasBeenSet(false)
{
}

CoreInternalOutcome AIOptimizerStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIOptimizerStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OpenTime") && !value["OpenTime"].IsNull())
    {
        if (!value["OpenTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIOptimizerStatus.OpenTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openTime = string(value["OpenTime"].GetString());
        m_openTimeHasBeenSet = true;
    }

    if (value.HasMember("TrainingProgress") && !value["TrainingProgress"].IsNull())
    {
        if (!value["TrainingProgress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIOptimizerStatus.TrainingProgress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_trainingProgress = value["TrainingProgress"].GetInt64();
        m_trainingProgressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIOptimizerStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_openTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openTime.c_str(), allocator).Move(), allocator);
    }

    if (m_trainingProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trainingProgress, allocator);
    }

}


string AIOptimizerStatus::GetStatus() const
{
    return m_status;
}

void AIOptimizerStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AIOptimizerStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AIOptimizerStatus::GetOpenTime() const
{
    return m_openTime;
}

void AIOptimizerStatus::SetOpenTime(const string& _openTime)
{
    m_openTime = _openTime;
    m_openTimeHasBeenSet = true;
}

bool AIOptimizerStatus::OpenTimeHasBeenSet() const
{
    return m_openTimeHasBeenSet;
}

int64_t AIOptimizerStatus::GetTrainingProgress() const
{
    return m_trainingProgress;
}

void AIOptimizerStatus::SetTrainingProgress(const int64_t& _trainingProgress)
{
    m_trainingProgress = _trainingProgress;
    m_trainingProgressHasBeenSet = true;
}

bool AIOptimizerStatus::TrainingProgressHasBeenSet() const
{
    return m_trainingProgressHasBeenSet;
}

