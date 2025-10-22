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

#include <tencentcloud/dts/v20211206/model/ConsistencyOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ConsistencyOption::ConsistencyOption() :
    m_modeHasBeenSet(false),
    m_objectModeHasBeenSet(false),
    m_objectsHasBeenSet(false),
    m_optionsHasBeenSet(false)
{
}

CoreInternalOutcome ConsistencyOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsistencyOption.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("ObjectMode") && !value["ObjectMode"].IsNull())
    {
        if (!value["ObjectMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConsistencyOption.ObjectMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectMode = string(value["ObjectMode"].GetString());
        m_objectModeHasBeenSet = true;
    }

    if (value.HasMember("Objects") && !value["Objects"].IsNull())
    {
        if (!value["Objects"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsistencyOption.Objects` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_objects.Deserialize(value["Objects"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_objectsHasBeenSet = true;
    }

    if (value.HasMember("Options") && !value["Options"].IsNull())
    {
        if (!value["Options"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConsistencyOption.Options` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_options.Deserialize(value["Options"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_optionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConsistencyOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_objectModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectMode.c_str(), allocator).Move(), allocator);
    }

    if (m_objectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Objects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_objects.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_optionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Options";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_options.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ConsistencyOption::GetMode() const
{
    return m_mode;
}

void ConsistencyOption::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ConsistencyOption::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ConsistencyOption::GetObjectMode() const
{
    return m_objectMode;
}

void ConsistencyOption::SetObjectMode(const string& _objectMode)
{
    m_objectMode = _objectMode;
    m_objectModeHasBeenSet = true;
}

bool ConsistencyOption::ObjectModeHasBeenSet() const
{
    return m_objectModeHasBeenSet;
}

DatabaseTableObject ConsistencyOption::GetObjects() const
{
    return m_objects;
}

void ConsistencyOption::SetObjects(const DatabaseTableObject& _objects)
{
    m_objects = _objects;
    m_objectsHasBeenSet = true;
}

bool ConsistencyOption::ObjectsHasBeenSet() const
{
    return m_objectsHasBeenSet;
}

CompareOptions ConsistencyOption::GetOptions() const
{
    return m_options;
}

void ConsistencyOption::SetOptions(const CompareOptions& _options)
{
    m_options = _options;
    m_optionsHasBeenSet = true;
}

bool ConsistencyOption::OptionsHasBeenSet() const
{
    return m_optionsHasBeenSet;
}

