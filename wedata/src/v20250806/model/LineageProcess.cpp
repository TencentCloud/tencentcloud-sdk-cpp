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

#include <tencentcloud/wedata/v20250806/model/LineageProcess.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

LineageProcess::LineageProcess() :
    m_processIdHasBeenSet(false),
    m_processTypeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_processSubTypeHasBeenSet(false),
    m_processPropertiesHasBeenSet(false),
    m_lineageNodeIdHasBeenSet(false)
{
}

CoreInternalOutcome LineageProcess::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProcessId") && !value["ProcessId"].IsNull())
    {
        if (!value["ProcessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageProcess.ProcessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processId = string(value["ProcessId"].GetString());
        m_processIdHasBeenSet = true;
    }

    if (value.HasMember("ProcessType") && !value["ProcessType"].IsNull())
    {
        if (!value["ProcessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageProcess.ProcessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processType = string(value["ProcessType"].GetString());
        m_processTypeHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageProcess.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("ProcessSubType") && !value["ProcessSubType"].IsNull())
    {
        if (!value["ProcessSubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageProcess.ProcessSubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processSubType = string(value["ProcessSubType"].GetString());
        m_processSubTypeHasBeenSet = true;
    }

    if (value.HasMember("ProcessProperties") && !value["ProcessProperties"].IsNull())
    {
        if (!value["ProcessProperties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LineageProcess.ProcessProperties` is not array type"));

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

    if (value.HasMember("LineageNodeId") && !value["LineageNodeId"].IsNull())
    {
        if (!value["LineageNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LineageProcess.LineageNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lineageNodeId = string(value["LineageNodeId"].GetString());
        m_lineageNodeIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LineageProcess::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_processSubTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessSubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processSubType.c_str(), allocator).Move(), allocator);
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

    if (m_lineageNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineageNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lineageNodeId.c_str(), allocator).Move(), allocator);
    }

}


string LineageProcess::GetProcessId() const
{
    return m_processId;
}

void LineageProcess::SetProcessId(const string& _processId)
{
    m_processId = _processId;
    m_processIdHasBeenSet = true;
}

bool LineageProcess::ProcessIdHasBeenSet() const
{
    return m_processIdHasBeenSet;
}

string LineageProcess::GetProcessType() const
{
    return m_processType;
}

void LineageProcess::SetProcessType(const string& _processType)
{
    m_processType = _processType;
    m_processTypeHasBeenSet = true;
}

bool LineageProcess::ProcessTypeHasBeenSet() const
{
    return m_processTypeHasBeenSet;
}

string LineageProcess::GetPlatform() const
{
    return m_platform;
}

void LineageProcess::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool LineageProcess::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string LineageProcess::GetProcessSubType() const
{
    return m_processSubType;
}

void LineageProcess::SetProcessSubType(const string& _processSubType)
{
    m_processSubType = _processSubType;
    m_processSubTypeHasBeenSet = true;
}

bool LineageProcess::ProcessSubTypeHasBeenSet() const
{
    return m_processSubTypeHasBeenSet;
}

vector<LineageProperty> LineageProcess::GetProcessProperties() const
{
    return m_processProperties;
}

void LineageProcess::SetProcessProperties(const vector<LineageProperty>& _processProperties)
{
    m_processProperties = _processProperties;
    m_processPropertiesHasBeenSet = true;
}

bool LineageProcess::ProcessPropertiesHasBeenSet() const
{
    return m_processPropertiesHasBeenSet;
}

string LineageProcess::GetLineageNodeId() const
{
    return m_lineageNodeId;
}

void LineageProcess::SetLineageNodeId(const string& _lineageNodeId)
{
    m_lineageNodeId = _lineageNodeId;
    m_lineageNodeIdHasBeenSet = true;
}

bool LineageProcess::LineageNodeIdHasBeenSet() const
{
    return m_lineageNodeIdHasBeenSet;
}

