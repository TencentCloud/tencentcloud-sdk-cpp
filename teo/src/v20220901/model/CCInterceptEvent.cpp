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

#include <tencentcloud/teo/v20220901/model/CCInterceptEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CCInterceptEvent::CCInterceptEvent() :
    m_clientIpHasBeenSet(false),
    m_interceptNumHasBeenSet(false),
    m_interceptTimeHasBeenSet(false)
{
}

CoreInternalOutcome CCInterceptEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CCInterceptEvent.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("InterceptNum") && !value["InterceptNum"].IsNull())
    {
        if (!value["InterceptNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CCInterceptEvent.InterceptNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interceptNum = value["InterceptNum"].GetInt64();
        m_interceptNumHasBeenSet = true;
    }

    if (value.HasMember("InterceptTime") && !value["InterceptTime"].IsNull())
    {
        if (!value["InterceptTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CCInterceptEvent.InterceptTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_interceptTime = value["InterceptTime"].GetInt64();
        m_interceptTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CCInterceptEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_interceptNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterceptNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interceptNum, allocator);
    }

    if (m_interceptTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterceptTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interceptTime, allocator);
    }

}


string CCInterceptEvent::GetClientIp() const
{
    return m_clientIp;
}

void CCInterceptEvent::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool CCInterceptEvent::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

int64_t CCInterceptEvent::GetInterceptNum() const
{
    return m_interceptNum;
}

void CCInterceptEvent::SetInterceptNum(const int64_t& _interceptNum)
{
    m_interceptNum = _interceptNum;
    m_interceptNumHasBeenSet = true;
}

bool CCInterceptEvent::InterceptNumHasBeenSet() const
{
    return m_interceptNumHasBeenSet;
}

int64_t CCInterceptEvent::GetInterceptTime() const
{
    return m_interceptTime;
}

void CCInterceptEvent::SetInterceptTime(const int64_t& _interceptTime)
{
    m_interceptTime = _interceptTime;
    m_interceptTimeHasBeenSet = true;
}

bool CCInterceptEvent::InterceptTimeHasBeenSet() const
{
    return m_interceptTimeHasBeenSet;
}

