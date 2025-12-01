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

#include <tencentcloud/gs/v20191118/model/ModifyAndroidInstancesUserIdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gs::V20191118::Model;
using namespace std;

ModifyAndroidInstancesUserIdRequest::ModifyAndroidInstancesUserIdRequest() :
    m_androidInstanceIdsHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_expirationDurationHasBeenSet(false)
{
}

string ModifyAndroidInstancesUserIdRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_androidInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_androidInstanceIds.begin(); itr != m_androidInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expirationDuration.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyAndroidInstancesUserIdRequest::GetAndroidInstanceIds() const
{
    return m_androidInstanceIds;
}

void ModifyAndroidInstancesUserIdRequest::SetAndroidInstanceIds(const vector<string>& _androidInstanceIds)
{
    m_androidInstanceIds = _androidInstanceIds;
    m_androidInstanceIdsHasBeenSet = true;
}

bool ModifyAndroidInstancesUserIdRequest::AndroidInstanceIdsHasBeenSet() const
{
    return m_androidInstanceIdsHasBeenSet;
}

string ModifyAndroidInstancesUserIdRequest::GetUserId() const
{
    return m_userId;
}

void ModifyAndroidInstancesUserIdRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ModifyAndroidInstancesUserIdRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string ModifyAndroidInstancesUserIdRequest::GetExpirationDuration() const
{
    return m_expirationDuration;
}

void ModifyAndroidInstancesUserIdRequest::SetExpirationDuration(const string& _expirationDuration)
{
    m_expirationDuration = _expirationDuration;
    m_expirationDurationHasBeenSet = true;
}

bool ModifyAndroidInstancesUserIdRequest::ExpirationDurationHasBeenSet() const
{
    return m_expirationDurationHasBeenSet;
}


