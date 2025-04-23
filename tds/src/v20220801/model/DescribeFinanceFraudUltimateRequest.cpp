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

#include <tencentcloud/tds/v20220801/model/DescribeFinanceFraudUltimateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tds::V20220801::Model;
using namespace std;

DescribeFinanceFraudUltimateRequest::DescribeFinanceFraudUltimateRequest() :
    m_deviceTokenHasBeenSet(false),
    m_sceneCodeHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_elapsedTimeHasBeenSet(false),
    m_weChatOpenIdHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_bizClientIpHasBeenSet(false),
    m_qQOpenIdHasBeenSet(false),
    m_dataAuthorizationHasBeenSet(false)
{
}

string DescribeFinanceFraudUltimateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_deviceTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceToken.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneCode.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventTime, allocator);
    }

    if (m_elapsedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElapsedTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_elapsedTime, allocator);
    }

    if (m_weChatOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeChatOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_weChatOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_bizClientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizClientIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizClientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_qQOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QQOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_qQOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataAuthorizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataAuthorization";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataAuthorization.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeFinanceFraudUltimateRequest::GetDeviceToken() const
{
    return m_deviceToken;
}

void DescribeFinanceFraudUltimateRequest::SetDeviceToken(const string& _deviceToken)
{
    m_deviceToken = _deviceToken;
    m_deviceTokenHasBeenSet = true;
}

bool DescribeFinanceFraudUltimateRequest::DeviceTokenHasBeenSet() const
{
    return m_deviceTokenHasBeenSet;
}

string DescribeFinanceFraudUltimateRequest::GetSceneCode() const
{
    return m_sceneCode;
}

void DescribeFinanceFraudUltimateRequest::SetSceneCode(const string& _sceneCode)
{
    m_sceneCode = _sceneCode;
    m_sceneCodeHasBeenSet = true;
}

bool DescribeFinanceFraudUltimateRequest::SceneCodeHasBeenSet() const
{
    return m_sceneCodeHasBeenSet;
}

string DescribeFinanceFraudUltimateRequest::GetUserId() const
{
    return m_userId;
}

void DescribeFinanceFraudUltimateRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DescribeFinanceFraudUltimateRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t DescribeFinanceFraudUltimateRequest::GetEventTime() const
{
    return m_eventTime;
}

void DescribeFinanceFraudUltimateRequest::SetEventTime(const uint64_t& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool DescribeFinanceFraudUltimateRequest::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

uint64_t DescribeFinanceFraudUltimateRequest::GetElapsedTime() const
{
    return m_elapsedTime;
}

void DescribeFinanceFraudUltimateRequest::SetElapsedTime(const uint64_t& _elapsedTime)
{
    m_elapsedTime = _elapsedTime;
    m_elapsedTimeHasBeenSet = true;
}

bool DescribeFinanceFraudUltimateRequest::ElapsedTimeHasBeenSet() const
{
    return m_elapsedTimeHasBeenSet;
}

string DescribeFinanceFraudUltimateRequest::GetWeChatOpenId() const
{
    return m_weChatOpenId;
}

void DescribeFinanceFraudUltimateRequest::SetWeChatOpenId(const string& _weChatOpenId)
{
    m_weChatOpenId = _weChatOpenId;
    m_weChatOpenIdHasBeenSet = true;
}

bool DescribeFinanceFraudUltimateRequest::WeChatOpenIdHasBeenSet() const
{
    return m_weChatOpenIdHasBeenSet;
}

string DescribeFinanceFraudUltimateRequest::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void DescribeFinanceFraudUltimateRequest::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool DescribeFinanceFraudUltimateRequest::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string DescribeFinanceFraudUltimateRequest::GetBizClientIp() const
{
    return m_bizClientIp;
}

void DescribeFinanceFraudUltimateRequest::SetBizClientIp(const string& _bizClientIp)
{
    m_bizClientIp = _bizClientIp;
    m_bizClientIpHasBeenSet = true;
}

bool DescribeFinanceFraudUltimateRequest::BizClientIpHasBeenSet() const
{
    return m_bizClientIpHasBeenSet;
}

string DescribeFinanceFraudUltimateRequest::GetQQOpenId() const
{
    return m_qQOpenId;
}

void DescribeFinanceFraudUltimateRequest::SetQQOpenId(const string& _qQOpenId)
{
    m_qQOpenId = _qQOpenId;
    m_qQOpenIdHasBeenSet = true;
}

bool DescribeFinanceFraudUltimateRequest::QQOpenIdHasBeenSet() const
{
    return m_qQOpenIdHasBeenSet;
}

DataAuthorizationInfo DescribeFinanceFraudUltimateRequest::GetDataAuthorization() const
{
    return m_dataAuthorization;
}

void DescribeFinanceFraudUltimateRequest::SetDataAuthorization(const DataAuthorizationInfo& _dataAuthorization)
{
    m_dataAuthorization = _dataAuthorization;
    m_dataAuthorizationHasBeenSet = true;
}

bool DescribeFinanceFraudUltimateRequest::DataAuthorizationHasBeenSet() const
{
    return m_dataAuthorizationHasBeenSet;
}


