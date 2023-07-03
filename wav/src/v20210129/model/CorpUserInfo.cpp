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

#include <tencentcloud/wav/v20210129/model/CorpUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

CorpUserInfo::CorpUserInfo() :
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userOpenIdHasBeenSet(false),
    m_dealerIdHasBeenSet(false),
    m_shopIdHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_orgIdsHasBeenSet(false),
    m_mainDepartmentHasBeenSet(false),
    m_isLeaderInDeptHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_jobNumberHasBeenSet(false)
{
}

CoreInternalOutcome CorpUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CorpUserInfo.UserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userId = value["UserId"].GetUint64();
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorpUserInfo.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("UserOpenId") && !value["UserOpenId"].IsNull())
    {
        if (!value["UserOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorpUserInfo.UserOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userOpenId = string(value["UserOpenId"].GetString());
        m_userOpenIdHasBeenSet = true;
    }

    if (value.HasMember("DealerId") && !value["DealerId"].IsNull())
    {
        if (!value["DealerId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CorpUserInfo.DealerId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dealerId = value["DealerId"].GetUint64();
        m_dealerIdHasBeenSet = true;
    }

    if (value.HasMember("ShopId") && !value["ShopId"].IsNull())
    {
        if (!value["ShopId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CorpUserInfo.ShopId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_shopId = value["ShopId"].GetUint64();
        m_shopIdHasBeenSet = true;
    }

    if (value.HasMember("Phone") && !value["Phone"].IsNull())
    {
        if (!value["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorpUserInfo.Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(value["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (value.HasMember("OrgIds") && !value["OrgIds"].IsNull())
    {
        if (!value["OrgIds"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorpUserInfo.OrgIds` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgIds = string(value["OrgIds"].GetString());
        m_orgIdsHasBeenSet = true;
    }

    if (value.HasMember("MainDepartment") && !value["MainDepartment"].IsNull())
    {
        if (!value["MainDepartment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorpUserInfo.MainDepartment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainDepartment = string(value["MainDepartment"].GetString());
        m_mainDepartmentHasBeenSet = true;
    }

    if (value.HasMember("IsLeaderInDept") && !value["IsLeaderInDept"].IsNull())
    {
        if (!value["IsLeaderInDept"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorpUserInfo.IsLeaderInDept` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isLeaderInDept = string(value["IsLeaderInDept"].GetString());
        m_isLeaderInDeptHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CorpUserInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("JobNumber") && !value["JobNumber"].IsNull())
    {
        if (!value["JobNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CorpUserInfo.JobNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jobNumber = string(value["JobNumber"].GetString());
        m_jobNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CorpUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userId, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_userOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_dealerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dealerId, allocator);
    }

    if (m_shopIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShopId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shopId, allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_orgIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgIds.c_str(), allocator).Move(), allocator);
    }

    if (m_mainDepartmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainDepartment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainDepartment.c_str(), allocator).Move(), allocator);
    }

    if (m_isLeaderInDeptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLeaderInDept";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isLeaderInDept.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_jobNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jobNumber.c_str(), allocator).Move(), allocator);
    }

}


uint64_t CorpUserInfo::GetUserId() const
{
    return m_userId;
}

void CorpUserInfo::SetUserId(const uint64_t& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool CorpUserInfo::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string CorpUserInfo::GetUserName() const
{
    return m_userName;
}

void CorpUserInfo::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool CorpUserInfo::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string CorpUserInfo::GetUserOpenId() const
{
    return m_userOpenId;
}

void CorpUserInfo::SetUserOpenId(const string& _userOpenId)
{
    m_userOpenId = _userOpenId;
    m_userOpenIdHasBeenSet = true;
}

bool CorpUserInfo::UserOpenIdHasBeenSet() const
{
    return m_userOpenIdHasBeenSet;
}

uint64_t CorpUserInfo::GetDealerId() const
{
    return m_dealerId;
}

void CorpUserInfo::SetDealerId(const uint64_t& _dealerId)
{
    m_dealerId = _dealerId;
    m_dealerIdHasBeenSet = true;
}

bool CorpUserInfo::DealerIdHasBeenSet() const
{
    return m_dealerIdHasBeenSet;
}

uint64_t CorpUserInfo::GetShopId() const
{
    return m_shopId;
}

void CorpUserInfo::SetShopId(const uint64_t& _shopId)
{
    m_shopId = _shopId;
    m_shopIdHasBeenSet = true;
}

bool CorpUserInfo::ShopIdHasBeenSet() const
{
    return m_shopIdHasBeenSet;
}

string CorpUserInfo::GetPhone() const
{
    return m_phone;
}

void CorpUserInfo::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool CorpUserInfo::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string CorpUserInfo::GetOrgIds() const
{
    return m_orgIds;
}

void CorpUserInfo::SetOrgIds(const string& _orgIds)
{
    m_orgIds = _orgIds;
    m_orgIdsHasBeenSet = true;
}

bool CorpUserInfo::OrgIdsHasBeenSet() const
{
    return m_orgIdsHasBeenSet;
}

string CorpUserInfo::GetMainDepartment() const
{
    return m_mainDepartment;
}

void CorpUserInfo::SetMainDepartment(const string& _mainDepartment)
{
    m_mainDepartment = _mainDepartment;
    m_mainDepartmentHasBeenSet = true;
}

bool CorpUserInfo::MainDepartmentHasBeenSet() const
{
    return m_mainDepartmentHasBeenSet;
}

string CorpUserInfo::GetIsLeaderInDept() const
{
    return m_isLeaderInDept;
}

void CorpUserInfo::SetIsLeaderInDept(const string& _isLeaderInDept)
{
    m_isLeaderInDept = _isLeaderInDept;
    m_isLeaderInDeptHasBeenSet = true;
}

bool CorpUserInfo::IsLeaderInDeptHasBeenSet() const
{
    return m_isLeaderInDeptHasBeenSet;
}

int64_t CorpUserInfo::GetStatus() const
{
    return m_status;
}

void CorpUserInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CorpUserInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CorpUserInfo::GetJobNumber() const
{
    return m_jobNumber;
}

void CorpUserInfo::SetJobNumber(const string& _jobNumber)
{
    m_jobNumber = _jobNumber;
    m_jobNumberHasBeenSet = true;
}

bool CorpUserInfo::JobNumberHasBeenSet() const
{
    return m_jobNumberHasBeenSet;
}

