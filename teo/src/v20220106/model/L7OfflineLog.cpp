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

#include <tencentcloud/teo/v20220106/model/L7OfflineLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

L7OfflineLog::L7OfflineLog() :
    m_logTimeHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_logPacketNameHasBeenSet(false)
{
}

CoreInternalOutcome L7OfflineLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogTime") && !value["LogTime"].IsNull())
    {
        if (!value["LogTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7OfflineLog.LogTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logTime = value["LogTime"].GetInt64();
        m_logTimeHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7OfflineLog.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L7OfflineLog.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7OfflineLog.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("LogPacketName") && !value["LogPacketName"].IsNull())
    {
        if (!value["LogPacketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L7OfflineLog.LogPacketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logPacketName = string(value["LogPacketName"].GetString());
        m_logPacketNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L7OfflineLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logTime, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_logPacketNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogPacketName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logPacketName.c_str(), allocator).Move(), allocator);
    }

}


int64_t L7OfflineLog::GetLogTime() const
{
    return m_logTime;
}

void L7OfflineLog::SetLogTime(const int64_t& _logTime)
{
    m_logTime = _logTime;
    m_logTimeHasBeenSet = true;
}

bool L7OfflineLog::LogTimeHasBeenSet() const
{
    return m_logTimeHasBeenSet;
}

string L7OfflineLog::GetDomain() const
{
    return m_domain;
}

void L7OfflineLog::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool L7OfflineLog::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t L7OfflineLog::GetSize() const
{
    return m_size;
}

void L7OfflineLog::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool L7OfflineLog::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string L7OfflineLog::GetUrl() const
{
    return m_url;
}

void L7OfflineLog::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool L7OfflineLog::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string L7OfflineLog::GetLogPacketName() const
{
    return m_logPacketName;
}

void L7OfflineLog::SetLogPacketName(const string& _logPacketName)
{
    m_logPacketName = _logPacketName;
    m_logPacketNameHasBeenSet = true;
}

bool L7OfflineLog::LogPacketNameHasBeenSet() const
{
    return m_logPacketNameHasBeenSet;
}

