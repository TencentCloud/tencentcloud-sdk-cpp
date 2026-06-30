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

#include <tencentcloud/csip/v20221121/model/ModifyNotifySettingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyNotifySettingRequest::ModifyNotifySettingRequest() :
    m_moduleHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_optionHasBeenSet(false)
{
}

string ModifyNotifySettingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_optionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Option";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_option.begin(); itr != m_option.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNotifySettingRequest::GetModule() const
{
    return m_module;
}

void ModifyNotifySettingRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool ModifyNotifySettingRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t ModifyNotifySettingRequest::GetMode() const
{
    return m_mode;
}

void ModifyNotifySettingRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifyNotifySettingRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t ModifyNotifySettingRequest::GetStatus() const
{
    return m_status;
}

void ModifyNotifySettingRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyNotifySettingRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyNotifySettingRequest::GetBeginTime() const
{
    return m_beginTime;
}

void ModifyNotifySettingRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool ModifyNotifySettingRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string ModifyNotifySettingRequest::GetEndTime() const
{
    return m_endTime;
}

void ModifyNotifySettingRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool ModifyNotifySettingRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> ModifyNotifySettingRequest::GetOption() const
{
    return m_option;
}

void ModifyNotifySettingRequest::SetOption(const vector<string>& _option)
{
    m_option = _option;
    m_optionHasBeenSet = true;
}

bool ModifyNotifySettingRequest::OptionHasBeenSet() const
{
    return m_optionHasBeenSet;
}


