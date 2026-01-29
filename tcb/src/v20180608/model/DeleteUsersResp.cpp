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

#include <tencentcloud/tcb/v20180608/model/DeleteUsersResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DeleteUsersResp::DeleteUsersResp() :
    m_successCountHasBeenSet(false),
    m_failedCountHasBeenSet(false)
{
}

CoreInternalOutcome DeleteUsersResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUsersResp.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailedCount") && !value["FailedCount"].IsNull())
    {
        if (!value["FailedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteUsersResp.FailedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedCount = value["FailedCount"].GetInt64();
        m_failedCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeleteUsersResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedCount, allocator);
    }

}


int64_t DeleteUsersResp::GetSuccessCount() const
{
    return m_successCount;
}

void DeleteUsersResp::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool DeleteUsersResp::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t DeleteUsersResp::GetFailedCount() const
{
    return m_failedCount;
}

void DeleteUsersResp::SetFailedCount(const int64_t& _failedCount)
{
    m_failedCount = _failedCount;
    m_failedCountHasBeenSet = true;
}

bool DeleteUsersResp::FailedCountHasBeenSet() const
{
    return m_failedCountHasBeenSet;
}

