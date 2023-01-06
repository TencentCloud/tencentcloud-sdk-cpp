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

#include <tencentcloud/ckafka/v20190819/model/DescribeConnectInfoResultDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DescribeConnectInfoResultDTO::DescribeConnectInfoResultDTO() :
    m_ipAddrHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_isUnSupportVersionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConnectInfoResultDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IpAddr") && !value["IpAddr"].IsNull())
    {
        if (!value["IpAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectInfoResultDTO.IpAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ipAddr = string(value["IpAddr"].GetString());
        m_ipAddrHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectInfoResultDTO.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("IsUnSupportVersion") && !value["IsUnSupportVersion"].IsNull())
    {
        if (!value["IsUnSupportVersion"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConnectInfoResultDTO.IsUnSupportVersion` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUnSupportVersion = value["IsUnSupportVersion"].GetBool();
        m_isUnSupportVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeConnectInfoResultDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ipAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_isUnSupportVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUnSupportVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUnSupportVersion, allocator);
    }

}


string DescribeConnectInfoResultDTO::GetIpAddr() const
{
    return m_ipAddr;
}

void DescribeConnectInfoResultDTO::SetIpAddr(const string& _ipAddr)
{
    m_ipAddr = _ipAddr;
    m_ipAddrHasBeenSet = true;
}

bool DescribeConnectInfoResultDTO::IpAddrHasBeenSet() const
{
    return m_ipAddrHasBeenSet;
}

string DescribeConnectInfoResultDTO::GetTime() const
{
    return m_time;
}

void DescribeConnectInfoResultDTO::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool DescribeConnectInfoResultDTO::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

bool DescribeConnectInfoResultDTO::GetIsUnSupportVersion() const
{
    return m_isUnSupportVersion;
}

void DescribeConnectInfoResultDTO::SetIsUnSupportVersion(const bool& _isUnSupportVersion)
{
    m_isUnSupportVersion = _isUnSupportVersion;
    m_isUnSupportVersionHasBeenSet = true;
}

bool DescribeConnectInfoResultDTO::IsUnSupportVersionHasBeenSet() const
{
    return m_isUnSupportVersionHasBeenSet;
}

