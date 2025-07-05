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

#include <tencentcloud/gse/v20191112/model/UpdateBucketAccelerateOptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

UpdateBucketAccelerateOptRequest::UpdateBucketAccelerateOptRequest() :
    m_allowedHasBeenSet(false)
{
}

string UpdateBucketAccelerateOptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_allowedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Allowed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allowed, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


bool UpdateBucketAccelerateOptRequest::GetAllowed() const
{
    return m_allowed;
}

void UpdateBucketAccelerateOptRequest::SetAllowed(const bool& _allowed)
{
    m_allowed = _allowed;
    m_allowedHasBeenSet = true;
}

bool UpdateBucketAccelerateOptRequest::AllowedHasBeenSet() const
{
    return m_allowedHasBeenSet;
}


