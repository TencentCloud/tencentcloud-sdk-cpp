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

#include <tencentcloud/dts/v20211206/model/ModifySyncJobConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ModifySyncJobConfigRequest::ModifySyncJobConfigRequest() :
    m_jobIdHasBeenSet(false),
    m_dynamicObjectsHasBeenSet(false),
    m_dynamicOptionsHasBeenSet(false)
{
}

string ModifySyncJobConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_dynamicObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicObjects";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dynamicObjects.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dynamicOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DynamicOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dynamicOptions.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySyncJobConfigRequest::GetJobId() const
{
    return m_jobId;
}

void ModifySyncJobConfigRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ModifySyncJobConfigRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

Objects ModifySyncJobConfigRequest::GetDynamicObjects() const
{
    return m_dynamicObjects;
}

void ModifySyncJobConfigRequest::SetDynamicObjects(const Objects& _dynamicObjects)
{
    m_dynamicObjects = _dynamicObjects;
    m_dynamicObjectsHasBeenSet = true;
}

bool ModifySyncJobConfigRequest::DynamicObjectsHasBeenSet() const
{
    return m_dynamicObjectsHasBeenSet;
}

DynamicOptions ModifySyncJobConfigRequest::GetDynamicOptions() const
{
    return m_dynamicOptions;
}

void ModifySyncJobConfigRequest::SetDynamicOptions(const DynamicOptions& _dynamicOptions)
{
    m_dynamicOptions = _dynamicOptions;
    m_dynamicOptionsHasBeenSet = true;
}

bool ModifySyncJobConfigRequest::DynamicOptionsHasBeenSet() const
{
    return m_dynamicOptionsHasBeenSet;
}


