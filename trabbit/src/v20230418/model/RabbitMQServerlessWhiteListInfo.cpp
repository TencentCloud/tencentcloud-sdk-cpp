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

#include <tencentcloud/trabbit/v20230418/model/RabbitMQServerlessWhiteListInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

RabbitMQServerlessWhiteListInfo::RabbitMQServerlessWhiteListInfo() :
    m_publicDataStreamWhiteListHasBeenSet(false),
    m_publicDataStreamWhiteListStatusHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQServerlessWhiteListInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicDataStreamWhiteList") && !value["PublicDataStreamWhiteList"].IsNull())
    {
        if (!value["PublicDataStreamWhiteList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessWhiteListInfo.PublicDataStreamWhiteList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDataStreamWhiteList = string(value["PublicDataStreamWhiteList"].GetString());
        m_publicDataStreamWhiteListHasBeenSet = true;
    }

    if (value.HasMember("PublicDataStreamWhiteListStatus") && !value["PublicDataStreamWhiteListStatus"].IsNull())
    {
        if (!value["PublicDataStreamWhiteListStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessWhiteListInfo.PublicDataStreamWhiteListStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDataStreamWhiteListStatus = string(value["PublicDataStreamWhiteListStatus"].GetString());
        m_publicDataStreamWhiteListStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQServerlessWhiteListInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicDataStreamWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicDataStreamWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicDataStreamWhiteList.c_str(), allocator).Move(), allocator);
    }

    if (m_publicDataStreamWhiteListStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicDataStreamWhiteListStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicDataStreamWhiteListStatus.c_str(), allocator).Move(), allocator);
    }

}


string RabbitMQServerlessWhiteListInfo::GetPublicDataStreamWhiteList() const
{
    return m_publicDataStreamWhiteList;
}

void RabbitMQServerlessWhiteListInfo::SetPublicDataStreamWhiteList(const string& _publicDataStreamWhiteList)
{
    m_publicDataStreamWhiteList = _publicDataStreamWhiteList;
    m_publicDataStreamWhiteListHasBeenSet = true;
}

bool RabbitMQServerlessWhiteListInfo::PublicDataStreamWhiteListHasBeenSet() const
{
    return m_publicDataStreamWhiteListHasBeenSet;
}

string RabbitMQServerlessWhiteListInfo::GetPublicDataStreamWhiteListStatus() const
{
    return m_publicDataStreamWhiteListStatus;
}

void RabbitMQServerlessWhiteListInfo::SetPublicDataStreamWhiteListStatus(const string& _publicDataStreamWhiteListStatus)
{
    m_publicDataStreamWhiteListStatus = _publicDataStreamWhiteListStatus;
    m_publicDataStreamWhiteListStatusHasBeenSet = true;
}

bool RabbitMQServerlessWhiteListInfo::PublicDataStreamWhiteListStatusHasBeenSet() const
{
    return m_publicDataStreamWhiteListStatusHasBeenSet;
}

