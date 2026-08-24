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

#include <tencentcloud/csip/v20221121/model/DeleteDspmShareUserDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DeleteDspmShareUserDataRequest::DeleteDspmShareUserDataRequest() :
    m_deleteDataAppIdHasBeenSet(false)
{
}

string DeleteDspmShareUserDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deleteDataAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteDataAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteDataAppId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeleteDspmShareUserDataRequest::GetDeleteDataAppId() const
{
    return m_deleteDataAppId;
}

void DeleteDspmShareUserDataRequest::SetDeleteDataAppId(const uint64_t& _deleteDataAppId)
{
    m_deleteDataAppId = _deleteDataAppId;
    m_deleteDataAppIdHasBeenSet = true;
}

bool DeleteDspmShareUserDataRequest::DeleteDataAppIdHasBeenSet() const
{
    return m_deleteDataAppIdHasBeenSet;
}


