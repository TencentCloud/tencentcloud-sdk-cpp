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

#include <tencentcloud/tsf/v20180326/model/DeleteApplicationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DeleteApplicationRequest::DeleteApplicationRequest() :
    m_applicationIdHasBeenSet(false),
    m_syncDeleteImageRepositoryHasBeenSet(false)
{
}

string DeleteApplicationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_syncDeleteImageRepositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncDeleteImageRepository";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_syncDeleteImageRepository, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteApplicationRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DeleteApplicationRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DeleteApplicationRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

bool DeleteApplicationRequest::GetSyncDeleteImageRepository() const
{
    return m_syncDeleteImageRepository;
}

void DeleteApplicationRequest::SetSyncDeleteImageRepository(const bool& _syncDeleteImageRepository)
{
    m_syncDeleteImageRepository = _syncDeleteImageRepository;
    m_syncDeleteImageRepositoryHasBeenSet = true;
}

bool DeleteApplicationRequest::SyncDeleteImageRepositoryHasBeenSet() const
{
    return m_syncDeleteImageRepositoryHasBeenSet;
}


