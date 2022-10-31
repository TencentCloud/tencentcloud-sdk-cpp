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

#include <tencentcloud/dts/v20211206/model/CheckStep.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

CheckStep::CheckStep() :
    m_stepNoHasBeenSet(false),
    m_stepIdHasBeenSet(false),
    m_stepNameHasBeenSet(false),
    m_stepStatusHasBeenSet(false),
    m_stepMessageHasBeenSet(false),
    m_detailCheckItemsHasBeenSet(false),
    m_hasSkippedHasBeenSet(false)
{
}

CoreInternalOutcome CheckStep::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StepNo") && !value["StepNo"].IsNull())
    {
        if (!value["StepNo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CheckStep.StepNo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_stepNo = value["StepNo"].GetUint64();
        m_stepNoHasBeenSet = true;
    }

    if (value.HasMember("StepId") && !value["StepId"].IsNull())
    {
        if (!value["StepId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckStep.StepId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepId = string(value["StepId"].GetString());
        m_stepIdHasBeenSet = true;
    }

    if (value.HasMember("StepName") && !value["StepName"].IsNull())
    {
        if (!value["StepName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckStep.StepName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepName = string(value["StepName"].GetString());
        m_stepNameHasBeenSet = true;
    }

    if (value.HasMember("StepStatus") && !value["StepStatus"].IsNull())
    {
        if (!value["StepStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckStep.StepStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepStatus = string(value["StepStatus"].GetString());
        m_stepStatusHasBeenSet = true;
    }

    if (value.HasMember("StepMessage") && !value["StepMessage"].IsNull())
    {
        if (!value["StepMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckStep.StepMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stepMessage = string(value["StepMessage"].GetString());
        m_stepMessageHasBeenSet = true;
    }

    if (value.HasMember("DetailCheckItems") && !value["DetailCheckItems"].IsNull())
    {
        if (!value["DetailCheckItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CheckStep.DetailCheckItems` is not array type"));

        const rapidjson::Value &tmpValue = value["DetailCheckItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DetailCheckItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailCheckItems.push_back(item);
        }
        m_detailCheckItemsHasBeenSet = true;
    }

    if (value.HasMember("HasSkipped") && !value["HasSkipped"].IsNull())
    {
        if (!value["HasSkipped"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CheckStep.HasSkipped` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hasSkipped = value["HasSkipped"].GetBool();
        m_hasSkippedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckStep::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stepNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_stepNo, allocator);
    }

    if (m_stepIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepId.c_str(), allocator).Move(), allocator);
    }

    if (m_stepNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepName.c_str(), allocator).Move(), allocator);
    }

    if (m_stepStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_stepMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stepMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_detailCheckItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailCheckItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailCheckItems.begin(); itr != m_detailCheckItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_hasSkippedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasSkipped";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hasSkipped, allocator);
    }

}


uint64_t CheckStep::GetStepNo() const
{
    return m_stepNo;
}

void CheckStep::SetStepNo(const uint64_t& _stepNo)
{
    m_stepNo = _stepNo;
    m_stepNoHasBeenSet = true;
}

bool CheckStep::StepNoHasBeenSet() const
{
    return m_stepNoHasBeenSet;
}

string CheckStep::GetStepId() const
{
    return m_stepId;
}

void CheckStep::SetStepId(const string& _stepId)
{
    m_stepId = _stepId;
    m_stepIdHasBeenSet = true;
}

bool CheckStep::StepIdHasBeenSet() const
{
    return m_stepIdHasBeenSet;
}

string CheckStep::GetStepName() const
{
    return m_stepName;
}

void CheckStep::SetStepName(const string& _stepName)
{
    m_stepName = _stepName;
    m_stepNameHasBeenSet = true;
}

bool CheckStep::StepNameHasBeenSet() const
{
    return m_stepNameHasBeenSet;
}

string CheckStep::GetStepStatus() const
{
    return m_stepStatus;
}

void CheckStep::SetStepStatus(const string& _stepStatus)
{
    m_stepStatus = _stepStatus;
    m_stepStatusHasBeenSet = true;
}

bool CheckStep::StepStatusHasBeenSet() const
{
    return m_stepStatusHasBeenSet;
}

string CheckStep::GetStepMessage() const
{
    return m_stepMessage;
}

void CheckStep::SetStepMessage(const string& _stepMessage)
{
    m_stepMessage = _stepMessage;
    m_stepMessageHasBeenSet = true;
}

bool CheckStep::StepMessageHasBeenSet() const
{
    return m_stepMessageHasBeenSet;
}

vector<DetailCheckItem> CheckStep::GetDetailCheckItems() const
{
    return m_detailCheckItems;
}

void CheckStep::SetDetailCheckItems(const vector<DetailCheckItem>& _detailCheckItems)
{
    m_detailCheckItems = _detailCheckItems;
    m_detailCheckItemsHasBeenSet = true;
}

bool CheckStep::DetailCheckItemsHasBeenSet() const
{
    return m_detailCheckItemsHasBeenSet;
}

bool CheckStep::GetHasSkipped() const
{
    return m_hasSkipped;
}

void CheckStep::SetHasSkipped(const bool& _hasSkipped)
{
    m_hasSkipped = _hasSkipped;
    m_hasSkippedHasBeenSet = true;
}

bool CheckStep::HasSkippedHasBeenSet() const
{
    return m_hasSkippedHasBeenSet;
}

