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

#include <tencentcloud/cwp/v20180228/model/WebHookReceiverUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

WebHookReceiverUsage::WebHookReceiverUsage() :
    m_receiverIdHasBeenSet(false),
    m_receiverNameHasBeenSet(false),
    m_policyNameHasBeenSet(false)
{
}

CoreInternalOutcome WebHookReceiverUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReceiverId") && !value["ReceiverId"].IsNull())
    {
        if (!value["ReceiverId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookReceiverUsage.ReceiverId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_receiverId = value["ReceiverId"].GetInt64();
        m_receiverIdHasBeenSet = true;
    }

    if (value.HasMember("ReceiverName") && !value["ReceiverName"].IsNull())
    {
        if (!value["ReceiverName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookReceiverUsage.ReceiverName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_receiverName = string(value["ReceiverName"].GetString());
        m_receiverNameHasBeenSet = true;
    }

    if (value.HasMember("PolicyName") && !value["PolicyName"].IsNull())
    {
        if (!value["PolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookReceiverUsage.PolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policyName = string(value["PolicyName"].GetString());
        m_policyNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebHookReceiverUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_receiverIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_receiverId, allocator);
    }

    if (m_receiverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_receiverName.c_str(), allocator).Move(), allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

}


int64_t WebHookReceiverUsage::GetReceiverId() const
{
    return m_receiverId;
}

void WebHookReceiverUsage::SetReceiverId(const int64_t& _receiverId)
{
    m_receiverId = _receiverId;
    m_receiverIdHasBeenSet = true;
}

bool WebHookReceiverUsage::ReceiverIdHasBeenSet() const
{
    return m_receiverIdHasBeenSet;
}

string WebHookReceiverUsage::GetReceiverName() const
{
    return m_receiverName;
}

void WebHookReceiverUsage::SetReceiverName(const string& _receiverName)
{
    m_receiverName = _receiverName;
    m_receiverNameHasBeenSet = true;
}

bool WebHookReceiverUsage::ReceiverNameHasBeenSet() const
{
    return m_receiverNameHasBeenSet;
}

string WebHookReceiverUsage::GetPolicyName() const
{
    return m_policyName;
}

void WebHookReceiverUsage::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool WebHookReceiverUsage::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

