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

#include <tencentcloud/tse/v20201207/model/InstancePort.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

InstancePort::InstancePort() :
    m_httpPortHasBeenSet(false),
    m_httpsPortHasBeenSet(false)
{
}

CoreInternalOutcome InstancePort::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HttpPort") && !value["HttpPort"].IsNull())
    {
        if (!value["HttpPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePort.HttpPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpPort = string(value["HttpPort"].GetString());
        m_httpPortHasBeenSet = true;
    }

    if (value.HasMember("HttpsPort") && !value["HttpsPort"].IsNull())
    {
        if (!value["HttpsPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstancePort.HttpsPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpsPort = string(value["HttpsPort"].GetString());
        m_httpsPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstancePort::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_httpPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpPort.c_str(), allocator).Move(), allocator);
    }

    if (m_httpsPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpsPort.c_str(), allocator).Move(), allocator);
    }

}


string InstancePort::GetHttpPort() const
{
    return m_httpPort;
}

void InstancePort::SetHttpPort(const string& _httpPort)
{
    m_httpPort = _httpPort;
    m_httpPortHasBeenSet = true;
}

bool InstancePort::HttpPortHasBeenSet() const
{
    return m_httpPortHasBeenSet;
}

string InstancePort::GetHttpsPort() const
{
    return m_httpsPort;
}

void InstancePort::SetHttpsPort(const string& _httpsPort)
{
    m_httpsPort = _httpsPort;
    m_httpsPortHasBeenSet = true;
}

bool InstancePort::HttpsPortHasBeenSet() const
{
    return m_httpsPortHasBeenSet;
}

