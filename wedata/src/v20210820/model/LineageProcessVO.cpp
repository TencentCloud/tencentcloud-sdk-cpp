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

#include <tencentcloud/wedata/v20210820/model/LineageProcessVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

LineageProcessVO::LineageProcessVO() :
    m_processIdHasBeenSet(false),
    m_processTypeHasBeenSet(false),
    m_processSubTypeHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_qualifiedIdHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_processPropertiesHasBeenSet(false)
{
}

CoreInternalOutcome LineageProcessVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProcessId") && !value["ProcessId"].IsNull())
    {
        if (!value["ProcessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageProcessVO.ProcessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processId = string(value["ProcessId"].GetString());
        m_processIdHasBeenSet = true;
    }

    if (value.HasMember("ProcessType") && !value["ProcessType"].IsNull())
    {
        if (!value["ProcessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageProcessVO.ProcessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processType = string(value["ProcessType"].GetString());
        m_processTypeHasBeenSet = true;
    }

    if (value.HasMember("ProcessSubType") && !value["ProcessSubType"].IsNull())
    {
        if (!value["ProcessSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageProcessVO.ProcessSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processSubType = string(value["ProcessSubType"].GetString());
        m_processSubTypeHasBeenSet = true;
    }

    if (value.HasMember("ProcessName") && !value["ProcessName"].IsNull())
    {
        if (!value["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageProcessVO.ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(value["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageProcessVO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("QualifiedId") && !value["QualifiedId"].IsNull())
    {
        if (!value["QualifiedId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageProcessVO.QualifiedId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifiedId = string(value["QualifiedId"].GetString());
        m_qualifiedIdHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageProcessVO.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("ProcessProperties") && !value["ProcessProperties"].IsNull())
    {
        if (!value["ProcessProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineageProcessVO.ProcessProperties` is not array type"));

        const rapidjson::Value &tmpValue = value["ProcessProperties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LineageProperty item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_processProperties.push_back(item);
        }
        m_processPropertiesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineageProcessVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_processIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processId.c_str(), allocator).Move(), allocator);
    }

    if (m_processTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processType.c_str(), allocator).Move(), allocator);
    }

    if (m_processSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processSubType.c_str(), allocator).Move(), allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifiedIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualifiedId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qualifiedId.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_processPropertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessProperties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_processProperties.begin(); itr != m_processProperties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LineageProcessVO::GetProcessId() const
{
    return m_processId;
}

void LineageProcessVO::SetProcessId(const string& _processId)
{
    m_processId = _processId;
    m_processIdHasBeenSet = true;
}

bool LineageProcessVO::ProcessIdHasBeenSet() const
{
    return m_processIdHasBeenSet;
}

string LineageProcessVO::GetProcessType() const
{
    return m_processType;
}

void LineageProcessVO::SetProcessType(const string& _processType)
{
    m_processType = _processType;
    m_processTypeHasBeenSet = true;
}

bool LineageProcessVO::ProcessTypeHasBeenSet() const
{
    return m_processTypeHasBeenSet;
}

string LineageProcessVO::GetProcessSubType() const
{
    return m_processSubType;
}

void LineageProcessVO::SetProcessSubType(const string& _processSubType)
{
    m_processSubType = _processSubType;
    m_processSubTypeHasBeenSet = true;
}

bool LineageProcessVO::ProcessSubTypeHasBeenSet() const
{
    return m_processSubTypeHasBeenSet;
}

string LineageProcessVO::GetProcessName() const
{
    return m_processName;
}

void LineageProcessVO::SetProcessName(const string& _processName)
{
    m_processName = _processName;
    m_processNameHasBeenSet = true;
}

bool LineageProcessVO::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

string LineageProcessVO::GetDescription() const
{
    return m_description;
}

void LineageProcessVO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LineageProcessVO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string LineageProcessVO::GetQualifiedId() const
{
    return m_qualifiedId;
}

void LineageProcessVO::SetQualifiedId(const string& _qualifiedId)
{
    m_qualifiedId = _qualifiedId;
    m_qualifiedIdHasBeenSet = true;
}

bool LineageProcessVO::QualifiedIdHasBeenSet() const
{
    return m_qualifiedIdHasBeenSet;
}

string LineageProcessVO::GetPlatform() const
{
    return m_platform;
}

void LineageProcessVO::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool LineageProcessVO::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

vector<LineageProperty> LineageProcessVO::GetProcessProperties() const
{
    return m_processProperties;
}

void LineageProcessVO::SetProcessProperties(const vector<LineageProperty>& _processProperties)
{
    m_processProperties = _processProperties;
    m_processPropertiesHasBeenSet = true;
}

bool LineageProcessVO::ProcessPropertiesHasBeenSet() const
{
    return m_processPropertiesHasBeenSet;
}

