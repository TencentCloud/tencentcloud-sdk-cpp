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

#include <tencentcloud/emr/v20190103/model/Step.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

Step::Step() :
    m_nameHasBeenSet(false),
    m_executionStepHasBeenSet(false),
    m_actionOnFailureHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

CoreInternalOutcome Step::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Step.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ExecutionStep") && !value["ExecutionStep"].IsNull())
    {
        if (!value["ExecutionStep"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Step.ExecutionStep` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_executionStep.Deserialize(value["ExecutionStep"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_executionStepHasBeenSet = true;
    }

    if (value.HasMember("ActionOnFailure") && !value["ActionOnFailure"].IsNull())
    {
        if (!value["ActionOnFailure"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Step.ActionOnFailure` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionOnFailure = string(value["ActionOnFailure"].GetString());
        m_actionOnFailureHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Step.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Step::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_executionStepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionStep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_executionStep.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionOnFailureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionOnFailure";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionOnFailure.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

}


string Step::GetName() const
{
    return m_name;
}

void Step::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Step::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

Execution Step::GetExecutionStep() const
{
    return m_executionStep;
}

void Step::SetExecutionStep(const Execution& _executionStep)
{
    m_executionStep = _executionStep;
    m_executionStepHasBeenSet = true;
}

bool Step::ExecutionStepHasBeenSet() const
{
    return m_executionStepHasBeenSet;
}

string Step::GetActionOnFailure() const
{
    return m_actionOnFailure;
}

void Step::SetActionOnFailure(const string& _actionOnFailure)
{
    m_actionOnFailure = _actionOnFailure;
    m_actionOnFailureHasBeenSet = true;
}

bool Step::ActionOnFailureHasBeenSet() const
{
    return m_actionOnFailureHasBeenSet;
}

string Step::GetUser() const
{
    return m_user;
}

void Step::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool Step::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

