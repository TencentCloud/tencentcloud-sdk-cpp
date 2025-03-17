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

#include <tencentcloud/cdwch/v20200915/model/SecondaryZoneInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwch::V20200915::Model;
using namespace std;

SecondaryZoneInfo::SecondaryZoneInfo() :
    m_secondaryZoneHasBeenSet(false),
    m_secondarySubnetHasBeenSet(false),
    m_userIpNumHasBeenSet(false),
    m_secondaryUserSubnetIPNumHasBeenSet(false)
{
}

CoreInternalOutcome SecondaryZoneInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SecondaryZone") && !value["SecondaryZone"].IsNull())
    {
        if (!value["SecondaryZone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecondaryZoneInfo.SecondaryZone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryZone = string(value["SecondaryZone"].GetString());
        m_secondaryZoneHasBeenSet = true;
    }

    if (value.HasMember("SecondarySubnet") && !value["SecondarySubnet"].IsNull())
    {
        if (!value["SecondarySubnet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecondaryZoneInfo.SecondarySubnet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secondarySubnet = string(value["SecondarySubnet"].GetString());
        m_secondarySubnetHasBeenSet = true;
    }

    if (value.HasMember("UserIpNum") && !value["UserIpNum"].IsNull())
    {
        if (!value["UserIpNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecondaryZoneInfo.UserIpNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userIpNum = string(value["UserIpNum"].GetString());
        m_userIpNumHasBeenSet = true;
    }

    if (value.HasMember("SecondaryUserSubnetIPNum") && !value["SecondaryUserSubnetIPNum"].IsNull())
    {
        if (!value["SecondaryUserSubnetIPNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecondaryZoneInfo.SecondaryUserSubnetIPNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secondaryUserSubnetIPNum = value["SecondaryUserSubnetIPNum"].GetInt64();
        m_secondaryUserSubnetIPNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecondaryZoneInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_secondaryZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondaryZone.c_str(), allocator).Move(), allocator);
    }

    if (m_secondarySubnetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondarySubnet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secondarySubnet.c_str(), allocator).Move(), allocator);
    }

    if (m_userIpNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIpNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userIpNum.c_str(), allocator).Move(), allocator);
    }

    if (m_secondaryUserSubnetIPNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryUserSubnetIPNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secondaryUserSubnetIPNum, allocator);
    }

}


string SecondaryZoneInfo::GetSecondaryZone() const
{
    return m_secondaryZone;
}

void SecondaryZoneInfo::SetSecondaryZone(const string& _secondaryZone)
{
    m_secondaryZone = _secondaryZone;
    m_secondaryZoneHasBeenSet = true;
}

bool SecondaryZoneInfo::SecondaryZoneHasBeenSet() const
{
    return m_secondaryZoneHasBeenSet;
}

string SecondaryZoneInfo::GetSecondarySubnet() const
{
    return m_secondarySubnet;
}

void SecondaryZoneInfo::SetSecondarySubnet(const string& _secondarySubnet)
{
    m_secondarySubnet = _secondarySubnet;
    m_secondarySubnetHasBeenSet = true;
}

bool SecondaryZoneInfo::SecondarySubnetHasBeenSet() const
{
    return m_secondarySubnetHasBeenSet;
}

string SecondaryZoneInfo::GetUserIpNum() const
{
    return m_userIpNum;
}

void SecondaryZoneInfo::SetUserIpNum(const string& _userIpNum)
{
    m_userIpNum = _userIpNum;
    m_userIpNumHasBeenSet = true;
}

bool SecondaryZoneInfo::UserIpNumHasBeenSet() const
{
    return m_userIpNumHasBeenSet;
}

int64_t SecondaryZoneInfo::GetSecondaryUserSubnetIPNum() const
{
    return m_secondaryUserSubnetIPNum;
}

void SecondaryZoneInfo::SetSecondaryUserSubnetIPNum(const int64_t& _secondaryUserSubnetIPNum)
{
    m_secondaryUserSubnetIPNum = _secondaryUserSubnetIPNum;
    m_secondaryUserSubnetIPNumHasBeenSet = true;
}

bool SecondaryZoneInfo::SecondaryUserSubnetIPNumHasBeenSet() const
{
    return m_secondaryUserSubnetIPNumHasBeenSet;
}

