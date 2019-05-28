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

#include <tencentcloud/dts/v20180330/model/SyncStepDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

SyncStepDetailInfo::SyncStepDetailInfo() :
    m_stepNoHasBeenSet(false),
    m_stepNameHasBeenSet(false),
    m_canStopHasBeenSet(false),
    m_stepIdHasBeenSet(false)
{
}

CoreInternalOutcome SyncStepDetailInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StepNo") && !value["StepNo"].IsNull())
    {
        if (!value["StepNo"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SyncStepDetailInfo.StepNo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepNo = value["StepNo"].GetUint64();
        m_stepNoHasBeenSet = true;
    }

    if (value.HasMember("StepName") && !value["StepName"].IsNull())
    {
        if (!value["StepName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncStepDetailInfo.StepName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepName = string(value["StepName"].GetString());
        m_stepNameHasBeenSet = true;
    }

    if (value.HasMember("CanStop") && !value["CanStop"].IsNull())
    {
        if (!value["CanStop"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SyncStepDetailInfo.CanStop` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_canStop = value["CanStop"].GetInt64();
        m_canStopHasBeenSet = true;
    }

    if (value.HasMember("StepId") && !value["StepId"].IsNull())
    {
        if (!value["StepId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SyncStepDetailInfo.StepId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stepId = value["StepId"].GetInt64();
        m_stepIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncStepDetailInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_stepNoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StepNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepNo, allocator);
    }

    if (m_stepNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StepName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_stepName.c_str(), allocator).Move(), allocator);
    }

    if (m_canStopHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CanStop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canStop, allocator);
    }

    if (m_stepIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StepId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepId, allocator);
    }

}


uint64_t SyncStepDetailInfo::GetStepNo() const
{
    return m_stepNo;
}

void SyncStepDetailInfo::SetStepNo(const uint64_t& _stepNo)
{
    m_stepNo = _stepNo;
    m_stepNoHasBeenSet = true;
}

bool SyncStepDetailInfo::StepNoHasBeenSet() const
{
    return m_stepNoHasBeenSet;
}

string SyncStepDetailInfo::GetStepName() const
{
    return m_stepName;
}

void SyncStepDetailInfo::SetStepName(const string& _stepName)
{
    m_stepName = _stepName;
    m_stepNameHasBeenSet = true;
}

bool SyncStepDetailInfo::StepNameHasBeenSet() const
{
    return m_stepNameHasBeenSet;
}

int64_t SyncStepDetailInfo::GetCanStop() const
{
    return m_canStop;
}

void SyncStepDetailInfo::SetCanStop(const int64_t& _canStop)
{
    m_canStop = _canStop;
    m_canStopHasBeenSet = true;
}

bool SyncStepDetailInfo::CanStopHasBeenSet() const
{
    return m_canStopHasBeenSet;
}

int64_t SyncStepDetailInfo::GetStepId() const
{
    return m_stepId;
}

void SyncStepDetailInfo::SetStepId(const int64_t& _stepId)
{
    m_stepId = _stepId;
    m_stepIdHasBeenSet = true;
}

bool SyncStepDetailInfo::StepIdHasBeenSet() const
{
    return m_stepIdHasBeenSet;
}

