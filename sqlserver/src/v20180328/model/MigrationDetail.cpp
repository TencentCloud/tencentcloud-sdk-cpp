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

#include <tencentcloud/sqlserver/v20180328/model/MigrationDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

MigrationDetail::MigrationDetail() :
    m_stepAllHasBeenSet(false),
    m_stepNowHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_stepInfoHasBeenSet(false)
{
}

CoreInternalOutcome MigrationDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StepAll") && !value["StepAll"].IsNull())
    {
        if (!value["StepAll"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationDetail.StepAll` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stepAll = value["StepAll"].GetInt64();
        m_stepAllHasBeenSet = true;
    }

    if (value.HasMember("StepNow") && !value["StepNow"].IsNull())
    {
        if (!value["StepNow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationDetail.StepNow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stepNow = value["StepNow"].GetInt64();
        m_stepNowHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MigrationDetail.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("StepInfo") && !value["StepInfo"].IsNull())
    {
        if (!value["StepInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MigrationDetail.StepInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["StepInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MigrationStep item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_stepInfo.push_back(item);
        }
        m_stepInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrationDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stepAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepAll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepAll, allocator);
    }

    if (m_stepNowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepNow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepNow, allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_stepInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_stepInfo.begin(); itr != m_stepInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t MigrationDetail::GetStepAll() const
{
    return m_stepAll;
}

void MigrationDetail::SetStepAll(const int64_t& _stepAll)
{
    m_stepAll = _stepAll;
    m_stepAllHasBeenSet = true;
}

bool MigrationDetail::StepAllHasBeenSet() const
{
    return m_stepAllHasBeenSet;
}

int64_t MigrationDetail::GetStepNow() const
{
    return m_stepNow;
}

void MigrationDetail::SetStepNow(const int64_t& _stepNow)
{
    m_stepNow = _stepNow;
    m_stepNowHasBeenSet = true;
}

bool MigrationDetail::StepNowHasBeenSet() const
{
    return m_stepNowHasBeenSet;
}

int64_t MigrationDetail::GetProgress() const
{
    return m_progress;
}

void MigrationDetail::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool MigrationDetail::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

vector<MigrationStep> MigrationDetail::GetStepInfo() const
{
    return m_stepInfo;
}

void MigrationDetail::SetStepInfo(const vector<MigrationStep>& _stepInfo)
{
    m_stepInfo = _stepInfo;
    m_stepInfoHasBeenSet = true;
}

bool MigrationDetail::StepInfoHasBeenSet() const
{
    return m_stepInfoHasBeenSet;
}

