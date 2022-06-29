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

#include <tencentcloud/eiam/v20210420/model/DescribeUserInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eiam::V20210420::Model;
using namespace std;

DescribeUserInfoResponse::DescribeUserInfoResponse() :
    m_userNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_userGroupIdsHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_phoneHasBeenSet(false),
    m_orgNodeIdHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_activationTimeHasBeenSet(false),
    m_pwdNeedResetHasBeenSet(false),
    m_secondaryOrgNodeIdListHasBeenSet(false),
    m_adminFlagHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("UserName") && !rsp["UserName"].IsNull())
    {
        if (!rsp["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(rsp["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("DisplayName") && !rsp["DisplayName"].IsNull())
    {
        if (!rsp["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(rsp["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("UserGroupIds") && !rsp["UserGroupIds"].IsNull())
    {
        if (!rsp["UserGroupIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserGroupIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UserGroupIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userGroupIds.push_back((*itr).GetString());
        }
        m_userGroupIdsHasBeenSet = true;
    }

    if (rsp.HasMember("UserId") && !rsp["UserId"].IsNull())
    {
        if (!rsp["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(rsp["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (rsp.HasMember("Email") && !rsp["Email"].IsNull())
    {
        if (!rsp["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(rsp["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (rsp.HasMember("Phone") && !rsp["Phone"].IsNull())
    {
        if (!rsp["Phone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Phone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phone = string(rsp["Phone"].GetString());
        m_phoneHasBeenSet = true;
    }

    if (rsp.HasMember("OrgNodeId") && !rsp["OrgNodeId"].IsNull())
    {
        if (!rsp["OrgNodeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrgNodeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orgNodeId = string(rsp["OrgNodeId"].GetString());
        m_orgNodeIdHasBeenSet = true;
    }

    if (rsp.HasMember("DataSource") && !rsp["DataSource"].IsNull())
    {
        if (!rsp["DataSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = string(rsp["DataSource"].GetString());
        m_dataSourceHasBeenSet = true;
    }

    if (rsp.HasMember("ExpirationTime") && !rsp["ExpirationTime"].IsNull())
    {
        if (!rsp["ExpirationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpirationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expirationTime = string(rsp["ExpirationTime"].GetString());
        m_expirationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ActivationTime") && !rsp["ActivationTime"].IsNull())
    {
        if (!rsp["ActivationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActivationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activationTime = string(rsp["ActivationTime"].GetString());
        m_activationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PwdNeedReset") && !rsp["PwdNeedReset"].IsNull())
    {
        if (!rsp["PwdNeedReset"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `PwdNeedReset` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_pwdNeedReset = rsp["PwdNeedReset"].GetBool();
        m_pwdNeedResetHasBeenSet = true;
    }

    if (rsp.HasMember("SecondaryOrgNodeIdList") && !rsp["SecondaryOrgNodeIdList"].IsNull())
    {
        if (!rsp["SecondaryOrgNodeIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecondaryOrgNodeIdList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SecondaryOrgNodeIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_secondaryOrgNodeIdList.push_back((*itr).GetString());
        }
        m_secondaryOrgNodeIdListHasBeenSet = true;
    }

    if (rsp.HasMember("AdminFlag") && !rsp["AdminFlag"].IsNull())
    {
        if (!rsp["AdminFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdminFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_adminFlag = rsp["AdminFlag"].GetInt64();
        m_adminFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_userGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroupIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userGroupIds.begin(); itr != m_userGroupIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phone.c_str(), allocator).Move(), allocator);
    }

    if (m_orgNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgNodeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orgNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSource.c_str(), allocator).Move(), allocator);
    }

    if (m_expirationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpirationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expirationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_activationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pwdNeedResetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PwdNeedReset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pwdNeedReset, allocator);
    }

    if (m_secondaryOrgNodeIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondaryOrgNodeIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_secondaryOrgNodeIdList.begin(); itr != m_secondaryOrgNodeIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_adminFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adminFlag, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeUserInfoResponse::GetUserName() const
{
    return m_userName;
}

bool DescribeUserInfoResponse::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string DescribeUserInfoResponse::GetStatus() const
{
    return m_status;
}

bool DescribeUserInfoResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeUserInfoResponse::GetDisplayName() const
{
    return m_displayName;
}

bool DescribeUserInfoResponse::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string DescribeUserInfoResponse::GetDescription() const
{
    return m_description;
}

bool DescribeUserInfoResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> DescribeUserInfoResponse::GetUserGroupIds() const
{
    return m_userGroupIds;
}

bool DescribeUserInfoResponse::UserGroupIdsHasBeenSet() const
{
    return m_userGroupIdsHasBeenSet;
}

string DescribeUserInfoResponse::GetUserId() const
{
    return m_userId;
}

bool DescribeUserInfoResponse::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string DescribeUserInfoResponse::GetEmail() const
{
    return m_email;
}

bool DescribeUserInfoResponse::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string DescribeUserInfoResponse::GetPhone() const
{
    return m_phone;
}

bool DescribeUserInfoResponse::PhoneHasBeenSet() const
{
    return m_phoneHasBeenSet;
}

string DescribeUserInfoResponse::GetOrgNodeId() const
{
    return m_orgNodeId;
}

bool DescribeUserInfoResponse::OrgNodeIdHasBeenSet() const
{
    return m_orgNodeIdHasBeenSet;
}

string DescribeUserInfoResponse::GetDataSource() const
{
    return m_dataSource;
}

bool DescribeUserInfoResponse::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

string DescribeUserInfoResponse::GetExpirationTime() const
{
    return m_expirationTime;
}

bool DescribeUserInfoResponse::ExpirationTimeHasBeenSet() const
{
    return m_expirationTimeHasBeenSet;
}

string DescribeUserInfoResponse::GetActivationTime() const
{
    return m_activationTime;
}

bool DescribeUserInfoResponse::ActivationTimeHasBeenSet() const
{
    return m_activationTimeHasBeenSet;
}

bool DescribeUserInfoResponse::GetPwdNeedReset() const
{
    return m_pwdNeedReset;
}

bool DescribeUserInfoResponse::PwdNeedResetHasBeenSet() const
{
    return m_pwdNeedResetHasBeenSet;
}

vector<string> DescribeUserInfoResponse::GetSecondaryOrgNodeIdList() const
{
    return m_secondaryOrgNodeIdList;
}

bool DescribeUserInfoResponse::SecondaryOrgNodeIdListHasBeenSet() const
{
    return m_secondaryOrgNodeIdListHasBeenSet;
}

int64_t DescribeUserInfoResponse::GetAdminFlag() const
{
    return m_adminFlag;
}

bool DescribeUserInfoResponse::AdminFlagHasBeenSet() const
{
    return m_adminFlagHasBeenSet;
}


