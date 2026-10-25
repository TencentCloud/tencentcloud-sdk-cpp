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

#include <tencentcloud/rum/v20210622/model/DeleteTDEMFunnelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DeleteTDEMFunnelRequest::DeleteTDEMFunnelRequest() :
    m_appIdHasBeenSet(false),
    m_funnelIdHasBeenSet(false)
{
}

string DeleteTDEMFunnelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_funnelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FunnelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_funnelId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteTDEMFunnelRequest::GetAppId() const
{
    return m_appId;
}

void DeleteTDEMFunnelRequest::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DeleteTDEMFunnelRequest::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string DeleteTDEMFunnelRequest::GetFunnelId() const
{
    return m_funnelId;
}

void DeleteTDEMFunnelRequest::SetFunnelId(const string& _funnelId)
{
    m_funnelId = _funnelId;
    m_funnelIdHasBeenSet = true;
}

bool DeleteTDEMFunnelRequest::FunnelIdHasBeenSet() const
{
    return m_funnelIdHasBeenSet;
}


