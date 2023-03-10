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

#include <tencentcloud/cvm/v20170312/model/RepairTaskControlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

RepairTaskControlRequest::RepairTaskControlRequest() :
    m_productHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_operateHasBeenSet(false),
    m_orderAuthTimeHasBeenSet(false),
    m_taskSubMethodHasBeenSet(false)
{
}

string RepairTaskControlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

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

    if (m_orderAuthTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderAuthTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderAuthTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskSubMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSubMethod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskSubMethod.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RepairTaskControlRequest::GetProduct() const
{
    return m_product;
}

void RepairTaskControlRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool RepairTaskControlRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<string> RepairTaskControlRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void RepairTaskControlRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool RepairTaskControlRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
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

string RepairTaskControlRequest::GetOrderAuthTime() const
{
    return m_orderAuthTime;
}

void RepairTaskControlRequest::SetOrderAuthTime(const string& _orderAuthTime)
{
    m_orderAuthTime = _orderAuthTime;
    m_orderAuthTimeHasBeenSet = true;
}

bool RepairTaskControlRequest::OrderAuthTimeHasBeenSet() const
{
    return m_orderAuthTimeHasBeenSet;
}

string RepairTaskControlRequest::GetTaskSubMethod() const
{
    return m_taskSubMethod;
}

void RepairTaskControlRequest::SetTaskSubMethod(const string& _taskSubMethod)
{
    m_taskSubMethod = _taskSubMethod;
    m_taskSubMethodHasBeenSet = true;
}

bool RepairTaskControlRequest::TaskSubMethodHasBeenSet() const
{
    return m_taskSubMethodHasBeenSet;
}


