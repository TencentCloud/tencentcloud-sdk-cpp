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

#include <tencentcloud/mps/v20190612/model/ModifyDocToVideoTaskStatusInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ModifyDocToVideoTaskStatusInput::ModifyDocToVideoTaskStatusInput() :
    m_actionHasBeenSet(false),
    m_stageHasBeenSet(false),
    m_sourceTaskIdHasBeenSet(false),
    m_regenerateHasBeenSet(false)
{
}

CoreInternalOutcome ModifyDocToVideoTaskStatusInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDocToVideoTaskStatusInput.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("Stage") && !value["Stage"].IsNull())
    {
        if (!value["Stage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDocToVideoTaskStatusInput.Stage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stage = string(value["Stage"].GetString());
        m_stageHasBeenSet = true;
    }

    if (value.HasMember("SourceTaskId") && !value["SourceTaskId"].IsNull())
    {
        if (!value["SourceTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDocToVideoTaskStatusInput.SourceTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceTaskId = string(value["SourceTaskId"].GetString());
        m_sourceTaskIdHasBeenSet = true;
    }

    if (value.HasMember("Regenerate") && !value["Regenerate"].IsNull())
    {
        if (!value["Regenerate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyDocToVideoTaskStatusInput.Regenerate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_regenerate.Deserialize(value["Regenerate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_regenerateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyDocToVideoTaskStatusInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_stageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stage.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_regenerateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regenerate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_regenerate.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModifyDocToVideoTaskStatusInput::GetAction() const
{
    return m_action;
}

void ModifyDocToVideoTaskStatusInput::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool ModifyDocToVideoTaskStatusInput::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string ModifyDocToVideoTaskStatusInput::GetStage() const
{
    return m_stage;
}

void ModifyDocToVideoTaskStatusInput::SetStage(const string& _stage)
{
    m_stage = _stage;
    m_stageHasBeenSet = true;
}

bool ModifyDocToVideoTaskStatusInput::StageHasBeenSet() const
{
    return m_stageHasBeenSet;
}

string ModifyDocToVideoTaskStatusInput::GetSourceTaskId() const
{
    return m_sourceTaskId;
}

void ModifyDocToVideoTaskStatusInput::SetSourceTaskId(const string& _sourceTaskId)
{
    m_sourceTaskId = _sourceTaskId;
    m_sourceTaskIdHasBeenSet = true;
}

bool ModifyDocToVideoTaskStatusInput::SourceTaskIdHasBeenSet() const
{
    return m_sourceTaskIdHasBeenSet;
}

DocToVideoRegenerateInput ModifyDocToVideoTaskStatusInput::GetRegenerate() const
{
    return m_regenerate;
}

void ModifyDocToVideoTaskStatusInput::SetRegenerate(const DocToVideoRegenerateInput& _regenerate)
{
    m_regenerate = _regenerate;
    m_regenerateHasBeenSet = true;
}

bool ModifyDocToVideoTaskStatusInput::RegenerateHasBeenSet() const
{
    return m_regenerateHasBeenSet;
}

