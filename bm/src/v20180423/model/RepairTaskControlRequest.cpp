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

#include <tencentcloud/bm/v20180423/model/RepairTaskControlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace std;

RepairTaskControlRequest::RepairTaskControlRequest() :
    m_taskIdHasBeenSet(false),
    m_operateHasBeenSet(false),
    m_operateRemarkHasBeenSet(false)
{
}

string RepairTaskControlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_operateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operate.c_str(), allocator).Move(), allocator);
    }

    if (m_operateRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operateRemark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RepairTaskControlRequest::GetTaskId() const
{
    return m_taskId;
}

void RepairTaskControlRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RepairTaskControlRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string RepairTaskControlRequest::GetOperate() const
{
    return m_operate;
}

void RepairTaskControlRequest::SetOperate(const string& _operate)
{
    m_operate = _operate;
    m_operateHasBeenSet = true;
}

bool RepairTaskControlRequest::OperateHasBeenSet() const
{
    return m_operateHasBeenSet;
}

string RepairTaskControlRequest::GetOperateRemark() const
{
    return m_operateRemark;
}

void RepairTaskControlRequest::SetOperateRemark(const string& _operateRemark)
{
    m_operateRemark = _operateRemark;
    m_operateRemarkHasBeenSet = true;
}

bool RepairTaskControlRequest::OperateRemarkHasBeenSet() const
{
    return m_operateRemarkHasBeenSet;
}


