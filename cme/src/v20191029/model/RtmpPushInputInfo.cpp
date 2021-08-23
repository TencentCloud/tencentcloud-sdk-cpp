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

#include <tencentcloud/cme/v20191029/model/RtmpPushInputInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

RtmpPushInputInfo::RtmpPushInputInfo() :
    m_expiredSecondHasBeenSet(false),
    m_pushUrlHasBeenSet(false)
{
}

CoreInternalOutcome RtmpPushInputInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExpiredSecond") && !value["ExpiredSecond"].IsNull())
    {
        if (!value["ExpiredSecond"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RtmpPushInputInfo.ExpiredSecond` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expiredSecond = value["ExpiredSecond"].GetUint64();
        m_expiredSecondHasBeenSet = true;
    }

    if (value.HasMember("PushUrl") && !value["PushUrl"].IsNull())
    {
        if (!value["PushUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RtmpPushInputInfo.PushUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pushUrl = string(value["PushUrl"].GetString());
        m_pushUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RtmpPushInputInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_expiredSecondHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredSecond";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expiredSecond, allocator);
    }

    if (m_pushUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pushUrl.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RtmpPushInputInfo::GetExpiredSecond() const
{
    return m_expiredSecond;
}

void RtmpPushInputInfo::SetExpiredSecond(const uint64_t& _expiredSecond)
{
    m_expiredSecond = _expiredSecond;
    m_expiredSecondHasBeenSet = true;
}

bool RtmpPushInputInfo::ExpiredSecondHasBeenSet() const
{
    return m_expiredSecondHasBeenSet;
}

string RtmpPushInputInfo::GetPushUrl() const
{
    return m_pushUrl;
}

void RtmpPushInputInfo::SetPushUrl(const string& _pushUrl)
{
    m_pushUrl = _pushUrl;
    m_pushUrlHasBeenSet = true;
}

bool RtmpPushInputInfo::PushUrlHasBeenSet() const
{
    return m_pushUrlHasBeenSet;
}

