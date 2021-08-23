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

#include <tencentcloud/captcha/v20190722/model/CaptchaOperDataTryTimesDistributeUnit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Captcha::V20190722::Model;
using namespace std;

CaptchaOperDataTryTimesDistributeUnit::CaptchaOperDataTryTimesDistributeUnit() :
    m_tryCountHasBeenSet(false),
    m_userCountHasBeenSet(false)
{
}

CoreInternalOutcome CaptchaOperDataTryTimesDistributeUnit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TryCount") && !value["TryCount"].IsNull())
    {
        if (!value["TryCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataTryTimesDistributeUnit.TryCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tryCount = value["TryCount"].GetInt64();
        m_tryCountHasBeenSet = true;
    }

    if (value.HasMember("UserCount") && !value["UserCount"].IsNull())
    {
        if (!value["UserCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CaptchaOperDataTryTimesDistributeUnit.UserCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userCount = value["UserCount"].GetInt64();
        m_userCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CaptchaOperDataTryTimesDistributeUnit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tryCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TryCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tryCount, allocator);
    }

    if (m_userCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userCount, allocator);
    }

}


int64_t CaptchaOperDataTryTimesDistributeUnit::GetTryCount() const
{
    return m_tryCount;
}

void CaptchaOperDataTryTimesDistributeUnit::SetTryCount(const int64_t& _tryCount)
{
    m_tryCount = _tryCount;
    m_tryCountHasBeenSet = true;
}

bool CaptchaOperDataTryTimesDistributeUnit::TryCountHasBeenSet() const
{
    return m_tryCountHasBeenSet;
}

int64_t CaptchaOperDataTryTimesDistributeUnit::GetUserCount() const
{
    return m_userCount;
}

void CaptchaOperDataTryTimesDistributeUnit::SetUserCount(const int64_t& _userCount)
{
    m_userCount = _userCount;
    m_userCountHasBeenSet = true;
}

bool CaptchaOperDataTryTimesDistributeUnit::UserCountHasBeenSet() const
{
    return m_userCountHasBeenSet;
}

