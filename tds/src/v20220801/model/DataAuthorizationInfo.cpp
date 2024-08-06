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

#include <tencentcloud/tds/v20220801/model/DataAuthorizationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tds::V20220801::Model;
using namespace std;

DataAuthorizationInfo::DataAuthorizationInfo() :
    m_dataProviderNameHasBeenSet(false),
    m_dataRecipientNameHasBeenSet(false),
    m_userDataTypeHasBeenSet(false),
    m_isAuthorizeHasBeenSet(false),
    m_authorizationTermHasBeenSet(false),
    m_privacyPolicyLinkHasBeenSet(false)
{
}

CoreInternalOutcome DataAuthorizationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataProviderName") && !value["DataProviderName"].IsNull())
    {
        if (!value["DataProviderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataAuthorizationInfo.DataProviderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataProviderName = string(value["DataProviderName"].GetString());
        m_dataProviderNameHasBeenSet = true;
    }

    if (value.HasMember("DataRecipientName") && !value["DataRecipientName"].IsNull())
    {
        if (!value["DataRecipientName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataAuthorizationInfo.DataRecipientName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataRecipientName = string(value["DataRecipientName"].GetString());
        m_dataRecipientNameHasBeenSet = true;
    }

    if (value.HasMember("UserDataType") && !value["UserDataType"].IsNull())
    {
        if (!value["UserDataType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataAuthorizationInfo.UserDataType` is not array type"));

        const rapidjson::Value &tmpValue = value["UserDataType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userDataType.push_back((*itr).GetUint64());
        }
        m_userDataTypeHasBeenSet = true;
    }

    if (value.HasMember("IsAuthorize") && !value["IsAuthorize"].IsNull())
    {
        if (!value["IsAuthorize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataAuthorizationInfo.IsAuthorize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthorize = value["IsAuthorize"].GetUint64();
        m_isAuthorizeHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationTerm") && !value["AuthorizationTerm"].IsNull())
    {
        if (!value["AuthorizationTerm"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataAuthorizationInfo.AuthorizationTerm` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationTerm = value["AuthorizationTerm"].GetUint64();
        m_authorizationTermHasBeenSet = true;
    }

    if (value.HasMember("PrivacyPolicyLink") && !value["PrivacyPolicyLink"].IsNull())
    {
        if (!value["PrivacyPolicyLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataAuthorizationInfo.PrivacyPolicyLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privacyPolicyLink = string(value["PrivacyPolicyLink"].GetString());
        m_privacyPolicyLinkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataAuthorizationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataProviderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProviderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataProviderName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataRecipientNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRecipientName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataRecipientName.c_str(), allocator).Move(), allocator);
    }

    if (m_userDataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userDataType.begin(); itr != m_userDataType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_isAuthorizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthorize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuthorize, allocator);
    }

    if (m_authorizationTermHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationTerm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizationTerm, allocator);
    }

    if (m_privacyPolicyLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivacyPolicyLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privacyPolicyLink.c_str(), allocator).Move(), allocator);
    }

}


string DataAuthorizationInfo::GetDataProviderName() const
{
    return m_dataProviderName;
}

void DataAuthorizationInfo::SetDataProviderName(const string& _dataProviderName)
{
    m_dataProviderName = _dataProviderName;
    m_dataProviderNameHasBeenSet = true;
}

bool DataAuthorizationInfo::DataProviderNameHasBeenSet() const
{
    return m_dataProviderNameHasBeenSet;
}

string DataAuthorizationInfo::GetDataRecipientName() const
{
    return m_dataRecipientName;
}

void DataAuthorizationInfo::SetDataRecipientName(const string& _dataRecipientName)
{
    m_dataRecipientName = _dataRecipientName;
    m_dataRecipientNameHasBeenSet = true;
}

bool DataAuthorizationInfo::DataRecipientNameHasBeenSet() const
{
    return m_dataRecipientNameHasBeenSet;
}

vector<uint64_t> DataAuthorizationInfo::GetUserDataType() const
{
    return m_userDataType;
}

void DataAuthorizationInfo::SetUserDataType(const vector<uint64_t>& _userDataType)
{
    m_userDataType = _userDataType;
    m_userDataTypeHasBeenSet = true;
}

bool DataAuthorizationInfo::UserDataTypeHasBeenSet() const
{
    return m_userDataTypeHasBeenSet;
}

uint64_t DataAuthorizationInfo::GetIsAuthorize() const
{
    return m_isAuthorize;
}

void DataAuthorizationInfo::SetIsAuthorize(const uint64_t& _isAuthorize)
{
    m_isAuthorize = _isAuthorize;
    m_isAuthorizeHasBeenSet = true;
}

bool DataAuthorizationInfo::IsAuthorizeHasBeenSet() const
{
    return m_isAuthorizeHasBeenSet;
}

uint64_t DataAuthorizationInfo::GetAuthorizationTerm() const
{
    return m_authorizationTerm;
}

void DataAuthorizationInfo::SetAuthorizationTerm(const uint64_t& _authorizationTerm)
{
    m_authorizationTerm = _authorizationTerm;
    m_authorizationTermHasBeenSet = true;
}

bool DataAuthorizationInfo::AuthorizationTermHasBeenSet() const
{
    return m_authorizationTermHasBeenSet;
}

string DataAuthorizationInfo::GetPrivacyPolicyLink() const
{
    return m_privacyPolicyLink;
}

void DataAuthorizationInfo::SetPrivacyPolicyLink(const string& _privacyPolicyLink)
{
    m_privacyPolicyLink = _privacyPolicyLink;
    m_privacyPolicyLinkHasBeenSet = true;
}

bool DataAuthorizationInfo::PrivacyPolicyLinkHasBeenSet() const
{
    return m_privacyPolicyLinkHasBeenSet;
}

