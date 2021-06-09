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

#include <tencentcloud/iotvideo/v20191126/model/ModifyDeviceActionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20191126::Model;
using namespace std;

ModifyDeviceActionRequest::ModifyDeviceActionRequest() :
    m_tidHasBeenSet(false),
    m_wakeupHasBeenSet(false),
    m_branchHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_isNumHasBeenSet(false)
{
}

string ModifyDeviceActionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tid.c_str(), allocator).Move(), allocator);
    }

    if (m_wakeupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Wakeup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_wakeup, allocator);
    }

    if (m_branchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Branch";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_branch.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_isNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDeviceActionRequest::GetTid() const
{
    return m_tid;
}

void ModifyDeviceActionRequest::SetTid(const string& _tid)
{
    m_tid = _tid;
    m_tidHasBeenSet = true;
}

bool ModifyDeviceActionRequest::TidHasBeenSet() const
{
    return m_tidHasBeenSet;
}

bool ModifyDeviceActionRequest::GetWakeup() const
{
    return m_wakeup;
}

void ModifyDeviceActionRequest::SetWakeup(const bool& _wakeup)
{
    m_wakeup = _wakeup;
    m_wakeupHasBeenSet = true;
}

bool ModifyDeviceActionRequest::WakeupHasBeenSet() const
{
    return m_wakeupHasBeenSet;
}

string ModifyDeviceActionRequest::GetBranch() const
{
    return m_branch;
}

void ModifyDeviceActionRequest::SetBranch(const string& _branch)
{
    m_branch = _branch;
    m_branchHasBeenSet = true;
}

bool ModifyDeviceActionRequest::BranchHasBeenSet() const
{
    return m_branchHasBeenSet;
}

string ModifyDeviceActionRequest::GetValue() const
{
    return m_value;
}

void ModifyDeviceActionRequest::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ModifyDeviceActionRequest::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

bool ModifyDeviceActionRequest::GetIsNum() const
{
    return m_isNum;
}

void ModifyDeviceActionRequest::SetIsNum(const bool& _isNum)
{
    m_isNum = _isNum;
    m_isNumHasBeenSet = true;
}

bool ModifyDeviceActionRequest::IsNumHasBeenSet() const
{
    return m_isNumHasBeenSet;
}


