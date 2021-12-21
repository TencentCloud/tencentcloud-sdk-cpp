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

#include <tencentcloud/essbasic/v20210526/model/AuthFailMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

AuthFailMessage::AuthFailMessage() :
    m_proxyOrganizationOpenIdHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome AuthFailMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProxyOrganizationOpenId") && !value["ProxyOrganizationOpenId"].IsNull())
    {
        if (!value["ProxyOrganizationOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthFailMessage.ProxyOrganizationOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyOrganizationOpenId = string(value["ProxyOrganizationOpenId"].GetString());
        m_proxyOrganizationOpenIdHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthFailMessage.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthFailMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_proxyOrganizationOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyOrganizationOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyOrganizationOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string AuthFailMessage::GetProxyOrganizationOpenId() const
{
    return m_proxyOrganizationOpenId;
}

void AuthFailMessage::SetProxyOrganizationOpenId(const string& _proxyOrganizationOpenId)
{
    m_proxyOrganizationOpenId = _proxyOrganizationOpenId;
    m_proxyOrganizationOpenIdHasBeenSet = true;
}

bool AuthFailMessage::ProxyOrganizationOpenIdHasBeenSet() const
{
    return m_proxyOrganizationOpenIdHasBeenSet;
}

string AuthFailMessage::GetMessage() const
{
    return m_message;
}

void AuthFailMessage::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool AuthFailMessage::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

