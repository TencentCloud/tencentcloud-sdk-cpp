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

#include <tencentcloud/teo/v20220106/model/ClientIp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

ClientIp::ClientIp() :
    m_switchHasBeenSet(false),
    m_headerNameHasBeenSet(false)
{
}

CoreInternalOutcome ClientIp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientIp.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("HeaderName") && !value["HeaderName"].IsNull())
    {
        if (!value["HeaderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientIp.HeaderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_headerName = string(value["HeaderName"].GetString());
        m_headerNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClientIp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_headerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_headerName.c_str(), allocator).Move(), allocator);
    }

}


string ClientIp::GetSwitch() const
{
    return m_switch;
}

void ClientIp::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ClientIp::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string ClientIp::GetHeaderName() const
{
    return m_headerName;
}

void ClientIp::SetHeaderName(const string& _headerName)
{
    m_headerName = _headerName;
    m_headerNameHasBeenSet = true;
}

bool ClientIp::HeaderNameHasBeenSet() const
{
    return m_headerNameHasBeenSet;
}

