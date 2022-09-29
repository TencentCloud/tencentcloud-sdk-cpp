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

#include <tencentcloud/ess/v20201111/model/FailedDeleteStaffData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

FailedDeleteStaffData::FailedDeleteStaffData() :
    m_userIdHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome FailedDeleteStaffData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailedDeleteStaffData.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailedDeleteStaffData.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailedDeleteStaffData.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FailedDeleteStaffData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


string FailedDeleteStaffData::GetUserId() const
{
    return m_userId;
}

void FailedDeleteStaffData::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool FailedDeleteStaffData::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string FailedDeleteStaffData::GetOpenId() const
{
    return m_openId;
}

void FailedDeleteStaffData::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool FailedDeleteStaffData::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string FailedDeleteStaffData::GetReason() const
{
    return m_reason;
}

void FailedDeleteStaffData::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool FailedDeleteStaffData::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

