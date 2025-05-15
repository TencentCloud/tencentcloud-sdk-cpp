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

#include <tencentcloud/bh/v20230418/model/DescribeUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

DescribeUsersRequest::DescribeUsersRequest() :
    m_idSetHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_authorizedDeviceIdSetHasBeenSet(false),
    m_authorizedAppAssetIdSetHasBeenSet(false),
    m_authTypeSetHasBeenSet(false),
    m_departmentIdHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_isCamUserHasBeenSet(false),
    m_userFromSetHasBeenSet(false)
{
}

string DescribeUsersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idSet.begin(); itr != m_idSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizedDeviceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedDeviceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorizedDeviceIdSet.begin(); itr != m_authorizedDeviceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_authorizedAppAssetIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizedAppAssetIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorizedAppAssetIdSet.begin(); itr != m_authorizedAppAssetIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_authTypeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthTypeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authTypeSet.begin(); itr != m_authTypeSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_departmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DepartmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_departmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isCamUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCamUser";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isCamUser, allocator);
    }

    if (m_userFromSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserFromSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userFromSet.begin(); itr != m_userFromSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> DescribeUsersRequest::GetIdSet() const
{
    return m_idSet;
}

void DescribeUsersRequest::SetIdSet(const vector<uint64_t>& _idSet)
{
    m_idSet = _idSet;
    m_idSetHasBeenSet = true;
}

bool DescribeUsersRequest::IdSetHasBeenSet() const
{
    return m_idSetHasBeenSet;
}

string DescribeUsersRequest::GetName() const
{
    return m_name;
}

void DescribeUsersRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeUsersRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeUsersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeUsersRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeUsersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeUsersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeUsersRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeUsersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeUsersRequest::GetUserName() const
{
    return m_userName;
}

void DescribeUsersRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool DescribeUsersRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeUsersRequest::GetPhone() const
{
    return m_phone;
}

void DescribeUsersRequest::SetPhone(const string& _phone)
{
    m_phone = _phone;
    m_phoneHasBeenSet = true;
}

bool DescribeUsersRequest::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string DescribeUsersRequest::GetEmail() const
{
    return m_email;
}

void DescribeUsersRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool DescribeUsersRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

vector<uint64_t> DescribeUsersRequest::GetAuthorizedDeviceIdSet() const
{
    return m_authorizedDeviceIdSet;
}

void DescribeUsersRequest::SetAuthorizedDeviceIdSet(const vector<uint64_t>& _authorizedDeviceIdSet)
{
    m_authorizedDeviceIdSet = _authorizedDeviceIdSet;
    m_authorizedDeviceIdSetHasBeenSet = true;
}

bool DescribeUsersRequest::AuthorizedDeviceIdSetHasBeenSet() const
{
    return m_authorizedDeviceIdSetHasBeenSet;
}

vector<uint64_t> DescribeUsersRequest::GetAuthorizedAppAssetIdSet() const
{
    return m_authorizedAppAssetIdSet;
}

void DescribeUsersRequest::SetAuthorizedAppAssetIdSet(const vector<uint64_t>& _authorizedAppAssetIdSet)
{
    m_authorizedAppAssetIdSet = _authorizedAppAssetIdSet;
    m_authorizedAppAssetIdSetHasBeenSet = true;
}

bool DescribeUsersRequest::AuthorizedAppAssetIdSetHasBeenSet() const
{
    return m_authorizedAppAssetIdSetHasBeenSet;
}

vector<uint64_t> DescribeUsersRequest::GetAuthTypeSet() const
{
    return m_authTypeSet;
}

void DescribeUsersRequest::SetAuthTypeSet(const vector<uint64_t>& _authTypeSet)
{
    m_authTypeSet = _authTypeSet;
    m_authTypeSetHasBeenSet = true;
}

bool DescribeUsersRequest::AuthTypeSetHasBeenSet() const
{
    return m_authTypeSetHasBeenSet;
}

string DescribeUsersRequest::GetDepartmentId() const
{
    return m_departmentId;
}

void DescribeUsersRequest::SetDepartmentId(const string& _departmentId)
{
    m_departmentId = _departmentId;
    m_departmentIdHasBeenSet = true;
}

bool DescribeUsersRequest::DepartmentIdHasBeenSet() const
{
    return m_departmentIdHasBeenSet;
}

vector<Filter> DescribeUsersRequest::GetFilters() const
{
    return m_filters;
}

void DescribeUsersRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeUsersRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

uint64_t DescribeUsersRequest::GetIsCamUser() const
{
    return m_isCamUser;
}

void DescribeUsersRequest::SetIsCamUser(const uint64_t& _isCamUser)
{
    m_isCamUser = _isCamUser;
    m_isCamUserHasBeenSet = true;
}

bool DescribeUsersRequest::IsCamUserHasBeenSet() const
{
    return m_isCamUserHasBeenSet;
}

vector<uint64_t> DescribeUsersRequest::GetUserFromSet() const
{
    return m_userFromSet;
}

void DescribeUsersRequest::SetUserFromSet(const vector<uint64_t>& _userFromSet)
{
    m_userFromSet = _userFromSet;
    m_userFromSetHasBeenSet = true;
}

bool DescribeUsersRequest::UserFromSetHasBeenSet() const
{
    return m_userFromSetHasBeenSet;
}


