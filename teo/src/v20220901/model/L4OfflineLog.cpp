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

#include <tencentcloud/teo/v20220901/model/L4OfflineLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

L4OfflineLog::L4OfflineLog() :
    m_logTimeHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_logPacketNameHasBeenSet(false),
    m_areaHasBeenSet(false)
{
}

CoreInternalOutcome L4OfflineLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LogTime") && !value["LogTime"].IsNull())
    {
        if (!value["LogTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4OfflineLog.LogTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_logTime = value["LogTime"].GetInt64();
        m_logTimeHasBeenSet = true;
    }

    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4OfflineLog.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `L4OfflineLog.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4OfflineLog.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("LogPacketName") && !value["LogPacketName"].IsNull())
    {
        if (!value["LogPacketName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4OfflineLog.LogPacketName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logPacketName = string(value["LogPacketName"].GetString());
        m_logPacketNameHasBeenSet = true;
    }

    if (value.HasMember("Area") && !value["Area"].IsNull())
    {
        if (!value["Area"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `L4OfflineLog.Area` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_area = string(value["Area"].GetString());
        m_areaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void L4OfflineLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_logTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logTime, allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
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

    if (m_areaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Area";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_area.c_str(), allocator).Move(), allocator);
    }

}


int64_t L4OfflineLog::GetLogTime() const
{
    return m_logTime;
}

void L4OfflineLog::SetLogTime(const int64_t& _logTime)
{
    m_logTime = _logTime;
    m_logTimeHasBeenSet = true;
}

bool L4OfflineLog::LogTimeHasBeenSet() const
{
    return m_logTimeHasBeenSet;
}

string L4OfflineLog::GetProxyId() const
{
    return m_proxyId;
}

void L4OfflineLog::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool L4OfflineLog::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

int64_t L4OfflineLog::GetSize() const
{
    return m_size;
}

void L4OfflineLog::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool L4OfflineLog::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string L4OfflineLog::GetUrl() const
{
    return m_url;
}

void L4OfflineLog::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool L4OfflineLog::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string L4OfflineLog::GetLogPacketName() const
{
    return m_logPacketName;
}

void L4OfflineLog::SetLogPacketName(const string& _logPacketName)
{
    m_logPacketName = _logPacketName;
    m_logPacketNameHasBeenSet = true;
}

bool L4OfflineLog::LogPacketNameHasBeenSet() const
{
    return m_logPacketNameHasBeenSet;
}

string L4OfflineLog::GetArea() const
{
    return m_area;
}

void L4OfflineLog::SetArea(const string& _area)
{
    m_area = _area;
    m_areaHasBeenSet = true;
}

bool L4OfflineLog::AreaHasBeenSet() const
{
    return m_areaHasBeenSet;
}

