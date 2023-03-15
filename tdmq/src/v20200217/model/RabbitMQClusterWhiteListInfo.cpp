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

#include <tencentcloud/tdmq/v20200217/model/RabbitMQClusterWhiteListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RabbitMQClusterWhiteListInfo::RabbitMQClusterWhiteListInfo() :
    m_whiteListHasBeenSet(false),
    m_publicControlConsoleWhiteListHasBeenSet(false),
    m_publicDataStreamWhiteListHasBeenSet(false),
    m_publicControlConsoleWhiteListStatusHasBeenSet(false),
    m_publicDataStreamWhiteListStatusHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQClusterWhiteListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WhiteList") && !value["WhiteList"].IsNull())
    {
        if (!value["WhiteList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterWhiteListInfo.WhiteList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_whiteList = string(value["WhiteList"].GetString());
        m_whiteListHasBeenSet = true;
    }

    if (value.HasMember("PublicControlConsoleWhiteList") && !value["PublicControlConsoleWhiteList"].IsNull())
    {
        if (!value["PublicControlConsoleWhiteList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterWhiteListInfo.PublicControlConsoleWhiteList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicControlConsoleWhiteList = string(value["PublicControlConsoleWhiteList"].GetString());
        m_publicControlConsoleWhiteListHasBeenSet = true;
    }

    if (value.HasMember("PublicDataStreamWhiteList") && !value["PublicDataStreamWhiteList"].IsNull())
    {
        if (!value["PublicDataStreamWhiteList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterWhiteListInfo.PublicDataStreamWhiteList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDataStreamWhiteList = string(value["PublicDataStreamWhiteList"].GetString());
        m_publicDataStreamWhiteListHasBeenSet = true;
    }

    if (value.HasMember("PublicControlConsoleWhiteListStatus") && !value["PublicControlConsoleWhiteListStatus"].IsNull())
    {
        if (!value["PublicControlConsoleWhiteListStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterWhiteListInfo.PublicControlConsoleWhiteListStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicControlConsoleWhiteListStatus = string(value["PublicControlConsoleWhiteListStatus"].GetString());
        m_publicControlConsoleWhiteListStatusHasBeenSet = true;
    }

    if (value.HasMember("PublicDataStreamWhiteListStatus") && !value["PublicDataStreamWhiteListStatus"].IsNull())
    {
        if (!value["PublicDataStreamWhiteListStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQClusterWhiteListInfo.PublicDataStreamWhiteListStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDataStreamWhiteListStatus = string(value["PublicDataStreamWhiteListStatus"].GetString());
        m_publicDataStreamWhiteListStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQClusterWhiteListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_whiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_whiteList.c_str(), allocator).Move(), allocator);
    }

    if (m_publicControlConsoleWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicControlConsoleWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicControlConsoleWhiteList.c_str(), allocator).Move(), allocator);
    }

    if (m_publicDataStreamWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicDataStreamWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicDataStreamWhiteList.c_str(), allocator).Move(), allocator);
    }

    if (m_publicControlConsoleWhiteListStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicControlConsoleWhiteListStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicControlConsoleWhiteListStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_publicDataStreamWhiteListStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicDataStreamWhiteListStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicDataStreamWhiteListStatus.c_str(), allocator).Move(), allocator);
    }

}


string RabbitMQClusterWhiteListInfo::GetWhiteList() const
{
    return m_whiteList;
}

void RabbitMQClusterWhiteListInfo::SetWhiteList(const string& _whiteList)
{
    m_whiteList = _whiteList;
    m_whiteListHasBeenSet = true;
}

bool RabbitMQClusterWhiteListInfo::WhiteListHasBeenSet() const
{
    return m_whiteListHasBeenSet;
}

string RabbitMQClusterWhiteListInfo::GetPublicControlConsoleWhiteList() const
{
    return m_publicControlConsoleWhiteList;
}

void RabbitMQClusterWhiteListInfo::SetPublicControlConsoleWhiteList(const string& _publicControlConsoleWhiteList)
{
    m_publicControlConsoleWhiteList = _publicControlConsoleWhiteList;
    m_publicControlConsoleWhiteListHasBeenSet = true;
}

bool RabbitMQClusterWhiteListInfo::PublicControlConsoleWhiteListHasBeenSet() const
{
    return m_publicControlConsoleWhiteListHasBeenSet;
}

string RabbitMQClusterWhiteListInfo::GetPublicDataStreamWhiteList() const
{
    return m_publicDataStreamWhiteList;
}

void RabbitMQClusterWhiteListInfo::SetPublicDataStreamWhiteList(const string& _publicDataStreamWhiteList)
{
    m_publicDataStreamWhiteList = _publicDataStreamWhiteList;
    m_publicDataStreamWhiteListHasBeenSet = true;
}

bool RabbitMQClusterWhiteListInfo::PublicDataStreamWhiteListHasBeenSet() const
{
    return m_publicDataStreamWhiteListHasBeenSet;
}

string RabbitMQClusterWhiteListInfo::GetPublicControlConsoleWhiteListStatus() const
{
    return m_publicControlConsoleWhiteListStatus;
}

void RabbitMQClusterWhiteListInfo::SetPublicControlConsoleWhiteListStatus(const string& _publicControlConsoleWhiteListStatus)
{
    m_publicControlConsoleWhiteListStatus = _publicControlConsoleWhiteListStatus;
    m_publicControlConsoleWhiteListStatusHasBeenSet = true;
}

bool RabbitMQClusterWhiteListInfo::PublicControlConsoleWhiteListStatusHasBeenSet() const
{
    return m_publicControlConsoleWhiteListStatusHasBeenSet;
}

string RabbitMQClusterWhiteListInfo::GetPublicDataStreamWhiteListStatus() const
{
    return m_publicDataStreamWhiteListStatus;
}

void RabbitMQClusterWhiteListInfo::SetPublicDataStreamWhiteListStatus(const string& _publicDataStreamWhiteListStatus)
{
    m_publicDataStreamWhiteListStatus = _publicDataStreamWhiteListStatus;
    m_publicDataStreamWhiteListStatusHasBeenSet = true;
}

bool RabbitMQClusterWhiteListInfo::PublicDataStreamWhiteListStatusHasBeenSet() const
{
    return m_publicDataStreamWhiteListStatusHasBeenSet;
}

