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

#include <tencentcloud/trro/v20220325/model/ProcessParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

ProcessParams::ProcessParams() :
    m_modeHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_extraParamsHasBeenSet(false)
{
}

CoreInternalOutcome ProcessParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessParams.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("Edition") && !value["Edition"].IsNull())
    {
        if (!value["Edition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessParams.Edition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edition = string(value["Edition"].GetString());
        m_editionHasBeenSet = true;
    }

    if (value.HasMember("ExtraParams") && !value["ExtraParams"].IsNull())
    {
        if (!value["ExtraParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessParams.ExtraParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extraParams = string(value["ExtraParams"].GetString());
        m_extraParamsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProcessParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_extraParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extraParams.c_str(), allocator).Move(), allocator);
    }

}


string ProcessParams::GetMode() const
{
    return m_mode;
}

void ProcessParams::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ProcessParams::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ProcessParams::GetEdition() const
{
    return m_edition;
}

void ProcessParams::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool ProcessParams::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string ProcessParams::GetExtraParams() const
{
    return m_extraParams;
}

void ProcessParams::SetExtraParams(const string& _extraParams)
{
    m_extraParams = _extraParams;
    m_extraParamsHasBeenSet = true;
}

bool ProcessParams::ExtraParamsHasBeenSet() const
{
    return m_extraParamsHasBeenSet;
}

