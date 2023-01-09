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

#include <tencentcloud/dbbrain/v20210527/model/SessionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

SessionItem::SessionItem() :
    m_ipHasBeenSet(false),
    m_activeConnHasBeenSet(false),
    m_allConnHasBeenSet(false)
{
}

CoreInternalOutcome SessionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.Ip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ip = string(value["Ip"].GetString());
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("ActiveConn") && !value["ActiveConn"].IsNull())
    {
        if (!value["ActiveConn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.ActiveConn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeConn = string(value["ActiveConn"].GetString());
        m_activeConnHasBeenSet = true;
    }

    if (value.HasMember("AllConn") && !value["AllConn"].IsNull())
    {
        if (!value["AllConn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SessionItem.AllConn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_allConn = value["AllConn"].GetInt64();
        m_allConnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SessionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_activeConnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveConn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeConn.c_str(), allocator).Move(), allocator);
    }

    if (m_allConnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllConn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allConn, allocator);
    }

}


string SessionItem::GetIp() const
{
    return m_ip;
}

void SessionItem::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool SessionItem::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string SessionItem::GetActiveConn() const
{
    return m_activeConn;
}

void SessionItem::SetActiveConn(const string& _activeConn)
{
    m_activeConn = _activeConn;
    m_activeConnHasBeenSet = true;
}

bool SessionItem::ActiveConnHasBeenSet() const
{
    return m_activeConnHasBeenSet;
}

int64_t SessionItem::GetAllConn() const
{
    return m_allConn;
}

void SessionItem::SetAllConn(const int64_t& _allConn)
{
    m_allConn = _allConn;
    m_allConnHasBeenSet = true;
}

bool SessionItem::AllConnHasBeenSet() const
{
    return m_allConnHasBeenSet;
}

