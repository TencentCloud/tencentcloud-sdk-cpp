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

#include <tencentcloud/lke/v20231130/model/SummaryConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

SummaryConfig::SummaryConfig() :
    m_modelHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_greetingHasBeenSet(false)
{
}

CoreInternalOutcome SummaryConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryConfig.Model` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_model.Deserialize(value["Model"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryConfig.Output` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_output.Deserialize(value["Output"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputHasBeenSet = true;
    }

    if (value.HasMember("Greeting") && !value["Greeting"].IsNull())
    {
        if (!value["Greeting"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SummaryConfig.Greeting` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_greeting = string(value["Greeting"].GetString());
        m_greetingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SummaryConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_model.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_output.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_greetingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Greeting";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_greeting.c_str(), allocator).Move(), allocator);
    }

}


AppModel SummaryConfig::GetModel() const
{
    return m_model;
}

void SummaryConfig::SetModel(const AppModel& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool SummaryConfig::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

SummaryOutput SummaryConfig::GetOutput() const
{
    return m_output;
}

void SummaryConfig::SetOutput(const SummaryOutput& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool SummaryConfig::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string SummaryConfig::GetGreeting() const
{
    return m_greeting;
}

void SummaryConfig::SetGreeting(const string& _greeting)
{
    m_greeting = _greeting;
    m_greetingHasBeenSet = true;
}

bool SummaryConfig::GreetingHasBeenSet() const
{
    return m_greetingHasBeenSet;
}

