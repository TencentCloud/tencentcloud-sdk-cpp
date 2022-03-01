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

#include <tencentcloud/gme/v20180711/model/UpdateScanUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

UpdateScanUsersRequest::UpdateScanUsersRequest() :
    m_bizIdHasBeenSet(false),
    m_userIdStringHasBeenSet(false),
    m_userIdRegexHasBeenSet(false)
{
}

string UpdateScanUsersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bizId, allocator);
    }

    if (m_userIdStringHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdString";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userIdString.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdRegexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIdRegex";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userIdRegex.begin(); itr != m_userIdRegex.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t UpdateScanUsersRequest::GetBizId() const
{
    return m_bizId;
}

void UpdateScanUsersRequest::SetBizId(const uint64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool UpdateScanUsersRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

string UpdateScanUsersRequest::GetUserIdString() const
{
    return m_userIdString;
}

void UpdateScanUsersRequest::SetUserIdString(const string& _userIdString)
{
    m_userIdString = _userIdString;
    m_userIdStringHasBeenSet = true;
}

bool UpdateScanUsersRequest::UserIdStringHasBeenSet() const
{
    return m_userIdStringHasBeenSet;
}

vector<string> UpdateScanUsersRequest::GetUserIdRegex() const
{
    return m_userIdRegex;
}

void UpdateScanUsersRequest::SetUserIdRegex(const vector<string>& _userIdRegex)
{
    m_userIdRegex = _userIdRegex;
    m_userIdRegexHasBeenSet = true;
}

bool UpdateScanUsersRequest::UserIdRegexHasBeenSet() const
{
    return m_userIdRegexHasBeenSet;
}


