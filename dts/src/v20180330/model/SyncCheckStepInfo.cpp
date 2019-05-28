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

#include <tencentcloud/dts/v20180330/model/SyncCheckStepInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace rapidjson;
using namespace std;

SyncCheckStepInfo::SyncCheckStepInfo() :
    m_stepNoHasBeenSet(false),
    m_stepNameHasBeenSet(false),
    m_stepCodeHasBeenSet(false),
    m_stepMessageHasBeenSet(false)
{
}

CoreInternalOutcome SyncCheckStepInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("StepNo") && !value["StepNo"].IsNull())
    {
        if (!value["StepNo"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SyncCheckStepInfo.StepNo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepNo = value["StepNo"].GetUint64();
        m_stepNoHasBeenSet = true;
    }

    if (value.HasMember("StepName") && !value["StepName"].IsNull())
    {
        if (!value["StepName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncCheckStepInfo.StepName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepName = string(value["StepName"].GetString());
        m_stepNameHasBeenSet = true;
    }

    if (value.HasMember("StepCode") && !value["StepCode"].IsNull())
    {
        if (!value["StepCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SyncCheckStepInfo.StepCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_stepCode = value["StepCode"].GetInt64();
        m_stepCodeHasBeenSet = true;
    }

    if (value.HasMember("StepMessage") && !value["StepMessage"].IsNull())
    {
        if (!value["StepMessage"].IsString())
        {
            return CoreInternalOutcome(Error("response `SyncCheckStepInfo.StepMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepMessage = string(value["StepMessage"].GetString());
        m_stepMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SyncCheckStepInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
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

    if (m_stepCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StepCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepCode, allocator);
    }

    if (m_stepMessageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StepMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_stepMessage.c_str(), allocator).Move(), allocator);
    }

}


uint64_t SyncCheckStepInfo::GetStepNo() const
{
    return m_stepNo;
}

void SyncCheckStepInfo::SetStepNo(const uint64_t& _stepNo)
{
    m_stepNo = _stepNo;
    m_stepNoHasBeenSet = true;
}

bool SyncCheckStepInfo::StepNoHasBeenSet() const
{
    return m_stepNoHasBeenSet;
}

string SyncCheckStepInfo::GetStepName() const
{
    return m_stepName;
}

void SyncCheckStepInfo::SetStepName(const string& _stepName)
{
    m_stepName = _stepName;
    m_stepNameHasBeenSet = true;
}

bool SyncCheckStepInfo::StepNameHasBeenSet() const
{
    return m_stepNameHasBeenSet;
}

int64_t SyncCheckStepInfo::GetStepCode() const
{
    return m_stepCode;
}

void SyncCheckStepInfo::SetStepCode(const int64_t& _stepCode)
{
    m_stepCode = _stepCode;
    m_stepCodeHasBeenSet = true;
}

bool SyncCheckStepInfo::StepCodeHasBeenSet() const
{
    return m_stepCodeHasBeenSet;
}

string SyncCheckStepInfo::GetStepMessage() const
{
    return m_stepMessage;
}

void SyncCheckStepInfo::SetStepMessage(const string& _stepMessage)
{
    m_stepMessage = _stepMessage;
    m_stepMessageHasBeenSet = true;
}

bool SyncCheckStepInfo::StepMessageHasBeenSet() const
{
    return m_stepMessageHasBeenSet;
}

