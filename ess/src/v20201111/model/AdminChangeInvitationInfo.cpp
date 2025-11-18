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

#include <tencentcloud/ess/v20201111/model/AdminChangeInvitationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

AdminChangeInvitationInfo::AdminChangeInvitationInfo() :
    m_changeAdminOrganizationIdHasBeenSet(false),
    m_newAdminNameHasBeenSet(false),
    m_authFilesHasBeenSet(false),
    m_newAdminMobileHasBeenSet(false),
    m_newAdminIdCardTypeHasBeenSet(false),
    m_newAdminIdCardNumberHasBeenSet(false)
{
}

CoreInternalOutcome AdminChangeInvitationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChangeAdminOrganizationId") && !value["ChangeAdminOrganizationId"].IsNull())
    {
        if (!value["ChangeAdminOrganizationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdminChangeInvitationInfo.ChangeAdminOrganizationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_changeAdminOrganizationId = string(value["ChangeAdminOrganizationId"].GetString());
        m_changeAdminOrganizationIdHasBeenSet = true;
    }

    if (value.HasMember("NewAdminName") && !value["NewAdminName"].IsNull())
    {
        if (!value["NewAdminName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdminChangeInvitationInfo.NewAdminName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newAdminName = string(value["NewAdminName"].GetString());
        m_newAdminNameHasBeenSet = true;
    }

    if (value.HasMember("AuthFiles") && !value["AuthFiles"].IsNull())
    {
        if (!value["AuthFiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdminChangeInvitationInfo.AuthFiles` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthFiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_authFiles.push_back((*itr).GetString());
        }
        m_authFilesHasBeenSet = true;
    }

    if (value.HasMember("NewAdminMobile") && !value["NewAdminMobile"].IsNull())
    {
        if (!value["NewAdminMobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdminChangeInvitationInfo.NewAdminMobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newAdminMobile = string(value["NewAdminMobile"].GetString());
        m_newAdminMobileHasBeenSet = true;
    }

    if (value.HasMember("NewAdminIdCardType") && !value["NewAdminIdCardType"].IsNull())
    {
        if (!value["NewAdminIdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdminChangeInvitationInfo.NewAdminIdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newAdminIdCardType = string(value["NewAdminIdCardType"].GetString());
        m_newAdminIdCardTypeHasBeenSet = true;
    }

    if (value.HasMember("NewAdminIdCardNumber") && !value["NewAdminIdCardNumber"].IsNull())
    {
        if (!value["NewAdminIdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdminChangeInvitationInfo.NewAdminIdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newAdminIdCardNumber = string(value["NewAdminIdCardNumber"].GetString());
        m_newAdminIdCardNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdminChangeInvitationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_changeAdminOrganizationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeAdminOrganizationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_changeAdminOrganizationId.c_str(), allocator).Move(), allocator);
    }

    if (m_newAdminNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAdminName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newAdminName.c_str(), allocator).Move(), allocator);
    }

    if (m_authFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authFiles.begin(); itr != m_authFiles.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_newAdminMobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAdminMobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newAdminMobile.c_str(), allocator).Move(), allocator);
    }

    if (m_newAdminIdCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAdminIdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newAdminIdCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_newAdminIdCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAdminIdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newAdminIdCardNumber.c_str(), allocator).Move(), allocator);
    }

}


string AdminChangeInvitationInfo::GetChangeAdminOrganizationId() const
{
    return m_changeAdminOrganizationId;
}

void AdminChangeInvitationInfo::SetChangeAdminOrganizationId(const string& _changeAdminOrganizationId)
{
    m_changeAdminOrganizationId = _changeAdminOrganizationId;
    m_changeAdminOrganizationIdHasBeenSet = true;
}

bool AdminChangeInvitationInfo::ChangeAdminOrganizationIdHasBeenSet() const
{
    return m_changeAdminOrganizationIdHasBeenSet;
}

string AdminChangeInvitationInfo::GetNewAdminName() const
{
    return m_newAdminName;
}

void AdminChangeInvitationInfo::SetNewAdminName(const string& _newAdminName)
{
    m_newAdminName = _newAdminName;
    m_newAdminNameHasBeenSet = true;
}

bool AdminChangeInvitationInfo::NewAdminNameHasBeenSet() const
{
    return m_newAdminNameHasBeenSet;
}

vector<string> AdminChangeInvitationInfo::GetAuthFiles() const
{
    return m_authFiles;
}

void AdminChangeInvitationInfo::SetAuthFiles(const vector<string>& _authFiles)
{
    m_authFiles = _authFiles;
    m_authFilesHasBeenSet = true;
}

bool AdminChangeInvitationInfo::AuthFilesHasBeenSet() const
{
    return m_authFilesHasBeenSet;
}

string AdminChangeInvitationInfo::GetNewAdminMobile() const
{
    return m_newAdminMobile;
}

void AdminChangeInvitationInfo::SetNewAdminMobile(const string& _newAdminMobile)
{
    m_newAdminMobile = _newAdminMobile;
    m_newAdminMobileHasBeenSet = true;
}

bool AdminChangeInvitationInfo::NewAdminMobileHasBeenSet() const
{
    return m_newAdminMobileHasBeenSet;
}

string AdminChangeInvitationInfo::GetNewAdminIdCardType() const
{
    return m_newAdminIdCardType;
}

void AdminChangeInvitationInfo::SetNewAdminIdCardType(const string& _newAdminIdCardType)
{
    m_newAdminIdCardType = _newAdminIdCardType;
    m_newAdminIdCardTypeHasBeenSet = true;
}

bool AdminChangeInvitationInfo::NewAdminIdCardTypeHasBeenSet() const
{
    return m_newAdminIdCardTypeHasBeenSet;
}

string AdminChangeInvitationInfo::GetNewAdminIdCardNumber() const
{
    return m_newAdminIdCardNumber;
}

void AdminChangeInvitationInfo::SetNewAdminIdCardNumber(const string& _newAdminIdCardNumber)
{
    m_newAdminIdCardNumber = _newAdminIdCardNumber;
    m_newAdminIdCardNumberHasBeenSet = true;
}

bool AdminChangeInvitationInfo::NewAdminIdCardNumberHasBeenSet() const
{
    return m_newAdminIdCardNumberHasBeenSet;
}

