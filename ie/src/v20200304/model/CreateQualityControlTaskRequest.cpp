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

#include <tencentcloud/ie/v20200304/model/CreateQualityControlTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

CreateQualityControlTaskRequest::CreateQualityControlTaskRequest() :
    m_qualityControlInfoHasBeenSet(false),
    m_downInfoHasBeenSet(false),
    m_callbackInfoHasBeenSet(false)
{
}

string CreateQualityControlTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_qualityControlInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QualityControlInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qualityControlInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_downInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_downInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_callbackInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callbackInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


QualityControlInfo CreateQualityControlTaskRequest::GetQualityControlInfo() const
{
    return m_qualityControlInfo;
}

void CreateQualityControlTaskRequest::SetQualityControlInfo(const QualityControlInfo& _qualityControlInfo)
{
    m_qualityControlInfo = _qualityControlInfo;
    m_qualityControlInfoHasBeenSet = true;
}

bool CreateQualityControlTaskRequest::QualityControlInfoHasBeenSet() const
{
    return m_qualityControlInfoHasBeenSet;
}

DownInfo CreateQualityControlTaskRequest::GetDownInfo() const
{
    return m_downInfo;
}

void CreateQualityControlTaskRequest::SetDownInfo(const DownInfo& _downInfo)
{
    m_downInfo = _downInfo;
    m_downInfoHasBeenSet = true;
}

bool CreateQualityControlTaskRequest::DownInfoHasBeenSet() const
{
    return m_downInfoHasBeenSet;
}

CallbackInfo CreateQualityControlTaskRequest::GetCallbackInfo() const
{
    return m_callbackInfo;
}

void CreateQualityControlTaskRequest::SetCallbackInfo(const CallbackInfo& _callbackInfo)
{
    m_callbackInfo = _callbackInfo;
    m_callbackInfoHasBeenSet = true;
}

bool CreateQualityControlTaskRequest::CallbackInfoHasBeenSet() const
{
    return m_callbackInfoHasBeenSet;
}


