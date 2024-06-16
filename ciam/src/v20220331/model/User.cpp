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

#include <tencentcloud/ciam/v20220331/model/User.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

User::User() :
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_lastSignOnHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_userDataSourceEnumHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_birthdateHasBeenSet(false),
    m_userGroupsHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_customAttributesHasBeenSet(false),
    m_residentIdentityCardHasBeenSet(false),
    m_qqOpenIdHasBeenSet(false),
    m_qqUnionIdHasBeenSet(false),
    m_wechatOpenIdHasBeenSet(false),
    m_wechatUnionIdHasBeenSet(false),
    m_alipayUserIdHasBeenSet(false),
    m_weComUserIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_identityVerificationMethodHasBeenSet(false),
    m_identityVerifiedHasBeenSet(false),
    m_jobHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_primaryHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_alreadyFirstLoginHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_userStoreIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_lockTypeHasBeenSet(false),
    m_lockTimeHasBeenSet(false),
    m_indexedAttribute1HasBeenSet(false),
    m_indexedAttribute2HasBeenSet(false),
    m_indexedAttribute3HasBeenSet(false),
    m_indexedAttribute4HasBeenSet(false),
    m_indexedAttribute5HasBeenSet(false)
{
}

CoreInternalOutcome User::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("LastSignOn") && !value["LastSignOn"].IsNull())
    {
        if (!value["LastSignOn"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `User.LastSignOn` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastSignOn = value["LastSignOn"].GetInt64();
        m_lastSignOnHasBeenSet = true;
    }

    if (value.HasMember("CreatedDate") && !value["CreatedDate"].IsNull())
    {
        if (!value["CreatedDate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `User.CreatedDate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createdDate = value["CreatedDate"].GetInt64();
        m_createdDateHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UserDataSourceEnum") && !value["UserDataSourceEnum"].IsNull())
    {
        if (!value["UserDataSourceEnum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.UserDataSourceEnum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userDataSourceEnum = string(value["UserDataSourceEnum"].GetString());
        m_userDataSourceEnumHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Birthdate") && !value["Birthdate"].IsNull())
    {
        if (!value["Birthdate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `User.Birthdate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_birthdate = value["Birthdate"].GetInt64();
        m_birthdateHasBeenSet = true;
    }

    if (value.HasMember("UserGroups") && !value["UserGroups"].IsNull())
    {
        if (!value["UserGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `User.UserGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["UserGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userGroups.push_back((*itr).GetString());
        }
        m_userGroupsHasBeenSet = true;
    }

    if (value.HasMember("LastModifiedDate") && !value["LastModifiedDate"].IsNull())
    {
        if (!value["LastModifiedDate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `User.LastModifiedDate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifiedDate = value["LastModifiedDate"].GetInt64();
        m_lastModifiedDateHasBeenSet = true;
    }

    if (value.HasMember("CustomAttributes") && !value["CustomAttributes"].IsNull())
    {
        if (!value["CustomAttributes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `User.CustomAttributes` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomAttributes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MemberMap item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customAttributes.push_back(item);
        }
        m_customAttributesHasBeenSet = true;
    }

    if (value.HasMember("ResidentIdentityCard") && !value["ResidentIdentityCard"].IsNull())
    {
        if (!value["ResidentIdentityCard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.ResidentIdentityCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_residentIdentityCard = string(value["ResidentIdentityCard"].GetString());
        m_residentIdentityCardHasBeenSet = true;
    }

    if (value.HasMember("QqOpenId") && !value["QqOpenId"].IsNull())
    {
        if (!value["QqOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.QqOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qqOpenId = string(value["QqOpenId"].GetString());
        m_qqOpenIdHasBeenSet = true;
    }

    if (value.HasMember("QqUnionId") && !value["QqUnionId"].IsNull())
    {
        if (!value["QqUnionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.QqUnionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qqUnionId = string(value["QqUnionId"].GetString());
        m_qqUnionIdHasBeenSet = true;
    }

    if (value.HasMember("WechatOpenId") && !value["WechatOpenId"].IsNull())
    {
        if (!value["WechatOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.WechatOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatOpenId = string(value["WechatOpenId"].GetString());
        m_wechatOpenIdHasBeenSet = true;
    }

    if (value.HasMember("WechatUnionId") && !value["WechatUnionId"].IsNull())
    {
        if (!value["WechatUnionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.WechatUnionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatUnionId = string(value["WechatUnionId"].GetString());
        m_wechatUnionIdHasBeenSet = true;
    }

    if (value.HasMember("AlipayUserId") && !value["AlipayUserId"].IsNull())
    {
        if (!value["AlipayUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.AlipayUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alipayUserId = string(value["AlipayUserId"].GetString());
        m_alipayUserIdHasBeenSet = true;
    }

    if (value.HasMember("WeComUserId") && !value["WeComUserId"].IsNull())
    {
        if (!value["WeComUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.WeComUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weComUserId = string(value["WeComUserId"].GetString());
        m_weComUserIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Locale") && !value["Locale"].IsNull())
    {
        if (!value["Locale"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Locale` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locale = string(value["Locale"].GetString());
        m_localeHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("IdentityVerificationMethod") && !value["IdentityVerificationMethod"].IsNull())
    {
        if (!value["IdentityVerificationMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.IdentityVerificationMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityVerificationMethod = string(value["IdentityVerificationMethod"].GetString());
        m_identityVerificationMethodHasBeenSet = true;
    }

    if (value.HasMember("IdentityVerified") && !value["IdentityVerified"].IsNull())
    {
        if (!value["IdentityVerified"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `User.IdentityVerified` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_identityVerified = value["IdentityVerified"].GetBool();
        m_identityVerifiedHasBeenSet = true;
    }

    if (value.HasMember("Job") && !value["Job"].IsNull())
    {
        if (!value["Job"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Job` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_job = string(value["Job"].GetString());
        m_jobHasBeenSet = true;
    }

    if (value.HasMember("Nationality") && !value["Nationality"].IsNull())
    {
        if (!value["Nationality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(value["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (value.HasMember("Primary") && !value["Primary"].IsNull())
    {
        if (!value["Primary"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `User.Primary` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_primary = value["Primary"].GetBool();
        m_primaryHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("AlreadyFirstLogin") && !value["AlreadyFirstLogin"].IsNull())
    {
        if (!value["AlreadyFirstLogin"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `User.AlreadyFirstLogin` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_alreadyFirstLogin = value["AlreadyFirstLogin"].GetBool();
        m_alreadyFirstLoginHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("UserStoreId") && !value["UserStoreId"].IsNull())
    {
        if (!value["UserStoreId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.UserStoreId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userStoreId = string(value["UserStoreId"].GetString());
        m_userStoreIdHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `User.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("LockType") && !value["LockType"].IsNull())
    {
        if (!value["LockType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.LockType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lockType = string(value["LockType"].GetString());
        m_lockTypeHasBeenSet = true;
    }

    if (value.HasMember("LockTime") && !value["LockTime"].IsNull())
    {
        if (!value["LockTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `User.LockTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lockTime = value["LockTime"].GetInt64();
        m_lockTimeHasBeenSet = true;
    }

    if (value.HasMember("IndexedAttribute1") && !value["IndexedAttribute1"].IsNull())
    {
        if (!value["IndexedAttribute1"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.IndexedAttribute1` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexedAttribute1 = string(value["IndexedAttribute1"].GetString());
        m_indexedAttribute1HasBeenSet = true;
    }

    if (value.HasMember("IndexedAttribute2") && !value["IndexedAttribute2"].IsNull())
    {
        if (!value["IndexedAttribute2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.IndexedAttribute2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexedAttribute2 = string(value["IndexedAttribute2"].GetString());
        m_indexedAttribute2HasBeenSet = true;
    }

    if (value.HasMember("IndexedAttribute3") && !value["IndexedAttribute3"].IsNull())
    {
        if (!value["IndexedAttribute3"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.IndexedAttribute3` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexedAttribute3 = string(value["IndexedAttribute3"].GetString());
        m_indexedAttribute3HasBeenSet = true;
    }

    if (value.HasMember("IndexedAttribute4") && !value["IndexedAttribute4"].IsNull())
    {
        if (!value["IndexedAttribute4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.IndexedAttribute4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexedAttribute4 = string(value["IndexedAttribute4"].GetString());
        m_indexedAttribute4HasBeenSet = true;
    }

    if (value.HasMember("IndexedAttribute5") && !value["IndexedAttribute5"].IsNull())
    {
        if (!value["IndexedAttribute5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `User.IndexedAttribute5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexedAttribute5 = string(value["IndexedAttribute5"].GetString());
        m_indexedAttribute5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void User::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_lastSignOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastSignOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastSignOn, allocator);
    }

    if (m_createdDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createdDate, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_userDataSourceEnumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserDataSourceEnum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userDataSourceEnum.c_str(), allocator).Move(), allocator);
    }

    if (m_nicknameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nickname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nickname.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_birthdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_birthdate, allocator);
    }

    if (m_userGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userGroups.begin(); itr != m_userGroups.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_lastModifiedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifiedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifiedDate, allocator);
    }

    if (m_customAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomAttributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customAttributes.begin(); itr != m_customAttributes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_residentIdentityCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResidentIdentityCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_residentIdentityCard.c_str(), allocator).Move(), allocator);
    }

    if (m_qqOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QqOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qqOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_qqUnionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QqUnionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qqUnionId.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_wechatUnionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WechatUnionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wechatUnionId.c_str(), allocator).Move(), allocator);
    }

    if (m_alipayUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlipayUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alipayUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_weComUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeComUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_weComUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_localeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Locale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locale.c_str(), allocator).Move(), allocator);
    }

    if (m_genderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gender";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gender.c_str(), allocator).Move(), allocator);
    }

    if (m_identityVerificationMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityVerificationMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityVerificationMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_identityVerifiedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityVerified";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identityVerified, allocator);
    }

    if (m_jobHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Job";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_job.c_str(), allocator).Move(), allocator);
    }

    if (m_nationalityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nationality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nationality.c_str(), allocator).Move(), allocator);
    }

    if (m_primaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Primary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_primary, allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_alreadyFirstLoginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlreadyFirstLogin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alreadyFirstLogin, allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_userStoreIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserStoreId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userStoreId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_lockTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lockType.c_str(), allocator).Move(), allocator);
    }

    if (m_lockTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lockTime, allocator);
    }

    if (m_indexedAttribute1HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexedAttribute1";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexedAttribute1.c_str(), allocator).Move(), allocator);
    }

    if (m_indexedAttribute2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexedAttribute2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexedAttribute2.c_str(), allocator).Move(), allocator);
    }

    if (m_indexedAttribute3HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexedAttribute3";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexedAttribute3.c_str(), allocator).Move(), allocator);
    }

    if (m_indexedAttribute4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexedAttribute4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexedAttribute4.c_str(), allocator).Move(), allocator);
    }

    if (m_indexedAttribute5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexedAttribute5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexedAttribute5.c_str(), allocator).Move(), allocator);
    }

}


string User::GetUserId() const
{
    return m_userId;
}

void User::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool User::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string User::GetUserName() const
{
    return m_userName;
}

void User::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool User::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string User::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void User::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool User::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string User::GetEmail() const
{
    return m_email;
}

void User::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool User::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

int64_t User::GetLastSignOn() const
{
    return m_lastSignOn;
}

void User::SetLastSignOn(const int64_t& _lastSignOn)
{
    m_lastSignOn = _lastSignOn;
    m_lastSignOnHasBeenSet = true;
}

bool User::LastSignOnHasBeenSet() const
{
    return m_lastSignOnHasBeenSet;
}

int64_t User::GetCreatedDate() const
{
    return m_createdDate;
}

void User::SetCreatedDate(const int64_t& _createdDate)
{
    m_createdDate = _createdDate;
    m_createdDateHasBeenSet = true;
}

bool User::CreatedDateHasBeenSet() const
{
    return m_createdDateHasBeenSet;
}

string User::GetStatus() const
{
    return m_status;
}

void User::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool User::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string User::GetUserDataSourceEnum() const
{
    return m_userDataSourceEnum;
}

void User::SetUserDataSourceEnum(const string& _userDataSourceEnum)
{
    m_userDataSourceEnum = _userDataSourceEnum;
    m_userDataSourceEnumHasBeenSet = true;
}

bool User::UserDataSourceEnumHasBeenSet() const
{
    return m_userDataSourceEnumHasBeenSet;
}

string User::GetNickname() const
{
    return m_nickname;
}

void User::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool User::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string User::GetAddress() const
{
    return m_address;
}

void User::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool User::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

int64_t User::GetBirthdate() const
{
    return m_birthdate;
}

void User::SetBirthdate(const int64_t& _birthdate)
{
    m_birthdate = _birthdate;
    m_birthdateHasBeenSet = true;
}

bool User::BirthdateHasBeenSet() const
{
    return m_birthdateHasBeenSet;
}

vector<string> User::GetUserGroups() const
{
    return m_userGroups;
}

void User::SetUserGroups(const vector<string>& _userGroups)
{
    m_userGroups = _userGroups;
    m_userGroupsHasBeenSet = true;
}

bool User::UserGroupsHasBeenSet() const
{
    return m_userGroupsHasBeenSet;
}

int64_t User::GetLastModifiedDate() const
{
    return m_lastModifiedDate;
}

void User::SetLastModifiedDate(const int64_t& _lastModifiedDate)
{
    m_lastModifiedDate = _lastModifiedDate;
    m_lastModifiedDateHasBeenSet = true;
}

bool User::LastModifiedDateHasBeenSet() const
{
    return m_lastModifiedDateHasBeenSet;
}

vector<MemberMap> User::GetCustomAttributes() const
{
    return m_customAttributes;
}

void User::SetCustomAttributes(const vector<MemberMap>& _customAttributes)
{
    m_customAttributes = _customAttributes;
    m_customAttributesHasBeenSet = true;
}

bool User::CustomAttributesHasBeenSet() const
{
    return m_customAttributesHasBeenSet;
}

string User::GetResidentIdentityCard() const
{
    return m_residentIdentityCard;
}

void User::SetResidentIdentityCard(const string& _residentIdentityCard)
{
    m_residentIdentityCard = _residentIdentityCard;
    m_residentIdentityCardHasBeenSet = true;
}

bool User::ResidentIdentityCardHasBeenSet() const
{
    return m_residentIdentityCardHasBeenSet;
}

string User::GetQqOpenId() const
{
    return m_qqOpenId;
}

void User::SetQqOpenId(const string& _qqOpenId)
{
    m_qqOpenId = _qqOpenId;
    m_qqOpenIdHasBeenSet = true;
}

bool User::QqOpenIdHasBeenSet() const
{
    return m_qqOpenIdHasBeenSet;
}

string User::GetQqUnionId() const
{
    return m_qqUnionId;
}

void User::SetQqUnionId(const string& _qqUnionId)
{
    m_qqUnionId = _qqUnionId;
    m_qqUnionIdHasBeenSet = true;
}

bool User::QqUnionIdHasBeenSet() const
{
    return m_qqUnionIdHasBeenSet;
}

string User::GetWechatOpenId() const
{
    return m_wechatOpenId;
}

void User::SetWechatOpenId(const string& _wechatOpenId)
{
    m_wechatOpenId = _wechatOpenId;
    m_wechatOpenIdHasBeenSet = true;
}

bool User::WechatOpenIdHasBeenSet() const
{
    return m_wechatOpenIdHasBeenSet;
}

string User::GetWechatUnionId() const
{
    return m_wechatUnionId;
}

void User::SetWechatUnionId(const string& _wechatUnionId)
{
    m_wechatUnionId = _wechatUnionId;
    m_wechatUnionIdHasBeenSet = true;
}

bool User::WechatUnionIdHasBeenSet() const
{
    return m_wechatUnionIdHasBeenSet;
}

string User::GetAlipayUserId() const
{
    return m_alipayUserId;
}

void User::SetAlipayUserId(const string& _alipayUserId)
{
    m_alipayUserId = _alipayUserId;
    m_alipayUserIdHasBeenSet = true;
}

bool User::AlipayUserIdHasBeenSet() const
{
    return m_alipayUserIdHasBeenSet;
}

string User::GetWeComUserId() const
{
    return m_weComUserId;
}

void User::SetWeComUserId(const string& _weComUserId)
{
    m_weComUserId = _weComUserId;
    m_weComUserIdHasBeenSet = true;
}

bool User::WeComUserIdHasBeenSet() const
{
    return m_weComUserIdHasBeenSet;
}

string User::GetDescription() const
{
    return m_description;
}

void User::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool User::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string User::GetName() const
{
    return m_name;
}

void User::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool User::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string User::GetLocale() const
{
    return m_locale;
}

void User::SetLocale(const string& _locale)
{
    m_locale = _locale;
    m_localeHasBeenSet = true;
}

bool User::LocaleHasBeenSet() const
{
    return m_localeHasBeenSet;
}

string User::GetGender() const
{
    return m_gender;
}

void User::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool User::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string User::GetIdentityVerificationMethod() const
{
    return m_identityVerificationMethod;
}

void User::SetIdentityVerificationMethod(const string& _identityVerificationMethod)
{
    m_identityVerificationMethod = _identityVerificationMethod;
    m_identityVerificationMethodHasBeenSet = true;
}

bool User::IdentityVerificationMethodHasBeenSet() const
{
    return m_identityVerificationMethodHasBeenSet;
}

bool User::GetIdentityVerified() const
{
    return m_identityVerified;
}

void User::SetIdentityVerified(const bool& _identityVerified)
{
    m_identityVerified = _identityVerified;
    m_identityVerifiedHasBeenSet = true;
}

bool User::IdentityVerifiedHasBeenSet() const
{
    return m_identityVerifiedHasBeenSet;
}

string User::GetJob() const
{
    return m_job;
}

void User::SetJob(const string& _job)
{
    m_job = _job;
    m_jobHasBeenSet = true;
}

bool User::JobHasBeenSet() const
{
    return m_jobHasBeenSet;
}

string User::GetNationality() const
{
    return m_nationality;
}

void User::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool User::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

bool User::GetPrimary() const
{
    return m_primary;
}

void User::SetPrimary(const bool& _primary)
{
    m_primary = _primary;
    m_primaryHasBeenSet = true;
}

bool User::PrimaryHasBeenSet() const
{
    return m_primaryHasBeenSet;
}

string User::GetZone() const
{
    return m_zone;
}

void User::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool User::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

bool User::GetAlreadyFirstLogin() const
{
    return m_alreadyFirstLogin;
}

void User::SetAlreadyFirstLogin(const bool& _alreadyFirstLogin)
{
    m_alreadyFirstLogin = _alreadyFirstLogin;
    m_alreadyFirstLoginHasBeenSet = true;
}

bool User::AlreadyFirstLoginHasBeenSet() const
{
    return m_alreadyFirstLoginHasBeenSet;
}

string User::GetTenantId() const
{
    return m_tenantId;
}

void User::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool User::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string User::GetUserStoreId() const
{
    return m_userStoreId;
}

void User::SetUserStoreId(const string& _userStoreId)
{
    m_userStoreId = _userStoreId;
    m_userStoreIdHasBeenSet = true;
}

bool User::UserStoreIdHasBeenSet() const
{
    return m_userStoreIdHasBeenSet;
}

int64_t User::GetVersion() const
{
    return m_version;
}

void User::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool User::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string User::GetLockType() const
{
    return m_lockType;
}

void User::SetLockType(const string& _lockType)
{
    m_lockType = _lockType;
    m_lockTypeHasBeenSet = true;
}

bool User::LockTypeHasBeenSet() const
{
    return m_lockTypeHasBeenSet;
}

int64_t User::GetLockTime() const
{
    return m_lockTime;
}

void User::SetLockTime(const int64_t& _lockTime)
{
    m_lockTime = _lockTime;
    m_lockTimeHasBeenSet = true;
}

bool User::LockTimeHasBeenSet() const
{
    return m_lockTimeHasBeenSet;
}

string User::GetIndexedAttribute1() const
{
    return m_indexedAttribute1;
}

void User::SetIndexedAttribute1(const string& _indexedAttribute1)
{
    m_indexedAttribute1 = _indexedAttribute1;
    m_indexedAttribute1HasBeenSet = true;
}

bool User::IndexedAttribute1HasBeenSet() const
{
    return m_indexedAttribute1HasBeenSet;
}

string User::GetIndexedAttribute2() const
{
    return m_indexedAttribute2;
}

void User::SetIndexedAttribute2(const string& _indexedAttribute2)
{
    m_indexedAttribute2 = _indexedAttribute2;
    m_indexedAttribute2HasBeenSet = true;
}

bool User::IndexedAttribute2HasBeenSet() const
{
    return m_indexedAttribute2HasBeenSet;
}

string User::GetIndexedAttribute3() const
{
    return m_indexedAttribute3;
}

void User::SetIndexedAttribute3(const string& _indexedAttribute3)
{
    m_indexedAttribute3 = _indexedAttribute3;
    m_indexedAttribute3HasBeenSet = true;
}

bool User::IndexedAttribute3HasBeenSet() const
{
    return m_indexedAttribute3HasBeenSet;
}

string User::GetIndexedAttribute4() const
{
    return m_indexedAttribute4;
}

void User::SetIndexedAttribute4(const string& _indexedAttribute4)
{
    m_indexedAttribute4 = _indexedAttribute4;
    m_indexedAttribute4HasBeenSet = true;
}

bool User::IndexedAttribute4HasBeenSet() const
{
    return m_indexedAttribute4HasBeenSet;
}

string User::GetIndexedAttribute5() const
{
    return m_indexedAttribute5;
}

void User::SetIndexedAttribute5(const string& _indexedAttribute5)
{
    m_indexedAttribute5 = _indexedAttribute5;
    m_indexedAttribute5HasBeenSet = true;
}

bool User::IndexedAttribute5HasBeenSet() const
{
    return m_indexedAttribute5HasBeenSet;
}

