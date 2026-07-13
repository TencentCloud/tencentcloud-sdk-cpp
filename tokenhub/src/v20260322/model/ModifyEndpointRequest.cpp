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

#include <tencentcloud/tokenhub/v20260322/model/ModifyEndpointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

ModifyEndpointRequest::ModifyEndpointRequest() :
    m_autoAdjustQuotaHasBeenSet(false)
{
}

string ModifyEndpointRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoAdjustQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoAdjustQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoAdjustQuota, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyEndpointRequest::GetAutoAdjustQuota() const
{
    return m_autoAdjustQuota;
}

void ModifyEndpointRequest::SetAutoAdjustQuota(const int64_t& _autoAdjustQuota)
{
    m_autoAdjustQuota = _autoAdjustQuota;
    m_autoAdjustQuotaHasBeenSet = true;
}

bool ModifyEndpointRequest::AutoAdjustQuotaHasBeenSet() const
{
    return m_autoAdjustQuotaHasBeenSet;
}


