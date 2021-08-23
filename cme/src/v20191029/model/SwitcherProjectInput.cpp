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

#include <tencentcloud/cme/v20191029/model/SwitcherProjectInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

SwitcherProjectInput::SwitcherProjectInput() :
    m_stopTimeHasBeenSet(false),
    m_pgmOutputConfigHasBeenSet(false)
{
}

CoreInternalOutcome SwitcherProjectInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StopTime") && !value["StopTime"].IsNull())
    {
        if (!value["StopTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SwitcherProjectInput.StopTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stopTime = string(value["StopTime"].GetString());
        m_stopTimeHasBeenSet = true;
    }

    if (value.HasMember("PgmOutputConfig") && !value["PgmOutputConfig"].IsNull())
    {
        if (!value["PgmOutputConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SwitcherProjectInput.PgmOutputConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pgmOutputConfig.Deserialize(value["PgmOutputConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pgmOutputConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SwitcherProjectInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_stopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stopTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pgmOutputConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PgmOutputConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pgmOutputConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string SwitcherProjectInput::GetStopTime() const
{
    return m_stopTime;
}

void SwitcherProjectInput::SetStopTime(const string& _stopTime)
{
    m_stopTime = _stopTime;
    m_stopTimeHasBeenSet = true;
}

bool SwitcherProjectInput::StopTimeHasBeenSet() const
{
    return m_stopTimeHasBeenSet;
}

SwitcherPgmOutputConfig SwitcherProjectInput::GetPgmOutputConfig() const
{
    return m_pgmOutputConfig;
}

void SwitcherProjectInput::SetPgmOutputConfig(const SwitcherPgmOutputConfig& _pgmOutputConfig)
{
    m_pgmOutputConfig = _pgmOutputConfig;
    m_pgmOutputConfigHasBeenSet = true;
}

bool SwitcherProjectInput::PgmOutputConfigHasBeenSet() const
{
    return m_pgmOutputConfigHasBeenSet;
}

