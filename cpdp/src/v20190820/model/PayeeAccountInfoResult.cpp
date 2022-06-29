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

#include <tencentcloud/cpdp/v20190820/model/PayeeAccountInfoResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

PayeeAccountInfoResult::PayeeAccountInfoResult() :
    m_accountIdHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_userInfoHasBeenSet(false),
    m_propertyInfoHasBeenSet(false)
{
}

CoreInternalOutcome PayeeAccountInfoResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountInfoResult.AccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = string(value["AccountId"].GetString());
        m_accountIdHasBeenSet = true;
    }

    if (value.HasMember("AccountName") && !value["AccountName"].IsNull())
    {
        if (!value["AccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountInfoResult.AccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountName = string(value["AccountName"].GetString());
        m_accountNameHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountInfoResult.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountInfoResult.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountInfoResult.UserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInfo.Deserialize(value["UserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("PropertyInfo") && !value["PropertyInfo"].IsNull())
    {
        if (!value["PropertyInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeAccountInfoResult.PropertyInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_propertyInfo.Deserialize(value["PropertyInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_propertyInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayeeAccountInfoResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }

    if (m_accountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountName.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_propertyInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_propertyInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


string PayeeAccountInfoResult::GetAccountId() const
{
    return m_accountId;
}

void PayeeAccountInfoResult::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool PayeeAccountInfoResult::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string PayeeAccountInfoResult::GetAccountName() const
{
    return m_accountName;
}

void PayeeAccountInfoResult::SetAccountName(const string& _accountName)
{
    m_accountName = _accountName;
    m_accountNameHasBeenSet = true;
}

bool PayeeAccountInfoResult::AccountNameHasBeenSet() const
{
    return m_accountNameHasBeenSet;
}

string PayeeAccountInfoResult::GetRemark() const
{
    return m_remark;
}

void PayeeAccountInfoResult::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool PayeeAccountInfoResult::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string PayeeAccountInfoResult::GetCreateTime() const
{
    return m_createTime;
}

void PayeeAccountInfoResult::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PayeeAccountInfoResult::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

PayeeAccountUserInfo PayeeAccountInfoResult::GetUserInfo() const
{
    return m_userInfo;
}

void PayeeAccountInfoResult::SetUserInfo(const PayeeAccountUserInfo& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool PayeeAccountInfoResult::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

PayeeAccountPropertyInfo PayeeAccountInfoResult::GetPropertyInfo() const
{
    return m_propertyInfo;
}

void PayeeAccountInfoResult::SetPropertyInfo(const PayeeAccountPropertyInfo& _propertyInfo)
{
    m_propertyInfo = _propertyInfo;
    m_propertyInfoHasBeenSet = true;
}

bool PayeeAccountInfoResult::PropertyInfoHasBeenSet() const
{
    return m_propertyInfoHasBeenSet;
}

