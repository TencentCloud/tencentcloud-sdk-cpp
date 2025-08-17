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

#include <tencentcloud/vod/v20180717/model/MPSTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MPSTemplate::MPSTemplate() :
    m_taskTypeHasBeenSet(false),
    m_mPSTemplateInfoHasBeenSet(false)
{
}

CoreInternalOutcome MPSTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSTemplate.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("MPSTemplateInfo") && !value["MPSTemplateInfo"].IsNull())
    {
        if (!value["MPSTemplateInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MPSTemplate.MPSTemplateInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mPSTemplateInfo = string(value["MPSTemplateInfo"].GetString());
        m_mPSTemplateInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_mPSTemplateInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MPSTemplateInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mPSTemplateInfo.c_str(), allocator).Move(), allocator);
    }

}


string MPSTemplate::GetTaskType() const
{
    return m_taskType;
}

void MPSTemplate::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool MPSTemplate::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string MPSTemplate::GetMPSTemplateInfo() const
{
    return m_mPSTemplateInfo;
}

void MPSTemplate::SetMPSTemplateInfo(const string& _mPSTemplateInfo)
{
    m_mPSTemplateInfo = _mPSTemplateInfo;
    m_mPSTemplateInfoHasBeenSet = true;
}

bool MPSTemplate::MPSTemplateInfoHasBeenSet() const
{
    return m_mPSTemplateInfoHasBeenSet;
}

