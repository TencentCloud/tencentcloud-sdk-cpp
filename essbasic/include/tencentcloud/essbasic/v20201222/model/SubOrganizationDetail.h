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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SUBORGANIZATIONDETAIL_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SUBORGANIZATIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Address.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 此结构体 (SubOrganizationDetail) 用于描述子机构或子企业的详情信息。
                */
                class SubOrganizationDetail : public AbstractModel
                {
                public:
                    SubOrganizationDetail();
                    ~SubOrganizationDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组织ID
                     * @return Id 组织ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置组织ID
                     * @param _id 组织ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取机构名称全称
                     * @return Name 机构名称全称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置机构名称全称
                     * @param _name 机构名称全称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取机构电子邮箱
                     * @return Email 机构电子邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置机构电子邮箱
                     * @param _email 机构电子邮箱
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取机构证件号码类型
                     * @return IdCardType 机构证件号码类型
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置机构证件号码类型
                     * @param _idCardType 机构证件号码类型
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取机构证件号码
                     * @return IdCardNumber 机构证件号码
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置机构证件号码
                     * @param _idCardNumber 机构证件号码
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取机构类型
                     * @return OrganizationType 机构类型
                     * 
                     */
                    std::string GetOrganizationType() const;

                    /**
                     * 设置机构类型
                     * @param _organizationType 机构类型
                     * 
                     */
                    void SetOrganizationType(const std::string& _organizationType);

                    /**
                     * 判断参数 OrganizationType 是否已赋值
                     * @return OrganizationType 是否已赋值
                     * 
                     */
                    bool OrganizationTypeHasBeenSet() const;

                    /**
                     * 获取机构证件文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdCardFileType 机构证件文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdCardFileType() const;

                    /**
                     * 设置机构证件文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idCardFileType 机构证件文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdCardFileType(const std::string& _idCardFileType);

                    /**
                     * 判断参数 IdCardFileType 是否已赋值
                     * @return IdCardFileType 是否已赋值
                     * 
                     */
                    bool IdCardFileTypeHasBeenSet() const;

                    /**
                     * 获取机构证件照片文件，base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizLicenseFile 机构证件照片文件，base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizLicenseFile() const;

                    /**
                     * 设置机构证件照片文件，base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizLicenseFile 机构证件照片文件，base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizLicenseFile(const std::string& _bizLicenseFile);

                    /**
                     * 判断参数 BizLicenseFile 是否已赋值
                     * @return BizLicenseFile 是否已赋值
                     * 
                     */
                    bool BizLicenseFileHasBeenSet() const;

                    /**
                     * 获取机构证件照片文件名
                     * @return BizLicenseFileName 机构证件照片文件名
                     * 
                     */
                    std::string GetBizLicenseFileName() const;

                    /**
                     * 设置机构证件照片文件名
                     * @param _bizLicenseFileName 机构证件照片文件名
                     * 
                     */
                    void SetBizLicenseFileName(const std::string& _bizLicenseFileName);

                    /**
                     * 判断参数 BizLicenseFileName 是否已赋值
                     * @return BizLicenseFileName 是否已赋值
                     * 
                     */
                    bool BizLicenseFileNameHasBeenSet() const;

                    /**
                     * 获取机构法人/经营者姓名
                     * @return LegalName 机构法人/经营者姓名
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置机构法人/经营者姓名
                     * @param _legalName 机构法人/经营者姓名
                     * 
                     */
                    void SetLegalName(const std::string& _legalName);

                    /**
                     * 判断参数 LegalName 是否已赋值
                     * @return LegalName 是否已赋值
                     * 
                     */
                    bool LegalNameHasBeenSet() const;

                    /**
                     * 获取机构法人/经营者证件类型
                     * @return LegalIdCardType 机构法人/经营者证件类型
                     * 
                     */
                    std::string GetLegalIdCardType() const;

                    /**
                     * 设置机构法人/经营者证件类型
                     * @param _legalIdCardType 机构法人/经营者证件类型
                     * 
                     */
                    void SetLegalIdCardType(const std::string& _legalIdCardType);

                    /**
                     * 判断参数 LegalIdCardType 是否已赋值
                     * @return LegalIdCardType 是否已赋值
                     * 
                     */
                    bool LegalIdCardTypeHasBeenSet() const;

                    /**
                     * 获取机构法人/经营者证件号码
                     * @return LegalIdCardNumber 机构法人/经营者证件号码
                     * 
                     */
                    std::string GetLegalIdCardNumber() const;

                    /**
                     * 设置机构法人/经营者证件号码
                     * @param _legalIdCardNumber 机构法人/经营者证件号码
                     * 
                     */
                    void SetLegalIdCardNumber(const std::string& _legalIdCardNumber);

                    /**
                     * 判断参数 LegalIdCardNumber 是否已赋值
                     * @return LegalIdCardNumber 是否已赋值
                     * 
                     */
                    bool LegalIdCardNumberHasBeenSet() const;

                    /**
                     * 获取机构法人/经营者/联系人手机号码
                     * @return LegalMobile 机构法人/经营者/联系人手机号码
                     * 
                     */
                    std::string GetLegalMobile() const;

                    /**
                     * 设置机构法人/经营者/联系人手机号码
                     * @param _legalMobile 机构法人/经营者/联系人手机号码
                     * 
                     */
                    void SetLegalMobile(const std::string& _legalMobile);

                    /**
                     * 判断参数 LegalMobile 是否已赋值
                     * @return LegalMobile 是否已赋值
                     * 
                     */
                    bool LegalMobileHasBeenSet() const;

                    /**
                     * 获取组织联系人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContactName 组织联系人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContactName() const;

                    /**
                     * 设置组织联系人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contactName 组织联系人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContactName(const std::string& _contactName);

                    /**
                     * 判断参数 ContactName 是否已赋值
                     * @return ContactName 是否已赋值
                     * 
                     */
                    bool ContactNameHasBeenSet() const;

                    /**
                     * 获取机构实名状态
                     * @return VerifyStatus 机构实名状态
                     * 
                     */
                    std::string GetVerifyStatus() const;

                    /**
                     * 设置机构实名状态
                     * @param _verifyStatus 机构实名状态
                     * 
                     */
                    void SetVerifyStatus(const std::string& _verifyStatus);

                    /**
                     * 判断参数 VerifyStatus 是否已赋值
                     * @return VerifyStatus 是否已赋值
                     * 
                     */
                    bool VerifyStatusHasBeenSet() const;

                    /**
                     * 获取机构通过实名时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifiedOn 机构通过实名时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVerifiedOn() const;

                    /**
                     * 设置机构通过实名时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifiedOn 机构通过实名时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVerifiedOn(const int64_t& _verifiedOn);

                    /**
                     * 判断参数 VerifiedOn 是否已赋值
                     * @return VerifiedOn 是否已赋值
                     * 
                     */
                    bool VerifiedOnHasBeenSet() const;

                    /**
                     * 获取机构创建时间
                     * @return CreatedOn 机构创建时间
                     * 
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置机构创建时间
                     * @param _createdOn 机构创建时间
                     * 
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取机构更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedOn 机构更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdatedOn() const;

                    /**
                     * 设置机构更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedOn 机构更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedOn(const int64_t& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取实名认证的客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyClientIp 实名认证的客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVerifyClientIp() const;

                    /**
                     * 设置实名认证的客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifyClientIp 实名认证的客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVerifyClientIp(const std::string& _verifyClientIp);

                    /**
                     * 判断参数 VerifyClientIp 是否已赋值
                     * @return VerifyClientIp 是否已赋值
                     * 
                     */
                    bool VerifyClientIpHasBeenSet() const;

                    /**
                     * 获取实名认证的服务器IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyServerIp 实名认证的服务器IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVerifyServerIp() const;

                    /**
                     * 设置实名认证的服务器IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifyServerIp 实名认证的服务器IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVerifyServerIp(const std::string& _verifyServerIp);

                    /**
                     * 判断参数 VerifyServerIp 是否已赋值
                     * @return VerifyServerIp 是否已赋值
                     * 
                     */
                    bool VerifyServerIpHasBeenSet() const;

                    /**
                     * 获取企业联系地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContactAddress 企业联系地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Address GetContactAddress() const;

                    /**
                     * 设置企业联系地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contactAddress 企业联系地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContactAddress(const Address& _contactAddress);

                    /**
                     * 判断参数 ContactAddress 是否已赋值
                     * @return ContactAddress 是否已赋值
                     * 
                     */
                    bool ContactAddressHasBeenSet() const;

                private:

                    /**
                     * 组织ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 机构名称全称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 机构电子邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 机构证件号码类型
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 机构证件号码
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 机构类型
                     */
                    std::string m_organizationType;
                    bool m_organizationTypeHasBeenSet;

                    /**
                     * 机构证件文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idCardFileType;
                    bool m_idCardFileTypeHasBeenSet;

                    /**
                     * 机构证件照片文件，base64编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizLicenseFile;
                    bool m_bizLicenseFileHasBeenSet;

                    /**
                     * 机构证件照片文件名
                     */
                    std::string m_bizLicenseFileName;
                    bool m_bizLicenseFileNameHasBeenSet;

                    /**
                     * 机构法人/经营者姓名
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * 机构法人/经营者证件类型
                     */
                    std::string m_legalIdCardType;
                    bool m_legalIdCardTypeHasBeenSet;

                    /**
                     * 机构法人/经营者证件号码
                     */
                    std::string m_legalIdCardNumber;
                    bool m_legalIdCardNumberHasBeenSet;

                    /**
                     * 机构法人/经营者/联系人手机号码
                     */
                    std::string m_legalMobile;
                    bool m_legalMobileHasBeenSet;

                    /**
                     * 组织联系人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contactName;
                    bool m_contactNameHasBeenSet;

                    /**
                     * 机构实名状态
                     */
                    std::string m_verifyStatus;
                    bool m_verifyStatusHasBeenSet;

                    /**
                     * 机构通过实名时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_verifiedOn;
                    bool m_verifiedOnHasBeenSet;

                    /**
                     * 机构创建时间
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 机构更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 实名认证的客户端IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_verifyClientIp;
                    bool m_verifyClientIpHasBeenSet;

                    /**
                     * 实名认证的服务器IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_verifyServerIp;
                    bool m_verifyServerIpHasBeenSet;

                    /**
                     * 企业联系地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Address m_contactAddress;
                    bool m_contactAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SUBORGANIZATIONDETAIL_H_
