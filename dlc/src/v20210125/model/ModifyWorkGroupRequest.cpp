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

#include <tencentcloud/dlc/v20210125/model/ModifyWorkGroupRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ModifyWorkGroupRequest::ModifyWorkGroupRequest() :
    m_workGroupIdHasBeenSet(false),
    m_workGroupDescriptionHasBeenSet(false)
{
}

string ModifyWorkGroupRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workGroupId, allocator);
    }

    if (m_workGroupDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkGroupDescription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workGroupDescription.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyWorkGroupRequest::GetWorkGroupId() const
{
    return m_workGroupId;
}

void ModifyWorkGroupRequest::SetWorkGroupId(const int64_t& _workGroupId)
{
    m_workGroupId = _workGroupId;
    m_workGroupIdHasBeenSet = true;
}

bool ModifyWorkGroupRequest::WorkGroupIdHasBeenSet() const
{
    return m_workGroupIdHasBeenSet;
}

string ModifyWorkGroupRequest::GetWorkGroupDescription() const
{
    return m_workGroupDescription;
}

void ModifyWorkGroupRequest::SetWorkGroupDescription(const string& _workGroupDescription)
{
    m_workGroupDescription = _workGroupDescription;
    m_workGroupDescriptionHasBeenSet = true;
}

bool ModifyWorkGroupRequest::WorkGroupDescriptionHasBeenSet() const
{
    return m_workGroupDescriptionHasBeenSet;
}


