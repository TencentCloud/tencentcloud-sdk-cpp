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

#include <tencentcloud/ciam/v20220331/model/ImportUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

ImportUser::ImportUser() :
    m_userNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_residentIdentityCardHasBeenSet(false),
    m_nicknameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_userGroupHasBeenSet(false),
    m_qqOpenIdHasBeenSet(false),
    m_qqUnionIdHasBeenSet(false),
    m_wechatOpenIdHasBeenSet(false),
    m_wechatUnionIdHasBeenSet(false),
    m_alipayUserIdHasBeenSet(false),
    m_weComUserIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_birthdateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_localeHasBeenSet(false),
    m_genderHasBeenSet(false),
    m_identityVerificationMethodHasBeenSet(false),
    m_identityVerifiedHasBeenSet(false),
    m_jobHasBeenSet(false),
    m_nationalityHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_customizationAttributesHasBeenSet(false),
    m_saltHasBeenSet(false),
    m_passwordEncryptTypeEnumHasBeenSet(false),
    m_indexedAttribute1HasBeenSet(false),
    m_indexedAttribute2HasBeenSet(false),
    m_indexedAttribute3HasBeenSet(false),
    m_indexedAttribute4HasBeenSet(false),
    m_indexedAttribute5HasBeenSet(false)
{
}

