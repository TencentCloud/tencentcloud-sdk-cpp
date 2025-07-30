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

#include <tencentcloud/lowcode/v20210108/model/PutWxAppIdToWeAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

PutWxAppIdToWeAppRequest::PutWxAppIdToWeAppRequest() :
    m_weAppIdHasBeenSet(false),
    m_wxAppIdHasBeenSet(false)
{
}

string PutWxAppIdToWeAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_weAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_weAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_wxAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WxAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wxAppId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PutWxAppIdToWeAppRequest::GetWeAppId() const
{
    return m_weAppId;
}

void PutWxAppIdToWeAppRequest::SetWeAppId(const string& _weAppId)
{
    m_weAppId = _weAppId;
    m_weAppIdHasBeenSet = true;
}

bool PutWxAppIdToWeAppRequest::WeAppIdHasBeenSet() const
{
    return m_weAppIdHasBeenSet;
}

string PutWxAppIdToWeAppRequest::GetWxAppId() const
{
    return m_wxAppId;
}

void PutWxAppIdToWeAppRequest::SetWxAppId(const string& _wxAppId)
{
    m_wxAppId = _wxAppId;
    m_wxAppIdHasBeenSet = true;
}

bool PutWxAppIdToWeAppRequest::WxAppIdHasBeenSet() const
{
    return m_wxAppIdHasBeenSet;
}


