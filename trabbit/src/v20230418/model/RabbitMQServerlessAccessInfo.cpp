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

#include <tencentcloud/trabbit/v20230418/model/RabbitMQServerlessAccessInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

RabbitMQServerlessAccessInfo::RabbitMQServerlessAccessInfo() :
    m_publicAccessEndpointHasBeenSet(false),
    m_publicDataStreamStatusHasBeenSet(false)
{
}

CoreInternalOutcome RabbitMQServerlessAccessInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicAccessEndpoint") && !value["PublicAccessEndpoint"].IsNull())
    {
        if (!value["PublicAccessEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessAccessInfo.PublicAccessEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicAccessEndpoint = string(value["PublicAccessEndpoint"].GetString());
        m_publicAccessEndpointHasBeenSet = true;
    }

    if (value.HasMember("PublicDataStreamStatus") && !value["PublicDataStreamStatus"].IsNull())
    {
        if (!value["PublicDataStreamStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RabbitMQServerlessAccessInfo.PublicDataStreamStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDataStreamStatus = string(value["PublicDataStreamStatus"].GetString());
        m_publicDataStreamStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RabbitMQServerlessAccessInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicAccessEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAccessEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicAccessEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_publicDataStreamStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicDataStreamStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicDataStreamStatus.c_str(), allocator).Move(), allocator);
    }

}


string RabbitMQServerlessAccessInfo::GetPublicAccessEndpoint() const
{
    return m_publicAccessEndpoint;
}

void RabbitMQServerlessAccessInfo::SetPublicAccessEndpoint(const string& _publicAccessEndpoint)
{
    m_publicAccessEndpoint = _publicAccessEndpoint;
    m_publicAccessEndpointHasBeenSet = true;
}

bool RabbitMQServerlessAccessInfo::PublicAccessEndpointHasBeenSet() const
{
    return m_publicAccessEndpointHasBeenSet;
}

string RabbitMQServerlessAccessInfo::GetPublicDataStreamStatus() const
{
    return m_publicDataStreamStatus;
}

void RabbitMQServerlessAccessInfo::SetPublicDataStreamStatus(const string& _publicDataStreamStatus)
{
    m_publicDataStreamStatus = _publicDataStreamStatus;
    m_publicDataStreamStatusHasBeenSet = true;
}

bool RabbitMQServerlessAccessInfo::PublicDataStreamStatusHasBeenSet() const
{
    return m_publicDataStreamStatusHasBeenSet;
}