CoreInternalOutcome ImportUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("ResidentIdentityCard") && !value["ResidentIdentityCard"].IsNull())
    {
        if (!value["ResidentIdentityCard"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.ResidentIdentityCard` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_residentIdentityCard = string(value["ResidentIdentityCard"].GetString());
        m_residentIdentityCardHasBeenSet = true;
    }

    if (value.HasMember("Nickname") && !value["Nickname"].IsNull())
    {
        if (!value["Nickname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.Nickname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nickname = string(value["Nickname"].GetString());
        m_nicknameHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("UserGroup") && !value["UserGroup"].IsNull())
    {
        if (!value["UserGroup"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImportUser.UserGroup` is not array type"));

        const rapidjson::Value &tmpValue = value["UserGroup"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userGroup.push_back((*itr).GetString());
        }
        m_userGroupHasBeenSet = true;
    }

    if (value.HasMember("QqOpenId") && !value["QqOpenId"].IsNull())
    {
        if (!value["QqOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.QqOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qqOpenId = string(value["QqOpenId"].GetString());
        m_qqOpenIdHasBeenSet = true;
    }

    if (value.HasMember("QqUnionId") && !value["QqUnionId"].IsNull())
    {
        if (!value["QqUnionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.QqUnionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qqUnionId = string(value["QqUnionId"].GetString());
        m_qqUnionIdHasBeenSet = true;
    }

    if (value.HasMember("WechatOpenId") && !value["WechatOpenId"].IsNull())
    {
        if (!value["WechatOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.WechatOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatOpenId = string(value["WechatOpenId"].GetString());
        m_wechatOpenIdHasBeenSet = true;
    }

    if (value.HasMember("WechatUnionId") && !value["WechatUnionId"].IsNull())
    {
        if (!value["WechatUnionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.WechatUnionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wechatUnionId = string(value["WechatUnionId"].GetString());
        m_wechatUnionIdHasBeenSet = true;
    }

    if (value.HasMember("AlipayUserId") && !value["AlipayUserId"].IsNull())
    {
        if (!value["AlipayUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.AlipayUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alipayUserId = string(value["AlipayUserId"].GetString());
        m_alipayUserIdHasBeenSet = true;
    }

    if (value.HasMember("WeComUserId") && !value["WeComUserId"].IsNull())
    {
        if (!value["WeComUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.WeComUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_weComUserId = string(value["WeComUserId"].GetString());
        m_weComUserIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Birthdate") && !value["Birthdate"].IsNull())
    {
        if (!value["Birthdate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.Birthdate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_birthdate = string(value["Birthdate"].GetString());
        m_birthdateHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Locale") && !value["Locale"].IsNull())
    {
        if (!value["Locale"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.Locale` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locale = string(value["Locale"].GetString());
        m_localeHasBeenSet = true;
    }

    if (value.HasMember("Gender") && !value["Gender"].IsNull())
    {
        if (!value["Gender"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.Gender` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gender = string(value["Gender"].GetString());
        m_genderHasBeenSet = true;
    }

    if (value.HasMember("IdentityVerificationMethod") && !value["IdentityVerificationMethod"].IsNull())
    {
        if (!value["IdentityVerificationMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.IdentityVerificationMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityVerificationMethod = string(value["IdentityVerificationMethod"].GetString());
        m_identityVerificationMethodHasBeenSet = true;
    }

    if (value.HasMember("IdentityVerified") && !value["IdentityVerified"].IsNull())
    {
        if (!value["IdentityVerified"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.IdentityVerified` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_identityVerified = value["IdentityVerified"].GetBool();
        m_identityVerifiedHasBeenSet = true;
    }

    if (value.HasMember("Job") && !value["Job"].IsNull())
    {
        if (!value["Job"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.Job` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_job = string(value["Job"].GetString());
        m_jobHasBeenSet = true;
    }

    if (value.HasMember("Nationality") && !value["Nationality"].IsNull())
    {
        if (!value["Nationality"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.Nationality` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nationality = string(value["Nationality"].GetString());
        m_nationalityHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("CustomizationAttributes") && !value["CustomizationAttributes"].IsNull())
    {
        if (!value["CustomizationAttributes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImportUser.CustomizationAttributes` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomizationAttributes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MemberMap item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customizationAttributes.push_back(item);
        }
        m_customizationAttributesHasBeenSet = true;
    }

    if (value.HasMember("Salt") && !value["Salt"].IsNull())
    {
        if (!value["Salt"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.Salt` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_salt.Deserialize(value["Salt"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_saltHasBeenSet = true;
    }

    if (value.HasMember("PasswordEncryptTypeEnum") && !value["PasswordEncryptTypeEnum"].IsNull())
    {
        if (!value["PasswordEncryptTypeEnum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.PasswordEncryptTypeEnum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passwordEncryptTypeEnum = string(value["PasswordEncryptTypeEnum"].GetString());
        m_passwordEncryptTypeEnumHasBeenSet = true;
    }

    if (value.HasMember("IndexedAttribute1") && !value["IndexedAttribute1"].IsNull())
    {
        if (!value["IndexedAttribute1"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.IndexedAttribute1` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexedAttribute1 = string(value["IndexedAttribute1"].GetString());
        m_indexedAttribute1HasBeenSet = true;
    }

    if (value.HasMember("IndexedAttribute2") && !value["IndexedAttribute2"].IsNull())
    {
        if (!value["IndexedAttribute2"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.IndexedAttribute2` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexedAttribute2 = string(value["IndexedAttribute2"].GetString());
        m_indexedAttribute2HasBeenSet = true;
    }

    if (value.HasMember("IndexedAttribute3") && !value["IndexedAttribute3"].IsNull())
    {
        if (!value["IndexedAttribute3"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.IndexedAttribute3` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexedAttribute3 = string(value["IndexedAttribute3"].GetString());
        m_indexedAttribute3HasBeenSet = true;
    }

    if (value.HasMember("IndexedAttribute4") && !value["IndexedAttribute4"].IsNull())
    {
        if (!value["IndexedAttribute4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.IndexedAttribute4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexedAttribute4 = string(value["IndexedAttribute4"].GetString());
        m_indexedAttribute4HasBeenSet = true;
    }

    if (value.HasMember("IndexedAttribute5") && !value["IndexedAttribute5"].IsNull())
    {
        if (!value["IndexedAttribute5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImportUser.IndexedAttribute5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexedAttribute5 = string(value["IndexedAttribute5"].GetString());
        m_indexedAttribute5HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImportUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_residentIdentityCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResidentIdentityCard";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_residentIdentityCard.c_str(), allocator).Move(), allocator);
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

    if (m_userGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userGroup.begin(); itr != m_userGroup.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_birthdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Birthdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_birthdate.c_str(), allocator).Move(), allocator);
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

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_customizationAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomizationAttributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customizationAttributes.begin(); itr != m_customizationAttributes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_saltHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Salt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_salt.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_passwordEncryptTypeEnumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PasswordEncryptTypeEnum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passwordEncryptTypeEnum.c_str(), allocator).Move(), allocator);
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


string ImportUser::GetUserName() const
{
    return m_userName;
}

void ImportUser::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ImportUser::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ImportUser::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void ImportUser::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool ImportUser::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

string ImportUser::GetEmail() const
{
    return m_email;
}

void ImportUser::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool ImportUser::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string ImportUser::GetResidentIdentityCard() const
{
    return m_residentIdentityCard;
}

void ImportUser::SetResidentIdentityCard(const string& _residentIdentityCard)
{
    m_residentIdentityCard = _residentIdentityCard;
    m_residentIdentityCardHasBeenSet = true;
}

bool ImportUser::ResidentIdentityCardHasBeenSet() const
{
    return m_residentIdentityCardHasBeenSet;
}

string ImportUser::GetNickname() const
{
    return m_nickname;
}

void ImportUser::SetNickname(const string& _nickname)
{
    m_nickname = _nickname;
    m_nicknameHasBeenSet = true;
}

bool ImportUser::NicknameHasBeenSet() const
{
    return m_nicknameHasBeenSet;
}

string ImportUser::GetAddress() const
{
    return m_address;
}

void ImportUser::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ImportUser::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

vector<string> ImportUser::GetUserGroup() const
{
    return m_userGroup;
}

void ImportUser::SetUserGroup(const vector<string>& _userGroup)
{
    m_userGroup = _userGroup;
    m_userGroupHasBeenSet = true;
}

bool ImportUser::UserGroupHasBeenSet() const
{
    return m_userGroupHasBeenSet;
}

string ImportUser::GetQqOpenId() const
{
    return m_qqOpenId;
}

void ImportUser::SetQqOpenId(const string& _qqOpenId)
{
    m_qqOpenId = _qqOpenId;
    m_qqOpenIdHasBeenSet = true;
}

bool ImportUser::QqOpenIdHasBeenSet() const
{
    return m_qqOpenIdHasBeenSet;
}

string ImportUser::GetQqUnionId() const
{
    return m_qqUnionId;
}

void ImportUser::SetQqUnionId(const string& _qqUnionId)
{
    m_qqUnionId = _qqUnionId;
    m_qqUnionIdHasBeenSet = true;
}

bool ImportUser::QqUnionIdHasBeenSet() const
{
    return m_qqUnionIdHasBeenSet;
}

string ImportUser::GetWechatOpenId() const
{
    return m_wechatOpenId;
}

void ImportUser::SetWechatOpenId(const string& _wechatOpenId)
{
    m_wechatOpenId = _wechatOpenId;
    m_wechatOpenIdHasBeenSet = true;
}

bool ImportUser::WechatOpenIdHasBeenSet() const
{
    return m_wechatOpenIdHasBeenSet;
}

string ImportUser::GetWechatUnionId() const
{
    return m_wechatUnionId;
}

void ImportUser::SetWechatUnionId(const string& _wechatUnionId)
{
    m_wechatUnionId = _wechatUnionId;
    m_wechatUnionIdHasBeenSet = true;
}

bool ImportUser::WechatUnionIdHasBeenSet() const
{
    return m_wechatUnionIdHasBeenSet;
}

string ImportUser::GetAlipayUserId() const
{
    return m_alipayUserId;
}

void ImportUser::SetAlipayUserId(const string& _alipayUserId)
{
    m_alipayUserId = _alipayUserId;
    m_alipayUserIdHasBeenSet = true;
}

bool ImportUser::AlipayUserIdHasBeenSet() const
{
    return m_alipayUserIdHasBeenSet;
}

string ImportUser::GetWeComUserId() const
{
    return m_weComUserId;
}

void ImportUser::SetWeComUserId(const string& _weComUserId)
{
    m_weComUserId = _weComUserId;
    m_weComUserIdHasBeenSet = true;
}

bool ImportUser::WeComUserIdHasBeenSet() const
{
    return m_weComUserIdHasBeenSet;
}

string ImportUser::GetDescription() const
{
    return m_description;
}

void ImportUser::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ImportUser::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ImportUser::GetBirthdate() const
{
    return m_birthdate;
}

void ImportUser::SetBirthdate(const string& _birthdate)
{
    m_birthdate = _birthdate;
    m_birthdateHasBeenSet = true;
}

bool ImportUser::BirthdateHasBeenSet() const
{
    return m_birthdateHasBeenSet;
}

string ImportUser::GetName() const
{
    return m_name;
}

void ImportUser::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ImportUser::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ImportUser::GetLocale() const
{
    return m_locale;
}

void ImportUser::SetLocale(const string& _locale)
{
    m_locale = _locale;
    m_localeHasBeenSet = true;
}

bool ImportUser::LocaleHasBeenSet() const
{
    return m_localeHasBeenSet;
}

string ImportUser::GetGender() const
{
    return m_gender;
}

void ImportUser::SetGender(const string& _gender)
{
    m_gender = _gender;
    m_genderHasBeenSet = true;
}

bool ImportUser::GenderHasBeenSet() const
{
    return m_genderHasBeenSet;
}

string ImportUser::GetIdentityVerificationMethod() const
{
    return m_identityVerificationMethod;
}

void ImportUser::SetIdentityVerificationMethod(const string& _identityVerificationMethod)
{
    m_identityVerificationMethod = _identityVerificationMethod;
    m_identityVerificationMethodHasBeenSet = true;
}

bool ImportUser::IdentityVerificationMethodHasBeenSet() const
{
    return m_identityVerificationMethodHasBeenSet;
}

bool ImportUser::GetIdentityVerified() const
{
    return m_identityVerified;
}

void ImportUser::SetIdentityVerified(const bool& _identityVerified)
{
    m_identityVerified = _identityVerified;
    m_identityVerifiedHasBeenSet = true;
}

bool ImportUser::IdentityVerifiedHasBeenSet() const
{
    return m_identityVerifiedHasBeenSet;
}

string ImportUser::GetJob() const
{
    return m_job;
}

void ImportUser::SetJob(const string& _job)
{
    m_job = _job;
    m_jobHasBeenSet = true;
}

bool ImportUser::JobHasBeenSet() const
{
    return m_jobHasBeenSet;
}

string ImportUser::GetNationality() const
{
    return m_nationality;
}

void ImportUser::SetNationality(const string& _nationality)
{
    m_nationality = _nationality;
    m_nationalityHasBeenSet = true;
}

bool ImportUser::NationalityHasBeenSet() const
{
    return m_nationalityHasBeenSet;
}

string ImportUser::GetZone() const
{
    return m_zone;
}

void ImportUser::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ImportUser::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ImportUser::GetPassword() const
{
    return m_password;
}

void ImportUser::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ImportUser::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<MemberMap> ImportUser::GetCustomizationAttributes() const
{
    return m_customizationAttributes;
}

void ImportUser::SetCustomizationAttributes(const vector<MemberMap>& _customizationAttributes)
{
    m_customizationAttributes = _customizationAttributes;
    m_customizationAttributesHasBeenSet = true;
}

bool ImportUser::CustomizationAttributesHasBeenSet() const
{
    return m_customizationAttributesHasBeenSet;
}

Salt ImportUser::GetSalt() const
{
    return m_salt;
}

void ImportUser::SetSalt(const Salt& _salt)
{
    m_salt = _salt;
    m_saltHasBeenSet = true;
}

bool ImportUser::SaltHasBeenSet() const
{
    return m_saltHasBeenSet;
}

string ImportUser::GetPasswordEncryptTypeEnum() const
{
    return m_passwordEncryptTypeEnum;
}

void ImportUser::SetPasswordEncryptTypeEnum(const string& _passwordEncryptTypeEnum)
{
    m_passwordEncryptTypeEnum = _passwordEncryptTypeEnum;
    m_passwordEncryptTypeEnumHasBeenSet = true;
}

bool ImportUser::PasswordEncryptTypeEnumHasBeenSet() const
{
    return m_passwordEncryptTypeEnumHasBeenSet;
}

string ImportUser::GetIndexedAttribute1() const
{
    return m_indexedAttribute1;
}

void ImportUser::SetIndexedAttribute1(const string& _indexedAttribute1)
{
    m_indexedAttribute1 = _indexedAttribute1;
    m_indexedAttribute1HasBeenSet = true;
}

bool ImportUser::IndexedAttribute1HasBeenSet() const
{
    return m_indexedAttribute1HasBeenSet;
}

string ImportUser::GetIndexedAttribute2() const
{
    return m_indexedAttribute2;
}

void ImportUser::SetIndexedAttribute2(const string& _indexedAttribute2)
{
    m_indexedAttribute2 = _indexedAttribute2;
    m_indexedAttribute2HasBeenSet = true;
}

bool ImportUser::IndexedAttribute2HasBeenSet() const
{
    return m_indexedAttribute2HasBeenSet;
}

string ImportUser::GetIndexedAttribute3() const
{
    return m_indexedAttribute3;
}

void ImportUser::SetIndexedAttribute3(const string& _indexedAttribute3)
{
    m_indexedAttribute3 = _indexedAttribute3;
    m_indexedAttribute3HasBeenSet = true;
}

bool ImportUser::IndexedAttribute3HasBeenSet() const
{
    return m_indexedAttribute3HasBeenSet;
}

string ImportUser::GetIndexedAttribute4() const
{
    return m_indexedAttribute4;
}

void ImportUser::SetIndexedAttribute4(const string& _indexedAttribute4)
{
    m_indexedAttribute4 = _indexedAttribute4;
    m_indexedAttribute4HasBeenSet = true;
}

bool ImportUser::IndexedAttribute4HasBeenSet() const
{
    return m_indexedAttribute4HasBeenSet;
}

string ImportUser::GetIndexedAttribute5() const
{
    return m_indexedAttribute5;
}

void ImportUser::SetIndexedAttribute5(const string& _indexedAttribute5)
{
    m_indexedAttribute5 = _indexedAttribute5;
    m_indexedAttribute5HasBeenSet = true;
}

bool ImportUser::IndexedAttribute5HasBeenSet() const
{
    return m_indexedAttribute5HasBeenSet;
}

