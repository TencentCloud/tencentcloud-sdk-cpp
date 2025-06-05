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

#include <tencentcloud/bh/v20230418/model/SearchSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

SearchSessionRequest::SearchSessionRequest() :
    m_privateIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_fromIpHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_appAssetKindSetHasBeenSet(false),
    m_appAssetUrlHasBeenSet(false),
    m_deviceKindHasBeenSet(false)
{
}

string SearchSessionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_privateIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateIp.c_str(), allocator).Move(), allocator);
    }

    if (m_publicIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_publicIp.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_fromIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fromIp.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_kind, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_realNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_realName.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_appAssetKindSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppAssetKindSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_appAssetKindSet.begin(); itr != m_appAssetKindSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_appAssetUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppAssetUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appAssetUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceKindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceKind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceKind.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SearchSessionRequest::GetPrivateIp() const
{
    return m_privateIp;
}

void SearchSessionRequest::SetPrivateIp(const string& _privateIp)
{
    m_privateIp = _privateIp;
    m_privateIpHasBeenSet = true;
}

bool SearchSessionRequest::PrivateIpHasBeenSet() const
{
    return m_privateIpHasBeenSet;
}

string SearchSessionRequest::GetPublicIp() const
{
    return m_publicIp;
}

void SearchSessionRequest::SetPublicIp(const string& _publicIp)
{
    m_publicIp = _publicIp;
    m_publicIpHasBeenSet = true;
}

bool SearchSessionRequest::PublicIpHasBeenSet() const
{
    return m_publicIpHasBeenSet;
}

string SearchSessionRequest::GetUserName() const
{
    return m_userName;
}

void SearchSessionRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool SearchSessionRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string SearchSessionRequest::GetAccount() const
{
    return m_account;
}

void SearchSessionRequest::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool SearchSessionRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

string SearchSessionRequest::GetFromIp() const
{
    return m_fromIp;
}

void SearchSessionRequest::SetFromIp(const string& _fromIp)
{
    m_fromIp = _fromIp;
    m_fromIpHasBeenSet = true;
}

bool SearchSessionRequest::FromIpHasBeenSet() const
{
    return m_fromIpHasBeenSet;
}

string SearchSessionRequest::GetStartTime() const
{
    return m_startTime;
}

void SearchSessionRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool SearchSessionRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string SearchSessionRequest::GetEndTime() const
{
    return m_endTime;
}

void SearchSessionRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool SearchSessionRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t SearchSessionRequest::GetKind() const
{
    return m_kind;
}

void SearchSessionRequest::SetKind(const uint64_t& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool SearchSessionRequest::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

uint64_t SearchSessionRequest::GetOffset() const
{
    return m_offset;
}

void SearchSessionRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool SearchSessionRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t SearchSessionRequest::GetLimit() const
{
    return m_limit;
}

void SearchSessionRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool SearchSessionRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string SearchSessionRequest::GetRealName() const
{
    return m_realName;
}

void SearchSessionRequest::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool SearchSessionRequest::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string SearchSessionRequest::GetDeviceName() const
{
    return m_deviceName;
}

void SearchSessionRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool SearchSessionRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

uint64_t SearchSessionRequest::GetStatus() const
{
    return m_status;
}

void SearchSessionRequest::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SearchSessionRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SearchSessionRequest::GetId() const
{
    return m_id;
}

void SearchSessionRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SearchSessionRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<uint64_t> SearchSessionRequest::GetAppAssetKindSet() const
{
    return m_appAssetKindSet;
}

void SearchSessionRequest::SetAppAssetKindSet(const vector<uint64_t>& _appAssetKindSet)
{
    m_appAssetKindSet = _appAssetKindSet;
    m_appAssetKindSetHasBeenSet = true;
}

bool SearchSessionRequest::AppAssetKindSetHasBeenSet() const
{
    return m_appAssetKindSetHasBeenSet;
}

string SearchSessionRequest::GetAppAssetUrl() const
{
    return m_appAssetUrl;
}

void SearchSessionRequest::SetAppAssetUrl(const string& _appAssetUrl)
{
    m_appAssetUrl = _appAssetUrl;
    m_appAssetUrlHasBeenSet = true;
}

bool SearchSessionRequest::AppAssetUrlHasBeenSet() const
{
    return m_appAssetUrlHasBeenSet;
}

string SearchSessionRequest::GetDeviceKind() const
{
    return m_deviceKind;
}

void SearchSessionRequest::SetDeviceKind(const string& _deviceKind)
{
    m_deviceKind = _deviceKind;
    m_deviceKindHasBeenSet = true;
}

bool SearchSessionRequest::DeviceKindHasBeenSet() const
{
    return m_deviceKindHasBeenSet;
}


