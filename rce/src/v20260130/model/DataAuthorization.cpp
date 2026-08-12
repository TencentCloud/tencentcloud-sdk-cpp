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

#include <tencentcloud/rce/v20260130/model/DataAuthorization.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rce::V20260130::Model;
using namespace std;

DataAuthorization::DataAuthorization() :
    m_dataProviderNameHasBeenSet(false),
    m_dataRecipientNameHasBeenSet(false),
    m_userDataTypeHasBeenSet(false),
    m_isAuthorizedHasBeenSet(false),
    m_isOrderHandingHasBeenSet(false),
    m_authorizationDeadlineHasBeenSet(false),
    m_privacyPolicyLinkHasBeenSet(false)
{
}

CoreInternalOutcome DataAuthorization::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataProviderName") && !value["DataProviderName"].IsNull())
    {
        if (!value["DataProviderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataAuthorization.DataProviderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataProviderName = string(value["DataProviderName"].GetString());
        m_dataProviderNameHasBeenSet = true;
    }

    if (value.HasMember("DataRecipientName") && !value["DataRecipientName"].IsNull())
    {
        if (!value["DataRecipientName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataAuthorization.DataRecipientName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataRecipientName = string(value["DataRecipientName"].GetString());
        m_dataRecipientNameHasBeenSet = true;
    }

    if (value.HasMember("UserDataType") && !value["UserDataType"].IsNull())
    {
        if (!value["UserDataType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataAuthorization.UserDataType` is not array type"));

        const rapidjson::Value &tmpValue = value["UserDataType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userDataType.push_back((*itr).GetInt64());
        }
        m_userDataTypeHasBeenSet = true;
    }

    if (value.HasMember("IsAuthorized") && !value["IsAuthorized"].IsNull())
    {
        if (!value["IsAuthorized"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataAuthorization.IsAuthorized` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthorized = value["IsAuthorized"].GetBool();
        m_isAuthorizedHasBeenSet = true;
    }

    if (value.HasMember("IsOrderHanding") && !value["IsOrderHanding"].IsNull())
    {
        if (!value["IsOrderHanding"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataAuthorization.IsOrderHanding` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isOrderHanding = value["IsOrderHanding"].GetBool();
        m_isOrderHandingHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationDeadline") && !value["AuthorizationDeadline"].IsNull())
    {
        if (!value["AuthorizationDeadline"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataAuthorization.AuthorizationDeadline` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationDeadline = value["AuthorizationDeadline"].GetInt64();
        m_authorizationDeadlineHasBeenSet = true;
    }

    if (value.HasMember("PrivacyPolicyLink") && !value["PrivacyPolicyLink"].IsNull())
    {
        if (!value["PrivacyPolicyLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataAuthorization.PrivacyPolicyLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privacyPolicyLink = string(value["PrivacyPolicyLink"].GetString());
        m_privacyPolicyLinkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataAuthorization::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_isAuthorizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthorized";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuthorized, allocator);
    }

    if (m_isOrderHandingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOrderHanding";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isOrderHanding, allocator);
    }

    if (m_authorizationDeadlineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationDeadline";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizationDeadline, allocator);
    }

    if (m_privacyPolicyLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivacyPolicyLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privacyPolicyLink.c_str(), allocator).Move(), allocator);
    }

}


string DataAuthorization::GetDataProviderName() const
{
    return m_dataProviderName;
}

void DataAuthorization::SetDataProviderName(const string& _dataProviderName)
{
    m_dataProviderName = _dataProviderName;
    m_dataProviderNameHasBeenSet = true;
}

bool DataAuthorization::DataProviderNameHasBeenSet() const
{
    return m_dataProviderNameHasBeenSet;
}

string DataAuthorization::GetDataRecipientName() const
{
    return m_dataRecipientName;
}

void DataAuthorization::SetDataRecipientName(const string& _dataRecipientName)
{
    m_dataRecipientName = _dataRecipientName;
    m_dataRecipientNameHasBeenSet = true;
}

bool DataAuthorization::DataRecipientNameHasBeenSet() const
{
    return m_dataRecipientNameHasBeenSet;
}

vector<int64_t> DataAuthorization::GetUserDataType() const
{
    return m_userDataType;
}

void DataAuthorization::SetUserDataType(const vector<int64_t>& _userDataType)
{
    m_userDataType = _userDataType;
    m_userDataTypeHasBeenSet = true;
}

bool DataAuthorization::UserDataTypeHasBeenSet() const
{
    return m_userDataTypeHasBeenSet;
}

bool DataAuthorization::GetIsAuthorized() const
{
    return m_isAuthorized;
}

void DataAuthorization::SetIsAuthorized(const bool& _isAuthorized)
{
    m_isAuthorized = _isAuthorized;
    m_isAuthorizedHasBeenSet = true;
}

bool DataAuthorization::IsAuthorizedHasBeenSet() const
{
    return m_isAuthorizedHasBeenSet;
}

bool DataAuthorization::GetIsOrderHanding() const
{
    return m_isOrderHanding;
}

void DataAuthorization::SetIsOrderHanding(const bool& _isOrderHanding)
{
    m_isOrderHanding = _isOrderHanding;
    m_isOrderHandingHasBeenSet = true;
}

bool DataAuthorization::IsOrderHandingHasBeenSet() const
{
    return m_isOrderHandingHasBeenSet;
}

int64_t DataAuthorization::GetAuthorizationDeadline() const
{
    return m_authorizationDeadline;
}

void DataAuthorization::SetAuthorizationDeadline(const int64_t& _authorizationDeadline)
{
    m_authorizationDeadline = _authorizationDeadline;
    m_authorizationDeadlineHasBeenSet = true;
}

bool DataAuthorization::AuthorizationDeadlineHasBeenSet() const
{
    return m_authorizationDeadlineHasBeenSet;
}

string DataAuthorization::GetPrivacyPolicyLink() const
{
    return m_privacyPolicyLink;
}

void DataAuthorization::SetPrivacyPolicyLink(const string& _privacyPolicyLink)
{
    m_privacyPolicyLink = _privacyPolicyLink;
    m_privacyPolicyLinkHasBeenSet = true;
}

bool DataAuthorization::PrivacyPolicyLinkHasBeenSet() const
{
    return m_privacyPolicyLinkHasBeenSet;
}

