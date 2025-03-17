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

#include <tencentcloud/trro/v20220325/model/ModifyProjectSecModeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trro::V20220325::Model;
using namespace std;

ModifyProjectSecModeRequest::ModifyProjectSecModeRequest() :
    m_projectIdHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_autoRegisterHasBeenSet(false),
    m_fieldListEnableHasBeenSet(false)
{
}

string ModifyProjectSecModeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRegisterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRegister";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRegister, allocator);
    }

    if (m_fieldListEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldListEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fieldListEnable, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyProjectSecModeRequest::GetProjectId() const
{
    return m_projectId;
}

void ModifyProjectSecModeRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ModifyProjectSecModeRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t ModifyProjectSecModeRequest::GetMode() const
{
    return m_mode;
}

void ModifyProjectSecModeRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyProjectSecModeRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ModifyProjectSecModeRequest::GetKey() const
{
    return m_key;
}

void ModifyProjectSecModeRequest::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool ModifyProjectSecModeRequest::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

int64_t ModifyProjectSecModeRequest::GetAutoRegister() const
{
    return m_autoRegister;
}

void ModifyProjectSecModeRequest::SetAutoRegister(const int64_t& _autoRegister)
{
    m_autoRegister = _autoRegister;
    m_autoRegisterHasBeenSet = true;
}

bool ModifyProjectSecModeRequest::AutoRegisterHasBeenSet() const
{
    return m_autoRegisterHasBeenSet;
}

int64_t ModifyProjectSecModeRequest::GetFieldListEnable() const
{
    return m_fieldListEnable;
}

void ModifyProjectSecModeRequest::SetFieldListEnable(const int64_t& _fieldListEnable)
{
    m_fieldListEnable = _fieldListEnable;
    m_fieldListEnableHasBeenSet = true;
}

bool ModifyProjectSecModeRequest::FieldListEnableHasBeenSet() const
{
    return m_fieldListEnableHasBeenSet;
}


