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

#include <tencentcloud/rum/v20210622/model/ResumeInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ResumeInstanceRequest::ResumeInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_isModifyAllHasBeenSet(false)
{
}

string ResumeInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_isModifyAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsModifyAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isModifyAll, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResumeInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ResumeInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ResumeInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

bool ResumeInstanceRequest::GetIsModifyAll() const
{
    return m_isModifyAll;
}

void ResumeInstanceRequest::SetIsModifyAll(const bool& _isModifyAll)
{
    m_isModifyAll = _isModifyAll;
    m_isModifyAllHasBeenSet = true;
}

bool ResumeInstanceRequest::IsModifyAllHasBeenSet() const
{
    return m_isModifyAllHasBeenSet;
}


