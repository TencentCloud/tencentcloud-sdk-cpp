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

#include <tencentcloud/ivld/v20210903/model/ModifyCallbackRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

ModifyCallbackRequest::ModifyCallbackRequest() :
    m_taskFinishNotifyURLHasBeenSet(false),
    m_mediaFinishNotifyURLHasBeenSet(false)
{
}

string ModifyCallbackRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskFinishNotifyURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFinishNotifyURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskFinishNotifyURL.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaFinishNotifyURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaFinishNotifyURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mediaFinishNotifyURL.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCallbackRequest::GetTaskFinishNotifyURL() const
{
    return m_taskFinishNotifyURL;
}

void ModifyCallbackRequest::SetTaskFinishNotifyURL(const string& _taskFinishNotifyURL)
{
    m_taskFinishNotifyURL = _taskFinishNotifyURL;
    m_taskFinishNotifyURLHasBeenSet = true;
}

bool ModifyCallbackRequest::TaskFinishNotifyURLHasBeenSet() const
{
    return m_taskFinishNotifyURLHasBeenSet;
}

string ModifyCallbackRequest::GetMediaFinishNotifyURL() const
{
    return m_mediaFinishNotifyURL;
}

void ModifyCallbackRequest::SetMediaFinishNotifyURL(const string& _mediaFinishNotifyURL)
{
    m_mediaFinishNotifyURL = _mediaFinishNotifyURL;
    m_mediaFinishNotifyURLHasBeenSet = true;
}

bool ModifyCallbackRequest::MediaFinishNotifyURLHasBeenSet() const
{
    return m_mediaFinishNotifyURLHasBeenSet;
}


