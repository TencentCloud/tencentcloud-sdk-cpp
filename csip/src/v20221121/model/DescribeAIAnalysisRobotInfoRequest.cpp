/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/DescribeAIAnalysisRobotInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAIAnalysisRobotInfoRequest::DescribeAIAnalysisRobotInfoRequest() :
    m_accessTypeHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_secretHasBeenSet(false),
    m_botNameHasBeenSet(false)
{
}

string DescribeAIAnalysisRobotInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessType, allocator);
    }

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Secret";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secret.c_str(), allocator).Move(), allocator);
    }

    if (m_botNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeAIAnalysisRobotInfoRequest::GetAccessType() const
{
    return m_accessType;
}

void DescribeAIAnalysisRobotInfoRequest::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool DescribeAIAnalysisRobotInfoRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string DescribeAIAnalysisRobotInfoRequest::GetAccountId() const
{
    return m_accountId;
}

void DescribeAIAnalysisRobotInfoRequest::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool DescribeAIAnalysisRobotInfoRequest::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string DescribeAIAnalysisRobotInfoRequest::GetSecret() const
{
    return m_secret;
}

void DescribeAIAnalysisRobotInfoRequest::SetSecret(const string& _secret)
{
    m_secret = _secret;
    m_secretHasBeenSet = true;
}

bool DescribeAIAnalysisRobotInfoRequest::SecretHasBeenSet() const
{
    return m_secretHasBeenSet;
}

string DescribeAIAnalysisRobotInfoRequest::GetBotName() const
{
    return m_botName;
}

void DescribeAIAnalysisRobotInfoRequest::SetBotName(const string& _botName)
{
    m_botName = _botName;
    m_botNameHasBeenSet = true;
}

bool DescribeAIAnalysisRobotInfoRequest::BotNameHasBeenSet() const
{
    return m_botNameHasBeenSet;
}


